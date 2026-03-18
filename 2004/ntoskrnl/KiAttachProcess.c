/*
 * XREFs of KiAttachProcess @ 0x140205710
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KeAttachProcess @ 0x140351100 (KeAttachProcess.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x140205DA0 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x140328540 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F5930 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // r10
  unsigned __int64 v9; // r13
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v14; // ebp
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _KPRCB *v17; // rcx
  __int64 v18; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 v24; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v27; // rcx
  _QWORD *v28; // rcx
  __int64 *v29; // rax
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rcx
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  bool v40; // zf
  int v41; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  v6 = (_QWORD *)(a1 + 152);
  v9 = a3;
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a1 + 184);
  *(_BYTE *)(v5 + 40) = *(_BYTE *)(a1 + 192);
  *(_BYTE *)(v5 + 41) = *(_BYTE *)(a1 + 193);
  *(_BYTE *)(v5 + 42) = *(_BYTE *)(a1 + 194);
  v11 = *(_QWORD **)(a1 + 152);
  if ( v11 == v6 )
  {
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    *(_BYTE *)(v5 + 41) = 0;
  }
  else
  {
    v29 = (__int64 *)v6[1];
    *(_QWORD *)v5 = v11;
    *(_QWORD *)(v5 + 8) = v29;
    v11[1] = v5;
    *v29 = v5;
  }
  v12 = (_QWORD *)v6[2];
  v13 = (_QWORD *)(v5 + 16);
  if ( v12 == v6 + 2 )
  {
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *v13 = v13;
    *(_BYTE *)(v5 + 42) = 0;
  }
  else
  {
    v28 = (_QWORD *)v6[3];
    *v13 = v12;
    *(_QWORD *)(v5 + 24) = v28;
    v12[1] = v13;
    *v28 = v13;
  }
  v6[1] = v6;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *v6 = v6;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 840), 8u) & 7) != 0 )
  {
    KiReleaseThreadLockSafe(a1);
    KiInSwapSingleProcess(a1, a2, (unsigned __int8)v9);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v24 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v24;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v41 = 0;
    v27 = CurrentPrcb->SchedulerAssist;
    if ( v27 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v27[6];
        v27[6] = v31 + 1;
        if ( v31 == -1 )
LABEL_33:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v32 = CurrentPrcb->SchedulerAssist;
      if ( v32 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v33 = v32[6] - 1;
          v32[6] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v41, v24);
      while ( *(_QWORD *)(a1 + 64) );
      v34 = CurrentPrcb->SchedulerAssist;
      if ( v34 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v35 = v34[6];
          v34[6] = v35 + 1;
          if ( v35 == -1 )
            goto LABEL_33;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  v14 = a4 & 2;
  if ( !v14 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v36 = v16[6] - 1;
        v16[6] = v36;
        if ( !v36 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  v17 = KeGetCurrentPrcb();
  v18 = *(_QWORD *)(v5 + 32);
  GroupIndex = v17->GroupIndex;
  v20 = 8LL * v17->Group + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v20 + a2), GroupIndex);
  v21 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v22 = *(_QWORD *)(a2 + 40);
    if ( (v21 & 2) != 0 )
      v22 = v21 | 0x8000000000000000uLL;
    __writegsqword(0x9000u, v22);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 912));
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    result = HvlSwitchVirtualAddressSpace(v21);
  else
    __writecr3(v21);
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v37 = __readcr4();
    if ( (v37 & 0x20080) != 0 )
    {
      result = v37 ^ 0x80;
      __writecr4(v37 ^ 0x80);
      __writecr4(v37);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v20 + v18), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  if ( !v14 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v39 = v38->SchedulerAssist;
          v40 = ((unsigned int)result & v39[5]) == 0;
          v39[5] &= result;
          if ( v40 )
            result = KiRemoveSystemWorkPriorityKick(v38);
        }
      }
    }
    __writecr8(v9);
  }
  return result;
}

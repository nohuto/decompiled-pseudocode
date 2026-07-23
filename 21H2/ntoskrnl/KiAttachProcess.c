/*
 * XREFs of KiAttachProcess @ 0x1402ABC40
 * Callers:
 *     KeAttachProcess @ 0x140241420 (KeAttachProcess.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x140213470 (KiInSwapSingleProcess.c)
 *     KiSetAddressPolicy @ 0x1402AC2D0 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FACE0 (HvlSwitchVirtualAddressSpace.c)
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
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 *v28; // rax
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // rcx
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  bool v39; // zf
  int v40; // [rsp+68h] [rbp+20h] BYREF

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
    v28 = (__int64 *)v6[1];
    *(_QWORD *)v5 = v11;
    *(_QWORD *)(v5 + 8) = v28;
    v11[1] = v5;
    *v28 = v5;
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
    v27 = (_QWORD *)v6[3];
    *v13 = v12;
    *(_QWORD *)(v5 + 24) = v27;
    v12[1] = v13;
    *v27 = v13;
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
    KiInSwapSingleProcess((_KTHREAD *)a1, a2, v9);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v40 = 0;
    v26 = CurrentPrcb->SchedulerAssist;
    if ( v26 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v26[6];
        v26[6] = v30 + 1;
        if ( v30 == -1 )
LABEL_33:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v31 = CurrentPrcb->SchedulerAssist;
      if ( v31 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = v31[6] - 1;
          v31[6] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v40);
      while ( *(_QWORD *)(a1 + 64) );
      v33 = CurrentPrcb->SchedulerAssist;
      if ( v33 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v34 = v33[6];
          v33[6] = v34 + 1;
          if ( v34 == -1 )
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
        v35 = v16[6] - 1;
        v16[6] = v35;
        if ( !v35 )
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
    v36 = __readcr4();
    if ( (v36 & 0x20080) != 0 )
    {
      result = v36 ^ 0x80;
      __writecr4(v36 ^ 0x80);
      __writecr4(v36);
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
          v37 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v38 = v37->SchedulerAssist;
          v39 = ((unsigned int)result & v38[5]) == 0;
          v38[5] &= result;
          if ( v39 )
            result = KiRemoveSystemWorkPriorityKick(v37);
        }
      }
    }
    __writecr8(v9);
  }
  return result;
}

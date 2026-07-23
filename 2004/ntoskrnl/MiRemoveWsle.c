/*
 * XREFs of MiRemoveWsle @ 0x1402440F0
 * Callers:
 *     MiTerminateWsle @ 0x140234900 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiVolunteerForTrimFirst @ 0x140245C40 (MiVolunteerForTrimFirst.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x14052B194 (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  char v6; // al
  volatile signed __int64 *v11; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v14; // cl
  char v15; // cl
  unsigned __int8 v16; // di
  int v17; // r12d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rcx
  __int64 result; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 v28; // r14
  int v29; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int64 *v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int128 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+48h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v43; // [rsp+98h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a1 + 184) & 7;
  v38 = 0LL;
  if ( v6 == 2 )
    v11 = (volatile signed __int64 *)&unk_140C4F5C0;
  else
    v11 = (volatile signed __int64 *)(a1 + 256);
  v37 = v11;
  v36 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = SchedulerAssist[6];
      SchedulerAssist[6] = v29 + 1;
      if ( v29 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v36, v11);
  }
  else if ( _InterlockedExchange64(v11, (__int64)&v36) )
  {
    KxWaitForLockOwnerShip(&v36);
  }
  if ( a6 )
  {
    *(_QWORD *)(a1 + 144) -= a3;
    v39 = 0LL;
    v40 = 0LL;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) -= a3;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (a2 < PsNtosImageEnd && a2 >= (unsigned __int64)PsNtosImageBase
       || a2 < PsHalImageEnd && a2 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(xmmword_140C4CB48) = xmmword_140C4CB48 - a3;
    }
    else if ( (unsigned int)MiGetSystemRegionType(a2) == 12
           && MiLookupDataTableEntry((__int64)((((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16, 2LL) )
    {
      DWORD1(xmmword_140C4CB48) -= a3;
    }
  }
  v14 = *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 136) -= a3;
  v15 = v14 & 7;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    *(_QWORD *)(a1 + 120) -= a3;
    v16 = a4 & 0xF;
    v17 = 1;
    if ( v16 == 8 )
      goto LABEL_20;
  }
  else
  {
    v17 = 0;
    if ( v15 )
      goto LABEL_20;
    v16 = a4 & 0xF;
  }
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v19 = *(_QWORD *)v18;
    if ( v18 >= 0xFFFFF6FB7DBED000uLL
      && v18 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v31 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
        v32 = v19 | 0x20;
        if ( (v31 & 0x20) == 0 )
          v32 = v19;
        v19 = v32;
        if ( (v31 & 0x42) != 0 )
          v19 = v32 | 0x42;
      }
    }
    v43 = v19;
    if ( MiPteInShadowRange((unsigned __int64)&v43)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v33 )
      {
        v34 = *((_QWORD *)&v33->Flink + (((unsigned __int64)&v43 >> 3) & 0x1FF));
        v35 = v19 | 0x20;
        if ( (v34 & 0x20) == 0 )
          v35 = v19;
        v19 = v35;
        if ( (v34 & 0x42) != 0 )
          v19 = v35 | 0x42;
      }
    }
    v20 = (unsigned __int64 *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v21 = *v20;
    v22 = (*v20 >> 14) & 7;
    if ( ((*v20 >> 4) & 0x3FF) != 0 )
    {
      if ( v16 == v22 )
      {
        v23 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(16 * (((*v20 >> 4) & 0x3FF) - a3))) & 0x3FF0;
LABEL_17:
        *v20 = v23;
        goto LABEL_18;
      }
      if ( v16 > v22 )
      {
        v23 = v21 & 0xFFFFFFFFFFFE000FuLL | (16 * (-(__int16)a3 & 0x3FF | ((unsigned __int64)(v16 & 7) << 10)));
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 8LL * v16 + 40) -= a3;
  if ( v16 == 7 )
    MiVolunteerForTrimFirst(a1, -a3);
LABEL_20:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140C4F608 -= a3;
    if ( v17 == 1 )
      qword_140C4F610 -= a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v36, retaddr);
    goto LABEL_24;
  }
  _m_prefetchw(&v36);
  result = v36;
  if ( v36 )
    goto LABEL_60;
  result = _InterlockedCompareExchange64(v37, 0LL, (signed __int64)&v36);
  if ( (__int64 *)result != &v36 )
  {
    result = KxWaitForLockChainValid(&v36);
LABEL_60:
    v36 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_24:
  v25 = KeGetCurrentPrcb();
  v26 = v25->SchedulerAssist;
  if ( v26 )
  {
    if ( v25->NestingLevel <= 1u )
    {
      result = (unsigned int)(v26[6] - 1);
      v26[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  if ( v17 == 1 )
  {
    if ( a5 == 9
      || a5 == 10
      && (result = 0xFFFFF68000000000uLL, (*(_BYTE *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      if ( a3 )
      {
        v27 = a2;
        v28 = a3;
        do
        {
          result = MiWriteValidPteVolatile(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
          v27 += 4096LL;
          --v28;
        }
        while ( v28 );
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && a3 )
  {
    do
    {
      result = MiLogRemoveWsleEvent(a2, *(_BYTE *)(a1 + 184) & 7);
      a2 += 4096LL;
      --a3;
    }
    while ( a3 );
  }
  return result;
}

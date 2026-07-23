/*
 * XREFs of MiRemoveWsle @ 0x14029D120
 * Callers:
 *     MiTerminateWsle @ 0x14028D950 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiVolunteerForTrimFirst @ 0x14029EC70 (MiVolunteerForTrimFirst.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x14052AB44 (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  char v6; // al
  volatile signed __int64 *v11; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v14; // rdx
  unsigned __int64 *v15; // rdx
  char v16; // cl
  char v17; // cl
  unsigned __int8 v18; // di
  int v19; // r12d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r8
  unsigned __int8 v23; // al
  unsigned __int64 v24; // rcx
  __int64 result; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int8 v28; // di
  unsigned __int64 v29; // rsi
  __int64 v30; // r14
  int v31; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  struct _LIST_ENTRY *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int64 *v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  __int128 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+48h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v45; // [rsp+98h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a1 + 184) & 7;
  v40 = 0LL;
  if ( v6 == 2 )
    v11 = (volatile signed __int64 *)&unk_140C4F700;
  else
    v11 = (volatile signed __int64 *)(a1 + 256);
  v39 = v11;
  v38 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v31 = SchedulerAssist[6];
      SchedulerAssist[6] = v31 + 1;
      if ( v31 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v38, v11);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64(v11, (__int64)&v38);
    if ( v14 )
      KxWaitForLockOwnerShip((__int64)&v38, v14);
  }
  LOBYTE(v15) = -1;
  if ( a6 )
  {
    *(_QWORD *)(a1 + 144) -= a3;
    v41 = 0LL;
    v42 = 0LL;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) -= a3;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (a2 < PsNtosImageEnd && a2 >= (unsigned __int64)PsNtosImageBase
       || a2 < PsHalImageEnd && a2 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(xmmword_140C4CC88) = xmmword_140C4CC88 - a3;
    }
    else
    {
      if ( (unsigned int)MiGetSystemRegionType(a2) == 12
        && MiLookupDataTableEntry((__int64)((((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16, 2LL) )
      {
        DWORD1(xmmword_140C4CC88) -= a3;
      }
      LOBYTE(v15) = -1;
    }
  }
  v16 = *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 136) -= a3;
  v17 = v16 & 7;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    *(_QWORD *)(a1 + 120) -= a3;
    v18 = a4 & 0xF;
    v19 = 1;
    if ( v18 == 8 )
      goto LABEL_20;
  }
  else
  {
    v19 = 0;
    if ( v17 )
      goto LABEL_20;
    v18 = a4 & 0xF;
  }
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v20 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v21 = *(_QWORD *)v20;
    if ( v20 >= 0xFFFFF6FB7DBED000uLL
      && v20 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v33 = *((_QWORD *)&Flink->Flink + ((v20 >> 3) & 0x1FF));
        v34 = v21 | 0x20;
        if ( (v33 & 0x20) == 0 )
          v34 = v21;
        v21 = v34;
        if ( (v33 & 0x42) != 0 )
          v21 = v34 | 0x42;
      }
    }
    v45 = v21;
    if ( MiPteInShadowRange((unsigned __int64)&v45)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v35 )
      {
        v36 = *((_QWORD *)&v35->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF));
        v37 = v21 | 0x20;
        if ( (v36 & 0x20) == 0 )
          v37 = v21;
        v21 = v37;
        if ( (v36 & 0x42) != 0 )
          v21 = v37 | 0x42;
      }
    }
    v15 = (unsigned __int64 *)(48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v22 = *v15;
    v23 = (*v15 >> 14) & 7;
    if ( ((*v15 >> 4) & 0x3FF) != 0 )
    {
      if ( v18 == v23 )
      {
        v24 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16 * (((*v15 >> 4) & 0x3FF) - a3))) & 0x3FF0;
LABEL_17:
        *v15 = v24;
        goto LABEL_18;
      }
      if ( v18 > v23 )
      {
        v24 = v22 & 0xFFFFFFFFFFFE000FuLL | (16 * (-(__int16)a3 & 0x3FF | ((unsigned __int64)(v18 & 7) << 10)));
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 8LL * v18 + 40) -= a3;
  if ( v18 == 7 )
    MiVolunteerForTrimFirst(a1, -a3);
LABEL_20:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140C4F748 -= a3;
    if ( v19 == 1 )
      qword_140C4F750 -= a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v38, retaddr);
    goto LABEL_24;
  }
  _m_prefetchw(&v38);
  result = v38;
  if ( v38 )
    goto LABEL_60;
  result = _InterlockedCompareExchange64(v39, 0LL, (signed __int64)&v38);
  if ( (__int64 *)result != &v38 )
  {
    result = KxWaitForLockChainValid(&v38, (_BYTE)v15);
LABEL_60:
    v38 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_24:
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      result = (unsigned int)(v27[6] - 1);
      v27[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  if ( v19 == 1 )
  {
    if ( a5 == 9
      || a5 == 10
      && (result = 0xFFFFF68000000000uLL, (*(_BYTE *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      v28 = a5 & 0xF;
      if ( a3 )
      {
        v29 = a2;
        v30 = a3;
        do
        {
          result = MiWriteValidPteVolatile(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL, v28);
          v29 += 4096LL;
          --v30;
        }
        while ( v30 );
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

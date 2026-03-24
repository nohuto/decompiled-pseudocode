/*
 * XREFs of MiRemoveWsle @ 0x140338FE0
 * Callers:
 *     MiTerminateWsle @ 0x140336DB0 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     MiWriteValidPteVolatile @ 0x140241370 (MiWriteValidPteVolatile.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiVolunteerForTrimFirst @ 0x140337230 (MiVolunteerForTrimFirst.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x140530664 (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char v6; // al
  char v7; // di
  __int64 v8; // r15
  volatile signed __int64 *v11; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v14; // rdx
  __int64 *v15; // rdx
  char v16; // cl
  char v17; // cl
  unsigned __int8 v18; // di
  int v19; // r12d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rcx
  __int64 result; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int8 v27; // di
  unsigned __int64 v28; // rsi
  __int64 v29; // r14
  int v30; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v32; // rax
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int64 *v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int128 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v43; // [rsp+98h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a1 + 184) & 7;
  v38 = 0LL;
  v7 = a4;
  v8 = a3;
  if ( v6 == 2 )
    v11 = (volatile signed __int64 *)&unk_140C4F7C0;
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
      v30 = SchedulerAssist[6];
      SchedulerAssist[6] = v30 + 1;
      if ( v30 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v36, v11);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64(v11, (__int64)&v36);
    if ( v14 )
      KxWaitForLockOwnerShip((__int64)&v36, v14);
  }
  v15 = (__int64 *)0xFFFFF6FFFFFFFFFFLL;
  if ( a6 )
  {
    *(_QWORD *)(a1 + 144) -= v8;
    v39 = 0LL;
    v40 = 0LL;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) -= v8;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase && (a2 < PsNtosImageEnd && a2 >= PsNtosImageBase || a2 < PsHalImageEnd && a2 >= PsHalImageBase) )
    {
      LODWORD(xmmword_140C4CD48) = xmmword_140C4CD48 - v8;
    }
    else
    {
      if ( (unsigned int)MiGetSystemRegionType(a2) == 12
        && MiLookupDataTableEntry((__int64)((((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16, 2LL, a3, a4) )
      {
        DWORD1(xmmword_140C4CD48) -= v8;
      }
      v15 = (__int64 *)0xFFFFF6FFFFFFFFFFLL;
    }
  }
  v16 = *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 136) -= v8;
  v17 = v16 & 7;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    *(_QWORD *)(a1 + 120) -= v8;
    v18 = v7 & 0xF;
    v19 = 1;
    if ( v18 == 8 )
      goto LABEL_20;
  }
  else
  {
    v19 = 0;
    if ( v17 )
      goto LABEL_20;
    v18 = v7 & 0xF;
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
        v32 = *((_QWORD *)&Flink->Flink + ((v20 >> 3) & 0x1FF));
        v20 = v21 | 0x20;
        if ( (v32 & 0x20) == 0 )
          v20 = v21;
        v21 = v20;
        if ( (v32 & 0x42) != 0 )
          v21 = v20 | 0x42;
      }
    }
    v43 = v21;
    if ( (unsigned int)MiPteInShadowRange(&v43, v20)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v33 )
      {
        v34 = *((_QWORD *)&v33->Flink + (((unsigned __int64)&v43 >> 3) & 0x1FF));
        v35 = v21 | 0x20;
        if ( (v34 & 0x20) == 0 )
          v35 = v21;
        v21 = v35;
        if ( (v34 & 0x42) != 0 )
          v21 = v35 | 0x42;
      }
    }
    v15 = (__int64 *)(48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    a3 = *v15;
    v22 = ((unsigned __int64)*v15 >> 14) & 7;
    if ( (((unsigned __int64)*v15 >> 4) & 0x3FF) != 0 )
    {
      if ( v18 == v22 )
      {
        v23 = a3 ^ ((unsigned __int16)a3 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v15 >> 4) & 0x3FF) - v8))) & 0x3FF0;
LABEL_17:
        *v15 = v23;
        goto LABEL_18;
      }
      if ( v18 > v22 )
      {
        a3 &= 0xFFFFFFFFFFFE000FuLL;
        v23 = a3 | (16 * (-(__int16)v8 & 0x3FF | ((unsigned __int64)(v18 & 7) << 10)));
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 8LL * v18 + 40) -= v8;
  if ( v18 == 7 )
    MiVolunteerForTrimFirst(a1, -v8);
LABEL_20:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140C4F808 -= v8;
    if ( v19 == 1 )
      qword_140C4F810 -= v8;
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
    result = KxWaitForLockChainValid(&v36, (__int64)v15, a3, a4);
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
  if ( v19 == 1 )
  {
    if ( a5 == 9
      || a5 == 10
      && (result = 0xFFFFF68000000000uLL, (*(_BYTE *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      v27 = a5 & 0xF;
      if ( v8 )
      {
        v28 = a2;
        v29 = v8;
        do
        {
          result = MiWriteValidPteVolatile(
                     (volatile signed __int64 *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                     0x80000000,
                     v27);
          v28 += 4096LL;
          --v29;
        }
        while ( v29 );
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && v8 )
  {
    do
    {
      result = MiLogRemoveWsleEvent(a2, *(_BYTE *)(a1 + 184) & 7);
      a2 += 4096LL;
      --v8;
    }
    while ( v8 );
  }
  return result;
}

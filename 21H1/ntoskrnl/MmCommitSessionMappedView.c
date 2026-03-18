/*
 * XREFs of MmCommitSessionMappedView @ 0x1406D2620
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiLocatePagefileSubsection @ 0x1402A3BAC (MiLocatePagefileSubsection.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x140640FF0 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 PteAddress; // r14
  __int64 v11; // r14
  _QWORD *i; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // rdx
  unsigned __int64 v18; // r8
  __int64 *v19; // r10
  unsigned __int64 v20; // rcx
  int v21; // eax
  volatile signed __int64 *v22; // rdi
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  volatile signed __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // ebx
  volatile signed __int64 *v33; // rdi
  unsigned __int64 v34; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)MiGetSystemRegionType(a1) != 1 )
    return 3221225711LL;
  v4 = a1 + a2;
  if ( a1 + a2 <= a1 )
    return 3221225712LL;
  v5 = v4 - 1;
  if ( (unsigned int)MiGetSystemRegionType(v4 - 1) != 1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225497LL;
  v8 = Process[1].AffinityPadding[5];
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  PteAddress = MiGetPteAddress(v5 | 0xFFF);
  v11 = ((PteAddress - MiGetPteAddress(v9)) >> 3) + 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(v8 + 200), 0LL);
  for ( i = *(_QWORD **)(v8 + 208); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, v9, 2uLL, 0LL, 0LL);
      v13 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v9 < v13 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( v9 >= v13 )
      break;
  }
  v14 = i[6];
  if ( *(_QWORD *)(*(_QWORD *)v14 + 64LL) )
  {
    v28 = *(volatile signed __int64 **)(v8 + 200);
    if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v28);
    KeAbPostRelease((ULONG_PTR)v28);
    v32 = -1073741791;
    goto LABEL_29;
  }
  v15 = (unsigned int *)(*(_QWORD *)v14 + 128LL);
  v34 = i[3] + ((v9 - (i[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection(v15, &v34);
  if ( !v16 )
  {
LABEL_26:
    v33 = *(volatile signed __int64 **)(v8 + 200);
    if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v33);
    KeAbPostRelease((ULONG_PTR)v33);
    v32 = -1073741584;
LABEL_29:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v29, v30, v31);
    return v32;
  }
  v17 = v16;
  v18 = v16[11];
  v19 = (__int64 *)(*((_QWORD *)v16 + 1) + 8 * v34);
  v20 = v11 + v34;
  v34 = v20;
  if ( v20 > v18 )
  {
    do
    {
      v17 = (unsigned int *)*((_QWORD *)v17 + 2);
      v20 -= (unsigned int)v18;
      v34 = v20;
      if ( !v17 )
        goto LABEL_26;
      LODWORD(v18) = v17[11];
    }
    while ( v20 > (unsigned int)v18 );
  }
  v21 = MiChargeSegmentCommit((__int64 *)v16, v19, v11);
  v22 = *(volatile signed __int64 **)(v8 + 200);
  v23 = v21;
  if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v22);
  KeAbPostRelease((ULONG_PTR)v22);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v24, v25, v26);
  return v23 == 0 ? 0xC000012D : 0;
}

/*
 * XREFs of MmCommitSessionMappedView @ 0x140602E80
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiLocatePagefileSubsection @ 0x140321A4C (MiLocatePagefileSubsection.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x140689B40 (MiChargeSegmentCommit.c)
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
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  int v21; // eax
  volatile signed __int64 *v22; // rdi
  int v23; // r14d
  volatile signed __int64 *v25; // rdi
  unsigned int v26; // ebx
  volatile signed __int64 *v27; // rdi
  unsigned __int64 v28; // [rsp+60h] [rbp+18h] BYREF

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
    v25 = *(volatile signed __int64 **)(v8 + 200);
    if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v25);
    KeAbPostRelease((ULONG_PTR)v25);
    v26 = -1073741791;
    goto LABEL_29;
  }
  v15 = (unsigned int *)(*(_QWORD *)v14 + 128LL);
  v28 = i[3] + ((v9 - (i[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection(v15, &v28);
  if ( !v16 )
  {
LABEL_26:
    v27 = *(volatile signed __int64 **)(v8 + 200);
    if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27);
    KeAbPostRelease((ULONG_PTR)v27);
    v26 = -1073741584;
LABEL_29:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v26;
  }
  v17 = v16;
  v18 = v16[11];
  v19 = *((_QWORD *)v16 + 1) + 8 * v28;
  v20 = v11 + v28;
  v28 = v20;
  if ( v20 > v18 )
  {
    do
    {
      v17 = (unsigned int *)*((_QWORD *)v17 + 2);
      v20 -= (unsigned int)v18;
      v28 = v20;
      if ( !v17 )
        goto LABEL_26;
      LODWORD(v18) = v17[11];
    }
    while ( v20 > (unsigned int)v18 );
  }
  v21 = MiChargeSegmentCommit(v16, v19, v11);
  v22 = *(volatile signed __int64 **)(v8 + 200);
  v23 = v21;
  if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v22);
  KeAbPostRelease((ULONG_PTR)v22);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v23 == 0 ? 0xC000012D : 0;
}

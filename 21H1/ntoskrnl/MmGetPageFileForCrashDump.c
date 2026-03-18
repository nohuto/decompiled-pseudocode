/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1408CC094
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BBE10 (IoConfigureCrashDump.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  unsigned __int64 v2; // rbp
  char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51090, 0LL);
  if ( Count )
  {
    v3 = (char *)&unk_140C527A0;
    v4 = Count;
    do
    {
      v5 = *(_QWORD *)v3;
      if ( (*(_WORD *)(*(_QWORD *)v3 + 204LL) & 0x850) == 0 && *(_QWORD *)(v5 + 16) > v2 )
      {
        v1 = *(_QWORD *)(v5 + 224);
        v2 = *(_QWORD *)(v5 + 16);
      }
      v3 += 8;
      --v4;
    }
    while ( v4 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51090, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C51090);
  KeAbPostRelease((ULONG_PTR)&qword_140C51090);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
  return v1;
}

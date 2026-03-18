/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1408D3224
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BF5B0 (IoConfigureCrashDump.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  unsigned __int64 v2; // rbp
  char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51010, 0LL);
  if ( Count )
  {
    v3 = (char *)&unk_140C52720;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51010, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C51010);
  KeAbPostRelease((ULONG_PTR)&qword_140C51010);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}

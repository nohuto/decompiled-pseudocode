/*
 * XREFs of PopFanUpdateRunningState @ 0x140999574
 * Callers:
 *     PopFanWorker @ 0x140999A80 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1409990E8 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateRunningState(char a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
    v2 = PopFanTracking + 1;
  else
    v2 = PopFanTracking - 1;
  PopFanTracking = v2;
  if ( v2 )
  {
    if ( !byte_140C22304 )
    {
      byte_140C22304 = 1;
      qword_140C22310 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C22304 )
  {
    if ( byte_140C22305 )
      PopFanEndCsFanPeriod();
    qword_140C22310 = 0LL;
    byte_140C22304 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

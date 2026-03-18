/*
 * XREFs of PopFanUpdateRunningState @ 0x1407AB3C8
 * Callers:
 *     PopFanWorker @ 0x1407AACD0 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408ECFC0 (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140C22F84 )
    {
      byte_140C22F84 = 1;
      qword_140C22F88 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C22F84 )
  {
    if ( byte_140C22F85 )
      PopFanEndCsFanPeriod();
    qword_140C22F88 = 0LL;
    byte_140C22F84 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

/*
 * XREFs of PopFanUpdateRunningState @ 0x1407BC468
 * Callers:
 *     PopFanWorker @ 0x1407BBD70 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408F3EC0 (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140C22E84 )
    {
      byte_140C22E84 = 1;
      qword_140C22E88 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C22E84 )
  {
    if ( byte_140C22E85 )
      PopFanEndCsFanPeriod();
    qword_140C22E88 = 0LL;
    byte_140C22E84 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

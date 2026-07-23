/*
 * XREFs of PopFanUpdateRunningState @ 0x1407C0D88
 * Callers:
 *     PopFanWorker @ 0x1407C0690 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408F1820 (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140C235E4 )
    {
      byte_140C235E4 = 1;
      qword_140C235E8 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C235E4 )
  {
    if ( byte_140C235E5 )
      PopFanEndCsFanPeriod();
    qword_140C235E8 = 0LL;
    byte_140C235E4 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

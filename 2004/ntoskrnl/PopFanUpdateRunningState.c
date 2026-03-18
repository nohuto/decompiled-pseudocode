/*
 * XREFs of PopFanUpdateRunningState @ 0x1407AE528
 * Callers:
 *     PopFanWorker @ 0x1407ADE30 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408EE2B0 (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140C23C04 )
    {
      byte_140C23C04 = 1;
      qword_140C23C08 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C23C04 )
  {
    if ( byte_140C23C05 )
      PopFanEndCsFanPeriod();
    qword_140C23C08 = 0LL;
    byte_140C23C04 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

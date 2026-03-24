/*
 * XREFs of PopFanUpdateCsState @ 0x1408F1770
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140781A70 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408F16C0 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C22F85 )
    {
      if ( byte_140C22F84 )
        PopFanEndCsFanPeriod();
      qword_140C22F90 = 0LL;
      byte_140C22F85 = 0;
    }
  }
  else if ( !byte_140C22F85 )
  {
    byte_140C22F85 = 1;
    qword_140C22F90 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

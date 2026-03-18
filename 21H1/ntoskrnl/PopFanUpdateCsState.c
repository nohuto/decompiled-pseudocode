/*
 * XREFs of PopFanUpdateCsState @ 0x1408ED070
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14076D060 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408ECFC0 (PopFanEndCsFanPeriod.c)
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

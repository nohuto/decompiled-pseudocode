/*
 * XREFs of PopFanUpdateCsState @ 0x1409994F8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14080D110 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1409990E8 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C22305 )
    {
      if ( byte_140C22304 )
        PopFanEndCsFanPeriod();
      qword_140C22318 = 0LL;
      byte_140C22305 = 0;
    }
  }
  else if ( !byte_140C22305 )
  {
    byte_140C22305 = 1;
    qword_140C22318 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

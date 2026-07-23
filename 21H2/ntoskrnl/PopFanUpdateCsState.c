/*
 * XREFs of PopFanUpdateCsState @ 0x1408F18D0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140781C30 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408F1820 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C235E5 )
    {
      if ( byte_140C235E4 )
        PopFanEndCsFanPeriod();
      qword_140C235F0 = 0LL;
      byte_140C235E5 = 0;
    }
  }
  else if ( !byte_140C235E5 )
  {
    byte_140C235E5 = 1;
    qword_140C235F0 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

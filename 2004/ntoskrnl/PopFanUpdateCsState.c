/*
 * XREFs of PopFanUpdateCsState @ 0x1408EE360
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14076C0D0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408EE2B0 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C23C05 )
    {
      if ( byte_140C23C04 )
        PopFanEndCsFanPeriod();
      qword_140C23C10 = 0LL;
      byte_140C23C05 = 0;
    }
  }
  else if ( !byte_140C23C05 )
  {
    byte_140C23C05 = 1;
    qword_140C23C10 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

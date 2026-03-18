/*
 * XREFs of PopFanUpdateCsState @ 0x1408F3F70
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14077DC90 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408F3EC0 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C22E85 )
    {
      if ( byte_140C22E84 )
        PopFanEndCsFanPeriod();
      qword_140C22E90 = 0LL;
      byte_140C22E85 = 0;
    }
  }
  else if ( !byte_140C22E85 )
  {
    byte_140C22E85 = 1;
    qword_140C22E90 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}

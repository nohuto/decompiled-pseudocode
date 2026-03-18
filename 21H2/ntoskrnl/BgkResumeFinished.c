/*
 * XREFs of BgkResumeFinished @ 0x140A4E360
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140AAB038 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AAB6EC (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140C547D8 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140C547D8 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140C547E0 = 0;
  return result;
}

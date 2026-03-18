/*
 * XREFs of BgkResumeFinished @ 0x140995FFC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x1409EE1E0 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409EE3F0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140C50448 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140C50448 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140C50450 = 0;
  return result;
}

/*
 * XREFs of BgkResumeFinished @ 0x14098CCEC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x1409EE038 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409EE3F0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140C50578 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140C50578 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140C50580 = 0;
  return result;
}

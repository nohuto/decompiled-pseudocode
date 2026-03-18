/*
 * XREFs of BgkResumeFinished @ 0x14099913C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x140773150 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x1409F4038 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F43F0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140C504C8 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140C504C8 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140C504D0 = 0;
  return result;
}

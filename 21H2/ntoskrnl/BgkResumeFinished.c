/*
 * XREFs of BgkResumeFinished @ 0x14099608C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BC90 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x1409F2038 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F23F0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140C50688 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140C50688 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140C50690 = 0;
  return result;
}

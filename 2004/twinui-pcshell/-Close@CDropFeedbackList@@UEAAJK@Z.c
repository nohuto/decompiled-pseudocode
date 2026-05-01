/*
 * XREFs of ?Close@CDropFeedbackList@@UEAAJK@Z @ 0x180421B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z @ 0x180422460 (-_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z.c)
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18042AF58 (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 */

__int64 __fastcall CDropFeedbackList::Close(CDropFeedbackList *this, unsigned int a2)
{
  int Instance; // ebx
  struct IDropFeedbackItem *v6; // [rsp+50h] [rbp-28h] BYREF
  __int128 v7; // [rsp+58h] [rbp-20h]

  v6 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Instance = CDropFeedbackItem_CreateInstance(a2, 1LL, 0LL);
  if ( Instance >= 0 )
    Instance = CDropFeedbackList::_AddUpdate(this, v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Instance;
}

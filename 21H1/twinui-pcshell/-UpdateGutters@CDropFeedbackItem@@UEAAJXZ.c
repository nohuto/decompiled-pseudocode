/*
 * XREFs of ?UpdateGutters@CDropFeedbackItem@@UEAAJXZ @ 0x1804082C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?_GetAnimationType@CDropFeedbackItem@@AEAA?AW4DCompThumbnailAnimation@@XZ @ 0x18040834C (-_GetAnimationType@CDropFeedbackItem@@AEAA-AW4DCompThumbnailAnimation@@XZ.c)
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x180408A8C (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::UpdateGutters(CDropFeedbackItem *this)
{
  HWND v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int AnimationType; // eax
  __int64 v6; // r8
  __int16 v7; // r9
  struct tagPOINT Points[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 17) != 2 )
  {
    v2 = (HWND)*((_QWORD *)this + 24);
    *(_OWORD *)&Points[0].x = *(_OWORD *)((char *)this + 76);
    MapWindowPoints(0LL, v2, Points, 2u);
    AnimationType = CDropFeedbackItem::_GetAnimationType(this, v3, v4, *((unsigned int *)this + 18));
    v6 = 0LL;
    if ( (v7 & 0x200) == 0 )
      v6 = AnimationType;
    CDropFeedbackItem::_UpdateAutoGutters(this, Points, v6);
  }
  return 0LL;
}

/*
 * XREFs of ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18047AA34
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18036D418 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18047A5EC (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18047A6F8 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::ShiftRectIntoContainer(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        const struct tagRECT *a4)
{
  struct tagRECT v4; // xmm0
  LONG left; // edx
  LONG top; // rcx^4
  int v9; // edx
  LONG right; // edx
  int v11; // r8d
  LONG v12; // r8d
  struct tagRECT v13; // xmm0
  __int64 v14; // rcx
  int v15; // r8d
  LONG bottom; // r8d
  int v17; // edx
  struct tagRECT rc; // [rsp+20h] [rbp-10h] BYREF

  v4 = *a3;
  left = retstr->left;
  *this = *a3;
  if ( this->left >= left )
  {
    right = retstr->right;
    if ( this->right <= right )
      goto LABEL_6;
    top = v4.top;
    v9 = this->left + right - this->right - v4.left;
  }
  else
  {
    top = v4.top;
    v9 = left - v4.left;
  }
  v11 = this->top - top;
  rc = v4;
  OffsetRect(&rc, v9, v11);
  *this = rc;
LABEL_6:
  v12 = retstr->top;
  if ( this->top < v12 )
  {
    v13 = *this;
    v14 = *(_QWORD *)&this->left;
    v15 = v12 - HIDWORD(*(_QWORD *)&this->left);
LABEL_10:
    v17 = this->left - v14;
    rc = v13;
    OffsetRect(&rc, v17, v15);
    *this = rc;
    return this;
  }
  bottom = retstr->bottom;
  if ( this->bottom > bottom )
  {
    v13 = *this;
    v14 = *(_QWORD *)&this->left;
    v15 = this->top + bottom - HIDWORD(*(_QWORD *)&this->left) - this->bottom;
    goto LABEL_10;
  }
  return this;
}

/*
 * XREFs of ?IsCloaked@MultitaskingViewAnimationCoordinatorBase@@IEAA_NPEAUHWND__@@@Z @ 0x1803906E8
 * Callers:
 *     ?ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@@Z @ 0x180390B20 (-ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemEleme.c)
 * Callees:
 *     <none>
 */

char __fastcall MultitaskingViewAnimationCoordinatorBase::IsCloaked(
        MultitaskingViewAnimationCoordinatorBase *this,
        HWND a2)
{
  char v2; // bl
  int v4; // [rsp+20h] [rbp-28h] BYREF
  int *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]

  v8 = HIDWORD(this);
  v4 = 18;
  v5 = &v7;
  v2 = 0;
  v6 = 4;
  v7 = 0;
  if ( (unsigned int)GetWindowCompositionAttribute(a2, &v4) )
    return v7 != 0;
  return v2;
}

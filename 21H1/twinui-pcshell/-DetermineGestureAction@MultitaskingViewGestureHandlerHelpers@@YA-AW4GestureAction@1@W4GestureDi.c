/*
 * XREFs of ?DetermineGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180362170
 * Callers:
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1803626BC (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewGestureHandlerHelpers::DetermineGestureAction(int a1, char a2, char a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (a3 & 1) != 0 )
  {
    return 6;
  }
  else if ( (unsigned int)(a1 - 1) > 1 )
  {
    if ( (unsigned int)(a1 - 3) <= 1 && (a3 & 2) == 0 )
      return 5;
  }
  else if ( a1 == 1 )
  {
    if ( (a3 & 2) == 0 )
      return a2 != 0 ? 4 : 1;
  }
  else if ( a1 == 2 )
  {
    if ( (a3 & 2) != 0 )
    {
      return 2;
    }
    else if ( !a2 )
    {
      return 3;
    }
  }
  return v3;
}

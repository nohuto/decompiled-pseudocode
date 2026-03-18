/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140785DE8
 * Callers:
 *     WdipSemCaptureState @ 0x14039F49C (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140785B90 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140785CE8 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x1407A9BE4 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x1407AAF8C (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1409331F8 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140785E40 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}

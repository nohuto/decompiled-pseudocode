/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1407753D8
 * Callers:
 *     WdipSemCaptureState @ 0x14039BBBC (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140775180 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x1407752D8 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x140784EDC (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x140786284 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x14092C118 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140775430 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}

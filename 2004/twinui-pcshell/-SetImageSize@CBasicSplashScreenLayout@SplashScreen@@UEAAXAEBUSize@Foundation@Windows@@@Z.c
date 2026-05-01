/*
 * XREFs of ?SetImageSize@CBasicSplashScreenLayout@SplashScreen@@UEAAXAEBUSize@Foundation@Windows@@@Z @ 0x18008C280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SplashScreen::CBasicSplashScreenLayout::SetImageSize(
        SplashScreen::CBasicSplashScreenLayout *this,
        const struct Windows::Foundation::Size *a2)
{
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
}

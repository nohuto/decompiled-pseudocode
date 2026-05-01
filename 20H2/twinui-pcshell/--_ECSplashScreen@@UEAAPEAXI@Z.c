/*
 * XREFs of ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x18018B540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSplashScreen@@UEAA@XZ @ 0x18018B408 (--1CSplashScreen@@UEAA@XZ.c)
 */

CSplashScreen *__fastcall CSplashScreen::`vector deleting destructor'(CSplashScreen *this, char a2)
{
  CSplashScreen::~CSplashScreen(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}

/*
 * XREFs of ??_GEyeControlApp@@UEAAPEAXI@Z @ 0x18036F160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EyeControlApp@@UEAA@XZ @ 0x18036EDC4 (--1EyeControlApp@@UEAA@XZ.c)
 */

EyeControlApp *__fastcall EyeControlApp::`scalar deleting destructor'(EyeControlApp *this, char a2)
{
  EyeControlApp::~EyeControlApp(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}

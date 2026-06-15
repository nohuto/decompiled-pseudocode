/*
 * XREFs of ??_GTelephonyController@@MEAAPEAXI@Z @ 0x180140D44
 * Callers:
 *     ??_ETelephonyController@@O7EAAPEAXI@Z @ 0x180075100 (--_ETelephonyController@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x180140CD4 (--1TelephonyController@@MEAA@XZ.c)
 */

TelephonyController *__fastcall TelephonyController::`scalar deleting destructor'(TelephonyController *this, char a2)
{
  TelephonyController::~TelephonyController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}

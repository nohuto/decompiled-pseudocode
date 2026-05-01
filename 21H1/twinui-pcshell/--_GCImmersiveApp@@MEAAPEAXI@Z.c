/*
 * XREFs of ??_GCImmersiveApp@@MEAAPEAXI@Z @ 0x180156400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x180155BA4 (--1CImmersiveApp@@MEAA@XZ.c)
 */

CImmersiveApp *__fastcall CImmersiveApp::`scalar deleting destructor'(CImmersiveApp *this, char a2)
{
  CImmersiveApp::~CImmersiveApp(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3A8);
  return this;
}

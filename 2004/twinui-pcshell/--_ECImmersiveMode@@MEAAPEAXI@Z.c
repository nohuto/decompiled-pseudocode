/*
 * XREFs of ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x1801602E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x18015FE8C (--1CImmersiveMode@@MEAA@XZ.c)
 */

CImmersiveMode *__fastcall CImmersiveMode::`vector deleting destructor'(CImmersiveMode *this, char a2)
{
  CImmersiveMode::~CImmersiveMode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D0);
  return this;
}

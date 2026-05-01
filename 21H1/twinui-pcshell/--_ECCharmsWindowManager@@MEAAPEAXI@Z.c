/*
 * XREFs of ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x180141640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCharmsWindowManager@@MEAA@XZ @ 0x1801414EC (--1CCharmsWindowManager@@MEAA@XZ.c)
 */

CCharmsWindowManager *__fastcall CCharmsWindowManager::`vector deleting destructor'(
        CCharmsWindowManager *this,
        char a2)
{
  CCharmsWindowManager::~CCharmsWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}

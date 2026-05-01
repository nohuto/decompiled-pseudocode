/*
 * XREFs of ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x180206A28
 * Callers:
 *     ??_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z @ 0x1800CF180 (--_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x180206838 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 */

PrivilegedOperationsService *__fastcall PrivilegedOperationsService::`scalar deleting destructor'(
        PrivilegedOperationsService *this,
        char a2)
{
  PrivilegedOperationsService::~PrivilegedOperationsService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}

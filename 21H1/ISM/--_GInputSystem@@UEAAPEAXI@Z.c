/*
 * XREFs of ??_GInputSystem@@UEAAPEAXI@Z @ 0x1800F04B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800F0324 (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

InputSystem *__fastcall InputSystem::`scalar deleting destructor'(
        InputSystem *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = a2;
  BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl((InputSystem *)((char *)this + 16), a2, a3, a4);
  if ( (v5 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}

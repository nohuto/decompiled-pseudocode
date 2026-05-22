/*
 * XREFs of ??_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z @ 0x180071600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1800714C0 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

MPCManagerBamo_AutoBamos::BamoConnection *__fastcall MPCManagerBamo_AutoBamos::BamoConnection::`vector deleting destructor'(
        MPCManagerBamo_AutoBamos::BamoConnection *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((MPCManagerBamo_AutoBamos::BamoConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}

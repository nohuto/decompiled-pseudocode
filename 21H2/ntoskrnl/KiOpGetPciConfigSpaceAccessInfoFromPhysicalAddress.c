/*
 * XREFs of KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress @ 0x14057B6FC
 * Callers:
 *     KiOpCheckUnhandledSecurePciAccessViolation @ 0x14057B504 (KiOpCheckUnhandledSecurePciAccessViolation.c)
 *     KiOpPciConfigSpaceAccessCommon @ 0x14057B8F4 (KiOpPciConfigSpaceAccessCommon.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress(
        __int16 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  if ( !off_140C020B0 || !off_140C020B0() )
    return 3221225473LL;
  *a6 = a1 & 0xFFF;
  return 0LL;
}

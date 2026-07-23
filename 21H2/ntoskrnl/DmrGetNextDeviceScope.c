/*
 * XREFs of DmrGetNextDeviceScope @ 0x1404E8814
 * Callers:
 *     IvtpGetNextInternalDeviceScope @ 0x1404E7E54 (IvtpGetNextInternalDeviceScope.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1404E866C (DmrGetNextDrhdDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x1404E89B0 (DmrEnumerateRmrrDomains.c)
 *     IvtCheckForReservedRegion @ 0x140867160 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DmrGetNextDeviceScope(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v6; // rdx

  v3 = 0LL;
  if ( a3 )
    a1 = a3 + *(unsigned __int8 *)(a3 + 1);
  if ( a1 > a3 && a1 + 2 >= a1 && a1 + 2 <= a2 )
  {
    v6 = a1 + *(unsigned __int8 *)(a1 + 1);
    if ( v6 > a1 && v6 <= a2 )
      return a1;
  }
  return v3;
}

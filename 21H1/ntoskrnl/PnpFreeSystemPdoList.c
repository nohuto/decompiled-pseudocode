/*
 * XREFs of PnpFreeSystemPdoList @ 0x1406E3800
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpFreePdoDeviceList @ 0x1406E3818 (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpFreeSystemPdoList(void *a1)
{
  return PiPnpFreePdoDeviceList(a1);
}

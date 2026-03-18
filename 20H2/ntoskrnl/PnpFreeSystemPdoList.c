/*
 * XREFs of PnpFreeSystemPdoList @ 0x140721350
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpFreePdoDeviceList @ 0x140721368 (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpFreeSystemPdoList(void *a1)
{
  return PiPnpFreePdoDeviceList(a1);
}

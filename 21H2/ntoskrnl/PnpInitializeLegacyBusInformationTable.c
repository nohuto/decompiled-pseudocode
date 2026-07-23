/*
 * XREFs of PnpInitializeLegacyBusInformationTable @ 0x140A51E9C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpInitializeLegacyBusInformationTable()
{
  __int64 *v0; // rax

  v0 = (__int64 *)&IopLegacyBusInformationTable;
  do
  {
    v0[1] = (__int64)v0;
    *v0 = (__int64)v0;
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&IopLegacyDeviceNode );
  return 0LL;
}

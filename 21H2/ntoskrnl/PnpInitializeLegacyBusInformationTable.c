/*
 * XREFs of PnpInitializeLegacyBusInformationTable @ 0x140A50E9C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpInitializeLegacyBusInformationTable()
{
  _QWORD *v0; // rax

  v0 = &IopLegacyBusInformationTable;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&PiDDBLock );
  return 0LL;
}

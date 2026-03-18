/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1C00D536C
 * Callers:
 *     VidSchiReportHwHang @ 0x1C003CE54 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0015BD0 (VidSchMarkDeviceAsError.c)
 */

void __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  if ( a1 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 232LL) )
  {
    *(_BYTE *)(a1 + 204) = 1;
    VidSchMarkDeviceAsError(a1);
  }
}

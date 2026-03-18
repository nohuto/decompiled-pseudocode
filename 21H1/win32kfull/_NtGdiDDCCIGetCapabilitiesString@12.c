/*
 * XREFs of _NtGdiDDCCIGetCapabilitiesString@12 @ 0x1D000F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __thiscall NtGdiDDCCIGetCapabilitiesString(CMonitorAPI *this, void *a2, char *a3, unsigned int a4)
{
  if ( a4 )
    return CMonitorAPI::DdcciGetCapabilitiesString(this, a2, a3, a4);
  else
    return -1073741811;
}

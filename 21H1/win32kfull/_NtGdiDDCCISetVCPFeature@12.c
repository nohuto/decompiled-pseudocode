/*
 * XREFs of _NtGdiDDCCISetVCPFeature@12 @ 0x1D01BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __thiscall NtGdiDDCCISetVCPFeature(CMonitorAPI *this, void *a2, char a3, unsigned int a4)
{
  return CMonitorAPI::DdcciSetVCPFeature(this, a2, a3, a4);
}

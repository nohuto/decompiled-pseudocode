/*
 * XREFs of _NtGdiDDCCISaveCurrentSettings@4 @ 0x1D01AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __thiscall NtGdiDDCCISaveCurrentSettings(CMonitorAPI *this, void *a2)
{
  return CMonitorAPI::DdcciSaveCurrentSettings(this, a2);
}

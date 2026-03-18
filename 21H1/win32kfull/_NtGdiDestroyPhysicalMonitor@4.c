/*
 * XREFs of _NtGdiDestroyPhysicalMonitor@4 @ 0x1D01CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __thiscall NtGdiDestroyPhysicalMonitor(CMonitorAPI *this, void *a2)
{
  return CMonitorAPI::DestroyPhysicalMonitor(this, a2);
}

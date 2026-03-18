/*
 * XREFs of _CreatePhysicalMonitorWrap@12 @ 0x1CFFF5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __thiscall CreatePhysicalMonitorWrap(CMonitorAPI *this, struct _LUID *a2, unsigned int a3, void **a4)
{
  return CMonitorAPI::CreatePhysicalMonitor(this, a2, a3, a4);
}

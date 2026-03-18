/*
 * XREFs of CreatePhysicalMonitorWrap @ 0x1C0272DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1C0271924 (-CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CreatePhysicalMonitorWrap(struct _LUID *a1, unsigned int a2, void **a3)
{
  return CMonitorAPI::CreatePhysicalMonitor((CMonitorAPI *)a1, a1, a2, a3);
}

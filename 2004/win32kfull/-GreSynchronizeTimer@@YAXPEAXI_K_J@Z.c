/*
 * XREFs of ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C029F400
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C0076004 (-vSynchronizeDriver@@YAXK@Z.c)
 */

void __fastcall GreSynchronizeTimer(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  vSynchronizeDriver(128, a2, a3, a4);
}

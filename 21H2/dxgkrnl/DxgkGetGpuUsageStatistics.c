/*
 * XREFs of DxgkGetGpuUsageStatistics @ 0x1C01E88D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 */

struct DXGGLOBAL *__fastcall DxgkGetGpuUsageStatistics(_QWORD *a1)
{
  struct DXGGLOBAL *result; // rax

  result = DXGGLOBAL_GetGlobal();
  *a1 = *((_QWORD *)result + 19);
  return result;
}

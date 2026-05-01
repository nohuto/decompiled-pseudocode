/*
 * XREFs of _anonymous_namespace_::GetRectForAllMonitors @ 0x1801E8AF8
 * Callers:
 *     ?SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801EB248 (-SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int *__fastcall anonymous_namespace_::GetRectForAllMonitors(int *a1)
{
  int SystemMetrics; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int *result; // rax

  SystemMetrics = GetSystemMetrics(76);
  v3 = GetSystemMetrics(77);
  v4 = GetSystemMetrics(78);
  v5 = GetSystemMetrics(79);
  *a1 = SystemMetrics;
  a1[3] = v3 + v5;
  result = a1;
  a1[1] = v3;
  a1[2] = v4 + SystemMetrics;
  return result;
}

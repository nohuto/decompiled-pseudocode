/*
 * XREFs of ?GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IEAA?AW4AppMemoryUsageLevel@System@Windows@@W4_RM_COMMIT_LEVEL@@@Z @ 0x180006EC4
 * Callers:
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x180006E08 (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceManagerProxy::GetAppMemoryUsageLevel(__int64 a1, int a2)
{
  int IsEnabled; // eax
  unsigned int v4; // ecx

  IsEnabled = QuirkIsEnabled(1114131LL);
  v4 = 3;
  if ( IsEnabled && a2 >= 4 )
    a2 = 3;
  if ( a2 <= 1 )
    return 0;
  if ( a2 == 2 )
    return 1;
  if ( a2 == 3 )
    return 2;
  if ( a2 != 4 )
    return 0;
  return v4;
}

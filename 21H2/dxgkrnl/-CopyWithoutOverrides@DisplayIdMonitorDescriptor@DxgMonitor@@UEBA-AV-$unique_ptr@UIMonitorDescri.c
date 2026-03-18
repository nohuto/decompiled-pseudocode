/*
 * XREFs of ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03BADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03BAD00 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 */

__int64 *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyWithoutOverrides(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(a1, a2, a3, a4);
  return a2;
}

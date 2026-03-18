/*
 * XREFs of ?GetDescriptorCount@EdidMonitorDescriptor@DxgMonitor@@UEBAIXZ @ 0x1C01EA830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDescriptorCount(DxgMonitor::EdidMonitorDescriptor *this)
{
  return *((unsigned int *)this + 2);
}

/*
 * XREFs of ?GetBasicDisplayParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C03BA790
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C0071588 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01D2180 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  struct _WmiMonitorBasicDisplayParams *v3; // rdx

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_ObtainMonitorBasicDisplayParams(EdidBaseBlockPtr, v3);
}

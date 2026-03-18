/*
 * XREFs of ?GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z @ 0x1C01D2160
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0018C4C (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01D2180 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetNumericManufacturerIds(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  unsigned __int16 *v4; // rdx
  unsigned __int16 *v5; // r8

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_FillProductIdManufacturerName(EdidBaseBlockPtr, v4, v5);
}

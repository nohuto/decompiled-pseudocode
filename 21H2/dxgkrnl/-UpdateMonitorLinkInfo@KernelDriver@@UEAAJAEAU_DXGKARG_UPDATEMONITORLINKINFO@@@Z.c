/*
 * XREFs of ?UpdateMonitorLinkInfo@KernelDriver@@UEAAJAEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C021A430
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C021A44C (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall KernelDriver::UpdateMonitorLinkInfo(
        ADAPTER_DISPLAY **this,
        struct _DXGKARG_UPDATEMONITORLINKINFO *a2)
{
  return ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(this[3], a2);
}

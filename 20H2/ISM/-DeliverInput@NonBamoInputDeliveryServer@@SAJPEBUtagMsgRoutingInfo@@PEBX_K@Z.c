/*
 * XREFs of ?DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18010323C
 * Callers:
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x1800419D0 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::DeliverInput(
        const struct tagMsgRoutingInfo *a1,
        const void *a2,
        __int64 a3)
{
  return (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, const struct tagMsgRoutingInfo *, const void *, __int64))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer + 24LL))(
           NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
           a1,
           a2,
           a3);
}

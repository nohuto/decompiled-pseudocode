/*
 * XREFs of CrmStateMonitorNetworkInterfaceCallback @ 0x18003C6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CrmStateMonitorNetworkInterfaceCallback(
        PVOID CallerContext,
        PMIB_UNICASTIPADDRESS_ROW Row,
        MIB_NOTIFICATION_TYPE NotificationType)
{
  CrmStateMonitorNetworkUpdateState(CallerContext, Row, NotificationType);
}

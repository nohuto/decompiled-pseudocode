/*
 * XREFs of Callback @ 0x18003C6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Callback(PVOID CallerContext, PMIB_UNICASTIPADDRESS_ROW Row, MIB_NOTIFICATION_TYPE NotificationType)
{
  sub_18003CE80(CallerContext, Row, NotificationType);
}

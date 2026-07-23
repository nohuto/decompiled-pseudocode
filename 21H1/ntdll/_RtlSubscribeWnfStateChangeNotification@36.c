/*
 * XREFs of _RtlSubscribeWnfStateChangeNotification@36 @ 0x4B2B0660
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 */

NTSTATUS __cdecl RtlSubscribeWnfStateChangeNotification(
        PVOID *SubscriptionHandle,
        WNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        PWNF_USER_CALLBACK Callback,
        PVOID CallbackContext,
        PCWNF_TYPE_ID TypeId,
        ULONG SerializationGroup,
        ULONG Flags)
{
  return RtlpSubscribeWnfStateChangeNotificationInternal(
           Callback,
           CallbackContext,
           TypeId,
           SerializationGroup,
           4,
           17,
           StateName.Data[0],
           StateName.Data[1]);
}

/*
 * XREFs of _RtlSubscribeWnfStateChangeNotification@36 @ 0x4B2B0660
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 */

int __stdcall RtlSubscribeWnfStateChangeNotification(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return RtlpSubscribeWnfStateChangeNotificationInternal(a5, a6, a7, a8, 4, 17, a2, a3);
}

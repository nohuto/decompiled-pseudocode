/*
 * XREFs of _RtlRegisterForWnfMetaNotification@24 @ 0x4B33BF80
 * Callers:
 *     _RtlWaitForWnfMetaNotification@24 @ 0x4B33C0B0 (_RtlWaitForWnfMetaNotification@24.c)
 * Callees:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 */

int __stdcall RtlRegisterForWnfMetaNotification(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  *a1 = 0;
  if ( !a4 || (a4 & 0x11) != 0 )
    return -1073741811;
  else
    return RtlpSubscribeWnfStateChangeNotificationInternal(a1, a5, a6, 0, 0, 1, a4, a2, a3);
}

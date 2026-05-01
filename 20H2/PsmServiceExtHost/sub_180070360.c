/*
 * XREFs of sub_180070360 @ 0x180070360
 * Callers:
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180070360(_QWORD *a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)a1[72];
  if ( v2 )
    result = PowerSettingUnregisterNotification(v2);
  v4 = (void *)a1[73];
  if ( v4 )
    result = PowerSettingUnregisterNotification(v4);
  if ( a1[75] )
    result = RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( a1[76] )
    result = RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( a1[77] )
    result = RtlUnsubscribeWnfNotificationWaitForCompletion();
  v5 = (void *)a1[79];
  if ( v5 )
    return NtClose(v5);
  return result;
}

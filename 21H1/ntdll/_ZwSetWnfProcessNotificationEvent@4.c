/*
 * XREFs of _ZwSetWnfProcessNotificationEvent@4 @ 0x4B2F44B0
 * Callers:
 *     _RtlpWnfRegisterTpNotification@0 @ 0x4B2AE96C (_RtlpWnfRegisterTpNotification@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetWnfProcessNotificationEvent(int a1)
{
  return Wow64SystemServiceCall();
}

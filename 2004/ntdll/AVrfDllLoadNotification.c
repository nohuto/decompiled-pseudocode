/*
 * XREFs of AVrfDllLoadNotification @ 0x1800848BC
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18003DBFC (LdrpSendPostSnapNotifications.c)
 *     LdrpCorProcessImports @ 0x180084854 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800DA710 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800DAC20 (AVrfpIsVerifierProviderDll.c)
 */

__int64 __fastcall AVrfDllLoadNotification(__int64 a1)
{
  int NotificationInternal; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rbx
  void (__fastcall *v7)(_QWORD, _QWORD, _QWORD, __int64); // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
    return 0LL;
  NotificationInternal = 0;
  RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
  if ( !(unsigned __int8)AVrfpIsVerifierProviderDll(*(_QWORD *)(a1 + 48)) )
  {
    NotificationInternal = AVrfpDllLoadNotificationInternal(a1);
    if ( NotificationInternal >= 0 )
    {
      v6 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v6 != &AVrfpVerifierProvidersList )
      {
        v7 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v6[6];
        v6 = (__int64 *)*v6;
        if ( v7 )
          v7(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock, v4, v5);
  return (unsigned int)NotificationInternal;
}

/*
 * XREFs of _AVrfDllLoadNotification@4 @ 0x4B2A6D66
 * Callers:
 *     _LdrpCorProcessImports@4 @ 0x4B2A6D1F (_LdrpCorProcessImports@4.c)
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _AVrfpDllLoadNotificationInternal@4 @ 0x4B338C3D (_AVrfpDllLoadNotificationInternal@4.c)
 *     _AVrfpIsVerifierProviderDll@4 @ 0x4B339064 (_AVrfpIsVerifierProviderDll@4.c)
 */

int __thiscall AVrfDllLoadNotification(_DWORD *this)
{
  int NotificationInternal; // ebx
  int *v4; // esi
  void (__thiscall *v5)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD *); // eax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
    return 0;
  NotificationInternal = 0;
  RtlEnterCriticalSection(&AVrfpVerifierLock);
  if ( !(unsigned __int8)AVrfpIsVerifierProviderDll(this[6]) )
  {
    NotificationInternal = AVrfpDllLoadNotificationInternal(this);
    if ( NotificationInternal >= 0 )
    {
      v4 = (int *)AVrfpVerifierProvidersList;
      while ( v4 != &AVrfpVerifierProvidersList )
      {
        v5 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD *))v4[6];
        v4 = (int *)*v4;
        if ( v5 )
          v5(v5, this[12], this[6], this[8], this);
      }
    }
  }
  RtlLeaveCriticalSection(&AVrfpVerifierLock);
  return NotificationInternal;
}

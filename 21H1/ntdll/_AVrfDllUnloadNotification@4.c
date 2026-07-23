/*
 * XREFs of _AVrfDllUnloadNotification@4 @ 0x4B33849A
 * Callers:
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _AVrfpDllUnloadNotificationInternal@4 @ 0x4B338CF6 (_AVrfpDllUnloadNotificationInternal@4.c)
 *     _AVrfpIsVerifierProviderDll@4 @ 0x4B339064 (_AVrfpIsVerifierProviderDll@4.c)
 */

struct _PEB *__thiscall AVrfDllUnloadNotification(_DWORD *this)
{
  struct _PEB *result; // eax
  int *v3; // edi
  void (__thiscall *v4)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD *); // ebx

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection(&AVrfpVerifierLock);
    if ( (unsigned __int8)AVrfpIsVerifierProviderDll(this[6]) )
    {
      DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", this);
      __debugbreak();
    }
    else if ( AVrfpDllUnloadNotificationInternal(this) >= 0 )
    {
      v3 = (int *)AVrfpVerifierProvidersList;
      while ( v3 != &AVrfpVerifierProvidersList )
      {
        v4 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD *))v3[7];
        v3 = (int *)*v3;
        if ( v4 )
          v4(v4, this[12], this[6], this[8], this);
      }
    }
    return (struct _PEB *)RtlLeaveCriticalSection(&AVrfpVerifierLock);
  }
  return result;
}

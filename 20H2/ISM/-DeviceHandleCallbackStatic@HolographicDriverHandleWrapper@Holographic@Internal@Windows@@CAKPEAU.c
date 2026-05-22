/*
 * XREFs of ?DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x18015B250
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18015B128 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallbackStatic(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2,
        int a3)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *DebugInfo; // rcx

  EnterCriticalSection(a2);
  DebugInfo = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a2[1].DebugInfo;
  if ( DebugInfo )
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallback(DebugInfo, a3);
  LeaveCriticalSection(a2);
  return 0LL;
}

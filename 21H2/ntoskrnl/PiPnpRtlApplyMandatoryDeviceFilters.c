/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x140629228
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x140621420 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140629164 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14068FB00 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     PiPnpRtlIsDeviceValidForSession @ 0x140629298 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x140629384 (PiPnpRtlIsDeviceEnumerableForUser.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(int a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, a4, (__int64)a5);
  if ( (int)result < 0 )
    goto LABEL_5;
  if ( *a5 )
    result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, a5);
  if ( (int)result < 0 )
LABEL_5:
    *a5 = 0;
  return result;
}

/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x14063C738
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14063BC00 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406410B8 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x1406E2550 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 * Callees:
 *     PiPnpRtlIsDeviceValidForSession @ 0x14063C64C (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14063C7A8 (PiPnpRtlIsDeviceEnumerableForUser.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(int a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, a4, a5);
  if ( (int)result < 0 )
    goto LABEL_5;
  if ( *a5 )
    result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, a5);
  if ( (int)result < 0 )
LABEL_5:
    *a5 = 0;
  return result;
}

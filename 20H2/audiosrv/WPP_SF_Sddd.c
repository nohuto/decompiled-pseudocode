/*
 * XREFs of WPP_SF_Sddd @ 0x1800E6FA0
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x18002F750 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sddd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_da26bc17848235f776ca6a2bf121edc6_Traceguids, 11LL, a4);
}

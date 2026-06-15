/*
 * XREFs of ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18011F2F0
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18002F060 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CEndpointCharacteristics::SharedAndExclusiveCanCoexist(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  bool v2; // bl
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    *(_OWORD *)pvar = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
           v1,
           &PKEY_Endpoint_AllowConcurrentSharedExclusive,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v2 = LODWORD(pvar[1]) != 0;
    }
    PropVariantClear(pvar);
  }
  return v2;
}

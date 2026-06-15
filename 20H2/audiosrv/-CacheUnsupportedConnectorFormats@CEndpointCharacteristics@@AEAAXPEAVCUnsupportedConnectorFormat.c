/*
 * XREFs of ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x18011A398
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800590A4 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x18011BC84 (-GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z.c)
 */

void __fastcall CEndpointCharacteristics::CacheUnsupportedConnectorFormats(
        CEndpointCharacteristics *this,
        struct CUnsupportedConnectorFormats *a2)
{
  int v2; // eax
  __int128 pvar; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 *v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-20h]

  v5 = 0LL;
  v2 = 200 * *(_DWORD *)a2;
  pvar = 0LL;
  v7 = v2 + 2;
  LOWORD(pvar) = 65;
  v6 = PKEY_AudioEngine_Connector_UnsupportedFormats;
  if ( (int)CUnsupportedConnectorFormats::GetBlob(a2, &v5, (unsigned int *)&pvar + 2) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
      *((_QWORD *)this + 5),
      &v6,
      &pvar);
    PropVariantClear((PROPVARIANT *)&pvar);
  }
}

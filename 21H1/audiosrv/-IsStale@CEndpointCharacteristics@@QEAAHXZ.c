/*
 * XREFs of ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x18011ECB4
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18000EED0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCha.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsStale(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  PROPVARIANT v4; // rbx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 5);
  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_MMDEVAPI_ActiveTime,
         pvar) >= 0
    && LOWORD(pvar[0]) == 21 )
  {
    v4 = pvar[1];
  }
  PropVariantClear(pvar);
  LOBYTE(v3) = *((_QWORD *)this + 24) != (_QWORD)v4;
  return v3;
}

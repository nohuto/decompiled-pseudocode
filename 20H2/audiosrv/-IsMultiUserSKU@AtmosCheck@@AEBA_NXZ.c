/*
 * XREFs of ?IsMultiUserSKU@AtmosCheck@@AEBA_NXZ @ 0x1800738C8
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1801355F8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x180009DB0 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 */

char __fastcall AtmosCheck::IsMultiUserSKU(AtmosCheck *this)
{
  char IsRunningOnXbox; // al
  __int64 v2; // r8
  char v3; // dl

  IsRunningOnXbox = AtmosCheck::IsRunningOnXbox(this);
  v3 = 0;
  if ( IsRunningOnXbox || *(_DWORD *)(v2 + 192) == 16 )
    return 1;
  return v3;
}

/*
 * XREFs of ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180135CE8
 * Callers:
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x1801366E0 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1801355F8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x1801360D4 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 */

void __fastcall AtmosCheck::IsLicenseValidForSubtype(
        AtmosCheck *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4)
{
  bool v5; // bl
  int LicenseStatusForEndpointId; // eax
  int v9; // ebp
  int v10; // eax
  bool v11; // zf
  bool v12; // al
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]

  v13 = 1LL;
  v5 = 0;
  v14 = 0;
  LicenseStatusForEndpointId = AtmosCheck::GetLicenseStatusForEndpointId(
                                 this,
                                 a2,
                                 a3,
                                 (struct __MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001 *)&v13);
  *((_DWORD *)a4 + 2) = LicenseStatusForEndpointId;
  v9 = LicenseStatusForEndpointId;
  if ( LicenseStatusForEndpointId >= 0
    || *((_BYTE *)this + 99)
    || (v10 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2), v10 != -1) && !*((_BYTE *)this + 32 * v10 + 272) )
  {
    *((_BYTE *)a4 + 1) = 1;
  }
  if ( v9 >= 0 )
  {
    v11 = (_DWORD)v13 == 0;
    *((_DWORD *)a4 + 1) = HIDWORD(v13) == 0 ? 0x80070490 : 0;
    v12 = !v11;
    v11 = v14 == 0;
    *(_BYTE *)a4 = v12;
    v5 = !v11;
    *((_QWORD *)a4 + 2) = v15;
  }
  else
  {
    *((_DWORD *)a4 + 1) = v9;
    *(_BYTE *)a4 = 1;
    *((_QWORD *)a4 + 2) = 0LL;
  }
  *((_BYTE *)a4 + 2) = v5;
}

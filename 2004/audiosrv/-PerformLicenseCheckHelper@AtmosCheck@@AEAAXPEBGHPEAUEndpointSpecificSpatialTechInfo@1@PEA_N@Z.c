/*
 * XREFs of ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x180137370
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180137090 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180137238 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18000B0F0 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18010A1B4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180136978 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 */

void __fastcall AtmosCheck::PerformLicenseCheckHelper(
        AtmosCheck *this,
        unsigned __int16 *a2,
        int a3,
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4,
        bool *a5)
{
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rdx
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v11; // rdi
  int v12; // ebx
  bool v13; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-60h] BYREF

  v7 = a3;
  if ( *((_BYTE *)this + 552) )
  {
    if ( (unsigned int)dword_18019D520 > 5 )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_18019D520,
        (unsigned __int8 *)dword_18016DCD1,
        0LL,
        0LL,
        2u,
        &v14);
  }
  else
  {
    v13 = 0;
    v9 = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(this, a2, a3, &v13);
    v10 = 32 * v7;
    v11 = (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)a4 + 24 * v7);
    v12 = v9;
    AtmosCheck::IsLicenseValidForSubtype(this, *(unsigned __int16 **)((char *)this + v10 + 280), a2, v11);
    if ( v12 != *((_DWORD *)v11 + 1) || v13 != *((_BYTE *)v11 + 1) )
      *a5 = 1;
  }
}

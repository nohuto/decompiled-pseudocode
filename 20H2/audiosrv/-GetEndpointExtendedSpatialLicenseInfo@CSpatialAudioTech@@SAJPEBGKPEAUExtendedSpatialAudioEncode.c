/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180126488
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x1800D6F90 (-GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x1800473A8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x1801258CC (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180135208 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialAudioTech::GetEndpointExtendedSpatialLicenseInfo(
        const unsigned __int16 *a1,
        unsigned int a2,
        struct ExtendedSpatialAudioEncoderInfo *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct AtmosCheck *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v11);
  v7 = CSpatialAudioTech::GetAtmosCheckInstance(&v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"avcore\\audiocore\\server\\lib\\spatialsettings\\SpatialProviders.h",
      (const char *)(unsigned int)v7);
LABEL_6:
    v6 = v8;
    goto LABEL_7;
  }
  if ( !v11 )
  {
    v8 = -2147418113;
    goto LABEL_6;
  }
  AtmosCheck::GetEndpointExtendedSpatialLicenseInfo(v11, a1, a2, a3);
LABEL_7:
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v11);
  return v6;
}

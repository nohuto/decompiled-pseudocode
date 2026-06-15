/*
 * XREFs of ?GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z @ 0x1800D73C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x1800473A8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x1801258CC (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x180135ED4 (-IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetSpatialSpeakerProtectionOverrideValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct AtmosCheck *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v9);
    v6 = CSpatialAudioTech::GetAtmosCheckInstance(&v9);
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( v9 )
      {
        *a3 = AtmosCheck::IsSpeakerOverrideEnabled(v9, a2);
        v5 = 0;
      }
      else
      {
        v5 = -2147418113;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80,
        (__int64)"avcore\\audiocore\\server\\lib\\spatialsettings\\SpatialProviders.h",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    v5 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
  }
  return v5;
}

/*
 * XREFs of ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x180216440
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A0C34 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801A8058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180253940 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessTipPointBuffer(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_TIPPOINTBUFFER *a3,
        __int64 a4)
{
  unsigned int v7; // edi
  volatile signed __int32 **v8; // rbp
  unsigned int v9; // edx
  __int64 v10; // rcx
  struct CSharedSectionBase *Resource; // rbx
  int v12; // eax
  __int64 v13; // rcx

  v7 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  v8 = (volatile signed __int32 **)((char *)this + 88);
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(v8);
  v9 = *((_DWORD *)a3 + 2);
  if ( v9 )
  {
    Resource = (struct CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v9, 0xA9u);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(v8);
      v12 = CGenericInkTipPointSource::Create(
              Resource,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              *((_DWORD *)a3 + 5),
              (struct CGenericInkTipPointSource **)v8);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x9Au);
    }
    else
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2003303421, 0x95u);
    }
  }
  return v7;
}

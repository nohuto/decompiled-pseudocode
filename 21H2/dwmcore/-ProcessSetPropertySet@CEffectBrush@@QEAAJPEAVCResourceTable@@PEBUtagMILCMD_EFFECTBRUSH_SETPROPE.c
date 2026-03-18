/*
 * XREFs of ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x180035E54
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180035F24 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ??4?$ComPtr@VCPropertySet@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertySet@@@Z @ 0x1800361B0 (--4-$ComPtr@VCPropertySet@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  char *v3; // rdi
  __int64 Resource; // rax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v3 = (char *)this + 104;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303422, 0x64u, 0LL);
  }
  else
  {
    Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 133LL);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CPropertySet>::operator=(v3, Resource);
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*(_QWORD *)v3 + 80LL) = (char *)this + 88;
      return 0;
    }
    else
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x6Au, 0LL);
    }
  }
  return v7;
}

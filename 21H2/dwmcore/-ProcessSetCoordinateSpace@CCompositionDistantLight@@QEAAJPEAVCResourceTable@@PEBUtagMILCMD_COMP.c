/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x180026E14
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x180027060 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ @ 0x18002709C (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x180027160 (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetCoordinateSpace(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Resource; // rax
  unsigned int v8; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = CResourceTable::GetResource(a2, v5, 195LL)) == 0 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xBAu, 0LL);
  }
  else if ( Resource != *((_QWORD *)this + 32) )
  {
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((char *)this + 256, Resource);
    CCompositionLight::UpdateRegistrationWithCompositor(this);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return v4;
}

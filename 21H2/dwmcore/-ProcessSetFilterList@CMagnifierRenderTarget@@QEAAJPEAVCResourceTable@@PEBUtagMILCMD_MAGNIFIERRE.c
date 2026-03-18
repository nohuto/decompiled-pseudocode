/*
 * XREFs of ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x1801C7F48
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z @ 0x180192B1C (--4-$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST *a3)
{
  struct CResource *v3; // rdi
  unsigned int v5; // edx
  unsigned int v6; // esi
  __int64 Resource; // rax
  int v9; // eax
  __int64 v10; // rcx
  CResource *v11; // rcx
  CResource *v12; // rcx
  CResource *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  v14 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC6u);
    wil::com_ptr_t<CVisualGroup,wil::err_returncode_policy>::operator=(&v14, Resource);
    v3 = v14;
  }
  if ( v3 != this[264] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, v3);
    v6 = v9;
    if ( v9 >= 0 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[264]);
      v11 = this[264];
      this[264] = 0LL;
      if ( v11 )
        CResource::InternalRelease(v11);
      v12 = this[264];
      this[264] = v3;
      if ( v12 )
        goto LABEL_12;
      return v6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x13Du);
  }
  if ( v3 )
  {
    v12 = v3;
LABEL_12:
    CResource::InternalRelease(v12);
  }
  return v6;
}

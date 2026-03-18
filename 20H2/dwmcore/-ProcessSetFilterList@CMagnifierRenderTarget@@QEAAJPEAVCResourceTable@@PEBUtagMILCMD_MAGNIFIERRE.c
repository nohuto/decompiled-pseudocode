/*
 * XREFs of ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x18018B0EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x1800334C8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST *a3)
{
  struct CResource *v3; // rdi
  unsigned int v5; // edx
  unsigned int v6; // esi
  CMILCOMBase *Resource; // rax
  int v9; // eax
  __int64 v10; // rcx
  CRenderTargetBitmap *v11; // rcx
  CRenderTargetBitmap *v12; // rcx
  CRenderTargetBitmap *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  v14 = 0LL;
  if ( v5 )
  {
    Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, v5, 0xC5u);
    wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&v14, Resource);
    v3 = v14;
  }
  if ( v3 != this[266] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, v3);
    v6 = v9;
    if ( v9 >= 0 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[266]);
      v11 = this[266];
      this[266] = 0LL;
      if ( v11 )
        CRenderTargetBitmap::Release(v11);
      v12 = this[266];
      this[266] = v3;
      if ( v12 )
        goto LABEL_12;
      return v6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x13Eu, 0LL);
  }
  if ( v3 )
  {
    v12 = v3;
LABEL_12:
    CRenderTargetBitmap::Release(v12);
  }
  return v6;
}

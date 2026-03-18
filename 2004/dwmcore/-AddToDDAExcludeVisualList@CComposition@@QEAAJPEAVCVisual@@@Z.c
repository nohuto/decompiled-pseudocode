/*
 * XREFs of ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800E0638
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x1800E05D8 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x1800268A8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800E071C (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  CRenderTargetBitmap **v2; // rbx
  CVisualGroup *v4; // rcx
  _DWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  v2 = (CRenderTargetBitmap **)((char *)this + 856);
  v4 = (CVisualGroup *)*((_QWORD *)this + 107);
  if ( v4 )
    goto LABEL_5;
  v6 = DefaultHeap::Alloc(0x50uLL);
  if ( v6 )
  {
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = this;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    v6[8] = 0;
    *(_QWORD *)v6 = &CVisualGroup::`vftable';
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
  }
  wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(v2, (CMILCOMBase *)v6);
  v4 = *v2;
  if ( *v2 )
  {
LABEL_5:
    v7 = CVisualGroup::AddVisual(v4, a2);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xB95u, 0LL);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xB92u, 0LL);
  }
  return v9;
}

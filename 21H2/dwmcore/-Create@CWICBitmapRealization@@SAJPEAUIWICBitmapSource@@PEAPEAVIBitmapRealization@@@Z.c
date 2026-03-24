/*
 * XREFs of ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x18003D328
 * Callers:
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18003D4B8 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x18003D040 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??0CWICBitmapRealization@@QEAA@XZ @ 0x18003D40C (--0CWICBitmapRealization@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800688C4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapRealization::Create(struct IWICBitmapSource *a1, struct IBitmapRealization **a2)
{
  unsigned int v2; // edi
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  struct ID2DBitmapCacheSource *v6; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  CWICBitmapRealization *v9; // rax
  CWICBitmapRealization *v10; // rbx
  CMILCOMBase *v11; // rbx
  __int64 v13; // rcx
  struct ID2DBitmapCacheSource *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v14 = 0LL;
  if ( ((int (__fastcall *)(struct IWICBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))lpVtbl->QueryInterface)(
         a1,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         &v14) >= 0 )
    goto LABEL_5;
  v6 = v14;
  v14 = 0LL;
  if ( v6 )
  {
    v13 = (__int64)v6 + *(int *)(*((_QWORD *)v6 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v7 = CWICBitmapWrapper::Create(a1, &v14);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1Cu, 0LL);
  }
  else
  {
LABEL_5:
    v9 = (CWICBitmapRealization *)DefaultHeap::Alloc(0x90uLL);
    v10 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0x90uLL);
      v11 = CWICBitmapRealization::CWICBitmapRealization(v10);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
      CMILCOMBase::InternalAddRef(v11);
    CD2DBitmapCache::InitializeCache(v11, v14);
    *a2 = (struct IBitmapRealization *)(((unsigned __int64)v11 + 80) & -(__int64)(v11 != 0LL));
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  return v2;
}

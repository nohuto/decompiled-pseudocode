/*
 * XREFs of ?GetSurfacePlaneResource@CLegacySwapChain@@UEBAJPEAVCCompositionSurfaceInfo@@PEAPEAUIUnknown@@PEAI@Z @ 0x18024714C
 * Callers:
 *     ?GetSurfacePlaneResource@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAVCCompositionSurfaceInfo@@PEAPEAUIUnknown@@PEAI@Z @ 0x1800F1790 (-GetSurfacePlaneResource@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAVCCompositionSurfaceInfo@@PEAPEAU.c)
 *     ?GetSurfacePlaneResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJPEAVCCompositionSurfaceInfo@@PEAPEAUIUnknown@@PEAI@Z @ 0x1800F1C30 (-GetSurfacePlaneResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJPEAVCCompositionSurfaceInfo@@PEAPEA.c)
 *     ?GetSurfacePlaneResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJPEAVCCompositionSurfaceInfo@@PEAPEAUIUnknown@@PEAI@Z @ 0x1800F1FC0 (-GetSurfacePlaneResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetSurfacePlaneResource(
        CLegacySwapChain *this,
        struct CCompositionSurfaceInfo *a2,
        struct IUnknown **a3,
        unsigned int *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v6 = -2003292412;
  v7 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( v7 )
  {
    v8 = *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
    v14 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))(v7 + 8 + v8))(
           v7 + 8 + v8,
           &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
           &v14);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x19Eu, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **, unsigned int *))(*(_QWORD *)v14 + 128LL))(
              v14,
              a3,
              a4);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1A1u, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  }
  return v6;
}

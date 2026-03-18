/*
 * XREFs of ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180263A6C
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180039C08 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180175C0C (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180263468 (--0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180264420 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResource(
        struct IYUVSwapChainRealization *a1,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5,
        struct ISwapChainRealization **a6)
{
  CDxHandleYUVBitmapRealization *v6; // rbx
  CDxHandleYUVBitmapRealization *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  CDxHandleYUVBitmapRealization *v16; // rdx
  struct ISwapChainRealization *v17; // rcx
  CDxHandleYUVBitmapRealization *v19; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v19 = 0LL;
  if ( !a1 || (**(unsigned int (__fastcall ***)(struct IYUVSwapChainRealization *))a1)(a1) || !*((_DWORD *)a4 + 6) )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x4Fu, 0LL);
LABEL_13:
    if ( v6 )
      *((_QWORD *)v6 + 28) = 0LL;
    goto LABEL_15;
  }
  v11 = (CDxHandleYUVBitmapRealization *)operator new(0x1F0uLL);
  if ( v11 )
    v11 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v11, a2, a3, a4, a5);
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(&v19, v11);
  v6 = v19;
  if ( !v19 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x49u, 0LL);
    goto LABEL_15;
  }
  v14 = CDxHandleYUVBitmapRealization::Initialize(v19, a1);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4Bu, 0LL);
    goto LABEL_13;
  }
  v16 = v6;
  v6 = 0LL;
  if ( v16 )
  {
    v17 = (CDxHandleYUVBitmapRealization *)((char *)v16 + *(int *)(*((_QWORD *)v16 + 2) + 24LL) + 16);
    goto LABEL_16;
  }
LABEL_15:
  v17 = 0LL;
LABEL_16:
  *a6 = v17;
  if ( v6 )
    CRenderTargetBitmap::Release(v6);
  return v13;
}

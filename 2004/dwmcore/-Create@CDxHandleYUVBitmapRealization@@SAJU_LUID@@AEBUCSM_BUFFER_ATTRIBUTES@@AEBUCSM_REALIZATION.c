/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180263968
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180039C08 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180175C0C (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180263468 (--0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180264420 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        struct _LUID a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4,
        struct ISwapChainRealization **a5)
{
  CDxHandleYUVBitmapRealization *v9; // rax
  __int64 v10; // rcx
  CRenderTargetBitmap *v11; // rbx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  struct ISwapChainRealization *v15; // rcx
  CRenderTargetBitmap *v16; // rdx
  CRenderTargetBitmap *v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = 0LL;
  v9 = (CDxHandleYUVBitmapRealization *)operator new(0x1F0uLL);
  if ( v9 )
    v9 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v9, a1, a2, a3, a4);
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(&v18, v9);
  v11 = v18;
  if ( !v18 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x1Cu, 0LL);
LABEL_7:
    v15 = 0LL;
    goto LABEL_10;
  }
  v13 = CDxHandleYUVBitmapRealization::Initialize(v18, 0LL);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1Du, 0LL);
    *((_QWORD *)v11 + 28) = 0LL;
    goto LABEL_7;
  }
  v16 = v11;
  v11 = 0LL;
  if ( !v16 )
    goto LABEL_7;
  v15 = (CRenderTargetBitmap *)((char *)v16 + *(int *)(*((_QWORD *)v16 + 2) + 24LL) + 16);
LABEL_10:
  *a5 = v15;
  if ( v11 )
    CRenderTargetBitmap::Release(v11);
  return v12;
}

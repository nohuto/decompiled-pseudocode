/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x180262144
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1800459EC (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045C08 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180261DF4 (--0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        struct _LUID a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct ISwapChainRealization **a4)
{
  CDxHandleStereoBitmapRealization *v8; // rax
  __int64 v9; // rcx
  CDxHandleStereoBitmapRealization *v10; // rdi
  CRenderTargetBitmap *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  struct ISwapChainRealization *v15; // rdi

  v8 = (CDxHandleStereoBitmapRealization *)operator new(0x240uLL);
  if ( v8 )
    v10 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v8, a1, a2, a3);
  else
    v10 = 0LL;
  v11 = v10;
  if ( v10 )
  {
    CMILCOMBase::InternalAddRef(v10);
    v12 = CDxHandleBitmapRealization::Initialize(v10);
    v14 = v12;
    if ( v12 >= 0 )
    {
      v11 = 0LL;
      v15 = (CDxHandleStereoBitmapRealization *)((char *)v10 + 328);
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Au, 0LL);
    *((_QWORD *)v10 + 28) = 0LL;
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x18u, 0LL);
  }
  v15 = 0LL;
LABEL_10:
  *a4 = v15;
  if ( v11 )
    CRenderTargetBitmap::Release(v11);
  return v14;
}

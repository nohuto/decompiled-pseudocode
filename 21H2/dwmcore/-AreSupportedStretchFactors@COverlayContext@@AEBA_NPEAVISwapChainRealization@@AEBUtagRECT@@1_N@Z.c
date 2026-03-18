/*
 * XREFs of ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1_N@Z @ 0x18000852C
 * Callers:
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1800083EC (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 */

char __fastcall COverlayContext::AreSupportedStretchFactors(
        COverlayContext *this,
        struct ISwapChainRealization *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        bool a5)
{
  char v5; // bl
  int v6; // r11d
  int v7; // r10d
  __m128i v8; // xmm2
  int v9; // eax
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  _QWORD *v14; // rax
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a3->right - a3->left;
  v7 = a3->bottom - a3->top;
  v8 = _mm_cvtsi32_si128(a4->right - a4->left);
  v9 = v7;
  if ( !a5 )
    v9 = a3->right - a3->left;
  LODWORD(v10) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( !a5 )
    v6 = v7;
  LODWORD(v11) = COERCE_UNSIGNED_INT(v10 / (float)v9) & _xmm;
  LODWORD(v12) = COERCE_UNSIGNED_INT((float)(a4->bottom - a4->top) / (float)v6) & _xmm;
  if ( *((float *)this + 15) >= fmaxf(v11, v12) && fminf(v11, v12) >= *((float *)this + 16) )
    return 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
  {
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, char *))(*(_QWORD *)a2 + 40LL))(a2, &v15);
    McTemplateU0xq_EventWriteTransfer(
      *(unsigned int *)v14,
      &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
      *(unsigned int *)v14 | (unsigned __int64)((__int64)(int)HIDWORD(*v14) << 32),
      4LL);
  }
  return v5;
}

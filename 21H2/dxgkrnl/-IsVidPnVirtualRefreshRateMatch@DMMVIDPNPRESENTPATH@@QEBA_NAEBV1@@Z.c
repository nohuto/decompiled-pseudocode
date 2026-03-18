/*
 * XREFs of ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C01E5E54
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0010CA8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2)
{
  __int64 v2; // rsi
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rsi
  const struct _D3DDDI_RATIONAL *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  const struct _D3DDDI_RATIONAL *v11; // rbp

  v2 = *((_QWORD *)this + 12);
  v4 = 1;
  v5 = *(_QWORD *)(v2 + 104);
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 96), 1u);
    v6 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(const struct _D3DDDI_RATIONAL **)(v6 + 144);
  if ( !v7 )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a2 + 12);
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v9 + 96), 1u);
    v10 = *(_QWORD *)(v8 + 104);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *(const struct _D3DDDI_RATIONAL **)(v10 + 144);
  if ( !v11 )
    WdLogSingleEntry0(1LL);
  if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v7 + 19, v11 + 19, 0) || v7[20].Numerator != v11[20].Numerator )
    v4 = 0;
  ReferenceCounted::Release((ReferenceCounted *)(v10 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  return v4;
}

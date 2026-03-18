/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1800460C8
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1800459EC (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045C08 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180260A8C (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        void *a5,
        __int64 *a6)
{
  CDxHandleBitmapRealization *v6; // rbx
  int v11; // edi
  __int64 v12; // rdx
  void *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  CDxHandleBitmapRealization *v17; // rcx

  v6 = 0LL;
  if ( (a3[29] & 0x100) == 0 )
  {
    v11 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802CB660, 3u, -2003292287, 0x24u, 0LL);
LABEL_3:
    v12 = 0LL;
    goto LABEL_4;
  }
  if ( a3[11] || *a3 != 3 )
  {
    v11 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802CB660, 3u, -2003292288, 0x2Au, 0LL);
LABEL_18:
    if ( v11 >= 0 )
      goto LABEL_19;
LABEL_15:
    if ( v6 )
      *((_QWORD *)v6 + 28) = 0LL;
    goto LABEL_3;
  }
  v14 = operator new(0x208uLL);
  if ( v14 )
    v6 = (CDxHandleBitmapRealization *)CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
                                         v14,
                                         a1,
                                         a2,
                                         a3,
                                         a4,
                                         a5);
  if ( !v6 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, &dword_1802CB660, 3u, -2147024882, 0x32u, 0LL);
    goto LABEL_15;
  }
  (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v6 + 8LL))(v6);
  v15 = CDxHandleBitmapRealization::Initialize(v6);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802CB660, 3u, v15, 0x33u, 0LL);
    goto LABEL_18;
  }
LABEL_19:
  v17 = v6;
  v6 = 0LL;
  v12 = ((unsigned __int64)v17 + 328) & -(__int64)(v17 != 0LL);
LABEL_4:
  *a6 = v12;
  if ( v6 )
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v11;
}

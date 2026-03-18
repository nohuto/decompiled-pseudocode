/*
 * XREFs of ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180045B30
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1800459EC (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045C08 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180045CE4 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  void *v10; // rax
  unsigned int v11; // ecx
  CDxHandleBitmapRealization *v12; // rdi
  CDxHandleBitmapRealization *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // esi
  _QWORD *v17; // rdi

  v10 = operator new(0x1D8uLL);
  if ( v10 )
    v12 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::CDxHandleBitmapRealization(
                                          v10,
                                          a1,
                                          a2,
                                          a3,
                                          a4,
                                          a5,
                                          1,
                                          0LL,
                                          1);
  else
    v12 = 0LL;
  v13 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v12 + 8LL))(v12);
    v14 = CDxHandleBitmapRealization::Initialize(v12);
    v16 = v14;
    if ( v14 >= 0 )
    {
      v13 = 0LL;
      v17 = (_QWORD *)((char *)v12 + 328);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1Fu, 0LL);
    *((_QWORD *)v12 + 28) = 0LL;
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x1Eu, 0LL);
  }
  v17 = 0LL;
LABEL_6:
  *a6 = v17;
  if ( v13 )
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v13 + 16LL))(v13);
  return v16;
}

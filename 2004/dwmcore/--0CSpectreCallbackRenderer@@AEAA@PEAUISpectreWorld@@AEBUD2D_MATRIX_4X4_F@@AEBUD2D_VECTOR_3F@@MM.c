/*
 * XREFs of ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1801A0294
 * Callers:
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801A03EC (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$?0V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1801A01C4 (--$-0V-$span_iterator@V-$span@PEAVCCompositionLight@@$0-0@gsl@@$0A@@details@gsl@@X@-$vector@PEAV.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::CSpectreCallbackRenderer(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CSpectreCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *(_QWORD *)(a1 + 8) = &CSpectreCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  *(_QWORD *)(a1 + 24) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = *a3;
  v14[1] = 0LL;
  *(_OWORD *)(a1 + 32) = v10;
  v13[0] = a7;
  v11 = a3[1];
  v14[0] = a7;
  *(_OWORD *)(a1 + 48) = v11;
  *(_OWORD *)(a1 + 64) = a3[2];
  *(_OWORD *)(a1 + 80) = a3[3];
  *(_QWORD *)(a1 + 96) = *(_QWORD *)a4;
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a4 + 8);
  v13[1] = *a7;
  *(_DWORD *)(a1 + 108) = a5;
  *(_DWORD *)(a1 + 112) = a6;
  std::vector<CCompositionLight *>::vector<CCompositionLight *>((__int64 *)(a1 + 120), v14, v13);
  return a1;
}

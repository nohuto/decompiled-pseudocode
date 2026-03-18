/*
 * XREFs of ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802176D0
 * Callers:
 *     ?Draw@CInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180105BB0 (-Draw@CInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180217B3C (-GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::Draw(
        CInk *this,
        struct CD3DDevice **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int D2DInk; // eax
  __int64 v7; // rcx
  struct ID2D1Ink *v8; // rsi
  unsigned int v9; // ebx
  struct ID2D1InkStyle *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  struct ID2D1Ink *v14; // [rsp+50h] [rbp+8h] BYREF
  struct ID2D1InkStyle *v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  D2DInk = CInk::GetD2DInk((CInk *)((char *)this - 224), a2[5], &v14, &v15);
  v8 = v14;
  v9 = D2DInk;
  v10 = v15;
  if ( D2DInk < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, D2DInk, 0xF3u);
  }
  else
  {
    v11 = (*((__int64 (__fastcall **)(char *, struct ID2D1Ink *, char *, struct ID2D1InkStyle *))a2[2] + 7))(
            (char *)a2 + 16,
            v14,
            (char *)this - 112,
            v15);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xF5u);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v10 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}

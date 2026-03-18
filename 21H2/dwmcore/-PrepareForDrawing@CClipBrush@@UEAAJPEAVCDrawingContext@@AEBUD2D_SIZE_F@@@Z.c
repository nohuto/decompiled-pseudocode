/*
 * XREFs of ?PrepareForDrawing@CClipBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020B290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CClipBrush::PrepareForDrawing(
        CClipBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 11)
                                                                                              + 312LL))(
         *((_QWORD *)this + 11),
         a2,
         a3);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0xC5u);
  else
    return 0;
  return v5;
}

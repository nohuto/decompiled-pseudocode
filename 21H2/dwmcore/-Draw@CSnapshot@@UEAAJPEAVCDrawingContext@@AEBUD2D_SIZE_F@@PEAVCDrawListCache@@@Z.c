/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F4EFC
 * Callers:
 *     ?Draw@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F4E60 (-Draw@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180174BE0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CSnapshot::Draw(
        CSnapshot *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v5; // ebx
  struct CResource *v6; // rdx
  int v8; // eax
  __int64 v9; // rcx

  v5 = 0;
  v6 = (struct CResource *)*((_QWORD *)this - 6);
  if ( v6 && !*((_BYTE *)this - 31) )
  {
    *((_BYTE *)this - 31) = 1;
    v8 = CDrawingContext::DrawBitmap((struct CDrawingContext *)((char *)a2 + 16), v6);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x50u, 0LL);
    *((_BYTE *)this - 31) = 0;
  }
  return v5;
}

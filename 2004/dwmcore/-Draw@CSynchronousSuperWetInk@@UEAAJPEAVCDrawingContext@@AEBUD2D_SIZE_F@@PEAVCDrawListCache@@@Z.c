/*
 * XREFs of ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F0B88
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014F44 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?Draw@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F1040 (-Draw@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801971AC (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801F0C64 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::Draw(
        CSynchronousSuperWetInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct CDrawingContext *v6; // r10
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  if ( CSynchronousSuperWetInk::IsSuperWetCompatible((CSynchronousSuperWetInk *)((char *)this - 280)) )
    CSuperWetInkManager::TryRegisterSuperWetForDraw(
      *(CSuperWetInkManager **)(*(_QWORD *)(v5 - 264) + 128LL),
      (struct CSuperWetSource *)((v5 - 168) & -(__int64)(v4 != 0)),
      v6,
      0,
      &v8);
  return 0LL;
}

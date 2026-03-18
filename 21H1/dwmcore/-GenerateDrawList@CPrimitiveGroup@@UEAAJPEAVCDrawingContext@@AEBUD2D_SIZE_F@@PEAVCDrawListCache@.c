/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800A6720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x1800356C8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800A8830 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int DrawList; // eax
  __int64 v13; // rcx

  if ( !*((_QWORD *)this + 64) )
    return 0;
  v7 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x7Eu, 0LL);
    return v9;
  }
  v10 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(*((CPrimitiveGroupDrawListGenerator **)this + 21), a2);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x7Fu, 0LL);
    return v9;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
               *((CPrimitiveGroupDrawListGenerator **)this + 21),
               a2,
               0LL,
               a4);
  v9 = DrawList;
  if ( DrawList < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, DrawList, 0x80u, 0LL);
  else
    return 0;
  return v9;
}

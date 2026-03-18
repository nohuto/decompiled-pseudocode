/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800B6D58
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180064AF0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B5EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800979A8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  __int64 v1; // r11
  const struct CMILMatrix *TopByReference; // rax

  LOBYTE(v1) = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 608LL) )
  {
    if ( !CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    {
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
      if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference) )
      {
        if ( (*((_DWORD *)this + 174) != (_DWORD)v1 || *((_DWORD *)this + 156) <= (unsigned int)v1)
          && *((_QWORD *)this + 435) == v1 )
        {
          LOBYTE(v1) = 1;
        }
      }
    }
  }
  return v1;
}

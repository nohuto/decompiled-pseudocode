/*
 * XREFs of ?IsSupportedForCpuClipping@CRectangleGeometry@@UEBA_NXZ @ 0x1800D1900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18023B320 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 */

char __fastcall CRectangleGeometry::IsSupportedForCpuClipping(CRectangleGeometry *this)
{
  bool IsRoundedRectangleGeometry; // al
  __int64 v2; // rcx
  char v3; // dl

  IsRoundedRectangleGeometry = CRectangleGeometry::IsRoundedRectangleGeometry(this);
  v3 = 0;
  if ( !IsRoundedRectangleGeometry )
    return 1;
  if ( !*(_BYTE *)(v2 + 197) )
    return CCommonRegistryData::m_flCpuClipFlatteningTolerance > 0.0;
  return v3;
}

/*
 * XREFs of ?IsSupportedForCpuClipping@CEllipseGeometry@@UEBA_NXZ @ 0x180213BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CEllipseGeometry::IsSupportedForCpuClipping(CEllipseGeometry *this)
{
  return CCommonRegistryData::m_flCpuClipFlatteningTolerance > 0.0;
}

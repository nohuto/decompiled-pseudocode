/*
 * XREFs of ?IsSupportedForCpuClipping@CRegionGeometry@@UEBA_NXZ @ 0x1800DC000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRegionGeometry::IsSupportedForCpuClipping(CRegionGeometry *this)
{
  return (unsigned __int64)((__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 4) <= 1;
}

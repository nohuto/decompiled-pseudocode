/*
 * XREFs of ?GetIndexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1801DA6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2D::GetIndexCount(CMeshGeometry2D *this)
{
  return *((_DWORD *)this + 40) >> 2;
}

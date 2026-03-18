/*
 * XREFs of ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x18021F9D8
 * Callers:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x18021FF34 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18025CA40 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Path::ControlPointCollection::const_iterator::operator!=(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)a1 != *a2 || *(_DWORD *)(a1 + 16) != (unsigned int)a2[2];
}

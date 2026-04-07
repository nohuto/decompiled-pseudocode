/*
 * XREFs of ?SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z @ 0x1800BE418
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800A40D8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800A55C4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2dProxy::SetConstantOpacity(CMeshGeometry2dProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 808LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           0xFFFFFFFFLL);
}

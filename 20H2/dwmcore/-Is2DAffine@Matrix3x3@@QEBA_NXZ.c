/*
 * XREFs of ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x18020F5C4
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801A2210 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Matrix3x3::Is2DAffine(Matrix3x3 *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 2) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) < 0.0000011920929;
}

/*
 * XREFs of ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180041398
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180001744 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180045B78 (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x1800163E4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::CTransitionWindowSnapshot(
        CTransitionWindowSnapshot *this)
{
  __int64 v1; // rcx
  CTransitionWindowSnapshot *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_DWORD *)(v1 + 352) = 1065353216;
  *(_QWORD *)v1 = &CTransitionWindowSnapshot::`vftable';
  result = (CTransitionWindowSnapshot *)v1;
  *(_BYTE *)(v1 + 356) = 1;
  return result;
}

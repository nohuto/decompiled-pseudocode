/*
 * XREFs of ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x18039D204
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18039CBA8 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18037FC18 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x180387E74 (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x18039D180 (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 */

bool __fastcall ElementDragData::IsExternalDrag(ElementDragData *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  bool result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v6; // [rsp+30h] [rbp-28h] BYREF

  result = 1;
  if ( ElementDragData::GetExternalDragProgress(this) <= 1.0 )
  {
    v3 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagPOINT *))(**(_QWORD **)(v2 + 40) + 88LL))(
                     *(_QWORD *)(v2 + 40),
                     &v6);
    RelativeMargins::ApplyMargins((double *)this + 16, (__int64)v5, v3);
    v6 = *(struct tagPOINT *)((char *)this + 92);
    if ( Geometry::CRect::Contains((Geometry::CRect *)v5, &v6) )
      return 0;
  }
  return result;
}

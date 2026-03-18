/*
 * XREFs of ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x1801FB80C
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FB904 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180166108 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 */

void __fastcall CBspNode::AddPolygon(CBspNode *this, struct CPolygon *a2)
{
  _QWORD *v2; // rax
  __int64 *v3; // rcx
  struct CPolygon *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = (_QWORD *)*((_QWORD *)this + 5);
  v3 = (__int64 *)((char *)this + 32);
  if ( (_QWORD *)v3[2] == v2 )
  {
    std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(v3, v2, &v4);
    a2 = v4;
  }
  else
  {
    *v2 = a2;
    v3[1] += 8LL;
  }
  (**(void (__fastcall ***)(struct CPolygon *))a2)(a2);
}

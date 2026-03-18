/*
 * XREFs of ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180009F80
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18004D020 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x18000A0D8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveGroupDrawListBrush *__fastcall CPrimitiveGroupDrawListBrush::`vector deleting destructor'(
        CPrimitiveGroupDrawListBrush *this,
        char a2,
        unsigned int a3)
{
  struct CPrimitiveGroupDrawListBrush *v5; // rcx
  struct CObjectCache *ObjectCache; // rax

  v5 = (struct CPrimitiveGroupDrawListBrush *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListBrush *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x58, a3);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v5);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}

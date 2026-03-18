/*
 * XREFs of ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x180061150
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009F1E0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180062CE8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

CMultiPrimitiveDrawListBrush *__fastcall CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
        CMultiPrimitiveDrawListBrush *this,
        char a2,
        unsigned int a3)
{
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  int Current; // eax
  struct CThreadContext *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 9);
  if ( v5 )
    (**v5)(v5, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x60, a3);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v10);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v7 = v10;
      if ( *((_DWORD *)v10 + 67) >= *((_DWORD *)v10 + 66) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v10 + 34);
        ++*((_DWORD *)v7 + 67);
        *((_QWORD *)v7 + 34) = this;
      }
    }
  }
  return this;
}

/*
 * XREFs of ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x1800CF6C0
 * Callers:
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800669C8 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180081CEC (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShapePtr::IsRectangles(CShapePtr *this, unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)this;
  result = 0LL;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 40LL))(v2, a2);
  return result;
}

/*
 * XREFs of ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGKK@Z @ 0x1832BB
 * Callers:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_4f7eb985707f6c5d2acf3a41f3d88b59___ @ 0xF3F74 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrapper__lambda.c)
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_828817a7f4498484fe04ee355465d50d___ @ 0xF3FB2 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FB2.c)
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___ @ 0xF3FF4 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FF4.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(
        unsigned int a1)
{
  if ( a1 && a1 <= 0xFFFFFFF7 )
    return a1 + 8;
  else
    return 0;
}

/*
 * XREFs of ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIXZ @ 0x183337
 * Callers:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_4f7eb985707f6c5d2acf3a41f3d88b59___ @ 0xF3F74 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrapper__lambda.c)
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_828817a7f4498484fe04ee355465d50d___ @ 0xF3FB2 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FB2.c)
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___ @ 0xF3FF4 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FF4.c)
 *     _Win32UAFMAllocateFromPagedLookasideListImpl@8 @ 0x1836B0 (_Win32UAFMAllocateFromPagedLookasideListImpl@8.c)
 * Callees:
 *     <none>
 */

ULONG NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie()
{
  unsigned __int64 v0; // rax
  ULONG result; // eax
  ULONG Seed; // [esp+0h] [ebp-4h] BYREF

  v0 = __rdtsc();
  Seed = v0;
  result = RtlRandomEx(&Seed);
  if ( !result )
    return 1;
  return result;
}

/*
 * XREFs of ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGPAXKIIIPAI@Z @ 0x1832CB
 * Callers:
 *     _Win32UAFMAllocPagedLookasideListImpl@20 @ 0x183611 (_Win32UAFMAllocPagedLookasideListImpl@20.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30C4 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z @ 0xE6274 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z.c)
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___ @ 0xF3FF4 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FF4.c)
 */

_DWORD *__fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePagedLookasideList(
        unsigned int a1,
        ULONG a2,
        ULONG a3,
        USHORT a4,
        _DWORD *a5)
{
  NSInstrumentation::CLeakTrackingAllocator *v6; // ecx
  int v7; // ecx
  char *PagedLookasideList; // esi
  _DWORD *result; // eax
  NSInstrumentation::CLeakTrackingAllocator *v10; // ecx

  if ( a1 && a1 <= 0xFFFFFFF7 )
    v6 = (NSInstrumentation::CLeakTrackingAllocator *)(a1 + 8);
  else
    v6 = 0;
  if ( !v6 )
    return 0;
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(v6, (SIZE_T)v6, a2, a3, a4);
  if ( !PagedLookasideList )
    return 0;
  result = NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___(
             4,
             a5,
             v7,
             a2,
             (POOL_TYPE)544);
  if ( !result )
  {
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v10, PagedLookasideList);
    return 0;
  }
  *result = PagedLookasideList;
  return result;
}

/*
 * XREFs of _Win32UAFMAllocPoolWithPriorityImpl@20 @ 0x183653
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_828817a7f4498484fe04ee355465d50d___ @ 0xF3FB2 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FB2.c)
 */

_DWORD *__stdcall Win32UAFMAllocPoolWithPriorityImpl(
        enum _POOL_TYPE a1,
        int a2,
        unsigned int a3,
        enum _EX_POOL_PRIORITY a4,
        _DWORD *a5)
{
  int v6; // [esp-4h] [ebp-18h]

  return NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_828817a7f4498484fe04ee355465d50d___(
           a2,
           a5,
           a1,
           a3,
           a4,
           v6);
}

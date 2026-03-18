/*
 * XREFs of _Win32UAFMAllocPoolImpl@16 @ 0x183633
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___ @ 0xF3FF4 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FF4.c)
 */

_DWORD *__thiscall Win32UAFMAllocPoolImpl(void *this, POOL_TYPE PoolType, int a3, unsigned int a4, _DWORD *a5)
{
  return NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___(
           a3,
           a5,
           (int)this,
           a4,
           PoolType);
}

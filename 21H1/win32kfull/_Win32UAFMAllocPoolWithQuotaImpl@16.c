/*
 * XREFs of _Win32UAFMAllocPoolWithQuotaImpl@16 @ 0x183690
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_4f7eb985707f6c5d2acf3a41f3d88b59___ @ 0xF3F74 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrapper__lambda.c)
 */

_DWORD *__thiscall Win32UAFMAllocPoolWithQuotaImpl(void *this, enum _POOL_TYPE a2, int a3, unsigned int a4, _DWORD *a5)
{
  return NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_4f7eb985707f6c5d2acf3a41f3d88b59___(
           a3,
           a5,
           (int)this,
           a2,
           a4);
}

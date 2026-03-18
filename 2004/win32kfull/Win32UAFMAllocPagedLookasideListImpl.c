/*
 * XREFs of Win32UAFMAllocPagedLookasideListImpl @ 0x1C0220BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C011D8D4 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01224C8 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C0220360 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAXW4_POOL_TYPE@@_KIPEAI@Z @ 0x1C022037C (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

char *__fastcall Win32UAFMAllocPagedLookasideListImpl(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  SIZE_T v6; // rax
  unsigned int v7; // edx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  unsigned int v9; // r8d
  USHORT v10; // r9
  __int64 v11; // rbx
  bool *PagedLookasideList; // rdi
  char *Pool; // rax
  NSInstrumentation::CLeakTrackingAllocator *v14; // rcx

  v6 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a1);
  v11 = 0LL;
  if ( v6 )
  {
    PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(v8, v6, v7, v9, v10);
    if ( PagedLookasideList )
    {
      Pool = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
               (enum _POOL_TYPE)544,
               8LL,
               a2,
               a5);
      if ( Pool )
      {
        *(_QWORD *)Pool = PagedLookasideList;
        return Pool;
      }
      else
      {
        NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v14, (char *)PagedLookasideList);
      }
    }
  }
  return (char *)v11;
}

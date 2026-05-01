/*
 * XREFs of ?HampPkgCreate@@YAJPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18000611C
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18002667C (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x1800061A8 (-HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgCreate(struct _HAM_USER *a1, struct _HAM_PACKAGE_INFO *a2, struct _HAM_PACKAGE **a3)
{
  struct _HAM_PACKAGE *Heap; // rax
  unsigned int v7; // ebx
  struct _HAM_PACKAGE *v8; // rdi

  Heap = (struct _HAM_PACKAGE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x160uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    HampPkgInitialize(a1, a2, Heap);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}

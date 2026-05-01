/*
 * XREFs of ?HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z @ 0x18003DA84
 * Callers:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180026608 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 * Callees:
 *     ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x18003DB10 (-HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserCreate(struct _HAM_SESSION *a1, union _RM_SID *a2, struct _HAM_USER **a3)
{
  struct _HAM_USER *Heap; // rax
  unsigned int v7; // ebx
  struct _HAM_USER *v8; // rdi

  Heap = (struct _HAM_USER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC8uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    HampUserInitialize(a1, a2, Heap);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}

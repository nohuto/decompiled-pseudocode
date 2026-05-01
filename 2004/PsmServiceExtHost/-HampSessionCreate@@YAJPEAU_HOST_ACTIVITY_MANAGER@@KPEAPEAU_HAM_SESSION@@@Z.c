/*
 * XREFs of ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18003C6C0
 * Callers:
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18002670C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ?HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x18003C770 (-HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x18003CAA0 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionCreate(struct _HOST_ACTIVITY_MANAGER *a1, unsigned int a2, struct _HAM_SESSION **a3)
{
  struct _HAM_SESSION *Heap; // rax
  struct _HAM_SESSION *v7; // rbx
  int v8; // edi

  Heap = (struct _HAM_SESSION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v7 = Heap;
  if ( Heap )
  {
    HampSessionInitialize(a1, a2, Heap);
    v8 = HampSystemBamStart(a1, v7);
    if ( v8 >= 0 )
      v8 = 0;
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v8 = 0;
      v7 = 0LL;
    }
    if ( v7 )
      CemRcObjectDereference(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}

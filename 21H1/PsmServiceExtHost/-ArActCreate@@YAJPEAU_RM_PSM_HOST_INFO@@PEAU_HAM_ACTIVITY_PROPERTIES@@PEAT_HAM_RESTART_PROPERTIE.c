/*
 * XREFs of ?ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY@@@Z @ 0x180084040
 * Callers:
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008431C (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180031E40 (CemRcTableFindOrInsertEx.c)
 *     ?ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180083E74 (-ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@.c)
 */

__int64 __fastcall ArActCreate(
        struct _RM_PSM_HOST_INFO *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        union _HAM_RESTART_PROPERTIES *a3,
        struct _ACTIVITY_RESTARTER *a4,
        struct _AR_ACTIVITY **a5)
{
  struct _AR_ACTIVITY *Heap; // rax
  struct _AR_ACTIVITY *v10; // rbx
  int State; // edi
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  Heap = (struct _AR_ACTIVITY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38uLL);
  v10 = Heap;
  if ( Heap )
  {
    *((_QWORD *)Heap + 6) = 0LL;
    *(_QWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 1) = 0LL;
    *((_QWORD *)Heap + 3) = 1LL;
    *((_QWORD *)Heap + 2) = -1LL;
    *((_QWORD *)Heap + 4) = a4;
    *((_QWORD *)Heap + 5) = -1LL;
    *((_DWORD *)Heap + 12) = *(_DWORD *)a3;
    State = ArActAllocateState(Heap, a1, a2);
    if ( State >= 0 )
    {
      CemRcTableFindOrInsertEx(
        (__int64)a4,
        (__int64)v10 + 40,
        (int (__fastcall *)(__int64, unsigned __int64, __int64))ArActCompareByHandle,
        (unsigned __int64)v10,
        v13,
        v14);
      *a5 = v10;
      v10 = 0LL;
      State = 0;
    }
    if ( v10 )
      CemRcObjectDereference(v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}

/*
 * XREFs of PiDmListAddObjectWorker @ 0x1407355B0
 * Callers:
 *     PiDmListAddObject @ 0x140735694 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x14076EBA4 (PiDmListAddList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140735760 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListAddObjectWorker(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v12; // si
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  char *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + PiDmListDefs[v8 + 3]);
  v10 = a3 + PiDmListDefs[v8 + 1];
  if ( *v9 )
  {
    v12 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(a2, 1u);
    ++*(_DWORD *)(a3 + 12);
    ExReleaseResourceLite(a2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
    v16 = *(_QWORD **)(v10 + 8);
    if ( *v16 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v16;
    *v16 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}

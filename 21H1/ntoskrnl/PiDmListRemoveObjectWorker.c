/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x14071CCE8
 * Callers:
 *     PiDmListRemoveList @ 0x14071CAF8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14071CC1C (PiDmListRemoveObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x14072E1E8 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rdx
  char v10; // bl
  char *result; // rax
  __int64 **v12; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = PiDmListDefs[5 * a1 + 1];
  v8 = (__int64 *)(a4 + PiDmListDefs[5 * a1 + 3]);
  v9 = *v8;
  if ( *v8 )
  {
    v10 = 1;
    if ( *(__int64 **)(v9 + 8) != v8 || (v12 = (__int64 **)v8[1], *v12 != v8) )
      __fastfail(3u);
    *v12 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v12;
    --*(unsigned int *)((char *)a3 + v7 + 16);
    *v8 = 0LL;
    v8[1] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)a2, 1u);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    ExReleaseResourceLite((PERESOURCE)a2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    PiDmListUpdateAggregationCountWorker(Buffer, a4, 0xFFFFFFFFLL);
  }
  else
  {
    v10 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v10;
  return result;
}

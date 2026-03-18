/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x140714AE8
 * Callers:
 *     PiDmListRemoveObject @ 0x14071F8D4 (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140720B84 (PiDmListRemoveList.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1407356CC (PiDmListUpdateAggregationCountWorker.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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

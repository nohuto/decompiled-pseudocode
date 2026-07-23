/*
 * XREFs of IoCreateSystemThread @ 0x14076DFD0
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCreateSystemThread(
        PADAPTER_OBJECT DmaAdapter,
        __int64 a2,
        int a3,
        __int128 *a4,
        ULONG_PTR a5,
        __int64 a6,
        ULONG_PTR BugCheckParameter2,
        __int64 a8)
{
  _QWORD *Pool; // rax
  void *v13; // rdi
  int SystemThread; // esi

  if ( (unsigned __int16)(DmaAdapter->Version - 3) > 1u )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)DmaAdapter, 0LL);
  Pool = IopVerifierExAllocatePool(PagedPool, 0x18uLL);
  v13 = Pool;
  if ( !Pool )
    return 3221225626LL;
  *Pool = DmaAdapter;
  Pool[1] = BugCheckParameter2;
  Pool[2] = a8;
  ObfReferenceObject(DmaAdapter);
  SystemThread = PsCreateSystemThreadEx(a2, a3, a4, a5, a6, (__int64)IopThreadStart, (__int64)v13, 0LL, 0LL);
  if ( SystemThread < 0 )
  {
    HalPutDmaAdapter(DmaAdapter);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)SystemThread;
}

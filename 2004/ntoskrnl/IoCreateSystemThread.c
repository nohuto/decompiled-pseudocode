/*
 * XREFs of IoCreateSystemThread @ 0x14075B460
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  _QWORD *Pool_0; // rax
  void *v13; // rdi
  int SystemThread; // esi

  if ( (unsigned __int16)(DmaAdapter->Version - 3) > 1u )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)DmaAdapter, 0LL);
  Pool_0 = IopVerifierExAllocatePool_0(PagedPool, 0x18uLL);
  v13 = Pool_0;
  if ( !Pool_0 )
    return 3221225626LL;
  *Pool_0 = DmaAdapter;
  Pool_0[1] = BugCheckParameter2;
  Pool_0[2] = a8;
  ObfReferenceObject(DmaAdapter);
  SystemThread = PsCreateSystemThreadEx(a2, a3, a4, a5, a6, (__int64)IopThreadStart, (__int64)v13, 0LL, 0LL);
  if ( SystemThread < 0 )
  {
    HalPutDmaAdapter(DmaAdapter);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)SystemThread;
}

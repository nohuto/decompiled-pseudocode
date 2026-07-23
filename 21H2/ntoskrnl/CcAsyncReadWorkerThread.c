/*
 * XREFs of CcAsyncReadWorkerThread @ 0x1404EC800
 * Callers:
 *     <none>
 * Callees:
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CcAsyncReadWorker @ 0x1403B7AC0 (CcAsyncReadWorker.c)
 */

char __fastcall CcAsyncReadWorkerThread(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // r14
  _QWORD *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *(unsigned int *)(a1 + 36);
  v4 = *(_QWORD **)(a1 + 56);
  v5 = v4[105] + 16 * v2;
  if ( *(_DWORD *)(a1 + 32) == 3 )
  {
    v6 = v4[111] + 404 * v2;
    *(_DWORD *)(v6 + 4LL * *(unsigned int *)(a1 + 40)) = 0;
    CcAsyncReadWorker((_DWORD *)a1);
    *(_DWORD *)(v6 + 4LL * *(unsigned int *)(a1 + 40)) = -1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 112), 0LL);
    v7 = *(_QWORD **)(v5 + 8);
    if ( *v7 != v5 )
      __fastfail(3u);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v7;
    *v7 = a1;
    *(_QWORD *)(v5 + 8) = a1;
    --*(_DWORD *)(v4[106] + 4 * v2);
    ExReleasePushLockEx((ULONG_PTR)(v4 + 112), 0LL);
    LOBYTE(v1) = CcDereferencePartition((__int64)v4);
  }
  return (char)v1;
}

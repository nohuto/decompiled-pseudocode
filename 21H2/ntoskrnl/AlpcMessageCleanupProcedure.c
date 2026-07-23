/*
 * XREFs of AlpcMessageCleanupProcedure @ 0x1406CD9C0
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     AlpcpReleaseViewAttribute @ 0x140613954 (AlpcpReleaseViewAttribute.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcMessageCleanupProcedure(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 264) |= 0x80000000;
  v2 = *(struct _DMA_ADAPTER **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      HalPutDmaAdapter(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 )
  {
    AlpcpDereferenceBlobEx(v3);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
  {
    AlpcpReleaseViewAttribute(v4);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
  {
    AlpcpDereferenceBlobEx(v5);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 160);
  if ( (v6 & 1) != 0 )
  {
    if ( v6 >= 4 && (v6 & 2) != 0 )
      HalPutDmaAdapter((PADAPTER_OBJECT)(v6 & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 208);
  if ( v7 )
  {
    PsReleaseProcessWakeCounter(v7, *(unsigned int *)(a1 + 264));
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
  {
    PsReleaseProcessWakeCounter(v8, *(unsigned int *)(a1 + 264));
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    *(_DWORD *)(a1 + 240) = 2621440;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedExchange((volatile __int32 *)(result + 40), 0);
  }
  return result;
}

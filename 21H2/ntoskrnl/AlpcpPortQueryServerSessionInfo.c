/*
 * XREFs of AlpcpPortQueryServerSessionInfo @ 0x1405DD25C
 * Callers:
 *     NtAlpcQueryInformation @ 0x1405DCFD0 (NtAlpcQueryInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     AlpcpReferenceConnectedPort @ 0x1406D9660 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  struct _DMA_ADAPTER *v8; // rsi
  signed __int64 *v9; // rdi
  _DMA_OPERATIONS *DmaOperations; // rbx
  int AllocateCommonBufferEx; // edi
  int SessionId; // esi
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v7 = AlpcpReferenceConnectedPort();
  v8 = (struct _DMA_ADAPTER *)v7;
  if ( !v7 )
    return 3221225485LL;
  v9 = (signed __int64 *)(v7 + 352);
  ExAcquirePushLockSharedEx(v7 + 352, 0LL);
  DmaOperations = 0LL;
  if ( ((__int64)v8[1].DmaOperations & 1) == 0 )
    DmaOperations = v8[1].DmaOperations;
  if ( DmaOperations )
    ObfReferenceObjectWithTag(DmaOperations, 0x63706C41u);
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  HalPutDmaAdapter(v8);
  if ( !DmaOperations )
    return 3221225485LL;
  AllocateCommonBufferEx = (int)DmaOperations[3].AllocateCommonBufferEx;
  SessionId = MmGetSessionIdEx((__int64)DmaOperations);
  ObfDereferenceObjectWithTag(DmaOperations, 0x63706C41u);
  result = a3 < 8 ? 0xC0000004 : 0;
  if ( a3 >= 8 )
  {
    *a2 = SessionId;
    a2[1] = AllocateCommonBufferEx;
  }
  if ( a4 )
    *a4 = 8;
  return result;
}

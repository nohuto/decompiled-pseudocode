/*
 * XREFs of AlpcpAllocateMessage @ 0x1405E79B4
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1405E6A28 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1405E730C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1405E751C (AlpcpCreateClientPort.c)
 *     AlpcpCreateReserve @ 0x1406D2E24 (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E7A94 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1405F307C (AlpcpAllocateBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408C52E0 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG_PTR Blob; // rax
  ULONG_PTR v6; // rdi
  __int64 result; // rax
  int v8; // ebx
  signed __int32 v9; // eax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 240;
  }
  else
  {
    v4 = 792LL;
  }
  Blob = AlpcpAllocateBlob(AlpcMessageType, v4, a3);
  v6 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob(Blob);
  v8 = *(_DWORD *)(v6 + 264);
  memset((void *)v6, 0, 0x118uLL);
  *(_WORD *)(v6 + 242) = 40;
  --*(_WORD *)(v6 - 30);
  *(_DWORD *)(v6 + 264) = v8 & 0x7FFFFFFF;
  do
    v9 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v9 );
  *(_DWORD *)(v6 + 272) = v9;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *(_WORD *)(v6 + 242) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}

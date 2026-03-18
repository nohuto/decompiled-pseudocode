/*
 * XREFs of AlpcpAllocateMessage @ 0x1407A49B4
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140668084 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1407A73B0 (AlpcpAllocateBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140966950 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG_PTR Blob; // rax
  ULONG_PTR v6; // rdi
  int v7; // ebx
  signed __int32 v8; // eax
  __int64 result; // rax

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
  v7 = *(_DWORD *)(v6 + 264);
  memset((void *)v6, 0, 0x118uLL);
  *(_WORD *)(v6 + 242) = 40;
  --*(_WORD *)(v6 - 30);
  *(_DWORD *)(v6 + 264) = v7 & 0x7FFFFFFF;
  do
    v8 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v8 );
  *(_DWORD *)(v6 + 272) = v8;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *(_WORD *)(v6 + 242) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}

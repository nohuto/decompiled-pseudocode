/*
 * XREFs of AlpcpAllocateMessage @ 0x1406D0144
 * Callers:
 *     AlpcpCreateReserve @ 0x14060FCC4 (AlpcpCreateReserve.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406CF1B8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1406CFA9C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1406CFCAC (AlpcpCreateClientPort.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpAllocateBlob @ 0x1406558AC (AlpcpAllocateBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408C2C00 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rdx
  _OWORD *Blob; // rax
  _OWORD *v6; // rdi
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
  Blob = AlpcpAllocateBlob((__int64)AlpcMessageType, v4, a3);
  v6 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)Blob);
  v8 = *((_DWORD *)v6 + 66);
  memset(v6, 0, 0x118uLL);
  *((_WORD *)v6 + 121) = 40;
  --*((_WORD *)v6 - 15);
  *((_DWORD *)v6 + 66) = v8 & 0x7FFFFFFF;
  do
    v9 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v9 );
  *((_DWORD *)v6 + 68) = v9;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *((_WORD *)v6 + 121) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}

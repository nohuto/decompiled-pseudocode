/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140229AD4
 * Callers:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406A1000 (ObpProcessRemoveObjectQueue.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ObHandleRevocationBlockAddObject @ 0x1409843A0 (ObHandleRevocationBlockAddObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 26) & 0x40) == 0 )
    return 0LL;
  v1 = (__int64 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x7F]);
  result = *v1;
  if ( !*(_BYTE *)(*v1 + 24) )
    return 0LL;
  return result;
}

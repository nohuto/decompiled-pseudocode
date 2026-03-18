/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140300270
 * Callers:
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408DF160 (ObHandleRevocationBlockAddObject.c)
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

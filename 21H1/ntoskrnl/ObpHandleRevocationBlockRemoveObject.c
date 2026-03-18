/*
 * XREFs of ObpHandleRevocationBlockRemoveObject @ 0x1406B8120
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408D8070 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

__int64 __fastcall ObpHandleRevocationBlockRemoveObject(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 > 2 )
    return ObpHandleRevocationBlockRemoveInsertedObject(a1, v1, 0LL, 0LL);
  return result;
}

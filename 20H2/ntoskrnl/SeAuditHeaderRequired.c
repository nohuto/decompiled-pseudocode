/*
 * XREFs of SeAuditHeaderRequired @ 0x1402147A0
 * Callers:
 *     ObpAllocateObject @ 0x140610D30 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C1D440 || byte_140C1D441 || byte_140C1D458 || byte_140C1D459);
}

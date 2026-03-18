/*
 * XREFs of SeAuditHeaderRequired @ 0x14028EED0
 * Callers:
 *     ObpAllocateObject @ 0x140673750 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C1D4E0 || byte_140C1D4E1 || byte_140C1D4F8 || byte_140C1D4F9);
}

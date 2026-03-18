/*
 * XREFs of SeAuditHeaderRequired @ 0x140252630
 * Callers:
 *     ObpAllocateObject @ 0x1405FB670 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C1D520 || byte_140C1D521 || byte_140C1D538 || byte_140C1D539);
}

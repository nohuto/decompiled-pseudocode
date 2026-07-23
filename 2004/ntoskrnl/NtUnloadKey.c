/*
 * XREFs of NtUnloadKey @ 0x14064FA50
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  return CmUnloadKey(TargetKey, 0LL, 0LL, 0LL);
}

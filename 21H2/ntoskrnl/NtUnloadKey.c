/*
 * XREFs of NtUnloadKey @ 0x1405DE860
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  return CmUnloadKey(TargetKey, 0LL, 0LL, 0LL);
}

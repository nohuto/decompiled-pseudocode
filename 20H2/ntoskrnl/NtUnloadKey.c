/*
 * XREFs of NtUnloadKey @ 0x1406A0FC0
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  return CmUnloadKey(TargetKey, 0LL, 0LL, 0LL);
}

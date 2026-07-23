/*
 * XREFs of NtUnloadKey @ 0x140656500
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  return CmUnloadKey(TargetKey, 0LL, 0LL, 0LL);
}

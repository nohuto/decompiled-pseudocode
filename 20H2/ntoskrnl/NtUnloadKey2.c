/*
 * XREFs of NtUnloadKey2 @ 0x14076F980
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}

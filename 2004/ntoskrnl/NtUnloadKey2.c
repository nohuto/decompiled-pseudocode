/*
 * XREFs of NtUnloadKey2 @ 0x140761370
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}

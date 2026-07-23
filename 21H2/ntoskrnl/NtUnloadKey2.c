/*
 * XREFs of NtUnloadKey2 @ 0x140773A50
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}

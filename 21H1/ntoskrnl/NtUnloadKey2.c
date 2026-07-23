/*
 * XREFs of NtUnloadKey2 @ 0x14075EF70
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}

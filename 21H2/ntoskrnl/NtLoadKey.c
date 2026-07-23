/*
 * XREFs of NtLoadKey @ 0x140781D40
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x140664A00 (NtLoadKeyEx.c)
 */

NTSTATUS __cdecl NtLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  return NtLoadKeyEx(TargetKey, SourceFile, 0, 0LL, 0LL, 0, 0LL, 0LL);
}

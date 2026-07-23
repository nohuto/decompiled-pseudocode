/*
 * XREFs of NtLoadKey @ 0x14076D000
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x14068C7D0 (NtLoadKeyEx.c)
 */

NTSTATUS __cdecl NtLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  return NtLoadKeyEx(TargetKey, SourceFile, 0, 0LL, 0LL, 0, 0LL, 0LL);
}

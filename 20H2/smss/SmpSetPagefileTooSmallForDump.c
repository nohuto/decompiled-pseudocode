/*
 * XREFs of SmpSetPagefileTooSmallForDump @ 0x140013B6C
 * Callers:
 *     SmpCheckForCrashDump @ 0x140006F78 (SmpCheckForCrashDump.c)
 * Callees:
 *     <none>
 */

NTSTATUS SmpSetPagefileTooSmallForDump()
{
  struct _UNICODE_STRING v1; // [rsp+30h] [rbp-18h] BYREF
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)&v1.Length = 2228256;
  v1.Buffer = L"PagefileTooSmall";
  v2 = MEMORY[0x7FFE0014];
  return NtSetValueKey(SmpCrashDumpKey, &v1, 0, 0xBu, &v2, 8u);
}

/*
 * XREFs of PsIsProtectedProcess @ 0x140203410
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcess(__int64 a1)
{
  return (*(_BYTE *)(a1 + 2170) & 7) != 0;
}

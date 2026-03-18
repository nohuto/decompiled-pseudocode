/*
 * XREFs of NtFlushBuffersFile @ 0x1406BCBC0
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1406BCBF0 (NtFlushBuffersFileEx.c)
 */

__int64 __fastcall NtFlushBuffersFile(int a1, __int64 a2)
{
  return NtFlushBuffersFileEx(a1, a2);
}

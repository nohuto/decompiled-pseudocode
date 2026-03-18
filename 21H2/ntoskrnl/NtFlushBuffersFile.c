/*
 * XREFs of NtFlushBuffersFile @ 0x1406BF5C0
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 */

__int64 __fastcall NtFlushBuffersFile(int a1, __int64 a2)
{
  return NtFlushBuffersFileEx(a1, a2);
}

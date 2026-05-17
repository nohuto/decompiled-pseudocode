/*
 * XREFs of RtlCopyMappedMemory @ 0x180085430
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyMappedMemoryEx @ 0x180085450 (RtlpCopyMappedMemoryEx.c)
 */

__int64 __fastcall RtlCopyMappedMemory(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpCopyMappedMemoryEx(a1, a1, a2, a3);
}

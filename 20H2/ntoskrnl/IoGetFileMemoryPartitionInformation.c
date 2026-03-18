/*
 * XREFs of IoGetFileMemoryPartitionInformation @ 0x14029FA10
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IopGetFileObjectExtension(a1, 8LL, 0LL, a4);
}

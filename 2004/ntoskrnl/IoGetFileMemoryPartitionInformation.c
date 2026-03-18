/*
 * XREFs of IoGetFileMemoryPartitionInformation @ 0x140228AA8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1)
{
  return IopGetFileObjectExtension(a1, 8LL, 0LL);
}

/*
 * XREFs of IoGetFileMemoryPartitionInformation @ 0x140281AF8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1)
{
  return IopGetFileObjectExtension(a1, 8LL);
}

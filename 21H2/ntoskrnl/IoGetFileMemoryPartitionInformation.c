/*
 * XREFs of IoGetFileMemoryPartitionInformation @ 0x1403614EC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1)
{
  return IopGetFileObjectExtension(a1, 8LL);
}

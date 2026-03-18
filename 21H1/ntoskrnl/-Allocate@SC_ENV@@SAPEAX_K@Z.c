/*
 * XREFs of ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1408893C0
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C0C98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1405C12E0 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C1A08 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x1405C2104 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C231C (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1405C2664 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C2938 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C31E8 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C35E4 (-ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SC_ENV::Allocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54506F49u);
}

/*
 * XREFs of ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x1402D10A4 (SmPerformStoreSwapOperation.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IoRegisterPriorityCallback @ 0x1403AF560 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140500B70 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14050E670 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x14050EDE0 (KeRegisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405ACF6C (ExpDeleteSiloState.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1405C0C80 (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C0C98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x1405C0F14 (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1405C1000 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C1550 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C1A08 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C1CF8 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x1405C2104 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C231C (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C2578 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1405C2664 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C2938 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1405C2F6C (--1SC_DEVICE@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1405C3020 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C31E8 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x1405C3380 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C3410 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PsCreateVsmEnclave @ 0x14090924C (PsCreateVsmEnclave.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SC_ENV::Free(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}

/*
 * XREFs of ?Free@SC_ENV@@SAXPEAX@Z @ 0x140706430
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x140310C2C (SmPerformStoreSwapOperation.c)
 *     IoRegisterPriorityCallback @ 0x1403AB840 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405011C0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14050ECC0 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x14050F430 (KeRegisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405AD68C (ExpDeleteSiloState.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1405C13A0 (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C13B8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x1405C1634 (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1405C1720 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C1C70 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C2128 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C2418 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x1405C2834 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C2A4C (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C2CA8 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1405C2D94 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C3068 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1405C369C (--1SC_DEVICE@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1405C3750 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C3918 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x1405C3AB0 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C3B40 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     PsCreateVsmEnclave @ 0x14090A4FC (PsCreateVsmEnclave.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SC_ENV::Free(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}

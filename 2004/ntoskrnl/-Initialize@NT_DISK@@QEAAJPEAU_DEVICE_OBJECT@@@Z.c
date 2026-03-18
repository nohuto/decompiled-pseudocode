/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14088A818
 * Callers:
 *     IoCreateDisk @ 0x14088A9A0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x14088AA50 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14088AB50 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x14088AD20 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x14088ADD0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x14088AEB0 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x14088AF70 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x14088B020 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14088B190 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1405C1900 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1405C1A00 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  *((_QWORD *)this + 44) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this);
  return result;
}

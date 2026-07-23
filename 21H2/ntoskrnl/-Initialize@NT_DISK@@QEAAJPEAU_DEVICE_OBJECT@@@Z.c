/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14088DA68
 * Callers:
 *     IoCreateDisk @ 0x14088DBF0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x14088DCA0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14088DDA0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x14088DF70 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x14088E020 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x14088E100 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x14088E1C0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x14088E270 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14088E3E0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1405C6FE0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1405C70E0 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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

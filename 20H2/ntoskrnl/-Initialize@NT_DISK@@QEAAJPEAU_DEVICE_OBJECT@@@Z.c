/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140890368
 * Callers:
 *     IoCreateDisk @ 0x1408904F0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1408905A0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1408906A0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140890870 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140890920 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140890A00 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140890AC0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140890B70 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140890CE0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1405C5580 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1405C5680 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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

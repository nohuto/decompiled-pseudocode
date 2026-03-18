/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1408894F8
 * Callers:
 *     IoCreateDisk @ 0x140889680 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140889730 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140889830 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140889A00 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140889AB0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140889B90 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140889C50 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140889D00 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140889E70 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1405C11E0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1405C12E0 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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

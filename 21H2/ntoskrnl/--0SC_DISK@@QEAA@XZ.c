/*
 * XREFs of ??0SC_DISK@@QEAA@XZ @ 0x1405C6C04
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
 *     <none>
 */

SC_DISK *__fastcall SC_DISK::SC_DISK(SC_DISK *this)
{
  SC_DISK *result; // rax

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &SC_DISK::`vftable';
  *(GUID *)((char *)this + 8) = NullGuid;
  *((_DWORD *)this + 66) = -1;
  *((_DWORD *)this + 67) = -1;
  *((_OWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  result = this;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 2;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  return result;
}

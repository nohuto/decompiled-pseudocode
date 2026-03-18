/*
 * XREFs of ??0SC_DISK@@QEAA@XZ @ 0x1405C51A4
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

/*
 * XREFs of ??0SC_DISK@@QEAA@XZ @ 0x140650C18
 * Callers:
 *     IoCreateDisk @ 0x140930510 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1409305C0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1409306C0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140930890 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140930940 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140930A20 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140930AE0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140930B90 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140930D00 (IoWritePartitionTableEx.c)
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
  *((_DWORD *)this + 72) = -1;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *((_DWORD *)this + 73) = -1;
  result = this;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_OWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 2;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  return result;
}

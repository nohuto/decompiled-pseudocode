/*
 * XREFs of IoCreateDisk @ 0x140930510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140650C18 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140650D38 (--1SC_DISK@@UEAA@XZ.c)
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140650E68 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140930388 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoCreateDisk(PDEVICE_OBJECT DeviceObject, struct _CREATE_DISK *Disk)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS PartitionTable; // ebx
  _QWORD v6[48]; // [rsp+20h] [rbp-198h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[47] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  PartitionTable = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( PartitionTable >= 0 )
    PartitionTable = SC_DISK::CreatePartitionTable((SC_DISK *)v6, Disk);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return PartitionTable;
}

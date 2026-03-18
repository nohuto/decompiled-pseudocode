/*
 * XREFs of IoCreateDisk @ 0x140889680
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x1405C0E04 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x1405C0F14 (--1SC_DISK@@UEAA@XZ.c)
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1405C1038 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1408894F8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoCreateDisk(PDEVICE_OBJECT DeviceObject, struct _CREATE_DISK *Disk)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS PartitionTable; // ebx
  _QWORD v6[46]; // [rsp+20h] [rbp-188h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[44] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  PartitionTable = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( PartitionTable >= 0 )
    PartitionTable = SC_DISK::CreatePartitionTable((SC_DISK *)v6, Disk);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return PartitionTable;
}

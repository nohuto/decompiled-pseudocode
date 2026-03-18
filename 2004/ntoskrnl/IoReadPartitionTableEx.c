/*
 * XREFs of IoReadPartitionTableEx @ 0x14088AD20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x1405C1524 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x1405C1634 (--1SC_DISK@@UEAA@XZ.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C1AF8 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14088A818 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoReadPartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX **DriveLayout)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS PartitionTable; // ebx
  _QWORD v6[46]; // [rsp+20h] [rbp-188h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[44] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  PartitionTable = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( PartitionTable >= 0 )
    PartitionTable = SC_DISK::ReadPartitionTable((SC_DISK *)v6, (struct SC_DISK_LAYOUT **)DriveLayout);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return PartitionTable;
}

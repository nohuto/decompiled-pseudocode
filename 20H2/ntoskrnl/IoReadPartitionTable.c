/*
 * XREFs of IoReadPartitionTable @ 0x1408906A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x1405C51A4 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x1405C52B4 (--1SC_DISK@@UEAA@XZ.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C5778 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140890368 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  _QWORD *v6; // r9
  struct _DEVICE_OBJECT *v7; // r10
  NTSTATUS v8; // edi
  int PartitionTable; // eax
  DWORD *v10; // rbx
  SIZE_T v11; // rbp
  struct _DRIVE_LAYOUT_INFORMATION *PoolWithTag; // rax
  __int64 v13; // r8
  struct _DRIVE_LAYOUT_INFORMATION *v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // r10d
  PVOID P; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD v20[46]; // [rsp+30h] [rbp-198h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v20);
  v20[44] = 0LL;
  P = 0LL;
  *v6 = 0LL;
  v20[0] = &NT_DISK::`vftable';
  v8 = NT_DISK::Initialize((NT_DISK *)v20, v7);
  if ( v8 >= 0 )
  {
    PartitionTable = SC_DISK::ReadPartitionTable((SC_DISK *)v20, (struct SC_DISK_LAYOUT **)&P);
    v10 = (DWORD *)P;
    v8 = PartitionTable;
    if ( PartitionTable >= 0 )
    {
      if ( *(_DWORD *)P == 1 )
      {
        v8 = -1073741637;
      }
      else
      {
        v11 = (unsigned int)(144 * *((_DWORD *)P + 1) + 48);
        PoolWithTag = (struct _DRIVE_LAYOUT_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x54506F49u);
        *PartitionBuffer = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v11);
          v13 = 0LL;
          (*PartitionBuffer)->PartitionCount = v10[1];
          for ( (*PartitionBuffer)->Signature = v10[2]; (unsigned int)v13 < v10[1]; v13 = (unsigned int)(v13 + 1) )
          {
            v14 = *PartitionBuffer;
            v15 = (unsigned int)v13;
            if ( ReturnRecognizedPartitions )
            {
              v16 = LOBYTE(v10[36 * v13 + 20]);
              if ( (unsigned __int8)v16 <= 0xFu )
              {
                v17 = 32801;
                if ( _bittest(&v17, v16) )
                  continue;
              }
            }
            v14->PartitionEntry[v15].StartingOffset.QuadPart = *(_QWORD *)&v10[36 * v13 + 14];
            v14->PartitionEntry[v15].PartitionLength.QuadPart = *(_QWORD *)&v10[36 * v13 + 16];
            v14->PartitionEntry[v15].HiddenSectors = v10[36 * v13 + 21];
            v14->PartitionEntry[v15].PartitionNumber = v10[36 * v13 + 18];
            v14->PartitionEntry[v15].PartitionType = v10[36 * v13 + 20];
            v14->PartitionEntry[v15].BootIndicator = BYTE1(v10[36 * v13 + 20]);
            v14->PartitionEntry[v15].RecognizedPartition = BYTE2(v10[36 * v13 + 20]);
            v14->PartitionEntry[v15].RewritePartition = v10[36 * v13 + 19];
          }
        }
        else
        {
          v8 = -1073741670;
        }
      }
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  v20[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v20);
  return v8;
}

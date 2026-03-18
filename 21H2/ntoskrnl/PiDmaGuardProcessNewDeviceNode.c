/*
 * XREFs of PiDmaGuardProcessNewDeviceNode @ 0x140749848
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PipDmgDestroyIommuExtension @ 0x140749814 (PipDmgDestroyIommuExtension.c)
 *     PiIommuGetInterface @ 0x1407498EC (PiIommuGetInterface.c)
 *     PiIommuAllocateExtension @ 0x14084C604 (PiIommuAllocateExtension.c)
 */

__int64 __fastcall PiDmaGuardProcessNewDeviceNode(ULONG_PTR MaxDataSize)
{
  unsigned int Extension; // ebx
  __int64 v4; // rax
  _QWORD v5[12]; // [rsp+30h] [rbp-68h] BYREF

  memset(v5, 0, 0x58uLL);
  PipDmgDestroyIommuExtension(MaxDataSize);
  if ( (int)PiIommuGetInterface(*(_QWORD *)(MaxDataSize + 32)) >= 0 )
  {
    if ( *(_QWORD *)(MaxDataSize + 720) )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x310);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v4 = *(_QWORD *)(MaxDataSize + 16);
      if ( v4 && *(_WORD *)(v4 + 56) )
      {
        IoAddTriageDumpDataBlock(v4 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x11uLL, MaxDataSize, *(_QWORD *)(MaxDataSize + 720), *(unsigned int *)(MaxDataSize + 704));
    }
    Extension = PiIommuAllocateExtension(MaxDataSize, v5, MaxDataSize + 720);
    if ( v5[3] )
      ((void (__fastcall *)(_QWORD))v5[3])(v5[1]);
  }
  else
  {
    return 0;
  }
  return Extension;
}

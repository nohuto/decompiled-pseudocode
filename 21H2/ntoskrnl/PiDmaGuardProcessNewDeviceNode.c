/*
 * XREFs of PiDmaGuardProcessNewDeviceNode @ 0x1407657A0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PiIommuGetInterface @ 0x140765838 (PiIommuGetInterface.c)
 *     PipDmgDestroyIommuExtension @ 0x140766084 (PipDmgDestroyIommuExtension.c)
 *     PiIommuPutInterface @ 0x1407660B8 (PiIommuPutInterface.c)
 *     PiIommuAllocateExtension @ 0x1407660DC (PiIommuAllocateExtension.c)
 */

__int64 __fastcall PiDmaGuardProcessNewDeviceNode(ULONG_PTR MaxDataSize)
{
  unsigned int Extension; // edi
  __int64 v4; // rax
  _BYTE v5[80]; // [rsp+30h] [rbp-58h] BYREF

  memset(v5, 0, sizeof(v5));
  PipDmgDestroyIommuExtension(MaxDataSize);
  Extension = 0;
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
    PiIommuPutInterface(v5);
  }
  return Extension;
}

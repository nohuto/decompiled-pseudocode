/*
 * XREFs of BiGetSystemPartition @ 0x140773B8C
 * Callers:
 *     BcdGetSystemStorePath @ 0x1407700D4 (BcdGetSystemStorePath.c)
 * Callees:
 *     SyspartGetFirmwarePartition @ 0x140773C18 (SyspartGetFirmwarePartition.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetSystemPartition(_QWORD *a1)
{
  int FirmwarePartition; // eax
  int v3; // ebx
  PVOID PoolWithTag; // rax
  void *v5; // rdi

  FirmwarePartition = SyspartGetFirmwarePartition(0LL);
  v3 = FirmwarePartition;
  if ( FirmwarePartition == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x4B444342u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v3 = SyspartGetFirmwarePartition(PoolWithTag);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0x4B444342u);
      else
        *a1 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( FirmwarePartition >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}

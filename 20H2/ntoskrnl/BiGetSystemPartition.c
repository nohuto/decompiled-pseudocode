/*
 * XREFs of BiGetSystemPartition @ 0x14078218C
 * Callers:
 *     BcdGetSystemStorePath @ 0x14077E6D4 (BcdGetSystemStorePath.c)
 * Callees:
 *     SyspartGetFirmwarePartition @ 0x140782218 (SyspartGetFirmwarePartition.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetSystemPartition(_QWORD *a1)
{
  int FirmwarePartition; // eax
  int v3; // ebx
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(NumberOfBytes) = 0;
  FirmwarePartition = SyspartGetFirmwarePartition(0LL, 0LL, &NumberOfBytes);
  v3 = FirmwarePartition;
  if ( FirmwarePartition == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v3 = SyspartGetFirmwarePartition(PoolWithTag, (unsigned int)NumberOfBytes, &NumberOfBytes);
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

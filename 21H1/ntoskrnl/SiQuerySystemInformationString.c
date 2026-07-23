/*
 * XREFs of SiQuerySystemInformationString @ 0x140771864
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x140771808 (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x14096ED18 (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemInformationString(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  NTSTATUS SystemInformation; // eax
  NTSTATUS v9; // ebx
  const void **PoolWithTag; // rax
  const void **v11; // rdi
  unsigned int v12; // eax
  ULONG NumberOfBytes[10]; // [rsp+20h] [rbp-28h] BYREF

  NumberOfBytes[0] = 0;
  SystemInformation = ZwQuerySystemInformation(SystemInformationClass, 0LL, 0, NumberOfBytes);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4B505953u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = ZwQuerySystemInformation(SystemInformationClass, PoolWithTag, NumberOfBytes[0], NumberOfBytes);
      if ( v9 >= 0 )
      {
        v12 = *(unsigned __int16 *)v11 + 2;
        *a4 = v12;
        if ( v12 <= a3 )
          memmove(a2, v11[1], v12);
        else
          v9 = -1073741789;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemInformation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}

/*
 * XREFs of IopFindSystemDevice @ 0x14089B174
 * Callers:
 *     IoQuerySystemDeviceName @ 0x14061284C (IoQuerySystemDeviceName.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x140613E88 (SiGetSystemDeviceName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopFindSystemDevice(__int64 a1, _QWORD *a2)
{
  int SystemDeviceName; // eax
  int v4; // ebx
  PVOID PoolWithTag; // rax
  void *v6; // rdi
  unsigned int NumberOfBytes; // [rsp+30h] [rbp+8h] BYREF
  int NumberOfBytes_4; // [rsp+34h] [rbp+Ch]

  NumberOfBytes_4 = HIDWORD(a1);
  NumberOfBytes = 0;
  SystemDeviceName = SiGetSystemDeviceName(
                       (__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk,
                       0LL,
                       0,
                       &NumberOfBytes);
  v4 = SystemDeviceName;
  if ( SystemDeviceName == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x44536F49u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v4 = SiGetSystemDeviceName(
             (__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk,
             PoolWithTag,
             NumberOfBytes,
             &NumberOfBytes);
      if ( v4 >= 0 )
        *a2 = v6;
      else
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemDeviceName >= 0 )
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v4;
}

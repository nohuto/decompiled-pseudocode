/*
 * XREFs of SiGetBiosSystemDisk @ 0x140768900
 * Callers:
 *     SiGetBiosSystemPartition @ 0x140768614 (SiGetBiosSystemPartition.c)
 *     SiGetSystemDisk @ 0x140768830 (SiGetSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQuerySymbolicLinkObject @ 0x1403F6180 (ZwQuerySymbolicLinkObject.c)
 *     SiOpenArcNameObject @ 0x140768A08 (SiOpenArcNameObject.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140768A94 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiGetBiosSystemDisk(wchar_t **a1)
{
  wchar_t *v1; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG ReturnedLength; // [rsp+58h] [rbp+28h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+30h]

  ReturnedLength = 0;
  v1 = 0LL;
  DestinationString = 0LL;
  LinkHandle = 0LL;
  if ( !(unsigned __int8)SiIsWinPeHardDiskZeroUfdBoot()
    || (v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v3 == -1073740718) )
  {
    v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  }
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v4 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v3 = v4;
    if ( v4 == -1073741789 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2LL, 0x4B505953u);
      v1 = PoolWithTag;
      if ( PoolWithTag )
      {
        DestinationString.Buffer = PoolWithTag;
        DestinationString.MaximumLength = ReturnedLength;
        v3 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v3 >= 0 )
        {
          v1[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = v1;
        }
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else if ( v4 >= 0 )
    {
      v3 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v3 < 0 && v1 )
    ExFreePoolWithTag(v1, 0);
  return (unsigned int)v3;
}

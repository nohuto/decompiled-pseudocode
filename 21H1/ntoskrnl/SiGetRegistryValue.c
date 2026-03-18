/*
 * XREFs of SiGetRegistryValue @ 0x1406D1FA4
 * Callers:
 *     SiIsWinPEBoot @ 0x1406D1D00 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x1406D1F28 (SiGetBootDeviceNameFromRegistry.c)
 *     SiDisambiguateSystemDevice @ 0x14096F27C (SiDisambiguateSystemDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SiOpenRegistryKey @ 0x1406D2118 (SiOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, _QWORD *a5, ULONG *a6)
{
  _QWORD *v6; // r15
  ULONG *v7; // r14
  _DWORD *v8; // rsi
  HANDLE v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  _DWORD *PoolWithTag; // rax
  PVOID v17; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG v20; // [rsp+70h] [rbp+30h] BYREF
  int v21; // [rsp+74h] [rbp+34h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF

  v21 = HIDWORD(a1);
  v6 = a5;
  v7 = a6;
  v20 = 0;
  v8 = 0LL;
  ResultLength = 0;
  v9 = 0LL;
  *a5 = 0LL;
  *v7 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !a3 || (v13 = SiOpenRegistryKey(v11, a3, v12, &Handle), v9 = Handle, v14 = v13, v13 >= 0) )
  {
    v15 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v14 = v15;
    if ( v15 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4B505953u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_16:
        v14 = -1073741670;
        goto LABEL_9;
      }
      v14 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, PoolWithTag, ResultLength, &v20);
      if ( v14 < 0 )
        goto LABEL_9;
      if ( v8[1] == 1 )
      {
        ResultLength -= 12;
        v17 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4B505953u);
        *v6 = v17;
        if ( v17 )
        {
          memmove(v17, v8 + 3, ResultLength);
          v14 = 0;
          *v7 = ResultLength;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      v14 = -1073741788;
    }
    else if ( v15 >= 0 )
    {
      v14 = -1073741823;
    }
  }
LABEL_9:
  if ( v9 )
    ZwClose(v9);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v14;
}

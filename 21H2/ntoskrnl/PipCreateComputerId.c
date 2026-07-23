/*
 * XREFs of PipCreateComputerId @ 0x140A5D698
 * Callers:
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfExW @ 0x1402F3F10 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     RtlGenerateClass5Guid @ 0x1407AC0A0 (RtlGenerateClass5Guid.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipCreateComputerId(void *a1, void *a2, unsigned __int16 **a3, unsigned int a4, int *a5)
{
  unsigned int v5; // ebp
  unsigned __int16 v9; // bx
  unsigned int v10; // r8d
  _WORD **v11; // rdx
  _WORD *v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // bx
  UCHAR *PoolWithTag; // rax
  UCHAR *Data; // rsi
  UCHAR *v17; // rdi
  ULONG DataSize; // edi
  int Class5Guid; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-118h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-108h]
  WCHAR SourceString[40]; // [rsp+60h] [rbp-F8h] BYREF
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-A8h] BYREF

  v5 = 0;
  KeyHandle = a1;
  v9 = 0;
  v10 = 0;
  DestinationString = 0LL;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = a3;
  do
  {
    v12 = *v11;
    v13 = v9 + 2;
    ++v11;
    if ( !v10 )
      v13 = v9;
    ++v10;
    v9 = *v12 + v13;
  }
  while ( v10 < a4 );
  if ( v9 > 2u )
  {
    v14 = v9 + 2;
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(PagedPool, v14, 0x6E697050u);
    Data = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = PoolWithTag;
      do
      {
        if ( v5 )
        {
          *(_WORD *)v17 = 38;
          v17 += 2;
        }
        if ( **a3 )
        {
          memmove(v17, *((const void **)*a3 + 1), **a3);
          v17 += 2 * ((unsigned __int64)**a3 >> 1);
        }
        ++v5;
        ++a3;
      }
      while ( v5 < a4 );
      *(_WORD *)v17 = 0;
      DataSize = v14;
      Class5Guid = RtlGenerateClass5Guid((__int64)qword_14000DAE0, Data, (unsigned int)v14 - 2, (__int64)a5);
      if ( Class5Guid >= 0 )
      {
        Class5Guid = PnpStringFromGuid(a5, SourceString);
        if ( Class5Guid >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          Class5Guid = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, Data, DataSize);
          if ( Class5Guid >= 0 )
          {
            if ( a2 )
            {
              Class5Guid = RtlStringCbPrintfExW(
                             pszDest,
                             0x5CuLL,
                             0LL,
                             0LL,
                             0x800u,
                             L"%ws_%ws",
                             SourceString,
                             L"amd64",
                             *(_QWORD *)&DestinationString.Length,
                             DestinationString.Buffer);
              if ( Class5Guid >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, pszDest);
                Class5Guid = ZwSetValueKey(a2, &DestinationString, 0, 1u, 0LL, 0);
              }
            }
          }
        }
      }
      ExFreePoolWithTag(Data, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Class5Guid;
}

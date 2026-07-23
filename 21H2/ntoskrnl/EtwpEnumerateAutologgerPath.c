/*
 * XREFs of EtwpEnumerateAutologgerPath @ 0x14079B524
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14079B1B4 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlNtStatusToDosError @ 0x1405E9950 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x140613DB0 (RtlWriteRegistryValue.c)
 *     EtwStartAutoLogger @ 0x14079B794 (EtwStartAutoLogger.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAutologgerPath(PCWSTR Path, const WCHAR *a2, _RTL_AVL_TABLE *a3)
{
  WCHAR *v5; // rsi
  __int64 v6; // rbx
  ULONG v7; // r13d
  PCWSTR v8; // rax
  SIZE_T v9; // r15
  WCHAR *PoolWithTag; // rbx
  NTSTATUS v11; // edi
  NTSTATUS v12; // ecx
  const WCHAR *v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ValueData; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PRTL_AVL_TABLE Table; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyInformation[72]; // [rsp+90h] [rbp-70h] BYREF

  Table = a3;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  NewElement[0] = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v6 = -1LL;
  v7 = 0;
  if ( a2 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a2[v14] );
    v15 = -1LL;
    do
      ++v15;
    while ( Path[v15] );
    v8 = Path;
    if ( v15 <= v14 )
      v8 = a2;
  }
  else
  {
    v8 = Path;
  }
  do
    ++v6;
  while ( v8[v6] );
  RtlInitUnicodeString(&DestinationString, Path);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v9 = (unsigned int)(2 * v6 + 260);
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v9, 0x74777445u);
    if ( PoolWithTag )
    {
      if ( !a2 || (v5 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v9, 0x74777445u)) != 0LL )
      {
        do
        {
          v11 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
          if ( v11 < 0 )
          {
            v12 = v11;
            if ( v11 == -2147483622 )
              v12 = 0;
            ValueData = RtlNtStatusToDosError(v12);
            v13 = a2;
            if ( !a2 )
              v13 = Path;
            RtlWriteRegistryValue(0, v13, L"Status", 4u, &ValueData, 4u);
            if ( v11 == -2147483643 || v11 == -1073741789 )
              v11 = 0;
          }
          else if ( KeyInformation[3] < 0x102u )
          {
            *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
            RtlInsertElementGenericTableAvl(Table, &KeyInformation[4], KeyInformation[3] + 2, NewElement);
            if ( NewElement[0] )
            {
              if ( !RtlStringCbPrintfW(PoolWithTag, v9, L"%ws\\%ws", Path, &KeyInformation[4])
                && (!a2 || !RtlStringCbPrintfW(v5, v9, L"%ws\\%ws", a2, &KeyInformation[4])) )
              {
                EtwStartAutoLogger((PCWSTR)&KeyInformation[4], PoolWithTag, v5);
              }
            }
          }
          ++v7;
        }
        while ( v11 >= 0 );
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
}

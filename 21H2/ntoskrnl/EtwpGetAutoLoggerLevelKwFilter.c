/*
 * XREFs of EtwpGetAutoLoggerLevelKwFilter @ 0x1407956E0
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x140794E6C (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpGetAutoLoggerLevelKwFilter(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  WCHAR *v8; // rdi
  SIZE_T v9; // r12
  wchar_t *PoolWithTag; // rax
  WCHAR *v11; // r14
  int RegistryValues; // ebx
  HANDLE v13; // rax
  wchar_t *v14; // rax
  HANDLE v15; // rax
  char *v16; // rax
  char *v17; // rbx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+80h] [rbp-80h] BYREF
  char *v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h] BYREF
  char *v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h] BYREF
  char *v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp-50h] BYREF
  char *v29; // [rsp+B8h] [rbp-48h]
  _QWORD v30[148]; // [rsp+1D0h] [rbp+D0h] BYREF

  v5 = -1LL;
  KeyHandle = 0LL;
  v6 = -1LL;
  Handle = 0LL;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  do
    ++v6;
  while ( *(_WORD *)(a1 + 2 * v6) );
  v9 = (unsigned int)(2 * v6 + 40);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  RegistryValues = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v9, L"%ws\\StackLevelKwFilter", a1);
  if ( RegistryValues )
    goto LABEL_10;
  RtlInitUnicodeString(&DestinationString, v11);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v13 = KeyHandle;
  if ( RegistryValues < 0 )
    v13 = 0LL;
  KeyHandle = v13;
  if ( a2 )
  {
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v5 + 40), 0x50777445u);
    v8 = v14;
    if ( !v14 )
      goto LABEL_11;
    RegistryValues = RtlStringCbPrintfW(v14, (unsigned int)(2 * v5 + 40), L"%ws\\StackLevelKwFilter", a2);
    if ( RegistryValues )
      goto LABEL_10;
    RtlInitUnicodeString(&DestinationString, v8);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValues = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    v15 = Handle;
    if ( RegistryValues < 0 )
      v15 = 0LL;
    Handle = v15;
  }
  if ( !KeyHandle && !Handle )
    goto LABEL_10;
  v16 = (char *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x50777445u);
  *a3 = v16;
  v17 = v16;
  if ( v16 )
  {
    memset(v30, 0, 0x498uLL);
    v23 = v17;
    LODWORD(v30[4]) = 11;
    v22 = 11;
    v30[3] = &v22;
    LODWORD(v30[11]) = 11;
    v30[2] = L"MatchAnyKeyword";
    v24 = 11;
    v30[10] = &v24;
    v30[0] = &EtwpQueryRegistryCallback;
    v30[9] = L"MatchAllKeyword";
    v30[7] = &EtwpQueryRegistryCallback;
    v25 = v17 + 8;
    v30[17] = &v26;
    v30[16] = L"Level";
    v27 = v17 + 16;
    v30[24] = &v28;
    v30[23] = L"FilterIn";
    v30[14] = &EtwpQueryRegistryCallback;
    LODWORD(v30[18]) = 4;
    v26 = 4;
    v30[21] = &EtwpQueryRegistryCallback;
    LODWORD(v30[25]) = 4;
    v28 = 4;
    v29 = v17 + 17;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v30, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( Handle )
      {
        v30[5] = *a3;
        v30[12] = v30[5] + 8LL;
        v30[19] = v30[5] + 16LL;
        v30[26] = v30[5] + 17LL;
        RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v30, 0LL);
      }
LABEL_10:
      if ( RegistryValues >= 0 )
        goto LABEL_13;
    }
  }
LABEL_11:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}

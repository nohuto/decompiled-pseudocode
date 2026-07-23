/*
 * XREFs of EtwpEnableAutoLoggerProvider @ 0x14079484C
 * Callers:
 *     EtwpEnumerateKeyProviders @ 0x1407946F0 (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlNtStatusToDosError @ 0x1405E9950 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x140613DB0 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     EtwpEnableTrace @ 0x140789EA4 (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140794E6C (EtwpGetAutoLoggerProviderFilter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpEnableAutoLoggerProvider(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r13
  WCHAR *v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  SIZE_T v13; // r12
  wchar_t *PoolWithTag; // rax
  WCHAR *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r12
  NTSTATUS RegistryValues; // eax
  const WCHAR *v19; // rdx
  WCHAR *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rcx
  UNICODE_STRING *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  SIZE_T v30; // rdi
  wchar_t *v31; // rax
  NTSTATUS v32; // eax
  HANDLE v33; // rcx
  ULONG v34; // eax
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v36; // [rsp+70h] [rbp-A0h]
  size_t v37; // [rsp+80h] [rbp-90h]
  HANDLE Handle; // [rsp+90h] [rbp-80h] BYREF
  int v39; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v40; // [rsp+9Ch] [rbp-74h] BYREF
  int v41; // [rsp+A0h] [rbp-70h] BYREF
  char v42[4]; // [rsp+A4h] [rbp-6Ch] BYREF
  ULONG ValueData; // [rsp+A8h] [rbp-68h] BYREF
  size_t v44; // [rsp+ACh] [rbp-64h] BYREF
  int v45; // [rsp+B4h] [rbp-5Ch] BYREF
  __int64 v46; // [rsp+B8h] [rbp-58h]
  __int64 v47; // [rsp+C0h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-40h] BYREF
  PVOID Src; // [rsp+D8h] [rbp-38h] BYREF
  PVOID v51; // [rsp+E0h] [rbp-30h] BYREF
  PVOID P; // [rsp+E8h] [rbp-28h] BYREF
  PVOID v53; // [rsp+F0h] [rbp-20h] BYREF
  int v54[2]; // [rsp+F8h] [rbp-18h]
  UNICODE_STRING v55; // [rsp+100h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+0h] BYREF
  __int64 v57[2]; // [rsp+140h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+150h] [rbp+40h] BYREF
  GUID Guid; // [rsp+160h] [rbp+50h] BYREF
  UNICODE_STRING UnicodeString[4]; // [rsp+170h] [rbp+60h] BYREF
  int v61; // [rsp+1B0h] [rbp+A0h] BYREF
  int *v62; // [rsp+1B8h] [rbp+A8h]
  int v63; // [rsp+1C0h] [rbp+B0h] BYREF
  int *v64; // [rsp+1C8h] [rbp+B8h]
  int v65; // [rsp+1D0h] [rbp+C0h] BYREF
  char *v66; // [rsp+1D8h] [rbp+C8h]
  int v67; // [rsp+1E0h] [rbp+D0h] BYREF
  unsigned int *v68; // [rsp+1E8h] [rbp+D8h]
  int v69; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 *v70; // [rsp+1F8h] [rbp+E8h]
  int v71; // [rsp+200h] [rbp+F0h] BYREF
  __int64 *v72; // [rsp+208h] [rbp+F8h]
  _QWORD v73[148]; // [rsp+300h] [rbp+1F0h] BYREF

  v6 = a2;
  *(_QWORD *)v54 = a1;
  v46 = a4;
  *(_QWORD *)&Guid.Data1 = a5;
  v8 = 0LL;
  v39 = 0;
  DestinationString = 0LL;
  *(_DWORD *)v42 = 0;
  v40 = 0;
  v41 = 0;
  v47 = 0LL;
  v49 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Src = 0LL;
  v45 = 0;
  v51 = 0LL;
  v55 = 0LL;
  P = 0LL;
  v44 = 0LL;
  v53 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v73, 0, 0x498uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v10 = -1LL;
  *(_OWORD *)v57 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a4 + 2 * v11) );
  v12 = -1LL;
  do
    ++v12;
  while ( a3[v12] );
  v13 = (unsigned int)(2 * (v12 + v11) + 4);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x50777445u);
  v15 = PoolWithTag;
  v16 = 4LL;
  if ( !PoolWithTag )
    goto LABEL_32;
  if ( RtlStringCbPrintfW(PoolWithTag, (unsigned int)v13, L"%ws\\%ws", v46, a3) )
    goto LABEL_32;
  RtlInitUnicodeString(&v55, v15);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v55;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    goto LABEL_32;
  v17 = *(_QWORD *)&Guid.Data1;
  if ( *(_QWORD *)&Guid.Data1 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_WORD *)(*(_QWORD *)&Guid.Data1 + 2 * v29) );
    do
      ++v10;
    while ( a3[v10] );
    v30 = (unsigned int)(2 * (v10 + v29) + 4);
    v31 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v30, 0x50777445u);
    v8 = v31;
    if ( !v31 )
      goto LABEL_32;
    if ( !RtlStringCbPrintfW(v31, (unsigned int)v30, L"%ws\\%ws", v17, a3) )
    {
      RtlInitUnicodeString(&v55, v8);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v55;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v32 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v33 = Handle;
      if ( v32 < 0 )
        v33 = 0LL;
      Handle = v33;
    }
  }
  LODWORD(v73[4]) = 4;
  v73[0] = &EtwpQueryRegistryCallback;
  v73[7] = &EtwpQueryRegistryCallback;
  v73[3] = &v61;
  v73[14] = &EtwpQueryRegistryCallback;
  v73[2] = L"Enabled";
  v73[21] = &EtwpQueryRegistryCallback;
  v62 = &v39;
  v73[28] = &EtwpQueryRegistryCallback;
  v73[10] = &v63;
  v73[9] = L"EnableProperty";
  v64 = &v41;
  v73[17] = &v65;
  v73[16] = L"EnableLevel";
  v66 = v42;
  v73[24] = &v67;
  v73[23] = L"EnableFlags";
  v68 = &v40;
  v73[31] = &v69;
  v73[30] = L"MatchAnyKeyword";
  v70 = &v47;
  v73[38] = &v71;
  v73[37] = L"MatchAllKeyword";
  LODWORD(v73[32]) = 11;
  v69 = 11;
  v73[35] = &EtwpQueryRegistryCallback;
  LODWORD(v73[39]) = 11;
  v71 = 11;
  v72 = &v49;
  v61 = 4;
  LODWORD(v73[11]) = 4;
  v63 = 4;
  LODWORD(v73[18]) = 4;
  v65 = 4;
  LODWORD(v73[25]) = 4;
  v67 = 4;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v73, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_73;
  v19 = (const WCHAR *)Handle;
  if ( Handle && !a6 )
  {
    LODWORD(v73[6]) = 4;
    v73[5] = &v39;
    LODWORD(v73[13]) = 4;
    v73[12] = &v41;
    LODWORD(v73[20]) = 4;
    v73[19] = v42;
    LODWORD(v73[27]) = 4;
    v73[26] = &v40;
    v73[33] = &v47;
    v73[40] = &v49;
    LODWORD(v73[34]) = 8;
    LODWORD(v73[41]) = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v73, 0LL);
    v19 = (const WCHAR *)Handle;
  }
  if ( RegistryValues < 0 )
    goto LABEL_73;
  if ( v39 )
  {
    v46 = 0LL;
    v20 = v8;
    if ( a6 )
      v20 = 0LL;
    Guid = 0LL;
    if ( (_DWORD)v6 )
      LOWORD(v46) = v6;
    else
      LOWORD(v46) = -1;
    EtwpGetAutoLoggerProviderFilter(v15, v20, UnicodeString, v57, &Src, &v45, &v51, (char *)&v44 + 4, &P, &v44, &v53);
    RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
    if ( RegistryValues < 0 )
      goto LABEL_73;
    v21 = *(_QWORD *)&Guid.Data1 - 0x4FA775A3E02A841CLL;
    if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL )
      v21 = *(_QWORD *)Guid.Data4 - 0x237F9BCF09AEC8AFLL;
    if ( !v21 )
      goto LABEL_55;
    v22 = *(_QWORD *)&Guid.Data1 - s_ProviderThreatInt;
    if ( *(_QWORD *)&Guid.Data1 == s_ProviderThreatInt )
      v22 = *(_QWORD *)Guid.Data4 - 0x44D38D4D0F04D8F1LL;
    if ( v22 )
    {
      v23 = *(_QWORD *)v54;
    }
    else
    {
LABEL_55:
      v23 = *(_QWORD *)v54;
      if ( *(_QWORD *)v54 != EtwpHostSiloState )
        goto LABEL_32;
      if ( (unsigned int)v6 >= *(_DWORD *)(*(_QWORD *)v54 + 16LL) )
        v28 = 1LL;
      else
        v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 456LL) + 8 * v6);
      if ( (v28 & 1) == 0 )
      {
        if ( *(_QWORD *)(v28 + 176) )
          goto LABEL_32;
        _InterlockedOr((volatile signed __int32 *)(v28 + 832), 0x4000u);
      }
    }
    v24 = v47;
    if ( !v47 )
    {
      v24 = v40;
      v47 = v40;
    }
    LODWORD(v36) = HIDWORD(v44);
    LODWORD(v37) = v44;
    LODWORD(Size) = v45;
    RegistryValues = EtwpEnableTrace(
                       v23,
                       (__int128 *)&Guid,
                       0LL,
                       v46,
                       1,
                       v42[0],
                       v24,
                       v49,
                       v41,
                       (const void **)UnicodeString,
                       (const void **)v57,
                       Src,
                       Size,
                       v51,
                       v36,
                       P,
                       v37,
                       (__int64)v53);
    v19 = (const WCHAR *)Handle;
  }
  if ( RegistryValues < 0 )
  {
LABEL_73:
    v34 = RtlNtStatusToDosError(RegistryValues);
    v19 = (const WCHAR *)Handle;
    ValueData = v34;
  }
  if ( !v19 )
    v19 = (const WCHAR *)KeyHandle;
  RtlWriteRegistryValue(0x40000000u, v19, L"Status", 4u, &ValueData, 4u);
LABEL_32:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v53 )
    ExFreePoolWithTag(v53, 0);
  v25 = UnicodeString;
  do
  {
    RtlFreeAnsiString(v25++);
    --v16;
  }
  while ( v16 );
  v26 = v57;
  v27 = 2LL;
  do
  {
    if ( *v26 )
      ExFreePoolWithTag((PVOID)*v26, 0);
    ++v26;
    --v27;
  }
  while ( v27 );
}

/*
 * XREFs of EtwpGetAutoLoggerProviderFilter @ 0x140794E6C
 * Callers:
 *     EtwpEnableAutoLoggerProvider @ 0x14079484C (EtwpEnableAutoLoggerProvider.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407954E4 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407956E0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpGetAutoLoggerProviderFilter(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        _DWORD *a10,
        __int64 a11)
{
  __int64 v11; // rsi
  WCHAR *v15; // rdi
  __int64 v16; // rax
  SIZE_T v17; // rbx
  wchar_t *PoolWithTag; // r14
  __int64 v19; // rax
  int RegistryValues; // ebx
  HANDLE v21; // rax
  _DWORD *v22; // r12
  _DWORD *v23; // r13
  _DWORD *v24; // r15
  PVOID *v25; // rsi
  PVOID *v26; // rbx
  __int64 v27; // rsi
  PVOID v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r12
  _QWORD *v31; // rdx
  int **v32; // r8
  _QWORD *v33; // r9
  _QWORD *v34; // r10
  int *v35; // rcx
  char *v36; // r11
  __int64 v37; // rsi
  const WCHAR *v38; // rdx
  __int64 v39; // r8
  __int128 *v40; // rcx
  __int64 v41; // rdx
  wchar_t *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r8
  __int16 v45; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v46; // [rsp+38h] [rbp-C8h]
  _DWORD *v47; // [rsp+40h] [rbp-C0h]
  _DWORD *v48; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int128 v54; // [rsp+70h] [rbp-90h] BYREF
  __int128 v55; // [rsp+80h] [rbp-80h] BYREF
  __int128 v56; // [rsp+90h] [rbp-70h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v61; // [rsp+F8h] [rbp-8h]
  __int64 v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  __int64 v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING *v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING *v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING *v71; // [rsp+148h] [rbp+48h]
  int v72; // [rsp+150h] [rbp+50h] BYREF
  int *v73; // [rsp+158h] [rbp+58h]
  int v74; // [rsp+160h] [rbp+60h] BYREF
  int *v75; // [rsp+168h] [rbp+68h]
  int v76; // [rsp+170h] [rbp+70h] BYREF
  int *v77; // [rsp+178h] [rbp+78h]
  int v78; // [rsp+180h] [rbp+80h] BYREF
  __int128 *v79; // [rsp+188h] [rbp+88h]
  int v80; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING *v81; // [rsp+198h] [rbp+98h]
  int v82; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 *v83; // [rsp+1A8h] [rbp+A8h] BYREF
  char v84; // [rsp+1B0h] [rbp+B0h] BYREF
  char v85; // [rsp+1B8h] [rbp+B8h] BYREF
  _QWORD v86[148]; // [rsp+270h] [rbp+170h] BYREF

  v63 = a5;
  v46 = (_DWORD *)a6;
  v11 = -1LL;
  v64 = a7;
  v47 = (_DWORD *)a8;
  v15 = 0LL;
  v61 = a9;
  v48 = a10;
  v65 = a11;
  v16 = -1LL;
  v62 = a4;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v45 = 0;
  v51 = 0;
  v49 = 0;
  DestinationString = 0LL;
  v50 = 0;
  v55 = 0LL;
  KeyHandle = 0LL;
  v54 = 0LL;
  Handle = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  do
    ++v16;
  while ( *(_WORD *)(a1 + 2 * v16) );
  v17 = (unsigned int)(2 * v16 + 18);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x50777445u);
  v19 = 2LL;
  v58 = 2LL;
  if ( !PoolWithTag )
  {
    RegistryValues = -1073741801;
    goto LABEL_11;
  }
  RegistryValues = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v17, L"%ws\\Filters", a1);
  if ( !RegistryValues )
  {
    RtlInitUnicodeString(&DestinationString, PoolWithTag);
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
    v21 = KeyHandle;
    if ( RegistryValues < 0 )
      v21 = 0LL;
    KeyHandle = v21;
    if ( a2 )
    {
      do
        ++v11;
      while ( *(_WORD *)(a2 + 2 * v11) );
      v42 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v11 + 18), 0x50777445u);
      v15 = v42;
      if ( !v42 )
      {
        RegistryValues = -1073741801;
        goto LABEL_10;
      }
      RegistryValues = RtlStringCbPrintfW(v42, (unsigned int)(2 * v11 + 18), L"%ws\\Filters", a2);
      if ( RegistryValues )
        goto LABEL_10;
      RtlInitUnicodeString(&DestinationString, v15);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      RegistryValues = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v21 = KeyHandle;
    }
    if ( v21 || Handle )
    {
      memset(v86, 0, 0x498uLL);
      v26 = (PVOID *)&v57;
      v27 = 2LL;
      do
      {
        *v26++ = ExAllocatePoolWithTag(PagedPool, 0x86uLL, 0x46777445u);
        --v27;
      }
      while ( v27 );
      v22 = v48;
      *v48 = 1024;
      v28 = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x50777445u);
      *v61 = v28;
      if ( v28 )
      {
        *((_QWORD *)&v56 + 1) = v28;
        v29 = 4LL;
        v86[0] = &EtwpQueryRegistryCallback;
        LODWORD(v86[4]) = 1;
        v86[3] = &v66;
        v66 = 1;
        v86[2] = L"ExeFilter";
        v86[5] = &v45;
        v86[10] = &v68;
        v86[9] = L"PackageIdFilter";
        v86[12] = &v45;
        v69 = a3 + 1;
        v86[17] = &v70;
        v86[16] = L"PackageRelativeAppIdFilter";
        v86[19] = &v45;
        v71 = a3 + 2;
        v86[24] = &v72;
        v86[23] = L"EventIdFilterIn";
        v73 = &v49;
        v86[31] = &v74;
        v86[30] = L"StackWalkFilterIn";
        v75 = &v50;
        v86[38] = &v76;
        v86[37] = L"Enabled";
        v77 = &v51;
        LODWORD(v56) = *v22;
        v86[45] = &v78;
        v86[44] = L"SchematizedFilters";
        v79 = &v56;
        v86[52] = &v80;
        v86[51] = L"ContainerFilter";
        v67 = a3;
        v86[7] = &EtwpQueryRegistryCallback;
        LODWORD(v86[11]) = 1;
        v68 = 1;
        v86[14] = &EtwpQueryRegistryCallback;
        LODWORD(v86[18]) = 1;
        v70 = 1;
        v86[21] = &EtwpQueryRegistryCallback;
        LODWORD(v86[25]) = 4;
        v72 = 4;
        v86[28] = &EtwpQueryRegistryCallback;
        LODWORD(v86[32]) = 4;
        v74 = 4;
        v86[35] = &EtwpQueryRegistryCallback;
        LODWORD(v86[39]) = 4;
        v76 = 4;
        v86[42] = &EtwpQueryRegistryCallback;
        LODWORD(v86[46]) = 3;
        v78 = 3;
        v86[49] = &EtwpQueryRegistryCallback;
        LODWORD(v86[53]) = 1;
        v30 = v57;
        v86[54] = &v45;
        v81 = a3 + 3;
        v80 = 1;
        if ( (_QWORD)v57 )
        {
          v86[56] = &EtwpQueryRegistryCallback;
          *((_QWORD *)&v54 + 1) = v57 + 4;
          v31 = &v86[63];
          LODWORD(v86[60]) = 3;
          v86[59] = &v82;
          v32 = (int **)&v86[66];
          v82 = 3;
          v86[58] = L"EventIds";
          v33 = &v86[65];
          LODWORD(v54) = 128;
          v83 = &v54;
          v34 = &v86[67];
          v35 = (int *)&v84;
          v36 = &v85;
        }
        else
        {
          v31 = &v86[56];
          v32 = (int **)&v86[59];
          v33 = &v86[58];
          v34 = &v86[60];
          v35 = &v82;
          v36 = (char *)&v83;
        }
        v37 = *((_QWORD *)&v57 + 1);
        if ( *((_QWORD *)&v57 + 1) )
        {
          LODWORD(v55) = 128;
          *((_QWORD *)&v55 + 1) = *((_QWORD *)&v57 + 1) + 4LL;
          *v31 = &EtwpQueryRegistryCallback;
          *v33 = L"StackWalkIds";
          *(_DWORD *)v34 = 3;
          *v35 = 3;
          *(_QWORD *)v36 = &v55;
          *v32 = v35;
        }
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v86, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_10;
        v38 = (const WCHAR *)Handle;
        if ( Handle )
        {
          v86[5] = a3->Buffer;
          LODWORD(v86[6]) = a3->Length;
          v86[12] = a3[1].Buffer;
          LODWORD(v86[13]) = a3[1].Length;
          v86[19] = a3[2].Buffer;
          LODWORD(v86[20]) = a3[2].Length;
          v86[26] = &v49;
          v86[33] = &v50;
          v86[40] = &v51;
          v86[47] = *((_QWORD *)&v56 + 1);
          LODWORD(v86[48]) = v56;
          v86[54] = a3[3].Buffer;
          LODWORD(v86[55]) = a3[3].Length;
          v43 = 8LL;
          if ( v30 )
          {
            v86[61] = *((_QWORD *)&v54 + 1);
            LODWORD(v86[62]) = v54;
            v43 = 9LL;
          }
          if ( v37 )
          {
            v44 = 7 * v43;
            v86[v44 + 5] = *((_QWORD *)&v55 + 1);
            LODWORD(v86[v44 + 6]) = v55;
          }
          RegistryValues = RtlpQueryRegistryValues(0x40000000LL, v38, (__int64)v86, 0LL);
          if ( RegistryValues < 0 )
            RegistryValues = 0;
        }
        if ( v30 )
        {
          *(_BYTE *)v30 = v49 != 0;
          *(_WORD *)(v30 + 2) = (unsigned int)v54 >> 1;
        }
        if ( v37 )
        {
          *(_BYTE *)v37 = v50 != 0;
          *(_WORD *)(v37 + 2) = (unsigned int)v55 >> 1;
        }
        v22 = v48;
        *v48 = v56;
        if ( v51 )
        {
          v39 = v62 - (_QWORD)&v57;
          v40 = &v57;
          v41 = 2LL;
          do
          {
            *(_QWORD *)((char *)v40 + v39) = *(_QWORD *)v40;
            *(_QWORD *)v40 = 0LL;
            v40 = (__int128 *)((char *)v40 + 8);
            --v41;
          }
          while ( v41 );
          v24 = v46;
          EtwpGetAutoLoggerEventNameFilter(
            (_DWORD)PoolWithTag,
            (_DWORD)v15,
            (unsigned int)L"EventNameFilter",
            v63,
            (__int64)v46);
          v23 = v47;
          EtwpGetAutoLoggerEventNameFilter(
            (_DWORD)PoolWithTag,
            (_DWORD)v15,
            (unsigned int)L"StackNameFilter",
            v64,
            (__int64)v47);
          EtwpGetAutoLoggerLevelKwFilter(PoolWithTag, v15, v65);
          v19 = 2LL;
          goto LABEL_13;
        }
        do
        {
          RtlFreeAnsiString(a3++);
          --v29;
        }
        while ( v29 );
        *v22 = 0;
      }
      else
      {
        RegistryValues = -1073741801;
      }
      v19 = 2LL;
      goto LABEL_12;
    }
  }
LABEL_10:
  v19 = 2LL;
LABEL_11:
  v22 = v48;
LABEL_12:
  v23 = v47;
  v24 = v46;
LABEL_13:
  v25 = (PVOID *)&v57;
  do
  {
    if ( *v25 )
    {
      ExFreePoolWithTag(*v25, 0);
      v19 = v58;
    }
    ++v25;
    v58 = --v19;
  }
  while ( v19 );
  if ( RegistryValues < 0 )
  {
    *v24 = 0;
    *v23 = 0;
    *v22 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}

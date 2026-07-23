/*
 * XREFs of PiDrvDbResolveFilePathKeyValues @ 0x1408B7318
 * Callers:
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B7984 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B7ABC (PiDrvDbResolveNodeFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     _PnpCtxRegEnumValue @ 0x140673004 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A4DEC (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6EC8 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7C1C (PiDrvDbResolveSystemFilePath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbResolveFilePathKeyValues(
        __int64 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        const UNICODE_STRING *a4)
{
  char v4; // r12
  unsigned int v6; // r13d
  void *v7; // r15
  SIZE_T v8; // r14
  _WORD *v9; // rsi
  UNICODE_STRING *v10; // rdi
  int v11; // eax
  int appended; // ebx
  BOOLEAN v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  ULONG v16; // r12d
  int v17; // eax
  unsigned int v18; // r13d
  unsigned __int64 v19; // rax
  const wchar_t *v20; // r13
  const WCHAR *v21; // rdi
  ULONG *v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // ecx
  const WCHAR *v25; // rdi
  unsigned __int64 v26; // rax
  ULONG v27; // eax
  int v28; // r12d
  int v29; // eax
  unsigned __int16 Length; // ax
  const void **p_UnicodeString; // rdx
  wchar_t *Buffer; // r9
  const WCHAR *v33; // rdx
  unsigned int v34; // ecx
  const WCHAR *v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  SIZE_T v39; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-71h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-61h] BYREF
  int v43; // [rsp+70h] [rbp-51h] BYREF
  ULONG v44; // [rsp+74h] [rbp-4Dh]
  HANDLE Handle; // [rsp+78h] [rbp-49h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-41h] BYREF
  HANDLE v47; // [rsp+90h] [rbp-31h] BYREF
  _WORD *v48; // [rsp+98h] [rbp-29h]
  PVOID PoolWithTag; // [rsp+A0h] [rbp-21h]
  UNICODE_STRING v50; // [rsp+A8h] [rbp-19h] BYREF
  UNICODE_STRING v51; // [rsp+B8h] [rbp-9h] BYREF
  PVOID P[10]; // [rsp+C8h] [rbp+7h] BYREF

  v4 = a2;
  v47 = 0LL;
  v39 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v40 = 0;
  PoolWithTag = 0LL;
  DestinationString = 0LL;
  v6 = 0;
  v7 = 0LL;
  v48 = 0LL;
  LODWORD(v8) = 0;
  Handle = 0LL;
  v9 = 0LL;
  P[0] = 0LL;
  v50 = 0LL;
  v43 = 0;
  v10 = a3;
  UnicodeString = 0LL;
  v51 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v51, 0LL);
  v11 = SysCtxRegOpenKey(0LL, a1, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&v47);
  appended = v11;
  if ( v11 == -1073741772 )
  {
    appended = 0;
    goto LABEL_88;
  }
  if ( v11 >= 0 )
  {
    appended = PiDrvDbQuerySystemPathWin32(v10, &DestinationString);
    if ( appended < 0 )
    {
      appended = 0;
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( (v4 & 2) != 0 )
    {
      if ( v10 )
      {
        v13 = RtlEqualUnicodeString(v10, &PiDrvDbSystemRootNt, 1u);
        v10 = 0LL;
        if ( !v13 )
          goto LABEL_17;
      }
      if ( (UNICODE_STRING *)DestinationString.Buffer != v10
        && !RtlEqualUnicodeString(&DestinationString, &PiDrvDbSystemRootWin32, 1u) )
      {
        goto LABEL_17;
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( (v4 & 1) == 0
      || !a4
      || (UNICODE_STRING *)DestinationString.Buffer == v10
      || RtlEqualUnicodeString(a4, &DestinationString, 1u) )
    {
      appended = (int)v10;
      goto LABEL_84;
    }
LABEL_17:
    if ( (int)PnpCtxRegQueryInfoKey(v14, v47, 0LL, 0LL, v10, &v39, &NumberOfBytes) >= 0 )
    {
      v8 = (unsigned int)NumberOfBytes;
      HIDWORD(v39) = NumberOfBytes;
      v6 = 2 * v39 + 2;
      v40 = v6;
      if ( 2 * (_DWORD)v39 != -2 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x62647050u);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
        {
          appended = -1073741670;
          goto LABEL_88;
        }
      }
      if ( (_DWORD)v8 )
      {
        v48 = ExAllocatePoolWithTag(PagedPool, v8, 0x62647050u);
        v9 = v48;
        if ( !v48 )
        {
LABEL_23:
          appended = -1073741670;
LABEL_84:
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
LABEL_86:
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          goto LABEL_88;
        }
      }
    }
    v16 = (unsigned int)v10;
LABEL_25:
    v44 = v16;
    LODWORD(NumberOfBytes) = v6 >> 1;
    LODWORD(v39) = v8;
    v17 = PnpCtxRegEnumValue(v15, v47, v16, v7, &NumberOfBytes, &v43, v9, (unsigned int *)&v39);
    if ( v17 == -2147483622 )
      goto LABEL_84;
    if ( v17 == -1073741789 )
    {
      if ( (unsigned int)NumberOfBytes > v6 >> 1 )
      {
        v18 = 2 * NumberOfBytes;
        v40 = 2 * NumberOfBytes;
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x62647050u);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
        {
          appended = -1073741670;
          goto LABEL_86;
        }
      }
      if ( (unsigned int)v39 <= (unsigned int)v8 )
        goto LABEL_35;
      v8 = (unsigned int)v39;
      HIDWORD(v39) = v39;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v48 = ExAllocatePoolWithTag(PagedPool, v8, 0x62647050u);
      v9 = v48;
      if ( v48 )
      {
LABEL_35:
        --v16;
        goto LABEL_80;
      }
      goto LABEL_23;
    }
    if ( v17 < 0 )
      goto LABEL_82;
    if ( v43 != 7 )
      goto LABEL_80;
    if ( (unsigned int)v39 < 4 )
      goto LABEL_80;
    v19 = (unsigned __int64)(unsigned int)v39 >> 1;
    if ( v9[v19 - 1] )
      goto LABEL_80;
    if ( v9[v19 - 2] )
      goto LABEL_80;
    v17 = SysCtxRegOpenKey(0LL, a1, (__int64)v7, 0, 0x2001Fu, (__int64)&Handle);
    if ( v17 == -1073741772 )
      goto LABEL_80;
    if ( v17 < 0 )
    {
LABEL_82:
      appended = v17;
      goto LABEL_84;
    }
    v20 = v9;
    if ( !*v9 )
      goto LABEL_79;
    while ( 1 )
    {
      v21 = &word_1407D7CE0;
      if ( wcsicmp(v20, L" ") )
        v21 = v20;
      NumberOfBytes = (SIZE_T)v21;
      if ( IopGetRegistryValue(Handle, v21, 0, P) >= 0 )
        break;
LABEL_75:
      v37 = -1LL;
      do
        ++v37;
      while ( v20[v37] );
      v20 += v37 + 1;
      if ( !*v20 )
      {
LABEL_78:
        v9 = v48;
        v7 = PoolWithTag;
        LODWORD(v8) = HIDWORD(v39);
        v16 = v44;
LABEL_79:
        ZwClose(Handle);
        if ( appended < 0 )
          goto LABEL_84;
LABEL_80:
        v6 = v40;
        ++v16;
        goto LABEL_25;
      }
    }
    v22 = (ULONG *)P[0];
    v23 = *((_DWORD *)P[0] + 1);
    if ( v23 )
    {
      if ( v23 <= 2 )
      {
        v34 = *((_DWORD *)P[0] + 3);
        v35 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
        if ( v34 - 3 > 0xFFFB || v35[((unsigned __int64)v34 >> 1) - 1] )
          goto LABEL_74;
        RtlInitUnicodeString(&v50, v35);
        UnicodeString.Length = 0;
        v36 = PiDrvDbResolveSystemFilePath(
                &v50,
                a2,
                a3,
                (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                a4,
                &UnicodeString);
        appended = v36;
        if ( v36 == -1073741275 || v36 == -1073741637 )
        {
          appended = 0;
          goto LABEL_74;
        }
        if ( v36 < 0 )
          goto LABEL_74;
        v33 = v21;
        Buffer = UnicodeString.Buffer;
        v27 = UnicodeString.Length + 2;
      }
      else
      {
        if ( v23 != 7 )
          goto LABEL_74;
        v24 = *((_DWORD *)P[0] + 3);
        v25 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
        if ( v24 - 4 > 0xFFFA )
          goto LABEL_74;
        v26 = (unsigned __int64)v24 >> 1;
        if ( v25[v26 - 1] || v25[v26 - 2] )
          goto LABEL_74;
        LOWORD(v27) = 0;
        v28 = 0;
        v51.Length = 0;
        if ( *v25 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&v50, v25);
            UnicodeString.Length = 0;
            v29 = PiDrvDbResolveSystemFilePath(
                    &v50,
                    a2,
                    a3,
                    (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                    a4,
                    &UnicodeString);
            appended = v29;
            if ( v29 == -1073741275 || v29 == -1073741637 )
            {
              Length = 0;
              UnicodeString.Length = 0;
            }
            else
            {
              if ( v29 < 0 )
                goto LABEL_74;
              Length = UnicodeString.Length;
              ++v28;
            }
            p_UnicodeString = (const void **)&UnicodeString;
            if ( !Length )
              p_UnicodeString = (const void **)&v50;
            appended = PiDevCfgAppendMultiSz(&v51, p_UnicodeString, 0LL, 1);
            if ( appended < 0 )
              goto LABEL_74;
            v25 += ((unsigned __int64)v50.Length >> 1) + 1;
            if ( !*v25 )
            {
              LOWORD(v27) = v51.Length;
              break;
            }
          }
        }
        if ( !v28 )
          goto LABEL_74;
        Buffer = v51.Buffer;
        v33 = (const WCHAR *)NumberOfBytes;
        v27 = (unsigned __int16)v27;
      }
      appended = RegRtlSetValue(Handle, v33, v22[1], Buffer, v27);
    }
LABEL_74:
    ExFreePoolWithTag(v22, 0);
    if ( appended < 0 )
      goto LABEL_78;
    goto LABEL_75;
  }
LABEL_88:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v51);
  if ( v47 )
    ZwClose(v47);
  return (unsigned int)appended;
}

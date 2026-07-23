/*
 * XREFs of DrvDbCreateDatabaseNode @ 0x1407A4468
 * Callers:
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735BC4 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbOpenContext @ 0x1407A420C (DrvDbOpenContext.c)
 *     DrvDbRegisterDatabase @ 0x1407A43D0 (DrvDbRegisterDatabase.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14072E2A8 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DrvDbCreateDatabaseNode(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        wchar_t *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // r13
  _QWORD *v13; // rbx
  wchar_t *PoolWithTag; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  struct _ERESOURCE *v17; // rax
  int v18; // edi
  bool v19; // zf
  __int64 v21; // rax
  SIZE_T v22; // rdi
  __int64 *v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  void *v26; // rbp
  __int64 dwFlags; // [rsp+20h] [rbp-68h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-60h]
  void *v29; // [rsp+50h] [rbp-38h] BYREF
  int v30; // [rsp+A8h] [rbp+20h] BYREF

  v8 = a8;
  v29 = 0LL;
  v30 = 0;
  *a8 = 0LL;
  v13 = 0LL;
  if ( a4 )
  {
    PoolWithTag = a4;
  }
  else
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a2[v21] );
    v22 = (unsigned int)(2 * v21 + 68);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x42444450u);
    if ( !PoolWithTag )
      goto LABEL_25;
    v18 = RtlStringCchPrintfExW(
            PoolWithTag,
            v22 >> 1,
            0LL,
            0LL,
            0x800u,
            L"%ws\\%ws\\%ws",
            L"\\REGISTRY\\MACHINE",
            a2,
            L"DriverDatabase");
    if ( v18 < 0 )
      goto LABEL_13;
  }
  v15 = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x42444450u);
  v13 = v15;
  if ( !v15 )
  {
LABEL_25:
    v18 = -1073741801;
    goto LABEL_13;
  }
  memset(v15, 0, 0xA0uLL);
  *((_DWORD *)v13 + 15) = *(_DWORD *)(a1 + 8);
  *((_DWORD *)v13 + 14) = a5;
  v13[9] = a6;
  v13[10] = a7;
  *((_DWORD *)v13 + 16) = 0x10000;
  *((_DWORD *)v13 + 8) = a3;
  if ( RtlCreateUnicodeString((PUNICODE_STRING)v13 + 1, a2)
    && RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 5), PoolWithTag) )
  {
    v17 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    v13[18] = v17;
    if ( v17 )
    {
      v18 = ExInitializeResourceLite(v17);
      if ( v18 < 0 )
      {
        ExFreePoolWithTag((PVOID)v13[18], 0);
        v13[18] = 0LL;
      }
    }
    else
    {
      v18 = -1073741670;
    }
    if ( v18 >= 0 )
    {
      v16 = *(_QWORD **)(a1 + 24);
      if ( *v16 != a1 + 16 )
        goto LABEL_40;
      v19 = (a5 & 0x10) == 0;
      *v13 = a1 + 16;
      v13[1] = v16;
      *v16 = v13;
      *(_QWORD *)(a1 + 24) = v13;
      if ( v19
        || (v23 = *(__int64 **)(a1 + 32)) == 0LL
        || (LOBYTE(pszFormat) = 1,
            LODWORD(dwFlags) = 0x2000000,
            v18 = DrvDbOpenObjectRegKey((__int64 *)a1, v23, 1u, a2, dwFlags, pszFormat, &v29, &v30, 0LL),
            v18 >= 0)
        && (v30 != 1
         || (v18 = DrvDbSetDriverDatabaseMappedProperty(
                     a1,
                     a2,
                     v29,
                     (__int64)&DEVPKEY_DriverDatabase_RegistryPath,
                     0x12u,
                     (const WCHAR *)v13[6],
                     (unsigned int)*((unsigned __int16 *)v13 + 20) + 2),
             v18 >= 0)) )
      {
        *v8 = v13;
        v13 = 0LL;
      }
    }
  }
  else
  {
    v18 = -1073741670;
  }
LABEL_13:
  if ( v29 )
    PnpCtxRegCloseKey((__int64)v16, v29);
  if ( v13 )
  {
    v24 = *v13;
    if ( !*v13 )
    {
LABEL_37:
      v26 = (void *)v13[18];
      if ( v26 )
      {
        ExDeleteResourceLite((PERESOURCE)v13[18]);
        ExFreePoolWithTag(v26, 0);
      }
      RtlFreeAnsiString((PUNICODE_STRING)v13 + 1);
      RtlFreeAnsiString((PUNICODE_STRING)(v13 + 5));
      ExFreePoolWithTag(v13, 0);
      goto LABEL_16;
    }
    if ( *(_QWORD **)(v24 + 8) == v13 )
    {
      v25 = (_QWORD *)v13[1];
      if ( (_QWORD *)*v25 == v13 )
      {
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        goto LABEL_37;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_16:
  if ( PoolWithTag && PoolWithTag != a4 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v18;
}

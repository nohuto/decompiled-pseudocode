/*
 * XREFs of DrvDbGetDriverDatabaseMappedProperty @ 0x1407359F0
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140630C80 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbLoadDatabaseNode @ 0x140633564 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406303EC (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x1406F1CEC (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735BC4 (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int RegValueMappedProperty; // ebx
  const UNICODE_STRING *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r10d
  unsigned int v16; // r9d
  __int64 **v17; // rdx
  __int64 *v18; // r8
  __int64 (**v19)[3]; // r12
  __int64 (**v20)[3]; // r9
  unsigned int v21; // edx
  __int64 *v22; // r8
  __int64 v23; // rdi
  int v24; // eax
  HANDLE v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edx
  int DatabaseNode; // eax
  int v31; // eax
  __int64 v32; // rax
  _BYTE *v33; // rdx
  bool v34; // cf
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // cl
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 (**v41)[3]; // r9
  unsigned int v42; // edx
  __int64 *v43; // r8
  __int64 v44; // rcx
  const UNICODE_STRING *v45; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v45 = 0LL;
  *a5 = 0;
  *a8 = 0;
  RegValueMappedProperty = 0;
  v12 = 0LL;
  v13 = wcsicmp(a2, L"*");
  v14 = 0LL;
  if ( !v13 )
  {
    RegValueMappedProperty = -1073741637;
    goto LABEL_23;
  }
  v15 = *(_DWORD *)(a4 + 16);
  if ( v15 == 2 )
  {
    v27 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v27 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v27 )
    {
      *a5 = 18;
      v28 = -1LL;
      do
        ++v28;
      while ( a2[v28] );
      v29 = 2 * v28 + 2;
      *a8 = v29;
      if ( a6 && a7 >= v29 )
      {
        memmove(a6, a2, v29);
        goto LABEL_23;
      }
      goto LABEL_41;
    }
  }
  v16 = 0;
  v17 = off_140C02CB0;
  do
  {
    v18 = *v17;
    if ( *((_DWORD *)*v17 + 4) == v15 )
    {
      v14 = *v18 - *(_QWORD *)a4;
      if ( *v18 == *(_QWORD *)a4 )
        v14 = v18[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v45);
        RegValueMappedProperty = DatabaseNode;
        if ( DatabaseNode < 0 )
          goto LABEL_23;
        v31 = *(_DWORD *)(a4 + 16);
        switch ( v31 )
        {
          case 5:
            v32 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
              v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v32 )
              goto LABEL_23;
            v33 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( a6 && a7 )
            {
              v34 = v45[5].Buffer != 0LL;
LABEL_65:
              *v33 = -v34;
              goto LABEL_23;
            }
            goto LABEL_41;
          case 6:
            v35 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
              v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v35 )
              goto LABEL_23;
            *a5 = 17;
            *a8 = 1;
            if ( a6 && a7 )
            {
              *a6 = (*(_QWORD *)(a1 + 40) != (_QWORD)v45) - 1;
              goto LABEL_23;
            }
            goto LABEL_41;
          case 7:
            v36 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v36 )
              goto LABEL_23;
            v33 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
              goto LABEL_41;
            v37 = (__int64)v45[3].Buffer & 4;
            break;
          case 11:
            v38 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
              v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v38 )
              goto LABEL_23;
            *a5 = 7;
            *a8 = 4;
            if ( a6 && a7 >= 4 )
            {
              *(_DWORD *)a6 = *(_DWORD *)(a1 + 12);
              goto LABEL_23;
            }
            goto LABEL_41;
          case 15:
            v39 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_LoadStatus;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_LoadStatus )
              v39 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v39 )
              goto LABEL_23;
            *a5 = 24;
            *a8 = 4;
            if ( a6 && a7 >= 4 )
            {
              *(_DWORD *)a6 = v45[9].Buffer;
              goto LABEL_23;
            }
            goto LABEL_41;
          case 23:
            v40 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Extended;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Extended )
              v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v40 )
              goto LABEL_23;
            v33 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
            {
LABEL_41:
              RegValueMappedProperty = -1073741789;
              goto LABEL_23;
            }
            v37 = (__int64)v45[3].Buffer & 0x10;
            break;
          default:
            goto LABEL_23;
        }
        v34 = v37 != 0;
        goto LABEL_65;
      }
    }
    ++v16;
    ++v17;
  }
  while ( v16 < 7 );
  v19 = 0LL;
  v20 = &off_140004BA0;
  v21 = 0;
  while ( 1 )
  {
    v22 = (__int64 *)*v20;
    if ( LODWORD((**v20)[2]) == v15 )
    {
      v14 = *v22 - *(_QWORD *)a4;
      if ( *v22 == *(_QWORD *)a4 )
        v14 = v22[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
        break;
    }
    ++v21;
    v20 += 5;
    if ( v21 >= 0xC )
      goto LABEL_14;
  }
  v14 = 5LL * v21;
  v19 = &off_140004BA0 + 5 * v21;
LABEL_14:
  if ( v19 )
  {
    v23 = a1;
LABEL_16:
    if ( a3 && (!v12 || ((__int64)v12[3].Buffer & 0x10) == 0)
      || (!v12 || ((__int64)v12[3].Buffer & 0x10) == 0
        ? (v24 = DrvDbOpenDriverDatabaseRegKey(v23, a2, 1LL, 0LL, &Handle, 0LL))
        : (v24 = DrvDbOpenObjectRegKey((__int64 *)v23, *(__int64 **)(v23 + 32), 1u, a2, 1, 0, &Handle, 0LL, 0LL)),
          RegValueMappedProperty = v24,
          v24 >= 0) )
    {
      v25 = a3;
      if ( Handle )
        v25 = Handle;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v14, v25, (__int64)v19, a5, a6, a7, a8);
    }
  }
  else
  {
    v19 = 0LL;
    v41 = &off_140009E50;
    v42 = 0;
    while ( 1 )
    {
      v43 = (__int64 *)*v41;
      if ( LODWORD((**v41)[2]) == v15 )
      {
        v44 = *v43 - *(_QWORD *)a4;
        if ( *v43 == *(_QWORD *)a4 )
          v44 = v43[1] - *(_QWORD *)(a4 + 8);
        if ( !v44 )
          break;
      }
      ++v42;
      v41 += 5;
      if ( v42 >= 4 )
        goto LABEL_94;
    }
    v19 = &off_140009E50 + 5 * v42;
LABEL_94:
    if ( v19 )
    {
      v23 = a1;
      RegValueMappedProperty = DrvDbFindDatabaseNode(a1, a2, &v45);
      if ( RegValueMappedProperty >= 0 )
      {
        v12 = v45;
        goto LABEL_16;
      }
    }
    else
    {
      RegValueMappedProperty = -1073741802;
    }
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}

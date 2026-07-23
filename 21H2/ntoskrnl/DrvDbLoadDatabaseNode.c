/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x140633564
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406354A8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14072E2A8 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735BC4 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbOpenContext @ 0x1407A420C (DrvDbOpenContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _PnpCtxRegCreateTree @ 0x140633088 (_PnpCtxRegCreateTree.c)
 *     DrvDbUnloadDatabaseNode @ 0x140633480 (DrvDbUnloadDatabaseNode.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1407359F0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097EADC (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14097EE74 (DrvDbInitializeDatabaseNodeVersion.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(__int64 *a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  int v6; // r14d
  __int64 (__fastcall *v7)(__int64 *, _QWORD, __int64, __int64, __int64 *, _QWORD); // r13
  int v8; // eax
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // eax
  PVOID v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  int *v18; // r12
  __int64 v19; // rdx
  int DriverDatabaseMappedProperty; // eax
  unsigned int *v21; // r14
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  _QWORD *v28; // [rsp+30h] [rbp-20h]
  __int64 v29; // [rsp+38h] [rbp-18h]
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h]
  int v32; // [rsp+98h] [rbp+48h] BYREF
  int v33; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 56);
  v34 = 0LL;
  P = 0LL;
  CachedContextBaseKey = 0;
  v30 = 0LL;
  v33 = 0;
  v32 = 1;
  v6 = 0;
  v7 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64, __int64 *, _QWORD))(a2 + 72);
    if ( v7 )
    {
      v30 = a2 + 88;
      v8 = v7(a1, *(_QWORD *)(a2 + 24), 1LL, 1LL, &v30, *(_QWORD *)(a2 + 80));
      if ( v8 == -1073741822 )
      {
        v7 = 0LL;
      }
      else if ( v8 < 0 )
      {
        CachedContextBaseKey = v8;
        goto LABEL_7;
      }
    }
    v9 = (_QWORD *)(a2 + 88);
    if ( !*(_QWORD *)(a2 + 88) )
    {
      v25 = *(unsigned int *)(a2 + 32);
      if ( (_DWORD)v25 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v25, &v34);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        v6 = v34;
      }
      LODWORD(v26) = 0;
      if ( *a1 )
        v26 = *(_QWORD *)(*a1 + 224);
      CachedContextBaseKey = SysCtxRegOpenKey(v26, v6, *(_QWORD *)(a2 + 48), 0, 0x2000000, a2 + 88);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_7;
    }
LABEL_6:
    v10 = *(_DWORD *)(a2 + 56);
    if ( (v10 & 8) != 0 )
    {
LABEL_7:
      if ( v7 )
      {
        v11 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, __int64, __int64 *, _QWORD, _QWORD *, __int64))v7)(
                a1,
                *(_QWORD *)(a2 + 24),
                1LL,
                2LL,
                &v30,
                *(_QWORD *)(a2 + 80),
                v28,
                v29);
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v11;
      }
      goto LABEL_9;
    }
    v17 = *v9;
    v18 = (int *)(a2 + 60);
    v19 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 56) = v10 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     a1,
                                     v19,
                                     v17,
                                     DEVPKEY_DriverDatabase_Version,
                                     &v32,
                                     a2 + 60,
                                     4,
                                     &v33);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v27 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)(v27 - 1) <= 0xFFFFFFFD )
      {
        *v18 = v27;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_28:
        v21 = (unsigned int *)(a2 + 64);
        CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                                 a1,
                                 *(_QWORD *)(a2 + 24),
                                 *v9,
                                 DEVPKEY_DriverDatabase_SchemaVersion,
                                 &v32,
                                 a2 + 64,
                                 4,
                                 &v33);
        if ( CachedContextBaseKey < 0 )
        {
          *v21 = 0;
          CachedContextBaseKey = 0;
        }
        else if ( v32 != 7 || v33 != 4 )
        {
          *v21 = -1;
        }
        v22 = *v18;
        if ( *v18 && (v22 == -1 || (v23 = v22 & 0xFFFF0000, v23 < 0x6020000) || v23 > ((_DWORD)a1[1] & 0xFFFF0000))
          || (v24 = *v21, *v21 == -1)
          || v24 >= 0x10001 && HIWORD(v24) != 1 )
        {
          DrvDbUnloadDatabaseNode((__int64)a1, a2);
          *(_DWORD *)(a2 + 56) |= 4u;
          CachedContextBaseKey = -1073740697;
        }
        goto LABEL_7;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v32 != 7 || v33 != 4 )
        *v18 = -1;
      goto LABEL_28;
    }
    *v18 = 0;
    goto LABEL_28;
  }
  v9 = (_QWORD *)(a2 + 88);
  if ( *(_QWORD *)(a2 + 88) )
    goto LABEL_9;
  if ( a1[4] )
  {
    CachedContextBaseKey = -1073741811;
    goto LABEL_9;
  }
  v14 = *(unsigned int *)(a2 + 32);
  if ( (_DWORD)v14 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v14, &v34);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v6 = v34;
  }
  LODWORD(v15) = 0;
  if ( *a1 )
    v15 = *(_QWORD *)(*a1 + 224);
  v16 = SysCtxRegOpenKey(v15, v6, *(_QWORD *)(a2 + 48), 0, 0x2000000, (__int64)v9);
  CachedContextBaseKey = v16;
  if ( v16 != -1073741772 )
  {
    if ( v16 < 0 )
      goto LABEL_9;
    goto LABEL_23;
  }
  P = (PVOID)DrvDbGetSecurityDescriptor();
  if ( !P )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_9;
  }
  v29 = 0LL;
  v28 = v9;
  CachedContextBaseKey = PnpCtxRegCreateTree(*a1);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_23:
    a1[4] = a2;
    goto LABEL_6;
  }
LABEL_9:
  v12 = P;
  *(_DWORD *)(a2 + 152) = CachedContextBaseKey;
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)CachedContextBaseKey;
}

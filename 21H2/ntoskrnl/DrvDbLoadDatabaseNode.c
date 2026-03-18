/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x1406C1D24
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1407829F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14081D0F0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenContext @ 0x140827238 (DrvDbOpenContext.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140859460 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1406C1FDC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406C59F0 (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140A30930 (DrvDbInitializeDatabaseNodeVersion.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  int v4; // r14d
  __int64 (__fastcall *v6)(_QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD); // r13
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
  void *SecurityDescriptor; // rax
  int v28; // ecx
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+98h] [rbp+48h] BYREF
  int v32; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  CachedContextBaseKey = 0;
  P = 0LL;
  v4 = 0;
  v29 = 0LL;
  v32 = 0;
  v6 = 0LL;
  v33 = 0LL;
  v31 = 1;
  if ( (v2 & 0x21) == 0 )
  {
    v6 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD))(a2 + 80);
    if ( v6 )
    {
      v29 = a2 + 96;
      v8 = v6(a1, *(_QWORD *)(a2 + 24), 1LL, 1LL, &v29, *(_QWORD *)(a2 + 88));
      if ( v8 == -1073741822 )
      {
        v6 = 0LL;
      }
      else if ( v8 < 0 )
      {
        CachedContextBaseKey = v8;
LABEL_8:
        v11 = v6(a1, *(_QWORD *)(a2 + 24), 1LL, 2LL, &v29, *(_QWORD *)(a2 + 88));
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v11;
        goto LABEL_9;
      }
    }
    v9 = (_QWORD *)(a2 + 96);
    if ( !*(_QWORD *)(a2 + 96) )
    {
      v25 = *(unsigned int *)(a2 + 40);
      if ( (_DWORD)v25 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v25, &v33);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        v4 = v33;
      }
      if ( *a1 )
        v26 = *(_QWORD *)(*a1 + 224LL);
      else
        LODWORD(v26) = 0;
      CachedContextBaseKey = SysCtxRegOpenKey(v26, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000, a2 + 96);
      if ( CachedContextBaseKey < 0 )
      {
LABEL_7:
        if ( !v6 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
LABEL_6:
    v10 = *(_DWORD *)(a2 + 64);
    if ( (v10 & 8) != 0 )
      goto LABEL_7;
    v17 = *v9;
    v18 = (int *)(a2 + 68);
    v19 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v10 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     a1,
                                     v19,
                                     v17,
                                     DEVPKEY_DriverDatabase_Version,
                                     &v31,
                                     a2 + 68,
                                     4,
                                     &v32);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v28 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)(v28 - 1) <= 0xFFFFFFFD )
      {
        *v18 = v28;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_27:
        v21 = (unsigned int *)(a2 + 72);
        CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                                 a1,
                                 *(_QWORD *)(a2 + 24),
                                 *v9,
                                 DEVPKEY_DriverDatabase_SchemaVersion,
                                 &v31,
                                 a2 + 72,
                                 4,
                                 &v32);
        if ( CachedContextBaseKey < 0 )
        {
          *v21 = 0;
          CachedContextBaseKey = 0;
        }
        else if ( v31 != 7 || v32 != 4 )
        {
          *v21 = -1;
        }
        v22 = *v18;
        if ( *v18 && (v22 == -1 || (v23 = v22 & 0xFFFF0000, v23 < 0x6020000) || v23 > ((_DWORD)a1[1] & 0xFFFF0000))
          || (v24 = *v21, *v21 == -1)
          || v24 >= 0x10001 && HIWORD(v24) != 1 )
        {
          DrvDbUnloadDatabaseNode(a1, a2);
          *(_DWORD *)(a2 + 64) |= 4u;
          CachedContextBaseKey = -1073740697;
        }
        goto LABEL_7;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v31 != 7 || v32 != 4 )
        *v18 = -1;
      goto LABEL_27;
    }
    *v18 = 0;
    goto LABEL_27;
  }
  v9 = (_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a2 + 96) )
    goto LABEL_9;
  v14 = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)v14 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v14, &v33);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v4 = v33;
  }
  if ( *a1 )
    v15 = *(_QWORD *)(*a1 + 224LL);
  else
    LODWORD(v15) = 0;
  v16 = SysCtxRegOpenKey(v15, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000, (__int64)v9);
  CachedContextBaseKey = v16;
  if ( v16 != -1073741772 )
  {
    if ( v16 < 0 )
      goto LABEL_9;
    goto LABEL_6;
  }
  SecurityDescriptor = (void *)DrvDbGetSecurityDescriptor();
  P = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_9;
  }
  CachedContextBaseKey = PnpCtxRegCreateTree(
                           *a1,
                           v4,
                           *(_QWORD *)(a2 + 56),
                           0,
                           0x2000000,
                           (__int64)SecurityDescriptor,
                           (__int64)v9,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
    goto LABEL_6;
  }
LABEL_9:
  v12 = P;
  *(_DWORD *)(a2 + 160) = CachedContextBaseKey;
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)CachedContextBaseKey;
}

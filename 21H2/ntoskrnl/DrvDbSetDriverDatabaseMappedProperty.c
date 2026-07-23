/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x14072E2A8
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140630C80 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4468 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14097EE74 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x140633480 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbLoadDatabaseNode @ 0x140633564 (DrvDbLoadDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     DrvDbFindDatabaseNode @ 0x1406F1CEC (DrvDbFindDatabaseNode.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14072E80C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735BC4 (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbSetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *SourceString,
        unsigned int a7)
{
  int DatabaseNode; // esi
  const UNICODE_STRING *v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  unsigned int v15; // r10d
  __int64 **v16; // r8
  __int64 *v17; // r9
  __int64 (**v18)[3]; // r10
  __int64 (**v19)[3]; // r13
  unsigned int v20; // r8d
  __int64 *v21; // r9
  HANDLE v22; // r13
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  struct _KTHREAD *v32; // rax
  const UNICODE_STRING *v33; // rbx
  int v34; // eax
  struct _ERESOURCE *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 (**v39)[3]; // r10
  unsigned int v40; // r8d
  __int64 *v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v45; // rdi
  UNICODE_STRING v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  const UNICODE_STRING *v50; // [rsp+50h] [rbp-30h] BYREF
  __int64 (**v51)[3]; // [rsp+58h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  Handle = 0LL;
  v50 = 0LL;
  DatabaseNode = 0;
  v11 = 0LL;
  DestinationString = 0LL;
  v12 = wcsicmp(a2, L"*");
  v14 = *(_DWORD *)(a4 + 16);
  if ( v12 )
  {
    if ( v14 == 2 )
    {
      v29 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v29 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v29 )
      {
LABEL_50:
        DatabaseNode = -1073741790;
        goto LABEL_24;
      }
    }
    v15 = 0;
    v16 = off_140C02CB0;
    while ( 1 )
    {
      v17 = *v16;
      if ( *((_DWORD *)*v16 + 4) == v14 )
      {
        v13 = *v17 - *(_QWORD *)a4;
        if ( *v17 == *(_QWORD *)a4 )
          v13 = v17[1] - *(_QWORD *)(a4 + 8);
        if ( !v13 )
          break;
      }
      ++v15;
      ++v16;
      if ( v15 >= 7 )
      {
        v51 = 0LL;
        v18 = &off_140004BA0;
        v19 = 0LL;
        v20 = 0;
        while ( 1 )
        {
          v21 = (__int64 *)*v18;
          if ( LODWORD((**v18)[2]) == v14 )
          {
            v13 = *v21 - *(_QWORD *)a4;
            if ( *v21 == *(_QWORD *)a4 )
              v13 = v21[1] - *(_QWORD *)(a4 + 8);
            if ( !v13 )
              break;
          }
          ++v20;
          v18 += 5;
          if ( v20 >= 0xC )
            goto LABEL_14;
        }
        v13 = 5LL * v20;
        v19 = &off_140004BA0 + 5 * v20;
        v51 = v19;
LABEL_14:
        if ( v19 )
          goto LABEL_15;
        v51 = 0LL;
        v39 = &off_140009E50;
        v19 = 0LL;
        v40 = 0;
        while ( 1 )
        {
          v41 = (__int64 *)*v39;
          if ( LODWORD((**v39)[2]) == v14 )
          {
            v42 = *v41 - *(_QWORD *)a4;
            if ( *v41 == *(_QWORD *)a4 )
              v42 = v41[1] - *(_QWORD *)(a4 + 8);
            if ( !v42 )
              break;
          }
          ++v40;
          v39 += 5;
          if ( v40 >= 4 )
            goto LABEL_105;
        }
        v19 = &off_140009E50 + 5 * v40;
        v51 = v19;
LABEL_105:
        if ( !v19 )
        {
          DatabaseNode = -1073741802;
          goto LABEL_24;
        }
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v50);
        if ( DatabaseNode >= 0 )
        {
          v11 = v50;
          if ( ((__int64)v50[3].Buffer & 0x10) == 0 )
            goto LABEL_50;
LABEL_15:
          if ( a5 != *((_DWORD *)v19 + 2) && a5 )
          {
LABEL_111:
            DatabaseNode = -1073741811;
            goto LABEL_24;
          }
          if ( (v22 = a3) != 0LL && (!v11 || ((__int64)v11[3].Buffer & 0x10) == 0)
            || (!v11 || ((__int64)v11[3].Buffer & 0x10) == 0
              ? (v23 = DrvDbOpenDriverDatabaseRegKey(a1, a2, 2LL, 0LL, &Handle, 0LL))
              : (v23 = DrvDbOpenObjectRegKey((__int64 *)a1, *(__int64 **)(a1 + 32), 1u, a2, 2, 0, &Handle, 0LL, 0LL)),
                DatabaseNode = v23,
                v23 >= 0) )
          {
            if ( Handle )
              v22 = Handle;
            DatabaseNode = DrvDbSetRegValueMappedProperty(v13, v22, v51, a5, SourceString, a7);
            if ( DatabaseNode >= 0 && v11 && ((__int64)v11[3].Buffer & 0x10) != 0 && *(_DWORD *)(a4 + 16) == 14 )
            {
              v43 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
                v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( !v43 && a5 )
              {
                if ( a7 < 2 || !SourceString || SourceString[((unsigned __int64)a7 >> 1) - 1] )
                  goto LABEL_111;
                if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
                {
                  DatabaseNode = -1073741670;
                  goto LABEL_24;
                }
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v45 = v50;
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v50[9].Length, 1u);
                RtlFreeAnsiString((PUNICODE_STRING)&v45[2].Buffer);
                v46 = DestinationString;
                *(_DWORD *)&v45[2].Length = 0;
                *(UNICODE_STRING *)&v45[2].Buffer = v46;
                v35 = *(struct _ERESOURCE **)&v45[9].Length;
                goto LABEL_129;
              }
            }
          }
        }
        goto LABEL_24;
      }
    }
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v50);
    if ( DatabaseNode < 0 )
      goto LABEL_24;
    v30 = *(_DWORD *)(a4 + 16);
    switch ( v30 )
    {
      case 5:
        v31 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
          v31 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( !v31 )
        {
          if ( a5 != 17 || a7 != 1 || !SourceString )
            goto LABEL_111;
          if ( ((__int64)v50[3].Buffer & 1) != 0 )
            goto LABEL_50;
          v32 = KeGetCurrentThread();
          --v32->KernelApcDisable;
          v33 = v50;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v50[9].Length, 1u);
          if ( *(_BYTE *)SourceString == 0xFF )
            v34 = DrvDbLoadDatabaseNode((__int64 *)a1, (__int64)v33);
          else
            v34 = DrvDbUnloadDatabaseNode(a1, (__int64)v33);
          v35 = *(struct _ERESOURCE **)&v33[9].Length;
          DatabaseNode = v34;
LABEL_129:
          ExReleaseResourceLite(v35);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v47, v48, v49);
          goto LABEL_24;
        }
        goto LABEL_24;
      case 6:
        v36 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
          v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( !v36 )
        {
          if ( a5 != 17 || a7 != 1 || !SourceString )
            goto LABEL_111;
          if ( *(_BYTE *)SourceString == 0xFF )
          {
            *(_QWORD *)(a1 + 40) = v50;
          }
          else if ( v50 == *(const UNICODE_STRING **)(a1 + 40) || !v50 )
          {
            *(_QWORD *)(a1 + 40) = 0LL;
          }
        }
        goto LABEL_24;
      case 7:
        v37 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
          v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( !v37 )
        {
          if ( a5 != 17 || a7 != 1 || !SourceString )
            goto LABEL_111;
          if ( *(_BYTE *)SourceString == 0xFF )
            LODWORD(v50[3].Buffer) |= 4u;
          else
            LODWORD(v50[3].Buffer) &= ~4u;
        }
        goto LABEL_24;
    }
    if ( v30 != 11 )
      goto LABEL_24;
    v38 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v38 )
      goto LABEL_24;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_111;
    if ( v50 != *(const UNICODE_STRING **)(a1 + 32) )
      goto LABEL_50;
    v27 = *(_DWORD *)SourceString;
    goto LABEL_44;
  }
  if ( v14 != 6 )
  {
    if ( v14 == 11 )
    {
      v26 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
        v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v26 )
      {
        if ( a5 != 7 || a7 != 4 || !SourceString )
          goto LABEL_111;
        v27 = *(_DWORD *)SourceString;
LABEL_44:
        v28 = v27 & 0xD0000000;
        *(_DWORD *)(a1 + 12) = v28;
        if ( v28 == 0x10000000 )
          *(_DWORD *)(a1 + 12) = -805306368;
        goto LABEL_24;
      }
    }
LABEL_46:
    DatabaseNode = -1073741637;
    goto LABEL_24;
  }
  v25 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
    v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v25 )
    goto LABEL_46;
  if ( a5 != 17 || a7 != 1 || !SourceString )
    goto LABEL_111;
  if ( *(_BYTE *)SourceString == 0xFF )
    *(_QWORD *)(a1 + 40) = 0LL;
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}

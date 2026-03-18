/*
 * XREFs of CmGetSystemDriverList @ 0x140A4B2CC
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1403F40C0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403F5E20 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A4A08C (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x140A4A24C (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x140A4AD98 (CmpFindDrivers.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140A4B6F8 (CmpCloseSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140A4B74C (CmpFreeDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A4B7EC (CmpOpenSystemDriverHiveContext.c)
 */

HANDLE *__fastcall CmGetSystemDriverList(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r13
  UNICODE_STRING *v3; // rsi
  HANDLE *v4; // r14
  char v5; // r15
  BOOLEAN v6; // r12
  int DirectoryObject; // eax
  const UNICODE_STRING *j; // rdi
  PVOID *i; // rbx
  __int64 *v10; // rax
  int v11; // ecx
  __int64 v12; // rbx
  int v13; // edi
  PVOID **v14; // rdi
  UNICODE_STRING *v15; // rcx
  int v17; // eax
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  PVOID *v20; // rax
  wchar_t *v21; // rax
  wchar_t *v22; // rcx
  wchar_t *Buffer; // rax
  PVOID *v24; // rbx
  UNICODE_STRING *v25; // rbx
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v32; // [rsp+90h] [rbp-78h] BYREF
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *PoolWithTag; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  ULONG_PTR v38[8]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v39[8]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v40[3]; // [rsp+178h] [rbp+70h] BYREF

  v35 = a1;
  v1 = a1;
  v31 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v40, 0, sizeof(v40));
  memset(v38, 0, sizeof(v38));
  LODWORD(v38[7]) = -1;
  memset(v39, 0, sizeof(v39));
  LODWORD(v39[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v32.Buffer = (wchar_t *)&v32;
  v4 = 0LL;
  v5 = 0;
  *(_QWORD *)&v32.Length = &v32;
  v6 = 0;
  v28[1] = (__int64)v28;
  v28[0] = (__int64)v28;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v17 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString), (int)(v17 + 0x80000000) < 0)
      || v17 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20204D43u);
        v3 = PoolWithTag;
        if ( PoolWithTag )
        {
          DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)PoolWithTag);
          if ( DirectoryObject == -2147483622 )
          {
LABEL_12:
            v6 = CmpAcquireShutdownRundown();
            if ( v6 )
            {
              CmpAttachToRegistryProcess((__int64)v40);
              v2 = 1;
              CmpLockRegistryExclusive();
              v5 = 1;
              if ( (int)CmpAcquireSystemDriverHiveContext((__int64)v38) >= 0
                && (!v39[4] || (int)CmpAcquireSystemDriverHiveContext((__int64)v39) >= 0) )
              {
                for ( i = (PVOID *)P; i != &P; i = (PVOID *)*i )
                {
                  if ( (int)CmpAcquireSystemDriverHiveContext((__int64)i) >= 0 )
                  {
                    v21 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20204D43u);
                    v22 = v21;
                    if ( !v21 )
                      goto LABEL_29;
                    *(_OWORD *)v21 = 0LL;
                    *((_OWORD *)v21 + 1) = 0LL;
                    *((_OWORD *)v21 + 2) = 0LL;
                    *((_OWORD *)v21 + 1) = *((_OWORD *)i + 1);
                    *((_QWORD *)v21 + 4) = i[6];
                    *((_DWORD *)v21 + 10) = *((_DWORD *)i + 14);
                    Buffer = v32.Buffer;
                    if ( *(UNICODE_STRING **)v32.Buffer != &v32 )
                      goto LABEL_61;
                    *((_QWORD *)v22 + 1) = v32.Buffer;
                    *(_QWORD *)v22 = &v32;
                    *(_QWORD *)Buffer = v22;
                    v32.Buffer = v22;
                  }
                }
                if ( CmpFindDrivers(
                       v38[6],
                       LODWORD(v38[7]),
                       v39[6],
                       v39[7],
                       &v32,
                       (unsigned int)&v31 + 4,
                       (__int64)&v31,
                       (char **)v28,
                       v26,
                       v1,
                       v27)
                  && CmpSortDriverList(v38[6], LODWORD(v38[7]), (__int64)v28) )
                {
                  CmpUnlockRegistry();
                  v10 = (__int64 *)v28[0];
                  v11 = 0;
                  v5 = 0;
                  while ( v10 != v28 )
                  {
                    v10 = (__int64 *)*v10;
                    ++v11;
                  }
                  v4 = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v11 + 1), 0x32384D43u);
                  if ( !v4 )
                    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                  v12 = v28[0];
                  v13 = 0;
                  if ( (__int64 *)v28[0] != v28 )
                  {
                    do
                    {
                      ObjectAttributes.Length = 48;
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 32);
                      ObjectAttributes.RootDirectory = 0LL;
                      ObjectAttributes.Attributes = 576;
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      if ( ZwOpenKey(&v4[v13], 0x2001Fu, &ObjectAttributes) >= 0 )
                        ++v13;
                      v12 = *(_QWORD *)v12;
                    }
                    while ( (__int64 *)v12 != v28 );
                    v3 = PoolWithTag;
                  }
                  v4[v13] = 0LL;
                }
              }
            }
          }
          else
          {
            while ( DirectoryObject >= 0 )
            {
              for ( j = v3; j->Length; j += 2 )
              {
                if ( !RtlEqualUnicodeString(j, &CmpSystemFileName, 1u) )
                {
                  v18 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x20204D43u);
                  v19 = v18;
                  if ( !v18 )
                    goto LABEL_29;
                  memset(v18, 0, 0x40uLL);
                  v19[14] = -1;
                  if ( (int)CmpOpenSystemDriverHiveContext(j) >= 0 )
                  {
                    v20 = p_P;
                    if ( *p_P != &P )
LABEL_61:
                      __fastfail(3u);
                    *((_QWORD *)v19 + 1) = p_P;
                    *(_QWORD *)v19 = &P;
                    *v20 = v19;
                    p_P = (PVOID *)v19;
                  }
                  else
                  {
                    ExFreePoolWithTag(v19, 0);
                  }
                }
              }
              DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v3);
              if ( DirectoryObject == -2147483622 )
              {
                v1 = v35;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (__int64 *)v28[0] != v28 )
    CmpFreeDriverList(v38[6], v28);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v40);
  if ( v6 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v38);
  if ( v39[4] )
    CmpCloseSystemDriverHiveContext(v39);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v14 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v24 = *v14;
      CmpCloseSystemDriverHiveContext(v14);
      ExFreePoolWithTag(v14, 0);
      v14 = (PVOID **)v24;
    }
    while ( v24 != &P );
  }
  v15 = *(UNICODE_STRING **)&v32.Length;
  if ( *(UNICODE_STRING **)&v32.Length != &v32 )
  {
    do
    {
      v25 = *(UNICODE_STRING **)&v15->Length;
      ExFreePoolWithTag(v15, 0);
      v15 = v25;
    }
    while ( v25 != &v32 );
  }
  return v4;
}

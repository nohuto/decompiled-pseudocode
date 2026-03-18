/*
 * XREFs of CmGetSystemDriverList @ 0x140A5E798
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1403F8C70 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FA9F0 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A5E608 (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140A5EBC4 (CmpCloseSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140A5EC18 (CmpFreeDriverList.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A5EE28 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x140A5EFE8 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x140A5FB34 (CmpFindDrivers.c)
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
  PVOID **v15; // rcx
  int v17; // eax
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  PVOID *v20; // rax
  PVOID **v21; // rax
  PVOID **v22; // rcx
  PVOID *v23; // rax
  PVOID *v24; // rbx
  PVOID *v25; // rbx
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  PVOID v32; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v33; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *PoolWithTag; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  ULONG_PTR v39[8]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v40[8]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v41[3]; // [rsp+178h] [rbp+70h] BYREF

  v36 = a1;
  v1 = a1;
  v31 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v41, 0, sizeof(v41));
  memset(v39, 0, sizeof(v39));
  LODWORD(v39[7]) = -1;
  memset(v40, 0, sizeof(v40));
  LODWORD(v40[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v33 = &v32;
  v4 = 0LL;
  v5 = 0;
  v32 = &v32;
  v6 = 0;
  v28[1] = (__int64)v28;
  v28[0] = (__int64)v28;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString, (__int64)v39) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v17 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString, (__int64)v40), (int)(v17 + 0x80000000) < 0)
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
              CmpAttachToRegistryProcess((__int64)v41);
              v2 = 1;
              CmpLockRegistryExclusive();
              v5 = 1;
              if ( (int)CmpAcquireSystemDriverHiveContext(v39) >= 0
                && (!v40[4] || (int)CmpAcquireSystemDriverHiveContext(v40) >= 0) )
              {
                for ( i = (PVOID *)P; i != &P; i = (PVOID *)*i )
                {
                  if ( (int)CmpAcquireSystemDriverHiveContext(i) >= 0 )
                  {
                    v21 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20204D43u);
                    v22 = v21;
                    if ( !v21 )
                      goto LABEL_29;
                    *(_OWORD *)v21 = 0LL;
                    *((_OWORD *)v21 + 1) = 0LL;
                    *((_OWORD *)v21 + 2) = 0LL;
                    *((_OWORD *)v21 + 1) = *((_OWORD *)i + 1);
                    v21[4] = (PVOID *)i[6];
                    *((_DWORD *)v21 + 10) = *((_DWORD *)i + 14);
                    v23 = v33;
                    if ( *v33 != &v32 )
                      goto LABEL_61;
                    v22[1] = v33;
                    *v22 = &v32;
                    *v23 = v22;
                    v33 = (PVOID *)v22;
                  }
                }
                if ( (unsigned __int8)CmpFindDrivers(
                                        v39[6],
                                        (__int64)&v32,
                                        (int)&v31 + 4,
                                        (__int64)&v31,
                                        (__int64)v28,
                                        v26,
                                        v1,
                                        v27)
                  && (unsigned __int8)CmpSortDriverList(v39[6]) )
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
                  if ( (int)CmpOpenSystemDriverHiveContext(j, (__int64)v19) >= 0 )
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
                v1 = v36;
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
    CmpFreeDriverList(v39[6], v28);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v41);
  if ( v6 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v39);
  if ( v40[4] )
    CmpCloseSystemDriverHiveContext(v40);
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
  v15 = (PVOID **)v32;
  if ( v32 != &v32 )
  {
    do
    {
      v25 = *v15;
      ExFreePoolWithTag(v15, 0);
      v15 = (PVOID **)v25;
    }
    while ( v25 != &v32 );
  }
  return v4;
}

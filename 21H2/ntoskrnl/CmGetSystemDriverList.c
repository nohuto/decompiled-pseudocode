/*
 * XREFs of CmGetSystemDriverList @ 0x140A60174
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1403FB080 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FCE00 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140A605A0 (CmpCloseSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140A605F4 (CmpFreeDriverList.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A61258 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x140A61418 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x140A61F64 (CmpFindDrivers.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A62428 (CmpOpenSystemDriverHiveContext.c)
 */

HANDLE *__fastcall CmGetSystemDriverList(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r13
  UNICODE_STRING *v3; // rsi
  HANDLE *v4; // r14
  char v5; // r15
  BOOLEAN v6; // r12
  NTSTATUS v7; // eax
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
  int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  ULONG v33; // [rsp+88h] [rbp-80h] BYREF
  ULONG v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  PVOID v35; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v36; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *PoolWithTag; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  ULONG_PTR v42[8]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v43[8]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v44[3]; // [rsp+178h] [rbp+70h] BYREF

  v39 = a1;
  v1 = a1;
  v34 = 0;
  v33 = 0;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v44, 0, sizeof(v44));
  memset(v42, 0, sizeof(v42));
  LODWORD(v42[7]) = -1;
  memset(v43, 0, sizeof(v43));
  LODWORD(v43[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v36 = &v35;
  v4 = 0LL;
  v5 = 0;
  v35 = &v35;
  v6 = 0;
  v30[1] = (__int64)v30;
  v30[0] = (__int64)v30;
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
          v7 = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 1u, &v34, &v33);
          if ( v7 == -2147483622 )
          {
LABEL_12:
            v6 = CmpAcquireShutdownRundown();
            if ( v6 )
            {
              CmpAttachToRegistryProcess((__int64)v44);
              v2 = 1;
              CmpLockRegistryExclusive();
              v5 = 1;
              if ( (int)CmpAcquireSystemDriverHiveContext(v42) >= 0
                && (!v43[4] || (int)CmpAcquireSystemDriverHiveContext(v43) >= 0) )
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
                    v23 = v36;
                    if ( *v36 != &v35 )
                      goto LABEL_61;
                    v22[1] = v36;
                    *v22 = &v35;
                    *v23 = v22;
                    v36 = (PVOID *)v22;
                  }
                }
                if ( (unsigned __int8)CmpFindDrivers(
                                        v42[6],
                                        (__int64)&v35,
                                        Context,
                                        (__int64)ReturnLength,
                                        (__int64)v30,
                                        v28,
                                        v1,
                                        v29)
                  && (unsigned __int8)CmpSortDriverList(v42[6]) )
                {
                  CmpUnlockRegistry();
                  v10 = (__int64 *)v30[0];
                  v11 = 0;
                  v5 = 0;
                  while ( v10 != v30 )
                  {
                    v10 = (__int64 *)*v10;
                    ++v11;
                  }
                  v4 = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v11 + 1), 0x32384D43u);
                  if ( !v4 )
                    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                  v12 = v30[0];
                  v13 = 0;
                  if ( (__int64 *)v30[0] != v30 )
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
                    while ( (__int64 *)v12 != v30 );
                    v3 = PoolWithTag;
                  }
                  v4[v13] = 0LL;
                }
              }
            }
          }
          else
          {
            while ( v7 >= 0 )
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
              v7 = ZwQueryDirectoryObject(DirectoryHandle, v3, 0x400u, 1u, 0, &v34, &v33);
              if ( v7 == -2147483622 )
              {
                v1 = v39;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (__int64 *)v30[0] != v30 )
    CmpFreeDriverList(v42[6], v30);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v44);
  if ( v6 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v42);
  if ( v43[4] )
    CmpCloseSystemDriverHiveContext(v43);
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
  v15 = (PVOID **)v35;
  if ( v35 != &v35 )
  {
    do
    {
      v25 = *v15;
      ExFreePoolWithTag(v15, 0);
      v15 = (PVOID **)v25;
    }
    while ( v25 != &v35 );
  }
  return v4;
}

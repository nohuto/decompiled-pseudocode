/*
 * XREFs of ObCreateSiloRootDirectory @ 0x140A34510
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x14041CCA0 (ZwCreateDirectoryObjectEx.c)
 *     PsInsertPermanentSiloContextEx @ 0x140692980 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x140692A50 (PsInsertSiloContext.c)
 *     PsCreateSiloContext @ 0x140692CD0 (PsCreateSiloContext.c)
 *     PsIsJobParentImmutable @ 0x1406E1784 (PsIsJobParentImmutable.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     ObpInitializeRootNamespace @ 0x14082C020 (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x140A349F0 (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  struct _DMA_ADAPTER *v2; // rsi
  PVOID v3; // r15
  char v4; // r14
  __int64 v6; // rcx
  __int64 ParentSilo; // rbx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // r12
  ULONG v11; // ecx
  int SilosRootDirectory; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // r8
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  struct _DMA_ADAPTER *v16; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-49h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING String; // [rsp+90h] [rbp+7h] BYREF
  char v23; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v3 = 0LL;
  Handle = 0LL;
  v4 = a2;
  DirectoryHandle = 0LL;
  v16 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 6) == 4 || !PsIsJobParentImmutable(a1) )
    return 3221225485LL;
  ParentSilo = PsGetParentSilo(v6);
  if ( ParentSilo != HalSystemVectorDispatchEntry() )
    return 3221227289LL;
  v9 = (struct _LIST_ENTRY *)PsGetParentSilo(a1);
  v10 = PsAttachSiloToCurrentThread(v9);
  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = (wchar_t *)&v23;
  if ( a1 )
    v11 = *(_DWORD *)(a1 + 1428);
  else
    v11 = 0;
  SilosRootDirectory = RtlIntegerToUnicodeString(v11, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v18);
    if ( SilosRootDirectory >= 0 )
    {
      if ( (v4 & 1) == 0
        || (ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName,
            ObjectAttributes.Length = 48,
            ObjectAttributes.Attributes = 512,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            SilosRootDirectory = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes),
            SilosRootDirectory >= 0) )
      {
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.RootDirectory = v18;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 592;
        SilosRootDirectory = ZwCreateDirectoryObjectEx((__int64)&Handle, 983055LL);
        if ( SilosRootDirectory >= 0 )
        {
          Object = 0LL;
          v13 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v3 = Object;
          SilosRootDirectory = v13;
          if ( v13 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(a1, 16LL, 1, (__int64)ObpDirectoryTeardownCallback, &v16);
            if ( SilosRootDirectory < 0 )
            {
              v2 = v16;
            }
            else
            {
              ObfReferenceObjectWithTag(v3, 0x7254624Fu);
              v2 = v16;
              v14 = (__int64)v16;
              *(_QWORD *)&v16->Version = v3;
              SilosRootDirectory = PsInsertSiloContext(a1, PsObjectDirectoryTeardownSlot, v14);
              if ( SilosRootDirectory >= 0 )
              {
                SilosRootDirectory = PsInsertPermanentSiloContextEx(
                                       a1,
                                       PsObjectDirectorySiloContextSlot,
                                       (__int64)v3,
                                       1);
                if ( SilosRootDirectory >= 0 && (v4 & 2) != 0 )
                {
                  if ( (v4 & 4) == 0
                    || (ObjectAttributes.RootDirectory = 0LL,
                        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDosDevicesShortName,
                        ObjectAttributes.Length = 48,
                        ObjectAttributes.Attributes = 512,
                        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                        SilosRootDirectory = ZwOpenDirectoryObject(&v17, 3u, &ObjectAttributes),
                        SilosRootDirectory >= 0) )
                  {
                    SilosRootDirectory = ObpInitializeRootNamespace(
                                           a1,
                                           Handle,
                                           (__int64)v17,
                                           (__int64)&v2->DmaOperations);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v17 )
    ZwClose(v17);
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v2 )
    HalPutDmaAdapter(v2);
  PsDetachSiloFromCurrentThread(v10);
  return (unsigned int)SilosRootDirectory;
}

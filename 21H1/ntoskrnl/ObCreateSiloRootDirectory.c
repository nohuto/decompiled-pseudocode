/*
 * XREFs of ObCreateSiloRootDirectory @ 0x14097BC40
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F2E30 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1403F3810 (ZwCreateDirectoryObjectEx.c)
 *     PsInsertSiloContext @ 0x1405CC190 (PsInsertSiloContext.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PsIsJobParentImmutable @ 0x140675068 (PsIsJobParentImmutable.c)
 *     RtlIntegerToUnicodeString @ 0x1406DC660 (RtlIntegerToUnicodeString.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406EC374 (PsInsertPermanentSiloContextEx.c)
 *     PsCreateSiloContext @ 0x1406EC620 (PsCreateSiloContext.c)
 *     ObpInitializeRootNamespace @ 0x140782DDC (ObpInitializeRootNamespace.c)
 *     PsGetParentSilo @ 0x1409018D0 (PsGetParentSilo.c)
 *     ObpGetSilosRootDirectory @ 0x14097C0FC (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  struct _DMA_ADAPTER *v2; // r15
  struct _DMA_ADAPTER *v3; // rsi
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
  struct _DMA_ADAPTER **v16; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-49h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING String; // [rsp+90h] [rbp+7h] BYREF
  char v23; // [rsp+A0h] [rbp+17h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v2 = 0LL;
  DirectoryHandle = 0LL;
  v3 = 0LL;
  Handle = 0LL;
  v4 = a2;
  v16 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
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
    v11 = *(_DWORD *)(a1 + 1236);
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
        SilosRootDirectory = ZwCreateDirectoryObjectEx(&Handle, 0xF000Fu, &ObjectAttributes, DirectoryHandle, 0);
        if ( SilosRootDirectory >= 0 )
        {
          Object = 0LL;
          v13 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v2 = (struct _DMA_ADAPTER *)Object;
          SilosRootDirectory = v13;
          if ( v13 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(a1, 8, 1, (__int64)ObpDirectoryTeardownCallback, &v16);
            if ( SilosRootDirectory < 0 )
            {
              v3 = (struct _DMA_ADAPTER *)v16;
            }
            else
            {
              ObfReferenceObjectWithTag(v2, 0x7254624Fu);
              v3 = (struct _DMA_ADAPTER *)v16;
              v14 = (__int64)v16;
              *v16 = v2;
              SilosRootDirectory = PsInsertSiloContext(a1, PsObjectDirectoryTeardownSlot, v14);
              if ( SilosRootDirectory >= 0 )
              {
                SilosRootDirectory = PsInsertPermanentSiloContextEx(
                                       a1,
                                       PsObjectDirectorySiloContextSlot,
                                       (__int64)v2,
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
                    SilosRootDirectory = ObpInitializeRootNamespace(a1, Handle, (__int64)v17);
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
  if ( v2 )
    HalPutDmaAdapter(v2);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v3 )
    HalPutDmaAdapter(v3);
  PsDetachSiloFromCurrentThread(v10);
  return (unsigned int)SilosRootDirectory;
}

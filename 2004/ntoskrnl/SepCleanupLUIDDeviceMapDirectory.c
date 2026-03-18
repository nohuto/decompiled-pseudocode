/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406F54F0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1407680B4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140202160 (PsGetServerSiloServiceSessionId.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D0940 (wcscmp.c)
 *     swprintf_s @ 0x1403D32F0 (swprintf_s.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F40C0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x1403F57A0 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1403F5B60 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x1403F5E20 (ZwQueryDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // r13d
  char v6; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v8; // rsi
  NTSTATUS v9; // edi
  HANDLE *PoolWithTag; // r14
  __int64 v11; // rdi
  int v12; // r12d
  int DirectoryObject; // esi
  unsigned int v14; // r15d
  HANDLE *v15; // rsi
  HANDLE *v17; // rsi
  char v18; // [rsp+40h] [rbp-C0h]
  int NumberOfBytes_4; // [rsp+48h] [rbp-B8h]
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *v23; // [rsp+68h] [rbp-98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v26[3]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v4 = 0LL;
  v22 = 0;
  v5 = 100;
  NumberOfBytes_4 = 0;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( !a1 )
    return 3221225485LL;
  v18 = ObReferenceObjectSafeWithTag((__int64)KeGetCurrentThread()->ApcState.Process);
  v6 = v18;
  if ( v18 )
    ObfDereferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x4D526553u);
  else
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v26);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v23 = PsAttachSiloToCurrentThread(a2);
  v8 = v23;
  v9 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v9 < 0 )
  {
    PsDetachSiloFromCurrentThread(v8);
    if ( !v18 )
      KiUnstackDetachProcess((__int64)v26, 0LL);
    return (unsigned int)v9;
  }
  else
  {
    PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x320uLL, 0x61486553u);
    if ( PoolWithTag )
    {
LABEL_6:
      v11 = 0LL;
      while ( 1 )
      {
        v12 = NumberOfBytes_4;
        do
        {
          DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v4);
          if ( DirectoryObject == -1073741789 )
          {
            v12 = 0;
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            v4 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0LL, 0x62446553u);
            if ( !v4 )
              DirectoryObject = -1073741670;
          }
        }
        while ( DirectoryObject == -1073741789 );
        v14 = 0;
        NumberOfBytes_4 = v12;
        v6 = v18;
        if ( DirectoryObject < 0 )
          break;
        if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
        {
          if ( (unsigned int)v11 >= v5 )
          {
            if ( (_DWORD)v11 )
            {
              v17 = PoolWithTag;
              do
              {
                ZwClose(*v17++);
                --v11;
              }
              while ( v11 );
            }
            v5 += 20;
            ExFreePoolWithTag(PoolWithTag, 0);
            PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x61486553u);
            if ( !PoolWithTag )
            {
              v8 = v23;
              goto LABEL_44;
            }
            goto LABEL_6;
          }
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.ObjectName = v4;
          if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
          {
            if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
            {
              ZwClose(LinkHandle);
            }
            else
            {
              PoolWithTag[v11] = LinkHandle;
              v11 = (unsigned int)(v11 + 1);
            }
          }
        }
      }
      if ( DirectoryObject != -2147483622 )
        v14 = DirectoryObject;
      if ( (_DWORD)v11 )
      {
        v15 = PoolWithTag;
        do
        {
          ZwClose(*v15++);
          --v11;
        }
        while ( v11 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      if ( DirectoryHandle )
        ZwClose(DirectoryHandle);
      PsDetachSiloFromCurrentThread(v23);
      if ( !v18 )
        KiUnstackDetachProcess((__int64)v26, 0LL);
      return v14;
    }
    else
    {
LABEL_44:
      ZwClose(DirectoryHandle);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      PsDetachSiloFromCurrentThread(v8);
      if ( !v6 )
        KiUnstackDetachProcess((__int64)v26, 0LL);
      return 3221225495LL;
    }
  }
}

/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x1409036F0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409030A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     RtlUShortAdd @ 0x140340B04 (RtlUShortAdd.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F4DC0 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PspSiloInitializeSystemRootSymlink(struct _LIST_ENTRY *a1)
{
  char *ServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  USHORT v4; // si
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  struct _LIST_ENTRY *v7; // rbx
  NTSTATUS v8; // esi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  USHORT pusResult; // [rsp+98h] [rbp+38h] BYREF
  HANDLE LinkHandle; // [rsp+A0h] [rbp+40h] BYREF

  pusResult = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)a1);
  result = RtlUShortAdd(0x14u, *((_WORD *)ServerSiloGlobals + 532), &pusResult);
  if ( result >= 0 )
  {
    v4 = pusResult;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pusResult, 0x70537350u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v4;
      DestinationString.Buffer = PoolWithTag;
      RtlCopyUnicodeString(&DestinationString, &PspSystemRootTargetPrefix);
      RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(ServerSiloGlobals + 1064));
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSystemRootSymlinkName;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 528;
      v7 = PsAttachSiloToCurrentThread(a1);
      v8 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
      PsDetachSiloFromCurrentThread(v7);
      if ( v8 >= 0 )
        ZwClose(LinkHandle);
      ExFreePoolWithTag(v6, 0x70537350u);
      return v8;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}

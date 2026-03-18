/*
 * XREFs of PopDeleteHiberFile @ 0x1408E38AC
 * Callers:
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F3C20 (ZwOpenFile.c)
 *     ZwDeleteFile @ 0x1403F5000 (ZwDeleteFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140785BE8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopDeleteHiberFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  ACL *v1; // rdi
  OBJECT_ATTRIBUTES *v2; // rbx
  ACL *HiberFileSecurityDescriptor; // rax
  NTSTATUS v4; // eax
  struct _FILE_OBJECT *v5; // rbx
  char v6[8]; // [rsp+40h] [rbp-59h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-49h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-39h] BYREF
  __int64 v10; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-29h] BYREF
  __int128 v12; // [rsp+80h] [rbp-19h] BYREF
  __int128 v13; // [rsp+90h] [rbp-9h]
  __int128 v14; // [rsp+A0h] [rbp+7h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp+17h] BYREF
  _OWORD FileInformation[2]; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v17; // [rsp+E0h] [rbp+47h]

  v10 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  v1 = 0LL;
  FileHandle = 0LL;
  v2 = ObjectAttributes;
  FileObject = 0LL;
  Destination.Buffer = 0LL;
  v17 = 0LL;
  v6[0] = 0;
  DestinationString = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  IoStatusBlock = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !ObjectAttributes )
  {
    RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
    Destination.MaximumLength = DestinationString.Length + PoHiberFileRoot.Length;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(DestinationString.Length + PoHiberFileRoot.Length),
                                      0x72626968u);
    if ( !Destination.Buffer )
      return;
    RtlAppendUnicodeStringToString(&Destination, &PoHiberFileRoot);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    HiberFileSecurityDescriptor = PopCreateHiberFileSecurityDescriptor();
    *((_QWORD *)&v12 + 1) = 0LL;
    v1 = HiberFileSecurityDescriptor;
    *(_QWORD *)&v13 = &Destination;
    v2 = (OBJECT_ATTRIBUTES *)&v12;
    LODWORD(v12) = 48;
    DWORD2(v13) = 576;
    v14 = (unsigned __int64)HiberFileSecurityDescriptor;
  }
  v4 = ZwDeleteFile(v2);
  if ( (int)(v4 + 0x80000000) >= 0
    && v4 != -1073741772
    && ZwOpenFile(&FileHandle, 0x10100u, v2, &IoStatusBlock, 7u, 0x204000u) >= 0 )
  {
    if ( (int)ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)FileHandle,
                0x10000,
                (__int64)IoFileObjectType,
                KeGetCurrentThread()->PreviousMode,
                0x62486F50u,
                &FileObject,
                &v10,
                0LL) >= 0 )
    {
      v5 = FileObject;
      LODWORD(v17) = 128;
      IoSetInformation(FileObject, FileBasicInformation, 0x28u, FileInformation);
      v6[0] = 1;
      IoSetInformation(v5, FileDispositionInformation, 1u, v6);
      ObfDereferenceObjectWithTag(v5, 0x62486F50u);
    }
    ZwClose(FileHandle);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
}

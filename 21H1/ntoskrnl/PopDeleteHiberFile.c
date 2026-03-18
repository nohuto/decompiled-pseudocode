/*
 * XREFs of PopDeleteHiberFile @ 0x1408E262C
 * Callers:
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F2990 (ZwOpenFile.c)
 *     ZwDeleteFile @ 0x1403F3D70 (ZwDeleteFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14077D1E8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopDeleteHiberFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  ACL *v1; // rdi
  OBJECT_ATTRIBUTES *v2; // rbx
  ACL *HiberFileSecurityDescriptor; // rax
  NTSTATUS v4; // eax
  ULONG v5; // r9d
  struct _FILE_OBJECT *v6; // rbx
  _QWORD *ShareAccess; // [rsp+20h] [rbp-79h]
  char v8[8]; // [rsp+40h] [rbp-59h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-49h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-39h] BYREF
  __int64 v12; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-29h] BYREF
  __int128 v14; // [rsp+80h] [rbp-19h] BYREF
  __int128 v15; // [rsp+90h] [rbp-9h]
  __int128 v16; // [rsp+A0h] [rbp+7h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp+17h] BYREF
  _OWORD FileInformation[2]; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+47h]

  v12 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  v1 = 0LL;
  FileHandle = 0LL;
  v2 = ObjectAttributes;
  FileObject = 0LL;
  Destination.Buffer = 0LL;
  v19 = 0LL;
  v8[0] = 0;
  DestinationString = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  IoStatusBlock = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
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
    *((_QWORD *)&v14 + 1) = 0LL;
    v1 = HiberFileSecurityDescriptor;
    *(_QWORD *)&v15 = &Destination;
    v2 = (OBJECT_ATTRIBUTES *)&v14;
    LODWORD(v14) = 48;
    DWORD2(v15) = 576;
    v16 = (unsigned __int64)HiberFileSecurityDescriptor;
  }
  v4 = ZwDeleteFile(v2);
  if ( (int)(v4 + 0x80000000) >= 0
    && v4 != -1073741772
    && ZwOpenFile(&FileHandle, 0x10100u, v2, &IoStatusBlock, 7u, 0x204000u) >= 0 )
  {
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    LODWORD(ShareAccess) = 1648914256;
    if ( (int)ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)FileHandle,
                0x10000LL,
                IoFileObjectType,
                v5,
                ShareAccess,
                &FileObject,
                &v12,
                0LL) >= 0 )
    {
      v6 = FileObject;
      LODWORD(v19) = 128;
      IoSetInformation(FileObject, FileBasicInformation, 0x28u, FileInformation);
      v8[0] = 1;
      IoSetInformation(v6, FileDispositionInformation, 1u, v8);
      ObfDereferenceObjectWithTag(v6, 0x62486F50u);
    }
    ZwClose(FileHandle);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
}

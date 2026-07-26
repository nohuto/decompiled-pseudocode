/*
 * XREFs of NdisOpenFile @ 0x1C00BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C0027CBC (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 */

void __stdcall NdisOpenFile(
        PNDIS_STATUS Status,
        PNDIS_HANDLE FileHandle,
        PUINT FileLength,
        PNDIS_STRING FileName,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  wchar_t *PoolWithTag; // rax
  NTSTATUS v10; // edi
  NTSTATUS v11; // eax
  __int64 v12; // r14
  PVOID v13; // rax
  void *v14; // rsi
  NTSTATUS v15; // r15d
  _QWORD *v16; // rax
  _BYTE *v17; // rdi
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-A9h]
  HANDLE FileHandlea; // [rsp+60h] [rbp-71h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-69h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  __int128 FileInformation; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-9h]

  FileHandlea = 0LL;
  v24 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination = 0LL;
  FileInformation = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids);
  if ( (int)RtlUShortAdd(0x3Cu, FileName->MaximumLength, &Destination.MaximumLength) < 0 )
  {
    *Status = -2147483643;
    goto LABEL_32;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x6E66444Eu);
  Destination.Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    *Status = -1073741670;
    goto LABEL_32;
  }
  Destination.Length = 58;
  *(_OWORD *)PoolWithTag = *(_OWORD *)L"\\SystemRoot\\system32\\drivers\\";
  *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)L"oot\\system32\\drivers\\";
  *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)L"em32\\drivers\\";
  *((_QWORD *)PoolWithTag + 6) = *(_QWORD *)L"vers\\";
  *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)L"\\";
  RtlAppendUnicodeStringToString(&Destination, FileName);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids,
      &Destination.Length);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateFile(&FileHandlea, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v10 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v10;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    *Status = -1073676261;
    goto LABEL_32;
  }
  v11 = ZwQueryInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v11 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v11;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids,
        *(_QWORD *)FileAttributes);
    }
LABEL_16:
    ZwClose(FileHandlea);
    *Status = -1073676260;
    goto LABEL_32;
  }
  v12 = DWORD2(FileInformation);
  if ( !DWORD2(FileInformation) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = DWORD2(FileInformation);
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    goto LABEL_16;
  }
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, DWORD2(FileInformation), 0x6966444Eu);
  v14 = v13;
  if ( !v13 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xFu,
        (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids);
    goto LABEL_16;
  }
  v15 = ZwReadFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, v13, v12, 0LL, 0LL);
  ZwClose(FileHandlea);
  if ( v15 >= 0 && IoStatusBlock.Information == v12 )
  {
    v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6466444Eu);
    v17 = v16;
    if ( v16 )
    {
      *v16 = v14;
      KeInitializeSpinLock(v16 + 1);
      v17[16] = 0;
      *FileHandle = v17;
      *FileLength = v12;
      *Status = 0;
    }
    else
    {
      *Status = -1073741670;
      ExFreePoolWithTag(v14, 0);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v15;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x10u,
        (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    *Status = -1073676260;
    ExFreePoolWithTag(v14, 0);
  }
LABEL_32:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    FileAttributes[0] = *Status;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids,
      *(_QWORD *)FileAttributes);
  }
}

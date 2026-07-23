/*
 * XREFs of IopValidateJunctionTarget @ 0x14088EB14
 * Callers:
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140252B80 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     FsRtlValidateReparsePointBuffer @ 0x140303B60 (FsRtlValidateReparsePointBuffer.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F2990 (ZwOpenFile.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IoVolumeDeviceToDosName @ 0x1405DB3D0 (IoVolumeDeviceToDosName.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToGuidPath @ 0x140687FE0 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopValidateJunctionTarget(
        int a1,
        _OWORD *a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  SIZE_T v6; // rbx
  void *v9; // r15
  char *PoolWithTag; // rsi
  ULONG v11; // r12d
  _REPARSE_DATA_BUFFER *PoolWithQuota_0; // rax
  const void *v13; // rdx
  size_t v14; // r8
  _REPARSE_DATA_BUFFER *v15; // r14
  int appended; // ebx
  _DMA_OPERATIONS *DmaOperations; // r13
  char v18; // r12
  ULONG v19; // r12d
  int v20; // r8d
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  unsigned int v23; // eax
  _OWORD *v24; // rax
  _OWORD *v25; // r12
  unsigned int Length; // ecx
  char v28; // [rsp+40h] [rbp-128h]
  UNICODE_STRING v29; // [rsp+50h] [rbp-118h] BYREF
  __int64 v30; // [rsp+60h] [rbp-108h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-100h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-F8h] BYREF
  _REPARSE_DATA_BUFFER *v33; // [rsp+80h] [rbp-E8h]
  UNICODE_STRING String2; // [rsp+88h] [rbp-E0h] BYREF
  int v35; // [rsp+98h] [rbp-D0h]
  _OWORD *v36; // [rsp+A0h] [rbp-C8h]
  HANDLE FileHandle; // [rsp+A8h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-B8h] BYREF
  UNICODE_STRING String1; // [rsp+C0h] [rbp-A8h] BYREF
  UNICODE_STRING v40; // [rsp+D0h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+120h] [rbp-48h] BYREF

  v6 = a3;
  String2 = 0LL;
  *(_QWORD *)&Source.Length = 1572886LL;
  Source.Buffer = L"\\??\\Global\\";
  *(_QWORD *)&v40.Length = 2359330LL;
  v40.Buffer = L"\\??\\Global\\Volume";
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&String1.Length = 1441812LL;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v33 = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  FileHandle = 0LL;
  DmaAdapter = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a1 == 590860 )
  {
    v11 = v6 - 32;
    v35 = v6 - 32;
    PoolWithQuota_0 = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota_0(
                                                NonPagedPoolNx,
                                                (unsigned int)(v6 - 32));
    v13 = a2 + 2;
    v14 = (unsigned int)(v6 - 32);
  }
  else
  {
    v11 = v6;
    v35 = v6;
    PoolWithQuota_0 = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v6);
    v14 = v6;
    v13 = a2;
  }
  v15 = PoolWithQuota_0;
  v33 = PoolWithQuota_0;
  memmove(PoolWithQuota_0, v13, v14);
  appended = FsRtlValidateReparsePointBuffer(v11, v15);
  if ( appended >= 0 )
  {
    String2.Buffer = v15->MountPointReparseBuffer.PathBuffer;
    String2.Length = v15->SymbolicLinkReparseBuffer.SubstituteNameLength & 0xFFFE;
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = IopReferenceFileObject(FileHandle, 0, 0, (PVOID *)&DmaAdapter, 0LL);
      if ( appended >= 0 )
      {
        DmaOperations = DmaAdapter->DmaOperations;
        if ( (HIDWORD(DmaOperations->FreeAdapterChannel) & 0x10) != 0 )
        {
LABEL_8:
          appended = -1073741811;
          goto LABEL_45;
        }
        v18 = 0;
        v28 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v40, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(DmaOperations, &DestinationString), appended < 0) )
        {
          v18 = 1;
          v28 = 1;
        }
        if ( v18 )
          appended = IoVolumeDeviceToGuidPath((PDEVICE_OBJECT)DmaAdapter->DmaOperations, (__int64)&DestinationString);
        if ( appended >= 0 )
        {
          v19 = String2.Length + 8;
          while ( 1 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x65546F49u);
            *(_QWORD *)&v29.Length = PoolWithTag;
            if ( !PoolWithTag )
            {
              appended = -1073741670;
              goto LABEL_45;
            }
            appended = IopQueryXxxInformation(DmaAdapter, 9, v19, 0, (struct _IRP *)PoolWithTag, &v30, 1);
            if ( appended != -2147483643 )
              break;
            v19 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            *(_QWORD *)&v29.Length = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_45;
          if ( !*(_DWORD *)PoolWithTag || *((_WORD *)PoolWithTag + 2) != 92 )
            goto LABEL_8;
          v20 = DestinationString.Length + *(_DWORD *)PoolWithTag + 14;
          if ( !v28 )
            v20 = DestinationString.Length + *(_DWORD *)PoolWithTag + 22;
          v21 = v20 - 2;
          if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92 )
            v21 = v20;
          if ( v21 >= 0xFFFD )
            goto LABEL_8;
          v22 = a3 + v21 - String2.Length;
          v23 = a4;
          if ( v22 > a4 )
            v23 = a3 + v21 - String2.Length;
          v24 = IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v23);
          v9 = v24;
          v36 = v24;
          if ( a1 == 590860 )
          {
            *v24 = *a2;
            v24[1] = a2[1];
            v25 = v24 + 2;
            LODWORD(v30) = v22 - 32;
          }
          else
          {
            v25 = v24;
            LODWORD(v30) = v22;
          }
          Destination.Buffer = (wchar_t *)(v25 + 1);
          Destination.Length = 0;
          Destination.MaximumLength = v21;
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( appended >= 0 )
          {
            v29 = DestinationString;
            if ( v28 )
            {
              v29.Length = DestinationString.Length - 8;
              v29.Buffer += 4;
            }
            if ( v29.Buffer[((unsigned __int64)v29.Length >> 1) - 1] == 92 )
              v29.Length -= 2;
            if ( !v29.Length || v29.Length > DestinationString.Length )
              goto LABEL_8;
            appended = RtlAppendUnicodeStringToString(&Destination, &v29);
            if ( appended >= 0 )
            {
              v29.Buffer = (wchar_t *)(PoolWithTag + 4);
              v29.Length = *(_WORD *)PoolWithTag;
              v29.MaximumLength = v29.Length;
              appended = RtlAppendUnicodeStringToString(&Destination, &v29);
              if ( appended >= 0 )
              {
                *(_DWORD *)v25 = -1610612733;
                *(_DWORD *)((char *)v25 + 6) = 0;
                *((_WORD *)v25 + 2) = v30 - 8;
                Length = Destination.Length;
                *((_WORD *)v25 + 5) = Destination.Length;
                *((_WORD *)v25 + ((unsigned __int64)Length >> 1) + 8) = 0;
                LOWORD(Length) = Length + 2;
                *((_WORD *)v25 + 6) = Length;
                memmove(
                  (char *)v25 + (unsigned __int16)Length + 16,
                  &v15->GenericReparseBuffer + v15->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                  v15->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v25 + 7) = v15->SymbolicLinkReparseBuffer.PrintNameLength;
                *a5 = v9;
                *a6 = v22;
                v9 = 0LL;
              }
            }
          }
        }
        else
        {
          DestinationString.Buffer = 0LL;
        }
      }
    }
  }
LABEL_45:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}

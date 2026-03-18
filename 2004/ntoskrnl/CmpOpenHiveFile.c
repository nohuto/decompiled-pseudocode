/*
 * XREFs of CmpOpenHiveFile @ 0x14061E8E8
 * Callers:
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x14061DFC8 (CmpInitHiveFromFile.c)
 *     CmLoadKey @ 0x1406525D0 (CmLoadKey.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403F37E0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1403F3AA0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1403F3CE0 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x1403F4060 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CmpCreateEvent @ 0x14061EE90 (CmpCreateEvent.c)
 *     CmpGetVolumeClusterSize @ 0x140639DF4 (CmpGetVolumeClusterSize.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14063C974 (CmpQueryFileSecurityDescriptor.c)
 *     CmpLogHiveFileInaccessible @ 0x14063CA24 (CmpLogHiveFileInaccessible.c)
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406952E0 (PsReferenceImpersonationTokenEx.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1407094B8 (CmpGetVolumeLogFileSizeCap.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086FBE4 (CmpOpenFileWithExtremePrejudice.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        UNICODE_STRING *Source,
        unsigned int a2,
        HANDLE *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9)
{
  ULONG ShareAccess; // edi
  char v10; // si
  struct _DMA_ADAPTER *v12; // r12
  __int64 v13; // r15
  __int64 result; // rax
  NTSTATUS Status; // ebx
  const WCHAR *v16; // r14
  int v17; // r14d
  ACCESS_MASK v18; // r13d
  ULONG CreateOptions; // r15d
  ULONG v20; // r14d
  int Information; // edi
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned __int16 v24; // di
  int VolumeClusterSize; // eax
  HANDLE v26; // rcx
  ULONG CreateDisposition; // [rsp+38h] [rbp-C8h]
  char v28; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Event; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-80h]
  UNICODE_STRING Destination; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  int InputBuffer; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v39; // [rsp+ACh] [rbp-54h]
  PETHREAD Thread; // [rsp+B0h] [rbp-50h]
  PACCESS_TOKEN Token; // [rsp+B8h] [rbp-48h]
  void *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  HANDLE *v45; // [rsp+D8h] [rbp-28h]
  int *v46; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *v47; // [rsp+E8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  __m128i si128; // [rsp+120h] [rbp+20h] BYREF
  __m128i v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+40h]
  __int128 FileInformation; // [rsp+148h] [rbp+48h] BYREF
  __int64 v53; // [rsp+158h] [rbp+58h]

  ShareAccess = 0;
  v10 = a5;
  Token = a6;
  v43 = a7;
  v12 = 0LL;
  v42 = a8;
  v44 = a9;
  v51 = 0LL;
  v53 = 0LL;
  ImpersonationLevel = SecurityImpersonation;
  v13 = a2;
  v46 = a4;
  v45 = a3;
  v39 = a2;
  v47 = Source;
  InputBuffer = 0;
  DmaAdapter = 0LL;
  Event = 0LL;
  FileHandle = 0LL;
  CopyOnOpen = 0;
  Thread = 0LL;
  EffectiveOnly = 0;
  *a3 = 0LL;
  v28 = 0;
  FileAttributes = 6;
  si128 = 0LL;
  v50 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination = 0LL;
  if ( a2 >= 6 )
    return 3221225485LL;
  result = CmpCreateEvent(NotificationEvent);
  Status = result;
  if ( (int)result >= 0 )
  {
    v16 = (const WCHAR *)CmFileNameExtensions[v13];
    if ( v16 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v16[v23] );
      v24 = Source->Length + 2 * (v23 + 1);
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v24, 0x62774D43u);
      if ( !Destination.Buffer )
      {
        Status = -1073741670;
LABEL_34:
        ZwClose(Event);
        HalPutDmaAdapter(DmaAdapter);
        return (unsigned int)Status;
      }
      Destination.Length = 0;
      Destination.MaximumLength = v24;
      RtlAppendUnicodeStringToString(&Destination, Source);
      RtlAppendUnicodeToString(&Destination, v16);
      ShareAccess = 0;
    }
    else
    {
      Destination = *Source;
    }
    v17 = 3;
    if ( (a5 & 0x20) != 0 )
    {
      v18 = 1;
      ShareAccess = ((a5 >> 7) & 1) == 0;
    }
    else
    {
      v18 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
      if ( (_DWORD)v13 )
        v18 = (a5 & 8) == 0 ? 3 : 0;
    }
    if ( (_DWORD)v13 )
    {
      if ( (a5 & 0x20) != 0 )
        v17 = 1;
      else
        v17 = (a5 & 0x10) == 0 ? 3 : 0;
      CreateOptions = 32780;
    }
    else
    {
      FileAttributes = 128;
      CreateOptions = 49188;
      if ( (a5 & 0x21) != 1 )
        v17 = 1;
    }
    if ( Token )
    {
      Thread = KeGetCurrentThread();
      v12 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx(
                                     (_DWORD)Thread,
                                     1,
                                     (unsigned int)&CopyOnOpen,
                                     (unsigned int)&EffectiveOnly,
                                     (__int64)&ImpersonationLevel,
                                     0LL);
      if ( PsImpersonateClient(Thread, Token, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Token + 49)) < 0 )
        goto LABEL_29;
      v10 = a5 | 0x40;
      v28 = 1;
    }
    CreateDisposition = v17;
    v20 = FileAttributes;
    ObjectAttributes.Attributes = 16 * (v10 & 0x40 | 0x24);
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.SecurityDescriptor = v42;
    ObjectAttributes.Length = 48;
    Status = ZwCreateFile(
               &FileHandle,
               v18,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               FileAttributes,
               ShareAccess,
               CreateDisposition,
               CreateOptions,
               0LL,
               0);
    if ( Status == -1073741790 )
      Status = CmpOpenFileWithExtremePrejudice(&FileHandle, &ObjectAttributes, &IoStatusBlock, v20, CreateOptions);
    if ( v28 )
    {
      if ( v12 )
      {
        if ( PsImpersonateClient(Thread, v12, CopyOnOpen, EffectiveOnly, ImpersonationLevel) < 0 )
          KeBugCheckEx(0x51u, 0x26uLL, (ULONG_PTR)v12, 0LL, 0LL);
      }
      else
      {
        PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
      }
    }
    if ( Status < 0 )
    {
      CmpLogHiveFileInaccessible(&Destination, (unsigned int)Status, CreateOptions, ShareAccess);
      goto LABEL_29;
    }
    Information = IoStatusBlock.Information;
    if ( (v10 & 0x28) == 0 )
    {
      LODWORD(v51) = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      v50 = si128;
      ZwSetInformationFile(FileHandle, &IoStatusBlock, &si128, 0x28u, FileBasicInformation);
    }
    if ( (v10 & 0x22) != 2 )
      goto LABEL_68;
    Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(DmaAdapter, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( (int)(Status + 0x80000000) < 0 || Status == -1073741808 )
    {
LABEL_68:
      if ( ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
        KeWaitForSingleObject(DmaAdapter, Executive, 0, 0, 0LL);
      if ( v39 )
        goto LABEL_28;
      if ( Information != 2
        && ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0
        && !*((_QWORD *)&FileInformation + 1) )
      {
        Information = 2;
      }
      v22 = v43;
      if ( v43 )
      {
        VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle);
        v26 = FileHandle;
        Status = VolumeClusterSize;
        if ( VolumeClusterSize < 0 )
        {
LABEL_65:
          ZwClose(v26);
LABEL_29:
          if ( Destination.Buffer && Destination.Buffer != v47->Buffer )
            ExFreePoolWithTag(Destination.Buffer, 0);
          if ( v12 )
            HalPutDmaAdapter(v12);
          goto LABEL_34;
        }
        *(_DWORD *)(v22 + 4) = CmpGetVolumeLogFileSizeCap(FileHandle);
      }
      if ( !v44 || (Status = CmpQueryFileSecurityDescriptor(FileHandle), Status >= 0) )
      {
LABEL_28:
        Status = 0;
        *v45 = FileHandle;
        *v46 = Information;
        goto LABEL_29;
      }
    }
    v26 = FileHandle;
    goto LABEL_65;
  }
  return result;
}

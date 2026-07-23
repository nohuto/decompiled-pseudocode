/*
 * XREFs of ExpQueryCodeIntegrityCertificateInfo @ 0x14094A86C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1403FAA80 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1403FAAC0 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1403FAEC0 (ZwCreateSection.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A970 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall ExpQueryCodeIntegrityCertificateInfo(void *a1, int a2)
{
  struct _DMA_ADAPTER *DmaOperations; // rsi
  void *FileHandle; // r14
  unsigned int v4; // r12d
  NTSTATUS v5; // edi
  NTSTATUS v6; // eax
  LARGE_INTEGER v7; // rbx
  struct _DMA_ADAPTER Handle; // [rsp+50h] [rbp-19h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  FileSize.QuadPart = 0LL;
  DmaOperations = 0LL;
  ViewSize = 0LL;
  FileHandle = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = 2;
    }
    else
    {
      if ( a2 != 2 )
      {
        v5 = -1073741811;
        goto LABEL_22;
      }
      v4 = 3;
    }
  }
  else
  {
    v4 = 1;
  }
  v5 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, &Handle);
  if ( v5 >= 0 )
  {
    FileHandle = *(void **)&Handle.Version;
    Handle.DmaOperations = 0LL;
    v6 = ObReferenceObjectByHandle(
           *(HANDLE *)&Handle.Version,
           1u,
           (POBJECT_TYPE)IoFileObjectType,
           0,
           (PVOID *)&Handle.DmaOperations,
           0LL);
    DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( BYTE6(Handle.DmaOperations->GetDmaAlignment) || BYTE3(Handle.DmaOperations->GetDmaAlignment) )
      {
        v5 = -1073741757;
      }
      else
      {
        v5 = FsRtlGetFileSize((PFILE_OBJECT)Handle.DmaOperations, &FileSize);
        if ( v5 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v5 >= 0 )
          {
            v7 = FileSize;
            ViewSize = FileSize.QuadPart;
            v5 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   &ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v5 < 0 )
            {
              BaseAddress = 0LL;
              goto LABEL_24;
            }
            if ( qword_140C1DB28 )
              v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C1DB28)(
                     v4,
                     BaseAddress,
                     (LARGE_INTEGER)v7.QuadPart);
            else
              v5 = -1073741637;
          }
          else
          {
            SectionHandle = 0LL;
          }
        }
      }
    }
    else
    {
      DmaOperations = 0LL;
    }
  }
LABEL_22:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_24:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( DmaOperations )
    HalPutDmaAdapter(DmaOperations);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}

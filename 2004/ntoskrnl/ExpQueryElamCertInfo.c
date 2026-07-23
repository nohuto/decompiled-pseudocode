/*
 * XREFs of ExpQueryElamCertInfo @ 0x140947348
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1403F3AC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1403F3B00 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1403F3F00 (ZwCreateSection.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x14060EA60 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1407189B0 (IoConvertFileHandleToKernelHandle.c)
 *     SeRegisterElamCertResources @ 0x14078B664 (SeRegisterElamCertResources.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryElamCertInfo(void *a1)
{
  void *v1; // r15
  int v2; // esi
  HANDLE FileHandle; // r12
  struct _DMA_ADAPTER *v4; // r14
  LARGE_INTEGER v5; // rbx
  PVOID PoolWithQuotaTag; // rax
  __int64 v7; // rdx
  PVOID Object; // [rsp+60h] [rbp-88h] BYREF
  LARGE_INTEGER FileSize; // [rsp+68h] [rbp-80h] BYREF
  ULONG_PTR ViewSize[3]; // [rsp+70h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+20h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileSize.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  SectionHandle = 0LL;
  v1 = 0LL;
  BaseAddress = 0LL;
  v2 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, (PADAPTER_OBJECT)&Handle);
  if ( v2 >= 0 )
  {
    Object = 0LL;
    FileHandle = Handle;
    v2 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = (struct _DMA_ADAPTER *)Object;
    if ( v2 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v2 = -1073741757;
      }
      else
      {
        v2 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v2 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v2 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v2 >= 0 )
          {
            v5 = FileSize;
            ViewSize[0] = FileSize.QuadPart;
            v2 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v2 >= 0 )
            {
              if ( qword_140C1D8E8 )
                v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C1D8E8)(
                       0LL,
                       BaseAddress,
                       (LARGE_INTEGER)v5.QuadPart);
              else
                v2 = -1073741637;
              if ( v2 >= 0 )
              {
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v5.QuadPart, 0x4D414C45u);
                v1 = PoolWithQuotaTag;
                ViewSize[2] = (ULONG_PTR)PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  memmove(PoolWithQuotaTag, BaseAddress, v5.QuadPart);
                  if ( qword_140C1D8E8 )
                    v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C1D8E8)(
                           0LL,
                           v1,
                           (LARGE_INTEGER)v5.QuadPart);
                  else
                    v2 = -1073741637;
                  if ( v2 >= 0 )
                  {
                    v2 = SeRegisterElamCertResources((unsigned __int64)v1, v7, 1);
                    if ( v2 >= 0 )
                      v2 = 0;
                  }
                }
                else
                {
                  v2 = -1073741670;
                }
              }
            }
            else
            {
              BaseAddress = 0LL;
            }
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
      v4 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
    v4 = 0LL;
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x4D414C45u);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v4 )
    HalPutDmaAdapter(v4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v2;
}

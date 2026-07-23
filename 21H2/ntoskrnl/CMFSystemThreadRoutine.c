/*
 * XREFs of CMFSystemThreadRoutine @ 0x1409595A0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1403FA600 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1403FA640 (ZwReadFile.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1403FAA80 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1403FAAC0 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x1403FAE80 (ZwCreateEvent.c)
 *     ZwCreateSection @ 0x1403FAEC0 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CMFCreateSecurityDescriptor @ 0x140958694 (CMFCreateSecurityDescriptor.c)
 *     CMFGetFileSizeEx @ 0x140958F90 (CMFGetFileSizeEx.c)
 *     CMFGetLargePageSectionSize @ 0x140959008 (CMFGetLargePageSectionSize.c)
 *     CMFReadCompressedSegment @ 0x1409590C0 (CMFReadCompressedSegment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall CMFSystemThreadRoutine(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // r12
  __int64 *PoolWithTag; // r15
  PVOID v3; // r13
  int v5; // eax
  char *v6; // rax
  const wchar_t *v7; // r8
  ULONG Length; // r14d
  int v9; // ebx
  __int64 *v10; // r12
  NTSTATUS v11; // eax
  bool v12; // sf
  int v13; // ebx
  ULONG_PTR LowPart; // r14
  LARGE_INTEGER *p_MaximumSize; // r12
  int v16; // eax
  HANDLE v17; // r12
  ULONG v18; // eax
  NTSTATUS v19; // eax
  struct _DMA_ADAPTER **v20; // rax
  struct _KEVENT *v21; // rcx
  ULONG Buffer; // [rsp+30h] [rbp-D8h]
  char v23; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A8h] BYREF
  struct _DMA_ADAPTER *v25; // [rsp+68h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+70h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v28; // [rsp+80h] [rbp-88h]
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v37; // [rsp+100h] [rbp-8h] BYREF
  wchar_t pszDest[264]; // [rsp+108h] [rbp+0h] BYREF

  v34 = 0LL;
  MaximumSize.QuadPart = 0LL;
  v1 = 0LL;
  SectionHandle = 0LL;
  PoolWithTag = 0LL;
  EventHandle = 0LL;
  v3 = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v37 = 0LL;
  v23 = 0;
  v25 = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( !a1 )
    return;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 == 16 )
  {
    v6 = "RESCDIR";
    v7 = L"%s\\rc%04u\\rescache.dir";
LABEL_10:
    v28 = v6;
    v10 = &v37;
    Length = 8;
    v11 = RtlStringCchPrintfW(pszDest, 0x104uLL, v7, L"\\SystemRoot\\Rescache", *(_DWORD *)(a1 + 4));
LABEL_11:
    v9 = v11;
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
LABEL_14:
      v1 = 0LL;
      goto LABEL_61;
    }
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      FileHandle = 0LL;
      goto LABEL_14;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_14;
    v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, v10, Length, &MaximumSize, 0LL);
    if ( v9 < 0 )
      goto LABEL_14;
    v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
    v12 = v9 < 0;
    if ( v9 )
    {
      v1 = 0LL;
      goto LABEL_19;
    }
    if ( *v10 != *(_QWORD *)v28 )
    {
      v9 = -1073700864;
      goto LABEL_14;
    }
    v13 = *(_DWORD *)(a1 + 48);
    if ( v13 == 32 && *((_DWORD *)PoolWithTag + 19) )
    {
      *(_DWORD *)(a1 + 24) |= 4u;
      v23 = 1;
      *(_BYTE *)(a1 + 12) = 1;
    }
    LowPart = 0LL;
    p_MaximumSize = 0LL;
    v28 = FileHandle;
    if ( *(_BYTE *)(a1 + 12) )
    {
      v28 = 0LL;
      MaximumSize.QuadPart = 0LL;
      if ( v13 == 16 || v13 == 256 )
      {
        v9 = CMFGetFileSizeEx(FileHandle, &MaximumSize);
        if ( (v9 & 0xC0000000) == 0xC0000000 )
          goto LABEL_14;
        LowPart = MaximumSize.LowPart;
        v13 = *(_DWORD *)(a1 + 48);
      }
      else
      {
        LowPart = *((unsigned int *)PoolWithTag + 8);
        MaximumSize.LowPart = *((_DWORD *)PoolWithTag + 8);
      }
      if ( (int)CMFGetLargePageSectionSize((__int64 *)&MaximumSize, (__int64)&v34) < 0 || *(int *)a1 >= 0 )
      {
        *(_DWORD *)a1 &= ~0x80000000;
        p_MaximumSize = &MaximumSize;
        ViewSize = LowPart;
      }
      else
      {
        p_MaximumSize = (LARGE_INTEGER *)&v34;
        ViewSize = (unsigned int)v34;
      }
    }
    if ( v13 == 256
      || (v16 = CMFCreateSecurityDescriptor(&Object, 0LL), v3 = Object, v9 = v16, (v16 & 0xC0000000) != 0xC0000000) )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      Buffer = *(_DWORD *)a1;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v3;
      v9 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, p_MaximumSize, 4u, Buffer, v28);
      if ( v9 >= 0 )
      {
LABEL_43:
        Object = 0LL;
        v19 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
        v1 = (struct _DMA_ADAPTER *)Object;
        v9 = v19;
        if ( (v19 & 0xC0000000) == 0xC0000000 )
        {
          v1 = 0LL;
          goto LABEL_61;
        }
        if ( *(_BYTE *)(a1 + 12) )
        {
          MaximumSize.QuadPart = 0LL;
          v9 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 &MaximumSize,
                 &ViewSize,
                 ViewUnmap,
                 0x400000u,
                 4u);
          if ( (v9 & 0xC0000000) == 0xC0000000 )
          {
            BaseAddress = 0LL;
            goto LABEL_61;
          }
          if ( v23 )
          {
            *((_DWORD *)PoolWithTag + 19) = 0;
            v9 = CMFReadCompressedSegment(FileHandle, (char *)BaseAddress, LowPart, PoolWithTag);
            if ( v9 < 0 )
              goto LABEL_61;
          }
          else
          {
            MaximumSize.QuadPart = 0LL;
            v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, BaseAddress, LowPart, &MaximumSize, 0LL);
            if ( v9 < 0 )
              goto LABEL_61;
            v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            v12 = v9 < 0;
            if ( v9 )
            {
LABEL_19:
              if ( !v12 )
                v9 = -1073741823;
              goto LABEL_61;
            }
          }
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
          BaseAddress = 0LL;
        }
        v20 = *(struct _DMA_ADAPTER ***)(a1 + 40);
        if ( v20 )
        {
          *v20 = v1;
          v1 = 0LL;
          if ( *(_DWORD *)(a1 + 48) == 16 && CMFCacheIndex == 10000 )
          {
            CMFFlagsCache |= *(_DWORD *)(a1 + 24) & 0xF;
            CMFCacheIndex = *(_DWORD *)(a1 + 4);
          }
        }
        goto LABEL_61;
      }
      v17 = v28;
      while ( *(_BYTE *)(a1 + 12) )
      {
        v18 = *(_DWORD *)a1;
        if ( *(int *)a1 >= 0 )
          break;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        *(_DWORD *)a1 = v18 & 0x7FFFFFFF;
        ViewSize = LowPart;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v3;
        v9 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, v18 & 0x7FFFFFFF, v17);
        if ( v9 >= 0 )
          goto LABEL_43;
      }
      SectionHandle = 0LL;
    }
    v1 = v25;
    goto LABEL_61;
  }
  if ( v5 != 32 )
  {
    if ( v5 != 256 )
    {
      v9 = -1073741811;
      goto LABEL_61;
    }
    v6 = "RESCHIT";
    v7 = L"%s\\rc%04u\\rescache.hit";
    goto LABEL_10;
  }
  Length = 4192;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x1060uLL, 0x636D6650u);
  if ( PoolWithTag )
  {
    v28 = "RESCSEG";
    v10 = PoolWithTag;
    v11 = RtlStringCchPrintfW(
            pszDest,
            0x104uLL,
            L"%s\\rc%04u\\segment%u.cmf",
            L"\\SystemRoot\\Rescache",
            *(_DWORD *)(a1 + 4),
            *(_DWORD *)(a1 + 28));
    goto LABEL_11;
  }
  v9 = -1073741801;
LABEL_61:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v1 )
    HalPutDmaAdapter(v1);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v21 = *(struct _KEVENT **)(a1 + 16);
  *(_DWORD *)(a1 + 36) = v9;
  if ( v21 )
    KeSetEvent(v21, 1, 0);
}

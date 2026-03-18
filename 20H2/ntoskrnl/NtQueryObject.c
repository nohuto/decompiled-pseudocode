/*
 * XREFs of NtQueryObject @ 0x140634BE0
 * Callers:
 *     IopQueryRegistryKeySystemPath @ 0x140737670 (IopQueryRegistryKeySystemPath.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140209D7C (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeInfo @ 0x140631B00 (ObQueryTypeInfo.c)
 *     ObQueryNameStringMode @ 0x1406350A0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  unsigned int v8; // r14d
  KPROCESSOR_MODE PreviousMode; // r12
  ULONG v10; // r8d
  PULONG v11; // r15
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // esi
  struct _DMA_ADAPTER *v15; // rdi
  ACCESS_MASK GrantedAccess; // r9d
  char *v17; // r8
  __int64 v18; // r10
  NTSTATUS NameStringMode; // eax
  __int32 v20; // ebx
  __int32 v21; // ebx
  char v22; // al
  ULONG HandleAttributes; // eax
  char v24; // cl
  __int64 *v25; // rax
  __int64 v26; // r8
  struct _OBJECT_TYPE *v27; // r10
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v30; // rsi
  ULONG_PTR v31; // rbx
  __int32 v32; // esi
  __int64 v33; // rax
  struct _DMA_ADAPTER *v34; // rcx
  unsigned int i; // ecx
  __int64 v36; // rcx
  NTSTATUS TypeInfo; // eax
  int v38; // esi
  PADAPTER_OBJECT v39; // rcx
  struct _KTHREAD *v40; // rax
  char *v41; // rcx
  struct _DMA_ADAPTER *v42; // rdx
  struct _DMA_ADAPTER *v43; // rcx
  ULONG_PTR v44; // rcx
  NTSTATUS v45; // [rsp+50h] [rbp-F8h]
  unsigned int v46[3]; // [rsp+54h] [rbp-F4h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-E8h]
  unsigned int v48; // [rsp+68h] [rbp-E0h]
  struct _DMA_ADAPTER *v49; // [rsp+70h] [rbp-D8h]
  ACCESS_MASK v50; // [rsp+78h] [rbp-D0h]
  int v51; // [rsp+7Ch] [rbp-CCh] BYREF
  __int32 v52; // [rsp+80h] [rbp-C8h]
  PADAPTER_OBJECT v53; // [rsp+88h] [rbp-C0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-B8h] BYREF
  PADAPTER_OBJECT v55; // [rsp+98h] [rbp-B0h]
  __int64 v56; // [rsp+A0h] [rbp-A8h]
  __int128 v57; // [rsp+A8h] [rbp-A0h]
  __m256i v58; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-70h]
  PVOID Object; // [rsp+E0h] [rbp-68h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+E8h] [rbp-60h]
  PVOID v62; // [rsp+110h] [rbp-38h]
  char *v63; // [rsp+118h] [rbp-30h]

  v8 = 0;
  HandleInformation = 0LL;
  v57 = 0LL;
  memset(&v58, 0, sizeof(v58));
  v59 = 0LL;
  v52 = 0;
  v51 = 0;
  v46[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 4;
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
      v10 = 1;
    ProbeForWrite(ObjectInformation, ObjectInformationLength, v10);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    GrantedAccess = 0;
    v50 = 0;
    v15 = 0LL;
    v49 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v56 = 0LL;
    v14 = 0;
    v45 = 0;
  }
  else
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, &Object, &HandleInformation);
    v14 = result;
    v15 = (struct _DMA_ADAPTER *)Object;
    v49 = (struct _DMA_ADAPTER *)Object;
    v45 = result;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v50 = HandleInformation.GrantedAccess;
    v17 = (char *)Object - 48;
    v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v56 = v18;
  }
  BugCheckParameter2 = (ULONG_PTR)v17;
  if ( ObjectInformationClass == ObjectNameInformation )
  {
    NameStringMode = ObQueryNameStringMode(
                       (_DWORD)v15,
                       (_DWORD)ObjectInformation,
                       ObjectInformationLength,
                       (unsigned int)v46,
                       PreviousMode);
  }
  else
  {
    if ( ObjectInformationClass == ObjectBasicInformation )
    {
      if ( ObjectInformationLength != 56 )
      {
        HalPutDmaAdapter(v15);
        return -1073741820;
      }
      memset(&v58.m256i_u64[1], 0, 24);
      HandleAttributes = HandleInformation.HandleAttributes;
      LODWORD(v57) = HandleInformation.HandleAttributes;
      v24 = v17[27];
      if ( (v24 & 0x10) != 0 )
      {
        HandleAttributes = HandleInformation.HandleAttributes | 0x10;
        LODWORD(v57) = HandleInformation.HandleAttributes | 0x10;
      }
      if ( (v24 & 8) != 0 )
        LODWORD(v57) = HandleAttributes | 0x20;
      DWORD1(v57) = GrantedAccess;
      DWORD2(v57) = *((_DWORD *)v17 + 2);
      HIDWORD(v57) = *(_DWORD *)v17;
      v25 = (__int64 *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v17);
      if ( v25 )
        v58.m256i_i64[0] = *v25;
      else
        v58.m256i_i64[0] = 0LL;
      if ( v27 == ObpSymbolicLinkObjectType )
        v28 = *(_QWORD *)&v15->Version;
      else
        v28 = 0LL;
      v59 = v28;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v30 = (signed __int64 *)(v26 + 16);
      ExAcquirePushLockSharedEx(v26 + 16, 0LL);
      v31 = BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 2) != 0
        && (v33 = ObpInfoMaskToOffset[*(_BYTE *)(BugCheckParameter2 + 26) & 3], BugCheckParameter2 -= v33, v31 != v33)
        && (v34 = *(struct _DMA_ADAPTER **)(v31 - v33), (v55 = v34) != 0LL) )
      {
        ObfReferenceObject(v34);
        if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v30);
        KeAbPostRelease((ULONG_PTR)v30);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v38 = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
        while ( 1 )
        {
          DmaAdapter = v55;
          if ( !v55 )
            break;
          v39 = v55 - 3;
          v53 = v55 - 3;
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)&v39[1];
          ExAcquirePushLockSharedEx((ULONG_PTR)&v39[1], 0LL);
          if ( (BYTE2(v53[1].DmaOperations) & 2) == 0
            || (v41 = (char *)v53 - ObpInfoMaskToOffset[BYTE2(v53[1].DmaOperations) & 3]) == 0LL
            || (v42 = *(struct _DMA_ADAPTER **)v41) == 0LL )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            KeAbPostRelease(BugCheckParameter2);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( v55 )
              HalPutDmaAdapter(v55);
            break;
          }
          v38 += *((unsigned __int16 *)v41 + 4) + 2;
          v43 = *(struct _DMA_ADAPTER **)v41;
          v55 = v42;
          ObfReferenceObject(v43);
          v44 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v44 = BugCheckParameter2;
          }
          KeAbPostRelease(v44);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          HalPutDmaAdapter(DmaAdapter);
        }
        v32 = v38 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v30);
        KeAbPostRelease((ULONG_PTR)v30);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v32 = 0;
      }
      v58.m256i_i32[5] = v32;
      v58.m256i_i32[6] = *(unsigned __int16 *)(v56 + 16) + 106;
      if ( (v50 & 0x20000) != 0 && *(_QWORD *)(v31 + 40) )
      {
        v51 = 15;
        v15 = v49;
        (*(void (__fastcall **)(struct _DMA_ADAPTER *, __int64, int *))(v56 + 152))(v49, 1LL, &v51);
      }
      else
      {
        v15 = v49;
      }
      v58.m256i_i32[7] = v52;
      *(_OWORD *)ObjectInformation = v57;
      *(__m256i *)((char *)ObjectInformation + 16) = v58;
      *((_QWORD *)ObjectInformation + 6) = v59;
      v46[0] = 56;
      v14 = v45;
      goto LABEL_14;
    }
    v20 = ObjectInformationClass - 2;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
        {
          HalPutDmaAdapter(v15);
          return -1073741821;
        }
        v46[0] = 2;
        if ( ObjectInformationLength < 2 )
        {
          v14 = -1073741820;
        }
        else
        {
          *(_BYTE *)ObjectInformation = 0;
          v22 = HandleInformation.HandleAttributes;
          if ( (HandleInformation.HandleAttributes & 2) != 0 )
            *(_BYTE *)ObjectInformation = 1;
          *((_BYTE *)ObjectInformation + 1) = 0;
          if ( (v22 & 1) != 0 )
            *((_BYTE *)ObjectInformation + 1) = 1;
        }
      }
      else
      {
        v46[0] = 8;
        v62 = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          for ( i = 0; ; ++i )
          {
            v48 = i;
            if ( i >= 0x100 )
              break;
            v56 = ObpObjectTypes[i];
            if ( !v56 )
              break;
            ++*(_DWORD *)ObjectInformation;
          }
          while ( 1 )
          {
            v48 = v8;
            if ( v8 >= 0x100 )
              break;
            v63 = (char *)ObjectInformation + v46[0];
            v36 = ObpObjectTypes[v8];
            v56 = v36;
            if ( !v36 )
              break;
            TypeInfo = ObQueryTypeInfo(v36, (__int64)ObjectInformation + v46[0], ObjectInformationLength, v46);
            v14 = TypeInfo;
            if ( ((TypeInfo + 0x80000000) & 0x80000000) == 0 && TypeInfo != -1073741820 )
              break;
            ++v8;
          }
        }
        else
        {
          v14 = -1073741820;
        }
      }
      goto LABEL_14;
    }
    NameStringMode = ObQueryTypeInfo(v18, (__int64)ObjectInformation, ObjectInformationLength, v46);
  }
  v14 = NameStringMode;
LABEL_14:
  if ( v11 )
    *v11 = v46[0];
  if ( v15 )
    HalPutDmaAdapter(v15);
  return v14;
}

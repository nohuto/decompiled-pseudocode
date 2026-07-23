/*
 * XREFs of NtQueryObject @ 0x1406C6FA0
 * Callers:
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14026C97C (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     ObQueryTypeInfo @ 0x1406C7D00 (ObQueryTypeInfo.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int32 v35; // esi
  __int64 v36; // rax
  struct _DMA_ADAPTER *v37; // rcx
  unsigned int i; // ecx
  __int64 v39; // rcx
  NTSTATUS TypeInfo; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // esi
  PADAPTER_OBJECT v45; // rcx
  struct _KTHREAD *v46; // rax
  char *v47; // rcx
  struct _DMA_ADAPTER *v48; // rdx
  struct _DMA_ADAPTER *v49; // rcx
  ULONG_PTR v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  NTSTATUS v57; // [rsp+50h] [rbp-F8h]
  _DWORD v58[3]; // [rsp+54h] [rbp-F4h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-E8h]
  unsigned int v60; // [rsp+68h] [rbp-E0h]
  struct _DMA_ADAPTER *v61; // [rsp+70h] [rbp-D8h]
  ACCESS_MASK v62; // [rsp+78h] [rbp-D0h]
  int v63; // [rsp+7Ch] [rbp-CCh] BYREF
  __int32 v64; // [rsp+80h] [rbp-C8h]
  PADAPTER_OBJECT v65; // [rsp+88h] [rbp-C0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-B8h] BYREF
  PADAPTER_OBJECT v67; // [rsp+98h] [rbp-B0h]
  __int64 v68; // [rsp+A0h] [rbp-A8h]
  __int128 v69; // [rsp+A8h] [rbp-A0h]
  __m256i v70; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-70h]
  PVOID Object; // [rsp+E0h] [rbp-68h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+E8h] [rbp-60h]
  PVOID v74; // [rsp+110h] [rbp-38h]
  char *v75; // [rsp+118h] [rbp-30h]

  v8 = 0;
  HandleInformation = 0LL;
  v69 = 0LL;
  memset(&v70, 0, sizeof(v70));
  v71 = 0LL;
  v64 = 0;
  v63 = 0;
  v58[0] = 0;
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
    v62 = 0;
    v15 = 0LL;
    v61 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v68 = 0LL;
    v14 = 0;
    v57 = 0;
  }
  else
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, &Object, &HandleInformation);
    v14 = result;
    v15 = (struct _DMA_ADAPTER *)Object;
    v61 = (struct _DMA_ADAPTER *)Object;
    v57 = result;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v62 = HandleInformation.GrantedAccess;
    v17 = (char *)Object - 48;
    v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v68 = v18;
  }
  BugCheckParameter2 = (ULONG_PTR)v17;
  if ( ObjectInformationClass == ObjectNameInformation )
  {
    NameStringMode = ObQueryNameStringMode(
                       (_DWORD)v15,
                       (_DWORD)ObjectInformation,
                       ObjectInformationLength,
                       (unsigned int)v58,
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
      memset(&v70.m256i_u64[1], 0, 24);
      HandleAttributes = HandleInformation.HandleAttributes;
      LODWORD(v69) = HandleInformation.HandleAttributes;
      v24 = v17[27];
      if ( (v24 & 0x10) != 0 )
      {
        HandleAttributes = HandleInformation.HandleAttributes | 0x10;
        LODWORD(v69) = HandleInformation.HandleAttributes | 0x10;
      }
      if ( (v24 & 8) != 0 )
        LODWORD(v69) = HandleAttributes | 0x20;
      DWORD1(v69) = GrantedAccess;
      DWORD2(v69) = *((_DWORD *)v17 + 2);
      HIDWORD(v69) = *(_DWORD *)v17;
      v25 = (__int64 *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v17);
      if ( v25 )
        v70.m256i_i64[0] = *v25;
      else
        v70.m256i_i64[0] = 0LL;
      if ( v27 == ObpSymbolicLinkObjectType )
        v28 = *(_QWORD *)&v15->Version;
      else
        v28 = 0LL;
      v71 = v28;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v30 = (signed __int64 *)(v26 + 16);
      ExAcquirePushLockSharedEx(v26 + 16, 0LL);
      v31 = BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 2) != 0
        && (v36 = ObpInfoMaskToOffset[*(_BYTE *)(BugCheckParameter2 + 26) & 3], BugCheckParameter2 -= v36, v31 != v36)
        && (v37 = *(struct _DMA_ADAPTER **)(v31 - v36), (v67 = v37) != 0LL) )
      {
        ObfReferenceObject(v37);
        if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v30);
        KeAbPostRelease((ULONG_PTR)v30);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v41, v42, v43);
        v44 = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
        while ( 1 )
        {
          DmaAdapter = v67;
          if ( !v67 )
            break;
          v45 = v67 - 3;
          v65 = v67 - 3;
          v46 = KeGetCurrentThread();
          --v46->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)&v45[1];
          ExAcquirePushLockSharedEx((ULONG_PTR)&v45[1], 0LL);
          if ( (BYTE2(v65[1].DmaOperations) & 2) == 0
            || (v47 = (char *)v65 - ObpInfoMaskToOffset[BYTE2(v65[1].DmaOperations) & 3]) == 0LL
            || (v48 = *(struct _DMA_ADAPTER **)v47) == 0LL )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            KeAbPostRelease(BugCheckParameter2);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v54, v55, v56);
            if ( v67 )
              HalPutDmaAdapter(v67);
            break;
          }
          v44 += *((unsigned __int16 *)v47 + 4) + 2;
          v49 = *(struct _DMA_ADAPTER **)v47;
          v67 = v48;
          ObfReferenceObject(v49);
          v50 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v50 = BugCheckParameter2;
          }
          KeAbPostRelease(v50);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v51, v52, v53);
          HalPutDmaAdapter(DmaAdapter);
        }
        v35 = v44 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v30);
        KeAbPostRelease((ULONG_PTR)v30);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33, v34);
        v35 = 0;
      }
      v70.m256i_i32[5] = v35;
      v70.m256i_i32[6] = *(unsigned __int16 *)(v68 + 16) + 106;
      if ( (v62 & 0x20000) != 0 && *(_QWORD *)(v31 + 40) )
      {
        v63 = 15;
        v15 = v61;
        (*(void (__fastcall **)(struct _DMA_ADAPTER *, __int64, int *))(v68 + 152))(v61, 1LL, &v63);
      }
      else
      {
        v15 = v61;
      }
      v70.m256i_i32[7] = v64;
      *(_OWORD *)ObjectInformation = v69;
      *(__m256i *)((char *)ObjectInformation + 16) = v70;
      *((_QWORD *)ObjectInformation + 6) = v71;
      v58[0] = 56;
      v14 = v57;
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
        v58[0] = 2;
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
        v58[0] = 8;
        v74 = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          for ( i = 0; ; ++i )
          {
            v60 = i;
            if ( i >= 0x100 )
              break;
            v68 = ObpObjectTypes[i];
            if ( !v68 )
              break;
            ++*(_DWORD *)ObjectInformation;
          }
          while ( 1 )
          {
            v60 = v8;
            if ( v8 >= 0x100 )
              break;
            v75 = (char *)ObjectInformation + v58[0];
            v39 = ObpObjectTypes[v8];
            v68 = v39;
            if ( !v39 )
              break;
            TypeInfo = ObQueryTypeInfo(v39, (char *)ObjectInformation + v58[0], ObjectInformationLength, v58);
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
    NameStringMode = ObQueryTypeInfo(v18, ObjectInformation, ObjectInformationLength, v58);
  }
  v14 = NameStringMode;
LABEL_14:
  if ( v11 )
    *v11 = v58[0];
  if ( v15 )
    HalPutDmaAdapter(v15);
  return v14;
}

/*
 * XREFs of NtQueryObject @ 0x14070FD80
 * Callers:
 *     IopQueryRegistryKeySystemPath @ 0x14067AFB0 (IopQueryRegistryKeySystemPath.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x1402A488C (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     ObQueryTypeInfo @ 0x140710F68 (ObQueryTypeInfo.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _BYTE *v5; // r13
  unsigned int v8; // esi
  KPROCESSOR_MODE PreviousMode; // r12
  ULONG v10; // r8d
  PULONG v11; // r15
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // edi
  __int64 *v15; // rbx
  ACCESS_MASK GrantedAccess; // r9d
  char *v17; // r8
  __int64 v18; // r10
  NTSTATUS NameStringMode; // eax
  __int32 v20; // r14d
  __int32 v21; // r14d
  char HandleAttributes; // al
  ULONG v23; // eax
  char v24; // cl
  __int64 *v25; // rax
  __int64 v26; // r8
  struct _OBJECT_TYPE *v27; // r10
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v30; // r14
  char *v31; // rdi
  __int32 v32; // eax
  char *v33; // rax
  void *v34; // rax
  signed __int64 *v35; // rcx
  char *v36; // rdi
  int v37; // r15d
  void *v38; // r13
  char *v39; // rdi
  struct _KTHREAD *v40; // rax
  volatile signed __int64 *v41; // rdi
  PVOID *v42; // rcx
  char *v43; // rdx
  ULONG_PTR v44; // rcx
  signed __int64 v45; // rax
  unsigned int i; // ecx
  __int64 v47; // rcx
  NTSTATUS v48; // eax
  NTSTATUS v49; // [rsp+50h] [rbp-F8h]
  unsigned int v50; // [rsp+54h] [rbp-F4h] BYREF
  unsigned int v51; // [rsp+5Ch] [rbp-ECh]
  char *v52; // [rsp+60h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-E0h]
  ACCESS_MASK v54; // [rsp+70h] [rbp-D8h]
  int v55; // [rsp+74h] [rbp-D4h] BYREF
  __int32 v56; // [rsp+78h] [rbp-D0h]
  PVOID v57; // [rsp+80h] [rbp-C8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+90h] [rbp-B8h]
  char *v60; // [rsp+98h] [rbp-B0h]
  PVOID v61; // [rsp+A0h] [rbp-A8h]
  __int128 v62; // [rsp+A8h] [rbp-A0h]
  __m256i v63; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-70h]
  PVOID Object[8]; // [rsp+E0h] [rbp-68h] BYREF

  v5 = ObjectInformation;
  v8 = 0;
  HandleInformation = 0LL;
  v62 = 0LL;
  memset(&v63, 0, sizeof(v63));
  v64 = 0LL;
  v56 = 0;
  v55 = 0;
  v50 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 4;
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
      v10 = 1;
    ProbeForWrite(v5, ObjectInformationLength, v10);
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
    v54 = 0;
    v15 = 0LL;
    v57 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v59 = 0LL;
    v14 = 0;
    v49 = 0;
  }
  else
  {
    Object[0] = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v14 = result;
    v15 = (__int64 *)Object[0];
    v57 = Object[0];
    v49 = result;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v54 = HandleInformation.GrantedAccess;
    v17 = (char *)Object[0] - 48;
    v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    v59 = v18;
  }
  v60 = v17;
  if ( ObjectInformationClass != ObjectNameInformation )
  {
    if ( ObjectInformationClass )
    {
      v20 = ObjectInformationClass - 2;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 != 1 )
          {
            ObfDereferenceObject(v15);
            return -1073741821;
          }
          v50 = 2;
          if ( ObjectInformationLength < 2 )
          {
            v14 = -1073741820;
          }
          else
          {
            *v5 = 0;
            HandleAttributes = HandleInformation.HandleAttributes;
            if ( (HandleInformation.HandleAttributes & 2) != 0 )
              *v5 = 1;
            v5[1] = 0;
            if ( (HandleAttributes & 1) != 0 )
              v5[1] = 1;
          }
        }
        else
        {
          v50 = 8;
          Object[6] = v5;
          if ( ObjectInformationLength >= 4 )
          {
            *(_DWORD *)v5 = 0;
            for ( i = 0; ; ++i )
            {
              v51 = i;
              if ( i >= 0x100 )
                break;
              v59 = ObpObjectTypes[i];
              if ( !v59 )
                break;
              ++*(_DWORD *)v5;
            }
            while ( 1 )
            {
              v51 = v8;
              if ( v8 >= 0x100 )
                break;
              Object[7] = &v5[v50];
              v47 = ObpObjectTypes[v8];
              v59 = v47;
              if ( !v47 )
                break;
              v48 = ObQueryTypeInfo(v47, &v5[v50], ObjectInformationLength, &v50);
              v14 = v48;
              if ( ((v48 + 0x80000000) & 0x80000000) == 0 && v48 != -1073741820 )
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
      NameStringMode = ObQueryTypeInfo(v18, v5, ObjectInformationLength, &v50);
      goto LABEL_13;
    }
    if ( ObjectInformationLength != 56 )
    {
      ObfDereferenceObject(v15);
      return -1073741820;
    }
    memset(&v63.m256i_u64[1], 0, 24);
    v23 = HandleInformation.HandleAttributes;
    LODWORD(v62) = HandleInformation.HandleAttributes;
    v24 = v17[27];
    if ( (v24 & 0x10) != 0 )
    {
      v23 = HandleInformation.HandleAttributes | 0x10;
      LODWORD(v62) = HandleInformation.HandleAttributes | 0x10;
    }
    if ( (v24 & 8) != 0 )
      LODWORD(v62) = v23 | 0x20;
    DWORD1(v62) = GrantedAccess;
    DWORD2(v62) = *((_DWORD *)v17 + 2);
    HIDWORD(v62) = *(_DWORD *)v17;
    v25 = (__int64 *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v17);
    if ( v25 )
      v63.m256i_i64[0] = *v25;
    else
      v63.m256i_i64[0] = 0LL;
    if ( v27 == ObpSymbolicLinkObjectType )
      v28 = *v15;
    else
      v28 = 0LL;
    v64 = v28;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v30 = (signed __int64 *)(v26 + 16);
    ExAcquirePushLockSharedEx(v26 + 16, 0LL);
    v31 = v60;
    if ( (v60[26] & 2) != 0 )
    {
      v33 = (char *)ObpInfoMaskToOffset[v60[26] & 3];
      BugCheckParameter2 = v60 - v33;
      if ( v60 != v33 )
      {
        v34 = *(void **)(v60 - v33);
        v61 = v34;
        if ( v34 )
        {
          ObfReferenceObject(v34);
          v35 = (signed __int64 *)(v31 + 16);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v31 + 2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v35);
            v35 = (signed __int64 *)(v31 + 16);
          }
          KeAbPostRelease((ULONG_PTR)v35);
          KeLeaveCriticalRegion();
          v36 = (char *)v61;
          v37 = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
          while ( 1 )
          {
            v38 = v36;
            v39 = v36 - 48;
            v52 = v39;
            v40 = KeGetCurrentThread();
            --v40->KernelApcDisable;
            v41 = (volatile signed __int64 *)(v39 + 16);
            BugCheckParameter2 = (ULONG_PTR)v41;
            ExAcquirePushLockSharedEx((ULONG_PTR)v41, 0LL);
            if ( (v52[26] & 2) == 0 )
              break;
            v42 = (PVOID *)&v52[-ObpInfoMaskToOffset[v52[26] & 3]];
            if ( !v42 )
              break;
            v43 = (char *)*v42;
            if ( !*v42 )
              break;
            v37 += *((unsigned __int16 *)v42 + 4) + 2;
            v36 = (char *)*v42;
            v61 = *v42;
            ObfReferenceObject(v43);
            v44 = BugCheckParameter2;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            {
              ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
              v44 = BugCheckParameter2;
            }
            KeAbPostRelease(v44);
            KeLeaveCriticalRegion();
            ObfDereferenceObject(v38);
          }
          LODWORD(v52) = v37;
          v45 = _InterlockedCompareExchange64(v41, 0LL, 17LL);
          v11 = ReturnLength;
          v5 = ObjectInformation;
          v31 = v60;
          if ( v45 != 17 )
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          KeAbPostRelease(BugCheckParameter2);
          KeLeaveCriticalRegion();
          if ( v61 )
            ObfDereferenceObject(v61);
          v32 = (_DWORD)v52 + 18;
          goto LABEL_45;
        }
      }
      v30 = (signed __int64 *)(v60 + 16);
    }
    if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v30);
    KeAbPostRelease((ULONG_PTR)v30);
    KeLeaveCriticalRegion();
    v32 = 0;
LABEL_45:
    v63.m256i_i32[5] = v32;
    v63.m256i_i32[6] = *(unsigned __int16 *)(v59 + 16) + 106;
    if ( (v54 & 0x20000) != 0 && *((_QWORD *)v31 + 5) )
    {
      v55 = 15;
      (*(void (__fastcall **)(__int64 *, __int64, int *))(v59 + 152))(v15, 1LL, &v55);
    }
    v63.m256i_i32[7] = v56;
    *(_OWORD *)v5 = v62;
    *(__m256i *)(v5 + 16) = v63;
    *((_QWORD *)v5 + 6) = v64;
    v50 = 56;
    v14 = v49;
    goto LABEL_14;
  }
  NameStringMode = ObQueryNameStringMode(
                     (_DWORD)v15,
                     (_DWORD)v5,
                     ObjectInformationLength,
                     (unsigned int)&v50,
                     PreviousMode);
LABEL_13:
  v14 = NameStringMode;
LABEL_14:
  if ( v11 )
    *v11 = v50;
  if ( v15 )
    ObfDereferenceObject(v15);
  return v14;
}

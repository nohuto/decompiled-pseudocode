/*
 * XREFs of VrpPostEnumerateKey @ 0x1405C9814
 * Callers:
 *     VrpRegistryCallback @ 0x1405C9BA0 (VrpRegistryCallback.c)
 * Callees:
 *     ExGetPreviousMode @ 0x1402042C0 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x140241B50 (EtwActivityIdControl.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403F25F0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1403F2970 (ZwEnumerateKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     VrpFindExactNamespaceNode @ 0x1405C978C (VrpFindExactNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x1405CAC34 (VrpBuildKeyPath.c)
 *     VrpCleanupBufferParameter @ 0x1405CAF30 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1405CAFE4 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1405CB2DC (VrpProcessBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x1405CB374 (VrpUpdateKeyInformation.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rcx
  KPROCESSOR_MODE AccessMode; // r13
  NTSTATUS v7; // edi
  __int64 v8; // rcx
  unsigned __int16 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  wchar_t *v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r14
  signed __int64 *v17; // rdi
  __int64 ExactNamespaceNode; // rax
  const UNICODE_STRING *v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  wchar_t *Buffer; // rcx
  __int64 v25; // rcx
  __int64 *v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  unsigned __int16 *PoolWithTag; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  PVOID v35; // rax
  const void *v36; // r14
  int v37; // r13d
  NTSTATUS Key; // eax
  __int64 v39; // rcx
  int updated; // eax
  int v41; // eax
  __int64 *v42; // rcx
  PVOID *p_P; // rdx
  KPROCESSOR_MODE v44; // [rsp+40h] [rbp-1F8h]
  const UNICODE_STRING *v45; // [rsp+48h] [rbp-1F0h]
  ULONG ResultLength; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v48; // [rsp+60h] [rbp-1D8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-1D0h] BYREF
  int v50; // [rsp+70h] [rbp-1C8h] BYREF
  int v51; // [rsp+74h] [rbp-1C4h] BYREF
  NTSTATUS v52; // [rsp+78h] [rbp-1C0h] BYREF
  HANDLE v53; // [rsp+80h] [rbp-1B8h] BYREF
  PVOID v54; // [rsp+88h] [rbp-1B0h]
  PVOID v55; // [rsp+90h] [rbp-1A8h]
  unsigned __int16 *v56; // [rsp+98h] [rbp-1A0h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-198h] BYREF
  UNICODE_STRING P; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-170h]
  __int64 v60; // [rsp+D0h] [rbp-168h]
  __int64 v61; // [rsp+D8h] [rbp-160h]
  __int64 v62; // [rsp+E0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+118h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+130h] [rbp-108h] BYREF
  int *v66; // [rsp+150h] [rbp-E8h]
  __int64 v67; // [rsp+158h] [rbp-E0h]
  _DWORD *v68; // [rsp+160h] [rbp-D8h]
  __int64 v69; // [rsp+168h] [rbp-D0h]
  __int64 v70; // [rsp+170h] [rbp-C8h]
  _DWORD v71[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v72; // [rsp+180h] [rbp-B8h]
  __int64 v73; // [rsp+188h] [rbp-B0h]
  PVOID v74; // [rsp+190h] [rbp-A8h]
  _DWORD v75[2]; // [rsp+198h] [rbp-A0h] BYREF
  NTSTATUS *v76; // [rsp+1A0h] [rbp-98h]
  __int64 v77; // [rsp+1A8h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1B0h] [rbp-88h] BYREF
  int *v79; // [rsp+1D0h] [rbp-68h]
  __int64 v80; // [rsp+1D8h] [rbp-60h]
  _DWORD *v81; // [rsp+1E0h] [rbp-58h]
  __int64 v82; // [rsp+1E8h] [rbp-50h]
  __int64 v83; // [rsp+1F0h] [rbp-48h]
  _DWORD v84[2]; // [rsp+1F8h] [rbp-40h] BYREF

  v59 = a1;
  v60 = a2;
  P = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v55 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v45 = (const UNICODE_STRING *)v3;
  v61 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v62 = v4;
  v56 = 0LL;
  v54 = 0LL;
  AccessMode = ExGetPreviousMode();
  v44 = AccessMode;
  ResultLength = 0;
  v48 = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  v53 = 0LL;
  if ( (unsigned int)dword_140C02168 > 5 )
  {
    v50 = *(_DWORD *)(v4 + 12);
    v79 = &v50;
    v80 = 4LL;
    v27 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v27 = &EmptyUnicodeString;
    v28 = *(unsigned __int16 *)v27;
    v29 = v27[1];
    v81 = v84;
    v82 = 2LL;
    v83 = v29;
    v84[0] = v28;
    v84[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)byte_140023008,
      &ActivityId,
      0LL,
      5u,
      &v78);
  }
  if ( v7 < 0 && v7 != -1073741789 && v7 != -2147483643 )
  {
    v19 = (const UNICODE_STRING *)v3;
LABEL_34:
    v16 = a2;
LABEL_35:
    v20 = 0;
    goto LABEL_15;
  }
  LOBYTE(v5) = AccessMode;
  v7 = VrpProcessBufferParameter(v5, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v56);
  if ( v7 < 0 )
    goto LABEL_65;
  v9 = v56;
  LOBYTE(v8) = AccessMode;
  v7 = VrpOutputBufferParameter(v8, v56, *(unsigned int *)(v4 + 24), v4 + 16);
  if ( v7 < 0 )
    goto LABEL_65;
  LOBYTE(v10) = AccessMode;
  v7 = VrpProcessBufferParameter(v10, *(_QWORD *)(v4 + 32), 4LL, &v48);
  if ( v7 < 0 )
    goto LABEL_65;
  LOBYTE(v11) = AccessMode;
  v7 = VrpOutputBufferParameter(v11, v48, 4LL, v4 + 32);
  if ( v7 < 0 )
    goto LABEL_65;
  v12 = *(_DWORD *)(v59 + 8);
  if ( v12 == -1073741789 || v12 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
  {
    v7 = ObOpenObjectByPointer(
           *(PVOID *)v4,
           0x240u,
           0LL,
           0xF003Fu,
           (POBJECT_TYPE)CmKeyObjectType,
           AccessMode,
           &KeyHandle);
    if ( v7 < 0 )
      goto LABEL_65;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
      goto LABEL_65;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x67655256u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_65;
    }
    v55 = PoolWithTag;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
    if ( v7 < 0 )
      goto LABEL_65;
  }
  v13 = *(_DWORD *)(v4 + 12);
  if ( !v13 || v55 )
  {
    Source.MaximumLength = v9[6];
    Source.Length = Source.MaximumLength;
    v14 = v9 + 8;
  }
  else
  {
    if ( v13 != 1 )
    {
      v7 = -1073741811;
      goto LABEL_65;
    }
    Source.MaximumLength = v9[10];
    Source.Length = Source.MaximumLength;
    v14 = v9 + 12;
  }
  Source.Buffer = v14;
  v7 = VrpBuildKeyPath(v45 + 1, &Source, &P);
  if ( v7 < 0 )
  {
LABEL_65:
    v19 = v45;
    goto LABEL_34;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = a2;
  v17 = (signed __int64 *)(a2 + 16);
  ExAcquirePushLockSharedEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)&P, 0);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v53, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v7 = 0;
    v19 = v45;
    v20 = 1;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v17);
  KeAbPostRelease((ULONG_PTR)v17);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
  v34 = *(_DWORD *)(v4 + 24);
  if ( v34 )
  {
    v35 = ExAllocatePoolWithTag(PagedPool, v34, 0x67655256u);
    v54 = v35;
    if ( !v35 )
    {
      v7 = -1073741670;
      v19 = v45;
      goto LABEL_35;
    }
  }
  else
  {
    v35 = 0LL;
  }
  v36 = v35;
  v37 = (int)v48;
  Key = ZwQueryKey(v53, *(KEY_INFORMATION_CLASS *)(v4 + 12), v35, *(_DWORD *)(v4 + 24), v48);
  v7 = Key;
  if ( Key == -1073741789 )
  {
    v36 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v7 = 0;
LABEL_64:
    AccessMode = v44;
    goto LABEL_65;
  }
  v39 = *(unsigned int *)(v4 + 12);
  if ( (_DWORD)v39 != 2 )
  {
    updated = VrpUpdateKeyInformation(v39, (_DWORD)v36, *(_DWORD *)(v4 + 24), v37, (__int64)&P, 0);
    v7 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_64;
  }
  if ( v7 != -2147483643 && v7 != -1073741789 )
    memmove(*(void **)(v4 + 16), v36, *(unsigned int *)(v4 + 24));
  AccessMode = v44;
  LOBYTE(v39) = v44;
  v41 = VrpOutputBufferParameter(v39, *(_QWORD *)(v4 + 32), 4LL, &v48);
  v19 = v45;
  v16 = a2;
  if ( v41 >= 0 )
  {
    *(_DWORD *)(v59 + 24) = v7;
    v7 = -1073740541;
  }
  else
  {
    v7 = v41;
  }
  v20 = 0;
LABEL_15:
  if ( v20 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v16 + 16));
    KeAbPostRelease(v16 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  if ( v7 < 0 && (unsigned int)dword_140C02168 > 2 )
  {
    v51 = *(_DWORD *)(v4 + 12);
    v66 = &v51;
    v67 = 4LL;
    v42 = (__int64 *)&v19[1];
    if ( !v19[1].Buffer )
      v42 = &EmptyUnicodeString;
    v68 = v71;
    v69 = 2LL;
    v70 = v42[1];
    v71[0] = *(unsigned __int16 *)v42;
    v71[1] = 0;
    p_P = (PVOID *)&P;
    if ( !P.Buffer )
      p_P = (PVOID *)&EmptyUnicodeString;
    v72 = v75;
    v73 = 2LL;
    v74 = p_P[1];
    v75[0] = *(unsigned __int16 *)p_P;
    v75[1] = 0;
    v52 = v7;
    v76 = &v52;
    v77 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)byte_140023097,
      &ActivityId,
      0LL,
      8u,
      &v65);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v53 )
    ZwClose(v53);
  if ( v54 )
    ExFreePoolWithTag(v54, 0x67655256u);
  if ( v55 )
    ExFreePoolWithTag(v55, 0x67655256u);
  Buffer = P.Buffer;
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x67655256u);
  LOBYTE(Buffer) = AccessMode;
  VrpCleanupBufferParameter(Buffer, &v56);
  LOBYTE(v25) = AccessMode;
  VrpCleanupBufferParameter(v25, &v48);
  return (unsigned int)v7;
}

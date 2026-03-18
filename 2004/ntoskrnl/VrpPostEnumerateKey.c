/*
 * XREFs of VrpPostEnumerateKey @ 0x1405CABE4
 * Callers:
 *     VrpRegistryCallback @ 0x1405CAF70 (VrpRegistryCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     EtwActivityIdControl @ 0x140277DD0 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x14027D5D0 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403F3880 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1403F3C00 (ZwEnumerateKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     VrpFindExactNamespaceNode @ 0x1405CAB5C (VrpFindExactNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x1405CC004 (VrpBuildKeyPath.c)
 *     VrpCleanupBufferParameter @ 0x1405CC300 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1405CC3B4 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1405CC6AC (VrpProcessBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x1405CC744 (VrpUpdateKeyInformation.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  wchar_t *Buffer; // rcx
  __int64 v22; // rcx
  __int64 *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  unsigned __int16 *PoolWithTag; // rax
  unsigned int v28; // eax
  PVOID v29; // rax
  const void *v30; // r14
  int v31; // r13d
  NTSTATUS Key; // eax
  __int64 v33; // rcx
  int updated; // eax
  int v35; // eax
  __int64 *v36; // rcx
  PVOID *p_P; // rdx
  KPROCESSOR_MODE v38; // [rsp+40h] [rbp-1F8h]
  const UNICODE_STRING *v39; // [rsp+48h] [rbp-1F0h]
  ULONG ResultLength; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v42; // [rsp+60h] [rbp-1D8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-1D0h] BYREF
  int v44; // [rsp+70h] [rbp-1C8h] BYREF
  int v45; // [rsp+74h] [rbp-1C4h] BYREF
  NTSTATUS v46; // [rsp+78h] [rbp-1C0h] BYREF
  HANDLE v47; // [rsp+80h] [rbp-1B8h] BYREF
  PVOID v48; // [rsp+88h] [rbp-1B0h]
  PVOID v49; // [rsp+90h] [rbp-1A8h]
  unsigned __int16 *v50; // [rsp+98h] [rbp-1A0h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-198h] BYREF
  UNICODE_STRING P; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-170h]
  __int64 v54; // [rsp+D0h] [rbp-168h]
  __int64 v55; // [rsp+D8h] [rbp-160h]
  __int64 v56; // [rsp+E0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+118h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+130h] [rbp-108h] BYREF
  int *v60; // [rsp+150h] [rbp-E8h]
  __int64 v61; // [rsp+158h] [rbp-E0h]
  _DWORD *v62; // [rsp+160h] [rbp-D8h]
  __int64 v63; // [rsp+168h] [rbp-D0h]
  __int64 v64; // [rsp+170h] [rbp-C8h]
  _DWORD v65[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v66; // [rsp+180h] [rbp-B8h]
  __int64 v67; // [rsp+188h] [rbp-B0h]
  PVOID v68; // [rsp+190h] [rbp-A8h]
  _DWORD v69[2]; // [rsp+198h] [rbp-A0h] BYREF
  NTSTATUS *v70; // [rsp+1A0h] [rbp-98h]
  __int64 v71; // [rsp+1A8h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1B0h] [rbp-88h] BYREF
  int *v73; // [rsp+1D0h] [rbp-68h]
  __int64 v74; // [rsp+1D8h] [rbp-60h]
  _DWORD *v75; // [rsp+1E0h] [rbp-58h]
  __int64 v76; // [rsp+1E8h] [rbp-50h]
  __int64 v77; // [rsp+1F0h] [rbp-48h]
  _DWORD v78[2]; // [rsp+1F8h] [rbp-40h] BYREF

  v53 = a1;
  v54 = a2;
  P = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v49 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v39 = (const UNICODE_STRING *)v3;
  v55 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v56 = v4;
  v50 = 0LL;
  v48 = 0LL;
  AccessMode = ExGetPreviousMode();
  v38 = AccessMode;
  ResultLength = 0;
  v42 = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  v47 = 0LL;
  if ( (unsigned int)dword_140C02168 > 5 )
  {
    v44 = *(_DWORD *)(v4 + 12);
    v73 = &v44;
    v74 = 4LL;
    v24 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v24 = &EmptyUnicodeString;
    v25 = *(unsigned __int16 *)v24;
    v26 = v24[1];
    v75 = v78;
    v76 = 2LL;
    v77 = v26;
    v78[0] = v25;
    v78[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)byte_140023108,
      &ActivityId,
      0LL,
      5u,
      &v72);
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
  v7 = VrpProcessBufferParameter(v5, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v50);
  if ( v7 < 0 )
    goto LABEL_65;
  v9 = v50;
  LOBYTE(v8) = AccessMode;
  v7 = VrpOutputBufferParameter(v8, v50, *(unsigned int *)(v4 + 24), v4 + 16);
  if ( v7 < 0 )
    goto LABEL_65;
  LOBYTE(v10) = AccessMode;
  v7 = VrpProcessBufferParameter(v10, *(_QWORD *)(v4 + 32), 4LL, &v42);
  if ( v7 < 0 )
    goto LABEL_65;
  LOBYTE(v11) = AccessMode;
  v7 = VrpOutputBufferParameter(v11, v42, 4LL, v4 + 32);
  if ( v7 < 0 )
    goto LABEL_65;
  v12 = *(_DWORD *)(v53 + 8);
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
    v49 = PoolWithTag;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
    if ( v7 < 0 )
      goto LABEL_65;
  }
  v13 = *(_DWORD *)(v4 + 12);
  if ( !v13 || v49 )
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
  v7 = VrpBuildKeyPath(v39 + 1, &Source, &P);
  if ( v7 < 0 )
  {
LABEL_65:
    v19 = v39;
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
        ZwOpenKey(&v47, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v7 = 0;
    v19 = v39;
    v20 = 1;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v17);
  KeAbPostRelease((ULONG_PTR)v17);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v28 = *(_DWORD *)(v4 + 24);
  if ( v28 )
  {
    v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x67655256u);
    v48 = v29;
    if ( !v29 )
    {
      v7 = -1073741670;
      v19 = v39;
      goto LABEL_35;
    }
  }
  else
  {
    v29 = 0LL;
  }
  v30 = v29;
  v31 = (int)v42;
  Key = ZwQueryKey(v47, *(KEY_INFORMATION_CLASS *)(v4 + 12), v29, *(_DWORD *)(v4 + 24), v42);
  v7 = Key;
  if ( Key == -1073741789 )
  {
    v30 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v7 = 0;
LABEL_64:
    AccessMode = v38;
    goto LABEL_65;
  }
  v33 = *(unsigned int *)(v4 + 12);
  if ( (_DWORD)v33 != 2 )
  {
    updated = VrpUpdateKeyInformation(v33, (_DWORD)v30, *(_DWORD *)(v4 + 24), v31, (__int64)&P, 0);
    v7 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_64;
  }
  if ( v7 != -2147483643 && v7 != -1073741789 )
    memmove(*(void **)(v4 + 16), v30, *(unsigned int *)(v4 + 24));
  AccessMode = v38;
  LOBYTE(v33) = v38;
  v35 = VrpOutputBufferParameter(v33, *(_QWORD *)(v4 + 32), 4LL, &v42);
  v19 = v39;
  v16 = a2;
  if ( v35 >= 0 )
  {
    *(_DWORD *)(v53 + 24) = v7;
    v7 = -1073740541;
  }
  else
  {
    v7 = v35;
  }
  v20 = 0;
LABEL_15:
  if ( v20 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v16 + 16));
    KeAbPostRelease(v16 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v7 < 0 && (unsigned int)dword_140C02168 > 2 )
  {
    v45 = *(_DWORD *)(v4 + 12);
    v60 = &v45;
    v61 = 4LL;
    v36 = (__int64 *)&v19[1];
    if ( !v19[1].Buffer )
      v36 = &EmptyUnicodeString;
    v62 = v65;
    v63 = 2LL;
    v64 = v36[1];
    v65[0] = *(unsigned __int16 *)v36;
    v65[1] = 0;
    p_P = (PVOID *)&P;
    if ( !P.Buffer )
      p_P = (PVOID *)&EmptyUnicodeString;
    v66 = v69;
    v67 = 2LL;
    v68 = p_P[1];
    v69[0] = *(unsigned __int16 *)p_P;
    v69[1] = 0;
    v46 = v7;
    v70 = &v46;
    v71 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)byte_140023197,
      &ActivityId,
      0LL,
      8u,
      &v59);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v47 )
    ZwClose(v47);
  if ( v48 )
    ExFreePoolWithTag(v48, 0x67655256u);
  if ( v49 )
    ExFreePoolWithTag(v49, 0x67655256u);
  Buffer = P.Buffer;
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x67655256u);
  LOBYTE(Buffer) = AccessMode;
  VrpCleanupBufferParameter(Buffer, &v50);
  LOBYTE(v22) = AccessMode;
  VrpCleanupBufferParameter(v22, &v42);
  return (unsigned int)v7;
}

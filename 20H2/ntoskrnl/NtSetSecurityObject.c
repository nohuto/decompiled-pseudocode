/*
 * XREFs of NtSetSecurityObject @ 0x1405E30E0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14072DD88 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1409186D8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405E2FD0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SeSetSecurityAccessMask @ 0x1405E3418 (SeSetSecurityAccessMask.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObSetSecurityObjectByPointer @ 0x1405F71A0 (ObSetSecurityObjectByPointer.c)
 *     SeCaptureSecurityDescriptor @ 0x140605830 (SeCaptureSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140652650 (RtlGetSaclSecurityDescriptor.c)
 *     SepRmGlobalSaclFind @ 0x140927420 (SepRmGlobalSaclFind.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int v3; // r14d
  SECURITY_INFORMATION v4; // ebx
  SECURITY_INFORMATION v5; // edx
  int v6; // ecx
  ACCESS_MASK v7; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  HANDLE v9; // r10
  int v10; // edx
  NTSTATUS v11; // edi
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 *v16; // r9
  struct _DMA_ADAPTER *v17; // r14
  __int64 v18; // r12
  unsigned int v19; // r15d
  PVOID v20; // r13
  PVOID v21; // rbx
  PVOID v22; // r12
  int v24; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  bool v26; // al
  DWORD v27; // edx
  __int64 v28; // [rsp+60h] [rbp-39h]
  BOOLEAN SaclDefaulted[4]; // [rsp+70h] [rbp-29h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+74h] [rbp-25h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-21h] BYREF
  PVOID v32; // [rsp+80h] [rbp-19h] BYREF
  __int64 v33; // [rsp+88h] [rbp-11h] BYREF
  PVOID Object; // [rsp+90h] [rbp-9h] BYREF
  PVOID P; // [rsp+98h] [rbp-1h] BYREF
  PVOID v36; // [rsp+A0h] [rbp+7h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+B0h] [rbp+17h] BYREF
  PACL Sacl; // [rsp+B8h] [rbp+1Fh] BYREF
  int SaclPresent; // [rsp+110h] [rbp+77h] BYREF
  KPROCESSOR_MODE v42; // [rsp+118h] [rbp+7Fh]

  v3 = (int)SecurityDescriptor;
  v33 = 0LL;
  v4 = SecurityInformation;
  DesiredAccess = 0;
  HandleInformation = 0LL;
  v32 = 0LL;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v36 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v5 = SecurityInformation & 0x80;
  v6 = v4 & 0x100;
  if ( (v4 & 0x10000) != 0 )
  {
    v24 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v5 )
      v4 = v24;
    if ( !v6 )
      v4 &= ~0x100u;
  }
  SeSetSecurityAccessMask(v4, &DesiredAccess);
  v7 = DesiredAccess;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v42 = PreviousMode;
  v11 = ObReferenceObjectByHandle(v9, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v11 < 0 )
    return v11;
  LOBYTE(v12) = 1;
  LOBYTE(v10) = PreviousMode;
  v13 = SeCaptureSecurityDescriptor(v3, v10, 1, v12, (__int64)&v33);
  v17 = (struct _DMA_ADAPTER *)Object;
  v11 = v13;
  if ( v13 < 0 )
  {
LABEL_32:
    HalPutDmaAdapter(v17);
    return v11;
  }
  v18 = v33;
  v19 = v4 & 0xFFFFFE07;
  if ( (v4 & 0x10000) == 0 || (*(_WORD *)(v33 + 2) & 0x10) != 0 )
    v19 = v4;
  if ( ((v19 & 1) == 0 || *(_DWORD *)(v33 + 4)) && ((v19 & 2) == 0 || *(_DWORD *)(v33 + 8)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v7 &= 0xFFF3FFFF;
    if ( !v7 )
      goto LABEL_12;
    v11 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 8u, 0LL, &SecurityDescriptora);
    if ( v11 < 0 )
    {
      v21 = v32;
      v20 = SecurityDescriptora;
LABEL_27:
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      LOBYTE(v14) = v42;
      LOBYTE(v15) = 1;
      SeReleaseSecurityDescriptor(v18, v14, v15, v16);
      goto LABEL_32;
    }
    if ( (v7 & 0xFEFFFFFF) != 0 )
    {
      v20 = SecurityDescriptora;
      LOBYTE(SaclPresent) = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&SaclPresent,
                                 &Sacl,
                                 SaclDefaulted);
      v11 = SaclSecurityDescriptor;
      v26 = SaclPresent;
      if ( !(_BYTE)SaclPresent )
      {
        v38 = 0LL;
        LOBYTE(v16) = 1;
        v26 = (unsigned int)SepRmGlobalSaclFind(
                              &v38,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ LOBYTE(v17[-2].DmaOperations) ^ ((unsigned __int16)((_WORD)v17 - 48) >> 8))]
                            + 16,
                              v16) != -1073741772;
      }
      if ( v11 < 0 )
      {
LABEL_63:
        v21 = v32;
        goto LABEL_27;
      }
      if ( v26 )
      {
        v27 = ((v7 & 0x80000) != 0 ? v19 & 0x13 : 0) | 4;
        if ( (v7 & 0x40000) == 0 )
          v27 = (v7 & 0x80000) != 0 ? v19 & 0x13 : 0;
        v11 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v17, v27, 0LL, &v32);
      }
      else
      {
        v7 &= 0xFFF3FFFF;
      }
    }
    else
    {
LABEL_12:
      v20 = SecurityDescriptora;
    }
    if ( v11 >= 0 )
    {
      v14 = 64LL;
      v16 = ObTypeIndexTable;
      if ( (v19 & 0x40) != 0 )
      {
        v15 = (unsigned __int8)ObHeaderCookie ^ LOBYTE(v17[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v17 - 48) >> 8);
        if ( (POBJECT_TYPE *)ObTypeIndexTable[v15] != IoFileObjectType
          || (HIDWORD(v17->DmaOperations->FreeAdapterChannel) & 0x10) == 0 )
        {
          v11 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v17, 0x40u, 0LL, &v36);
          v16 = ObTypeIndexTable;
        }
      }
      v21 = v32;
      if ( v11 < 0 )
        goto LABEL_21;
      v14 = 32LL;
      SaclPresent = v19 & 0x20;
      if ( (v19 & 0x20) != 0 )
      {
        v15 = (unsigned __int8)ObHeaderCookie ^ LOBYTE(v17[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v17 - 48) >> 8);
        if ( (POBJECT_TYPE *)ObTypeIndexTable[v15] != IoFileObjectType
          || (HIDWORD(v17->DmaOperations->FreeAdapterChannel) & 0x10) == 0 )
        {
          v11 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v17, 0x20u, 0LL, &P);
        }
      }
      if ( v11 >= 0 && (v11 = ObSetSecurityObjectByPointer(v17, v19, v18), v11 >= 0) && (v7 || SaclPresent) )
      {
        v28 = v18;
        v22 = P;
        SeSecurityDescriptorChangedAuditAlarm(
          0LL,
          v17,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v17[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v17 - 48) >> 8)]
        + 16,
          0LL,
          Handle,
          0LL,
          v7,
          v19,
          v21,
          v20,
          P,
          v36,
          v28);
      }
      else
      {
LABEL_21:
        v22 = P;
      }
      if ( v36 )
        ExFreePoolWithTag(v36, 0);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      v18 = v33;
      goto LABEL_27;
    }
    goto LABEL_63;
  }
  LOBYTE(v15) = 1;
  LOBYTE(v14) = PreviousMode;
  SeReleaseSecurityDescriptor(v33, v14, v15, v16);
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  return -1073741703;
}

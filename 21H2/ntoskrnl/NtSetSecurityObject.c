/*
 * XREFs of NtSetSecurityObject @ 0x140697440
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140731FF8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140915E88 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140610D70 (RtlGetSaclSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14065BB60 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14065C750 (SeReleaseSecurityDescriptor.c)
 *     ObSetSecurityObjectByPointer @ 0x140660460 (ObSetSecurityObjectByPointer.c)
 *     SeSetSecurityAccessMask @ 0x140697778 (SeSetSecurityAccessMask.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140697800 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140697B7C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     SepRmGlobalSaclFind @ 0x140924BF0 (SepRmGlobalSaclFind.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  SECURITY_INFORMATION v4; // ebx
  SECURITY_INFORMATION v5; // edx
  int v6; // ecx
  ACCESS_MASK v7; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  HANDLE v9; // r10
  NTSTATUS v10; // edi
  int v11; // eax
  struct _DMA_ADAPTER *v12; // r14
  void *v13; // r12
  unsigned int v14; // r15d
  PVOID v15; // r13
  PVOID v16; // rbx
  PVOID v17; // r12
  int v19; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v21; // r9
  bool v22; // al
  __int64 v23; // rdx
  void *v24; // [rsp+60h] [rbp-39h]
  BOOLEAN SaclDefaulted[4]; // [rsp+70h] [rbp-29h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+74h] [rbp-25h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-21h] BYREF
  PVOID v28; // [rsp+80h] [rbp-19h] BYREF
  _WORD *v29; // [rsp+88h] [rbp-11h] BYREF
  PVOID Object; // [rsp+90h] [rbp-9h] BYREF
  PVOID P; // [rsp+98h] [rbp-1h] BYREF
  PVOID v32; // [rsp+A0h] [rbp+7h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+B0h] [rbp+17h] BYREF
  PACL Sacl; // [rsp+B8h] [rbp+1Fh] BYREF
  int SaclPresent; // [rsp+110h] [rbp+77h] BYREF
  KPROCESSOR_MODE v38; // [rsp+118h] [rbp+7Fh]

  v29 = 0LL;
  v4 = SecurityInformation;
  DesiredAccess = 0;
  HandleInformation = 0LL;
  v28 = 0LL;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v32 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v5 = SecurityInformation & 0x80;
  v6 = v4 & 0x100;
  if ( (v4 & 0x10000) != 0 )
  {
    v19 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v5 )
      v4 = v19;
    if ( !v6 )
      v4 &= ~0x100u;
  }
  SeSetSecurityAccessMask(v4, &DesiredAccess);
  v7 = DesiredAccess;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  v10 = ObReferenceObjectByHandle(v9, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v10 < 0 )
    return v10;
  v11 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v29);
  v12 = (struct _DMA_ADAPTER *)Object;
  v10 = v11;
  if ( v11 < 0 )
  {
LABEL_32:
    HalPutDmaAdapter(v12);
    return v10;
  }
  v13 = v29;
  v14 = v4 & 0xFFFFFE07;
  if ( (v4 & 0x10000) == 0 || (v29[1] & 0x10) != 0 )
    v14 = v4;
  if ( ((v14 & 1) == 0 || *((_DWORD *)v29 + 1)) && ((v14 & 2) == 0 || *((_DWORD *)v29 + 2)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v7 &= 0xFFF3FFFF;
    if ( !v7 )
      goto LABEL_12;
    v10 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, 0LL, &SecurityDescriptora);
    if ( v10 < 0 )
    {
      v16 = v28;
      v15 = SecurityDescriptora;
LABEL_27:
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      SeReleaseSecurityDescriptor(v13, v38, 1);
      goto LABEL_32;
    }
    if ( (v7 & 0xFEFFFFFF) != 0 )
    {
      v15 = SecurityDescriptora;
      LOBYTE(SaclPresent) = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&SaclPresent,
                                 &Sacl,
                                 SaclDefaulted);
      v10 = SaclSecurityDescriptor;
      v22 = SaclPresent;
      if ( !(_BYTE)SaclPresent )
      {
        v34 = 0LL;
        LOBYTE(v21) = 1;
        v22 = (unsigned int)SepRmGlobalSaclFind(
                              &v34,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ LOBYTE(v12[-2].DmaOperations) ^ ((unsigned __int16)((_WORD)v12 - 48) >> 8))]
                            + 16,
                              v21) != -1073741772;
      }
      if ( v10 < 0 )
      {
LABEL_63:
        v16 = v28;
        goto LABEL_27;
      }
      if ( v22 )
      {
        v23 = ((v7 & 0x80000) != 0 ? v14 & 0x13 : 0) | 4;
        if ( (v7 & 0x40000) == 0 )
          v23 = (v7 & 0x80000) != 0 ? v14 & 0x13 : 0;
        v10 = ObpAllocateAndQuerySecurityDescriptorInfo(v12, v23, 0LL, &v28);
      }
      else
      {
        v7 &= 0xFFF3FFFF;
      }
    }
    else
    {
LABEL_12:
      v15 = SecurityDescriptora;
    }
    if ( v10 >= 0 )
    {
      if ( (v14 & 0x40) != 0
        && ((POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v12[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)] != IoFileObjectType
         || (HIDWORD(v12->DmaOperations->FreeAdapterChannel) & 0x10) == 0) )
      {
        v10 = ObpAllocateAndQuerySecurityDescriptorInfo(v12, 64LL, 0LL, &v32);
      }
      v16 = v28;
      if ( v10 < 0 )
        goto LABEL_21;
      SaclPresent = v14 & 0x20;
      if ( (v14 & 0x20) != 0
        && ((POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v12[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)] != IoFileObjectType
         || (HIDWORD(v12->DmaOperations->FreeAdapterChannel) & 0x10) == 0) )
      {
        v10 = ObpAllocateAndQuerySecurityDescriptorInfo(v12, 32LL, 0LL, &P);
      }
      if ( v10 >= 0
        && (v10 = ObSetSecurityObjectByPointer((__int64)v12, v14, (__int64)v13), v10 >= 0)
        && (v7 || SaclPresent) )
      {
        v24 = v13;
        v17 = P;
        SeSecurityDescriptorChangedAuditAlarm(
          0LL,
          v12,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v12[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)]
        + 16,
          0LL,
          Handle,
          0LL,
          v7,
          v14,
          v16,
          v15,
          P,
          v32,
          v24);
      }
      else
      {
LABEL_21:
        v17 = P;
      }
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      v13 = v29;
      goto LABEL_27;
    }
    goto LABEL_63;
  }
  SeReleaseSecurityDescriptor(v29, PreviousMode, 1);
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  return -1073741703;
}

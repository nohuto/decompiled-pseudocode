/*
 * XREFs of PiCMCreateDevice @ 0x1408AF5A0
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x14060FAF4 (_CmIsRootDevice.c)
 *     _PnpCtxRegQueryValue @ 0x14061A094 (_PnpCtxRegQueryValue.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x140637080 (_CmValidateDeviceName.c)
 *     PpDeviceRegistration @ 0x14074BF20 (PpDeviceRegistration.c)
 *     _CmCreateDevice @ 0x14074CD88 (_CmCreateDevice.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x14074F240 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140752F3C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A32DC (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AEF1C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B06F0 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x140974AE8 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x140974B24 (_PnpCtxRegSetValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMCreateDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v7; // r12d
  wchar_t *PoolWithTag; // rdi
  char v9; // r14
  int v10; // esi
  _WORD *v11; // r13
  int DeviceInputData; // r15d
  signed int inited; // ebx
  const wchar_t *v14; // r13
  char v15; // r12
  int v16; // r15d
  __int64 v17; // rcx
  int v18; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rax
  char PreviousMode; // bl
  __int64 v26; // rcx
  struct _DMA_ADAPTER *v27; // rax
  __int64 v28; // r12
  unsigned __int8 (__fastcall *FlushAdapterBuffers)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8); // rbx
  __int64 v30; // rcx
  int DeviceRegProp; // eax
  __int64 v32; // rdx
  int v33; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  char v35; // dl
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  struct _KTHREAD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // [rsp+58h] [rbp-89h] BYREF
  _WORD *v42; // [rsp+60h] [rbp-81h]
  unsigned int v43; // [rsp+68h] [rbp-79h] BYREF
  int v44; // [rsp+6Ch] [rbp-75h] BYREF
  int v45; // [rsp+70h] [rbp-71h] BYREF
  HANDLE v46; // [rsp+78h] [rbp-69h] BYREF
  size_t pcchLength; // [rsp+80h] [rbp-61h] BYREF
  int v48; // [rsp+88h] [rbp-59h] BYREF
  int v49; // [rsp+8Ch] [rbp-55h] BYREF
  int v50; // [rsp+90h] [rbp-51h] BYREF
  HANDLE v51; // [rsp+98h] [rbp-49h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+A0h] [rbp-41h]
  PVOID P; // [rsp+A8h] [rbp-39h] BYREF
  UNICODE_STRING v54; // [rsp+B0h] [rbp-31h] BYREF
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+C0h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+D0h] [rbp-11h]
  __int64 v57; // [rsp+E0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+7h] BYREF

  v57 = 0LL;
  v43 = 0;
  v7 = a4;
  v44 = 0;
  v51 = 0LL;
  *a6 = 0;
  PoolWithTag = 0LL;
  v50 = 0;
  v9 = 0;
  v48 = 0;
  v10 = 0;
  v45 = 0;
  v11 = 0LL;
  v49 = 0;
  DmaAdapter = 0LL;
  v46 = 0LL;
  P = 0LL;
  pcchLength = 0LL;
  v42 = 0LL;
  v54 = 0LL;
  *(_OWORD *)pszSrc = 0LL;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, (__int64)pszSrc);
  if ( DeviceInputData < 0 )
    goto LABEL_47;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_36;
  }
  v14 = pszSrc[1];
  if ( !pszSrc[1] || LODWORD(SourceString[0]) < 2 || !SourceString[1] || (unsigned int)v57 < 2 )
  {
    inited = -1073741811;
    v11 = 0LL;
    goto LABEL_58;
  }
  if ( !a3 || v7 < 0x14 || (v15 = BYTE4(pszSrc[0]), (HIDWORD(pszSrc[0]) & 0xFFFFFFF0) != 0) )
  {
    inited = -1073741811;
LABEL_12:
    v11 = 0LL;
    goto LABEL_36;
  }
  v16 = BYTE4(pszSrc[0]) & 2;
  if ( !CmIsRootDevice(SourceString[1]) )
  {
    inited = -1073741811;
LABEL_15:
    v11 = 0LL;
    goto LABEL_36;
  }
  inited = PiPnpRtlBeginOperation(&P);
  if ( inited < 0 )
    goto LABEL_15;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_12;
  }
  v18 = v15 & 4;
  if ( !v18 )
  {
    inited = CmValidateDeviceName(v17, v14);
    goto LABEL_23;
  }
  inited = PiCMGenerateDeviceInstance(v14);
  if ( !v16 )
  {
LABEL_23:
    if ( inited < 0 )
      goto LABEL_15;
    if ( !v18 )
    {
      inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, v14, 0LL, 0LL, 0x800u);
      if ( inited < 0 )
        goto LABEL_15;
    }
    inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 16, 0, 131103, 0, (__int64)&v46, 0LL);
    if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
      goto LABEL_21;
    if ( v16 )
    {
      if ( v46 )
      {
LABEL_30:
        inited = -1073741771;
        goto LABEL_15;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      LOBYTE(v41) = 0;
      v9 = 1;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v51, &v41, 0);
      if ( inited < 0 )
        goto LABEL_34;
      if ( !(_BYTE)v41 )
      {
        inited = -1073741771;
        PnpCtxRegCloseKey(v20, v51);
LABEL_34:
        v10 = pcchLength;
        goto LABEL_35;
      }
      v48 = 1;
      inited = PnpCtxRegSetValue(v20, v51, L"Phantom", 4LL, &v48, 4);
      PnpCtxRegCloseKey(v26, v51);
      if ( inited < 0 )
        goto LABEL_34;
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v10 = pcchLength;
    }
    else
    {
      if ( v46 )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
        {
          PpDevNodeLockTree(0);
          v27 = (struct _DMA_ADAPTER *)PnpDeviceObjectFromDeviceInstanceWithTag(
                                         (__int64)&DestinationString,
                                         0x746C6644u);
          DmaAdapter = v27;
          v28 = (__int64)v27;
          if ( v27 )
            FlushAdapterBuffers = v27[19].DmaOperations->FlushAdapterBuffers;
          else
            FlushAdapterBuffers = 0LL;
          PpDevNodeUnlockTree(0);
          if ( FlushAdapterBuffers )
          {
            if ( IopIsRootEnumeratedDeviceObjectActive(v28) )
              goto LABEL_30;
          }
          else
          {
            PiPnpRtlEnsureObjectCached(v30, PoolWithTag);
          }
        }
      }
      else
      {
        v39 = KeGetCurrentThread();
        --v39->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v41) = 0;
        v9 = 1;
        inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131103, &v46, &v41, 0);
        if ( inited < 0 )
          goto LABEL_34;
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        v9 = 0;
        v10 = pcchLength;
        if ( !(_BYTE)v41 )
        {
          inited = -1073741771;
          goto LABEL_35;
        }
      }
      inited = RtlInitUnicodeStringEx(&v54, PoolWithTag);
      v9 = 0;
      if ( inited < 0 )
        goto LABEL_35;
      v43 = 4;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)PoolWithTag,
                        (__int64)v46,
                        11,
                        (__int64)&v44,
                        (__int64)&v45,
                        (__int64)&v43,
                        0);
      v33 = v45;
      if ( DeviceRegProp < 0 )
        v33 = 0;
      v45 = v33;
      DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v54.Length, v32, &v49);
      v35 = v49;
      if ( DeviceInstanceCsConfigFlags < 0 )
        v35 = 0;
      if ( (v45 & 0x12) != 0 || (v35 & 2) != 0 )
      {
        inited = -1073741808;
        goto LABEL_35;
      }
      inited = PiInitializeDevice(&v54);
      if ( inited < 0 )
      {
LABEL_35:
        v11 = v42;
        goto LABEL_36;
      }
      v43 = 4;
      if ( (int)PnpCtxRegQueryValue(v36, v46, (__int64)L"Phantom", (__int64)&v44, (__int64)&v50, (__int64)&v43) < 0
        || v44 != 4
        || (v38 = v50, v43 != 4) )
      {
        v38 = 0;
      }
      if ( v38 )
        PnpCtxRegDeleteValue(v37, v46, L"Phantom");
      if ( (BYTE4(pszSrc[0]) & 8) != 0 )
      {
        v43 = 512;
        v11 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x34706E50u);
        if ( !v11 )
        {
          inited = -1073741670;
          v9 = 0;
          goto LABEL_36;
        }
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)PoolWithTag,
                    (__int64)v46,
                    5,
                    (__int64)&v44,
                    (__int64)v11,
                    (__int64)&v43,
                    0) >= 0
          && v44 == 1
          && v43 <= 0x200 )
        {
          if ( *v11 )
          {
            inited = RtlInitUnicodeStringEx(&v54, PoolWithTag);
            if ( inited >= 0 )
            {
              LOBYTE(v40) = 1;
              inited = PpDeviceRegistration((__int64)&v54, v40, 0LL, 0);
            }
          }
        }
        goto LABEL_57;
      }
    }
    v11 = v42;
    goto LABEL_57;
  }
LABEL_21:
  v11 = 0LL;
LABEL_57:
  v7 = a4;
LABEL_58:
  v9 = 0;
  if ( inited >= 0 )
  {
    inited = RtlStringCchLengthW(PoolWithTag, 0xC8uLL, &pcchLength);
    if ( inited < 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = pcchLength + 1;
      if ( (unsigned __int64)v7 - 20 < 2 * (pcchLength + 1) )
        inited = -1073741789;
    }
    if ( inited >= 0 )
    {
      v21 = PiCMReturnBufferResultData(inited, 2 * v10, 0, PoolWithTag, 2 * v10, SHIDWORD(v57), a3, v7, a6);
      goto LABEL_37;
    }
  }
LABEL_36:
  v21 = PiCMReturnBufferResultData(inited, 2 * v10, 0, 0LL, 0, SHIDWORD(v57), a3, a4, a6);
LABEL_37:
  DeviceInputData = v21;
  if ( v46 )
    PnpCtxRegCloseKey(v22, v46);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x34706E50u);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v9 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
LABEL_47:
  v23 = KeGetCurrentThread();
  PreviousMode = v23->PreviousMode;
  if ( pszSrc[1] )
    PiControlFreeUserModeCallersBuffer(v23->PreviousMode, (void *)pszSrc[1]);
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString[1]);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)DeviceInputData;
}

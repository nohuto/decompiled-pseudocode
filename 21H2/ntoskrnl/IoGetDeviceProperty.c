/*
 * XREFs of IoGetDeviceProperty @ 0x140773C30
 * Callers:
 *     PoStoreRequester @ 0x14036AC64 (PoStoreRequester.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140514F70 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     PiRebalanceOptOut @ 0x140564AC0 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x14057DAC0 (KseDsCallbackHookAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 *     ArbShareDriverExclusive @ 0x14083BA44 (ArbShareDriverExclusive.c)
 *     IoGetDmaAdapter @ 0x1408462A0 (IoGetDmaAdapter.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140853F14 (SshpGenerateDeviceVerboseDescription.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140854148 (SshpGenerateDeviceFriendlyName.c)
 *     PopGenerateDeviceFriendlyName @ 0x14085475C (PopGenerateDeviceFriendlyName.c)
 *     ArbQueryConflict @ 0x14090B4C0 (ArbQueryConflict.c)
 *     IopIsPciRootBus @ 0x140948150 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14098B980 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14098F40C (PopWakeSourceGetDeviceProperty.c)
 *     PopDiagQueryDevicePropertyString @ 0x140990C30 (PopDiagQueryDevicePropertyString.c)
 *     IoWMISuggestInstanceName @ 0x1409DBE80 (IoWMISuggestInstanceName.c)
 *     VfIsPCIBus @ 0x140A86488 (VfIsPCIBus.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpvUtilFailDriver @ 0x14056489C (PpvUtilFailDriver.c)
 *     PnpBusTypeGuidGet @ 0x1406EA45C (PnpBusTypeGuidGet.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     PnpDetermineResourceListSize @ 0x140748D08 (PnpDetermineResourceListSize.c)
 *     PpIrpQueryCapabilities @ 0x14074B394 (PpIrpQueryCapabilities.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140773B90 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceRegProperty @ 0x1407741A4 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     PiGetDeviceRegistryProperty @ 0x140943248 (PiGetDeviceRegistryProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  __int16 v5; // bx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebx
  PVOID DeviceNode; // rsi
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // r15d
  NTSTATUS DeviceRegProperty; // ebx
  bool v17; // zf
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  __int64 Pool2; // rax
  const void **v27; // rdi
  int NameStringMode; // eax
  int v29; // eax
  ULONG v30; // eax
  int v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  _DWORD *v36; // rcx
  _DWORD *v37; // rbx
  size_t v38; // rdi
  unsigned int v39; // eax
  size_t v40; // r15
  unsigned int v41; // ebx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  _DWORD *v46; // rcx
  ULONG v47; // eax
  ULONG *v48; // rdx
  ULONG v49; // eax
  unsigned int v50; // [rsp+40h] [rbp-61h] BYREF
  int v51; // [rsp+44h] [rbp-5Dh] BYREF
  int v52; // [rsp+48h] [rbp-59h] BYREF
  char *v53; // [rsp+50h] [rbp-51h]
  __int128 v54; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v55[16]; // [rsp+70h] [rbp-31h] BYREF

  v5 = DeviceProperty;
  v53 = (char *)DeviceObject;
  v54 = 0LL;
  memset(v55, 0, sizeof(v55));
  v11 = v5 & 0xFFF;
  v52 = 0;
  v51 = 0;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v11 != 18 && (v11 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v11 <= 0xB )
  {
    if ( v11 != 11 )
    {
      if ( v11 > 5 )
      {
        v24 = v11 - 6;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v32 = v25 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 != 1 )
                  return -1073741584;
                v15 = 14;
              }
              else
              {
                v15 = 13;
              }
            }
            else
            {
              v15 = 12;
            }
          }
          else
          {
            v15 = 10;
          }
        }
        else
        {
          v15 = 9;
        }
      }
      else
      {
        if ( v11 != 5 )
        {
          if ( v11 )
          {
            v13 = v11 - 1;
            if ( !v13 )
            {
              v14 = 7;
              v15 = 2;
              goto LABEL_11;
            }
            v44 = v13 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( !v45 )
              {
                *ResultLength = BufferLength;
                return PiGetDeviceRegistryProperty(
                         (_DWORD)DeviceObject,
                         0,
                         v9,
                         v10,
                         (__int64)PropertyBuffer,
                         (__int64)ResultLength);
              }
              if ( v45 == 1 )
              {
                v46 = (_DWORD *)*((_QWORD *)DeviceNode + 69);
                if ( v46 )
                {
                  v47 = PnpDetermineResourceListSize(v46);
                  *ResultLength = v47;
                  if ( v47 > BufferLength )
                    return -1073741789;
                  memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v47);
                  return 0;
                }
                return 0;
              }
              return -1073741584;
            }
            v14 = 7;
            v15 = 3;
          }
          else
          {
            v14 = 1;
            v15 = 1;
          }
LABEL_11:
          if ( *((_QWORD *)DeviceNode + 6) )
          {
            *ResultLength = BufferLength;
            DeviceRegProperty = PiGetDeviceRegProperty(
                                  *((_QWORD *)DeviceNode + 6),
                                  0,
                                  v14,
                                  v15,
                                  PropertyBuffer,
                                  (__int64)ResultLength);
            v17 = DeviceRegProperty == -1073741275;
            goto LABEL_13;
          }
          return -1073741808;
        }
        v15 = 8;
      }
LABEL_31:
      v14 = 1;
      goto LABEL_11;
    }
    v50 = BufferLength + 16;
    Pool2 = ExAllocatePool2(256LL, BufferLength + 16, 1869181008LL);
    v27 = (const void **)Pool2;
    if ( !Pool2 )
      return -1073741670;
    NameStringMode = ObQueryNameStringMode(v53, Pool2, v50, ResultLength, 0);
    DeviceRegProperty = NameStringMode;
    if ( NameStringMode == -1073741820 )
    {
      DeviceRegProperty = -1073741789;
    }
    else if ( NameStringMode >= 0 )
    {
      v29 = *(unsigned __int16 *)v27;
      if ( (_WORD)v29 )
      {
        v30 = v29 + 2;
        *ResultLength = v30;
        if ( v30 > BufferLength )
        {
          DeviceRegProperty = -1073741789;
        }
        else
        {
          memmove(PropertyBuffer, v27[1], *(unsigned __int16 *)v27);
          *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v27) = 0;
        }
      }
      else
      {
        *ResultLength = 0;
      }
      goto LABEL_38;
    }
    *ResultLength -= 16;
LABEL_38:
    ExFreePoolWithTag(v27, 0);
    return DeviceRegProperty;
  }
  v15 = 17;
  if ( v11 <= 0x11 )
  {
    if ( v11 == 17 )
    {
      v14 = 4;
      goto LABEL_11;
    }
    v21 = v11 - 12;
    if ( !v21 )
    {
      DeviceRegProperty = PnpBusTypeGuidGet(*((_WORD *)DeviceNode + 232), &v54);
      if ( DeviceRegProperty < 0 )
        return DeviceRegProperty;
      *ResultLength = 16;
      if ( BufferLength >= 0x10 )
      {
        *(_OWORD *)PropertyBuffer = v54;
        return DeviceRegProperty;
      }
      return -1073741789;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v41 = v23 - 1;
        if ( !v41 )
        {
          v15 = 23;
          goto LABEL_31;
        }
        if ( v41 != 1 )
          return -1073741584;
        if ( (int)PpIrpQueryCapabilities((int)DeviceObject, v55) < 0 )
          return -1073741772;
        v43 = v55[2];
        if ( v55[2] == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength >= 4 )
        {
          *(_DWORD *)PropertyBuffer = v43;
          return 0;
        }
        return -1073741789;
      }
      if ( *((int *)DeviceNode + 115) < 0 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      v31 = *((_DWORD *)DeviceNode + 115);
    }
    else
    {
      if ( *((_DWORD *)DeviceNode + 114) == -1 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      v31 = *((_DWORD *)DeviceNode + 114);
    }
    *(_DWORD *)PropertyBuffer = v31;
    return 0;
  }
  v19 = v11 - 18;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( !v20 )
    {
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        PpHotSwapGetDevnodeRemovalPolicy((__int64)DeviceNode, 1, (unsigned int *)PropertyBuffer);
        return 0;
      }
      return -1073741789;
    }
    v34 = v20 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        if ( v35 != 1 )
          return -1073741584;
        v15 = 37;
        goto LABEL_31;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v36 = (_DWORD *)*((_QWORD *)DeviceNode + 52);
      if ( !v36 || (v37 = (_DWORD *)*((_QWORD *)DeviceNode + 53)) == 0LL )
      {
        *ResultLength = 0;
        DeviceRegProperty = 0;
        goto LABEL_58;
      }
      v38 = (unsigned int)PnpDetermineResourceListSize(v36);
      v39 = PnpDetermineResourceListSize(v37);
      v40 = v39;
      *ResultLength = v39 + v38;
      if ( v39 + (unsigned int)v38 > BufferLength )
        goto LABEL_57;
      memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v38);
      memmove((char *)PropertyBuffer + v38, *((const void **)DeviceNode + 53), v40);
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v48 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( v48 )
      {
        v49 = *v48;
        *ResultLength = *v48;
        if ( v49 > BufferLength )
        {
LABEL_57:
          DeviceRegProperty = -1073741789;
LABEL_58:
          KeReleaseGuardedMutex(&PiResourceListLock);
          return DeviceRegProperty;
        }
        memmove(PropertyBuffer, v48, *v48);
      }
      else
      {
        *ResultLength = 0;
      }
    }
    DeviceRegProperty = 0;
    goto LABEL_58;
  }
  if ( DeviceNode == IopRootDeviceNode )
  {
    v42 = 0;
    DeviceRegProperty = 0;
LABEL_71:
    *ResultLength = 4;
    if ( BufferLength >= 4 )
    {
      *(_DWORD *)PropertyBuffer = v42;
      return DeviceRegProperty;
    }
    return -1073741789;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    return -1073741808;
  while ( 1 )
  {
    v50 = 4;
    DeviceRegProperty = CmGetDeviceRegProp(
                          PiPnpRtlCtx,
                          *((_QWORD *)DeviceNode + 6),
                          0,
                          11,
                          (__int64)&v51,
                          (__int64)&v52,
                          (__int64)&v50,
                          0);
    if ( DeviceRegProperty < 0 || v51 != 4 || v50 != 4 )
      break;
    if ( (v52 & 0x20) != 0 )
    {
      v42 = 1;
    }
    else if ( (v52 & 0x40) != 0 )
    {
      v42 = 2;
    }
    else
    {
      v42 = (v52 & 0x400) != 0 ? 3 : 0;
    }
    DeviceNode = (PVOID)*((_QWORD *)DeviceNode + 2);
    if ( v42 || DeviceNode == IopRootDeviceNode )
      goto LABEL_71;
  }
  v42 = 2;
  if ( DeviceRegProperty >= 0 )
    goto LABEL_71;
  if ( DeviceRegProperty == -1073741275 )
    return -1073741772;
  v17 = DeviceRegProperty == -1073741810;
LABEL_13:
  if ( v17 )
    return -1073741772;
  return DeviceRegProperty;
}

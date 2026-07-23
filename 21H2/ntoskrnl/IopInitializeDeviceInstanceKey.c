/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x14074EF10
 * Callers:
 *     IopGetRootDevices @ 0x14074ECA8 (IopGetRootDevices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x140370780 (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     PpDevCfgProcessDevice @ 0x140739DE8 (PpDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073A478 (PpDevCfgProcessDeviceOperations.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14074B564 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PpDeviceRegistration @ 0x14074BF20 (PpDeviceRegistration.c)
 *     PipAllocateDeviceNode @ 0x14074EAA0 (PipAllocateDeviceNode.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14074EC20 (PnpClearDeviceTemporaryProperties.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x14074F240 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407509E4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752D80 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140752DDC (PnpIsDeviceInstanceEnabled.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A53E4 (PnpCopyDeviceInstancePath.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A5400 (PnpAllocateDeviceInstancePath.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8FD8 (IopCreateRootEnumeratedDeviceObject.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A69C8 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, unsigned __int16 *a2, __int64 a3)
{
  int v6; // ebx
  _QWORD *v7; // rax
  struct _DMA_ADAPTER *v8; // rdx
  __int64 result; // rax
  int DeviceInstancePath; // ebx
  struct _DEVICE_OBJECT *v11; // r15
  _QWORD *v12; // rcx
  _QWORD *v13; // rdi
  unsigned int v14; // r13d
  int DeviceRegProp; // eax
  __int16 v16; // ax
  int v17; // ebx
  __int64 v18; // rdx
  PVOID v19; // rbx
  int v20; // ebx
  unsigned int v21; // ebx
  PVOID PoolWithTag; // rax
  PVOID v23; // rdi
  int FailedInstallProblemStatus; // r8d
  int v25; // edx
  PVOID v26; // rbx
  int v27; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v28[4]; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h] BYREF
  PVOID v31; // [rsp+58h] [rbp-8h] BYREF
  int v32; // [rsp+B0h] [rbp+50h] BYREF
  int v33; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v33 = 0;
  v31 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v20 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v20 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v21 = 8 * v6 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x64647050u);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_68;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v21 >> 3;
    *(_QWORD *)(a3 + 16) = v23;
  }
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x746C6644u);
  Object = v7;
  if ( v7 )
  {
    if ( !(unsigned __int8)IopIsRootEnumeratedDeviceObjectActive(v7, v7) )
    {
      HalPutDmaAdapter(v8);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_6:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IopCreateRootEnumeratedDeviceObject(&Object);
  if ( DeviceInstancePath >= 0 )
  {
    v11 = (struct _DEVICE_OBJECT *)Object;
    v12 = Object;
    *((_DWORD *)Object + 12) |= 0x1000u;
    *(_DWORD *)(v12[39] + 32LL) |= 0x10u;
    if ( (unsigned int)PipAllocateDeviceNode((__int64)v12, &v31) == -1073740946 || (v13 = v31) == 0LL )
    {
      IoDeleteDevice(v11);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v31, (unsigned int)*a2 + 2);
      if ( DeviceInstancePath >= 0 )
      {
        PnpCopyDeviceInstancePath(v13, a2);
        PipSetDevNodeFlags((__int64)v13, 17);
        PipSetDevNodeState((__int64)v13, 770);
        PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v13);
        ObfReferenceObject(v11);
        v14 = 0;
        v27 = 4;
        v32 = 0;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v13[6],
                          (__int64)KeyHandle,
                          11,
                          (__int64)&v33,
                          (__int64)&v32,
                          (__int64)&v27,
                          0);
        if ( DeviceRegProp < 0 )
        {
          FailedInstallProblemStatus = -1073741275;
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_19;
          v25 = 1;
        }
        else
        {
          if ( v33 == 4 && v27 == 4 )
          {
            v16 = v32;
          }
          else
          {
            v16 = 0;
            v32 = 0;
          }
          if ( (v16 & 0x20) != 0 )
          {
            FailedInstallProblemStatus = 0;
            v25 = 18;
          }
          else if ( (v16 & 0x2000) != 0 )
          {
            FailedInstallProblemStatus = 0;
            v25 = 16;
          }
          else
          {
            if ( (v16 & 0x40) == 0 )
            {
LABEL_19:
              if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
              {
                v19 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) >= 4u
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  PipSetDevNodeFlags((__int64)v13, 256);
                }
                ExFreePoolWithTag(v19, 0);
              }
              PnpQueryAndSaveDeviceNodeCapabilities((__int64)v13);
              if ( (v13[70] & 0x4000) != 0 && ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 1) )
              {
                PipClearDevNodeProblem((__int64)v13);
                PipSetDevNodeProblem((__int64)v13, 29, 0);
              }
              v17 = *((_DWORD *)v13 + 99) & 0x6000;
              if ( PnpBootMode )
              {
                *((_DWORD *)v13 + 176) |= 0x1000u;
                v14 = 2;
              }
              PnpClearDeviceTemporaryProperties(v13[6], (__int64)KeyHandle);
              if ( (v13[70] & 0x4000) == 0 && (v32 & 1) == 0 )
              {
                if ( v17 )
                  PpDevCfgProcessDevice((__int64)v13, (__int64)KeyHandle, v14);
                else
                  PpDevCfgProcessDeviceOperations((__int64)v13, KeyHandle);
              }
              if ( ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 22)
                && ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 29)
                && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v13 + 5, 1LL) )
              {
                PipClearDevNodeProblem((__int64)v13);
                PipSetDevNodeProblem((__int64)v13, 22, 0);
              }
              LOBYTE(v18) = 1;
              PpDeviceRegistration((__int64)(v13 + 5), v18, (__int64)(v13 + 7), 0);
              PnpMapDeviceObjectToDeviceInstance(v13[4], v13 + 5);
              v31 = 0LL;
              if ( (int)PnpGetDeviceResourcesFromRegistry((_DWORD)v11, 0, 4, (unsigned int)&v31, (__int64)v28) >= 0 )
              {
                v26 = v31;
                if ( v31 )
                {
                  if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                              4LL,
                              v13[4],
                              v31) >= 0 )
                    PipSetDevNodeFlags((__int64)v13, 64);
                  ExFreePoolWithTag(v26, 0);
                }
              }
              ObfReferenceObject(v11);
              *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v11;
              goto LABEL_6;
            }
            FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(v13[6], KeyHandle);
            v25 = 28;
          }
        }
        PipSetDevNodeProblem((__int64)v13, v25, FailedInstallProblemStatus);
        goto LABEL_19;
      }
      IoDeleteDevice(v11);
    }
  }
LABEL_68:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}

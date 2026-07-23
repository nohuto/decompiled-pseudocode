/*
 * XREFs of PiControlGetPropertyData @ 0x14060C640
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140240C80 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14061F664 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     PiControlGetDeviceStack @ 0x14072FD30 (PiControlGetDeviceStack.c)
 *     PnpGetDeviceDependencyList @ 0x14089E234 (PnpGetDeviceDependencyList.c)
 *     PiControlGetDevicePowerData @ 0x1408B35F4 (PiControlGetDevicePowerData.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r14d
  __int64 result; // rax
  struct _DEVICE_OBJECT *v9; // r13
  _DWORD *DeviceNode; // rsi
  unsigned int *v11; // rdi
  unsigned __int16 *v12; // r15
  __int64 v13; // rdx
  int DevicePowerData; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  DEVICE_REGISTRY_PROPERTY v22; // edx
  NTSTATUS DeviceStack; // eax
  char v24; // di
  int UserModeCallersCopy; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int DeviceRegProp; // eax
  unsigned int v31; // eax
  __int64 v32; // rdx
  int DeviceDependencyList; // eax
  unsigned int v34; // ecx
  int ResultLength; // [rsp+20h] [rbp-40h]
  PVOID PropertyBuffer; // [rsp+40h] [rbp-20h] BYREF
  __int128 v37; // [rsp+48h] [rbp-18h] BYREF
  int v38; // [rsp+A8h] [rbp+48h] BYREF
  char v39; // [rsp+B8h] [rbp+58h]

  v39 = a4;
  v4 = *a2;
  v5 = 0;
  v38 = 0;
  PropertyBuffer = 0LL;
  v37 = 0LL;
  WORD1(v37) = v4;
  LOWORD(v37) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v37 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v9 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(&v37, 1131441744LL);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v37 + 1));
    if ( !v9 || (DeviceNode = v9->DeviceObjectExtension->DeviceNode) == 0LL )
    {
      DevicePowerData = -1073741810;
      goto LABEL_39;
    }
    if ( (unsigned int)(DeviceNode[75] - 787) <= 1 )
    {
      DevicePowerData = -1073741738;
    }
    else
    {
      v11 = (unsigned int *)(a2 + 16);
      v5 = *((_DWORD *)a2 + 8);
      v12 = a2 + 12;
      DevicePowerData = PiControlAllocateBufferForUserModeCaller(&PropertyBuffer, v5, a4, *((_QWORD *)a2 + 3));
      if ( DevicePowerData < 0 )
        goto LABEL_39;
      v15 = *((_DWORD *)a2 + 4);
      if ( v15 > 8 )
      {
        v26 = v15 - 10;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            v22 = DevicePropertyInstallState;
            goto LABEL_17;
          }
          v28 = v27 - 2;
          if ( !v28 )
          {
            *v11 = 4;
            if ( v5 >= 4 )
            {
              DevicePowerData = 0;
              *(_DWORD *)PropertyBuffer = DeviceNode[171];
LABEL_21:
              v24 = v39;
              LOBYTE(ResultLength) = v39;
              UserModeCallersCopy = PiControlMakeUserModeCallersCopy(v12, PropertyBuffer, v5, 1LL, ResultLength, 0);
              if ( UserModeCallersCopy < 0 )
                DevicePowerData = UserModeCallersCopy;
              goto LABEL_23;
            }
            DevicePowerData = -1073741789;
LABEL_39:
            v24 = v39;
LABEL_23:
            PpDevNodeUnlockTree(0LL);
            if ( v9 )
              ObfDereferenceObjectWithTag(v9, 0x43706E50u);
            PiControlFreeUserModeCallersBuffer(v24, PropertyBuffer);
            return (unsigned int)DevicePowerData;
          }
          v29 = v28 - 1;
          if ( !v29 )
          {
            DeviceStack = PiControlGetDeviceStack(DeviceNode, v5, PropertyBuffer, a2 + 16);
            goto LABEL_18;
          }
          v31 = v29 - 1;
          if ( v31 )
          {
            if ( v31 != 1 )
              goto LABEL_54;
            v32 = 1LL;
          }
          else
          {
            v32 = 0LL;
          }
          DeviceDependencyList = PnpGetDeviceDependencyList(DeviceNode, v32, PropertyBuffer, v5 >> 1, a2 + 16);
          v34 = 2 * *v11;
          DevicePowerData = DeviceDependencyList;
          *v11 = v34;
          if ( ((int)(DeviceDependencyList + 0x80000000) < 0 || DeviceDependencyList == -1073741789) && v34 <= 2 )
          {
            *v11 = 0;
            DevicePowerData = -1073741772;
          }
        }
        else
        {
          if ( v5 < 4 )
          {
            DevicePowerData = -1073741789;
          }
          else
          {
            PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0LL, PropertyBuffer);
            DevicePowerData = 0;
          }
          *v11 = 4;
        }
      }
      else
      {
        if ( v15 == 8 )
        {
          v22 = DevicePropertyAddress;
          goto LABEL_17;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v22 = DevicePropertyPhysicalDeviceObjectName;
          goto LABEL_17;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v22 = DevicePropertyBusTypeGuid;
          goto LABEL_17;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v22 = DevicePropertyLegacyBusType;
          goto LABEL_17;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          v22 = DevicePropertyBusNumber;
          goto LABEL_17;
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            v22 = DevicePropertyRemovalPolicy;
LABEL_17:
            DeviceStack = IoGetDeviceProperty(v9, v22, v5, PropertyBuffer, (PULONG)a2 + 8);
LABEL_18:
            DevicePowerData = DeviceStack;
            goto LABEL_19;
          }
          if ( v21 == 1 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              PiPnpRtlCtx,
                              *((_QWORD *)DeviceNode + 6),
                              0,
                              34,
                              (__int64)&v38,
                              (__int64)PropertyBuffer,
                              (__int64)(a2 + 16),
                              0);
            DevicePowerData = DeviceRegProp;
            if ( DeviceRegProp >= 0 && v38 != 4 )
            {
              DevicePowerData = -1073741584;
              goto LABEL_39;
            }
            if ( DeviceRegProp == -1073741275 )
              DevicePowerData = -1073741772;
            goto LABEL_19;
          }
LABEL_54:
          DevicePowerData = -1073741811;
          goto LABEL_39;
        }
        DevicePowerData = PiControlGetDevicePowerData(DeviceNode, v13, v5, PropertyBuffer, a2 + 16);
        if ( DevicePowerData == -2147483643 )
          DevicePowerData = -1073741789;
      }
    }
LABEL_19:
    if ( DevicePowerData >= 0 )
    {
      v12 = a2 + 12;
      goto LABEL_21;
    }
    goto LABEL_39;
  }
  return result;
}

/*
 * XREFs of PiControlGetPropertyData @ 0x140775140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1402DE7E4 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402DF554 (PiControlFreeUserModeCallersBuffer.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140773B90 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14077C610 (PiControlMakeUserModeCallersCopy.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     PiControlGetDeviceStack @ 0x1407F1CDC (PiControlGetDeviceStack.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     PiControlGetDevicePowerData @ 0x1409590D0 (PiControlGetDevicePowerData.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  struct _DEVICE_OBJECT *v8; // r13
  __int64 DeviceNode; // rsi
  unsigned int *v10; // rdi
  unsigned int v11; // r14d
  unsigned __int16 *v12; // r15
  __int64 v13; // rdx
  int BufferForUserModeCaller; // ebx
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
  unsigned int v33; // edx
  int ResultLength; // [rsp+20h] [rbp-40h]
  PVOID PropertyBuffer; // [rsp+40h] [rbp-20h] BYREF
  __int128 v36; // [rsp+48h] [rbp-18h] BYREF
  int v37; // [rsp+A8h] [rbp+48h] BYREF
  char v38; // [rsp+B8h] [rbp+58h]

  v38 = a4;
  v4 = *a2;
  v37 = 0;
  PropertyBuffer = 0LL;
  v36 = 0LL;
  WORD1(v36) = v4;
  LOWORD(v36) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v36 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v8 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(&v36, 1131441744LL);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v36 + 1));
    if ( !v8 || (DeviceNode = (__int64)v8->DeviceObjectExtension->DeviceNode) == 0 )
    {
      BufferForUserModeCaller = -1073741810;
      goto LABEL_33;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 789) <= 1 )
    {
      BufferForUserModeCaller = -1073741738;
      goto LABEL_33;
    }
    v10 = (unsigned int *)(a2 + 16);
    v11 = *((_DWORD *)a2 + 8);
    v12 = a2 + 12;
    BufferForUserModeCaller = PiControlAllocateBufferForUserModeCaller(
                                (__int64 *)&PropertyBuffer,
                                v11,
                                a4,
                                *((_QWORD *)a2 + 3));
    if ( BufferForUserModeCaller < 0 )
    {
LABEL_33:
      v24 = v38;
LABEL_23:
      PpDevNodeUnlockTree(0LL);
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x43706E50u);
      PiControlFreeUserModeCallersBuffer(v24, PropertyBuffer);
      return (unsigned int)BufferForUserModeCaller;
    }
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
          *v10 = 4;
          if ( v11 >= 4 )
          {
            BufferForUserModeCaller = 0;
            *(_DWORD *)PropertyBuffer = *(_DWORD *)(DeviceNode + 684);
LABEL_21:
            v24 = v38;
            LOBYTE(ResultLength) = v38;
            UserModeCallersCopy = PiControlMakeUserModeCallersCopy(v12, PropertyBuffer, v11, 1LL, ResultLength, 0);
            if ( UserModeCallersCopy < 0 )
              BufferForUserModeCaller = UserModeCallersCopy;
            goto LABEL_23;
          }
          BufferForUserModeCaller = -1073741789;
          goto LABEL_33;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          DeviceStack = PiControlGetDeviceStack(DeviceNode, v11, PropertyBuffer, a2 + 16);
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
        BufferForUserModeCaller = PnpGetDeviceDependencyList(DeviceNode, v32, PropertyBuffer, v11 >> 1, a2 + 16);
        v33 = 2 * *v10;
        *v10 = v33;
        if ( (int)(BufferForUserModeCaller + 0x80000000) >= 0 && BufferForUserModeCaller != -1073741789 )
          goto LABEL_33;
        if ( v33 <= 2 )
        {
          *v10 = 0;
          BufferForUserModeCaller = -1073741772;
        }
        goto LABEL_19;
      }
      if ( v11 < 4 )
      {
        BufferForUserModeCaller = -1073741789;
      }
      else
      {
        PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0, (unsigned int *)PropertyBuffer);
        BufferForUserModeCaller = 0;
      }
      *v10 = 4;
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
          DeviceStack = IoGetDeviceProperty(v8, v22, v11, PropertyBuffer, (PULONG)a2 + 8);
LABEL_18:
          BufferForUserModeCaller = DeviceStack;
          goto LABEL_19;
        }
        if ( v21 == 1 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            PiPnpRtlCtx,
                            *(_QWORD *)(DeviceNode + 48),
                            0,
                            34,
                            (__int64)&v37,
                            (__int64)PropertyBuffer,
                            (__int64)(a2 + 16),
                            0);
          BufferForUserModeCaller = DeviceRegProp;
          if ( DeviceRegProp >= 0 )
          {
            if ( v37 == 4 )
              goto LABEL_20;
            BufferForUserModeCaller = -1073741584;
            goto LABEL_33;
          }
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_33;
          BufferForUserModeCaller = -1073741772;
          goto LABEL_19;
        }
LABEL_54:
        BufferForUserModeCaller = -1073741811;
        goto LABEL_33;
      }
      BufferForUserModeCaller = PiControlGetDevicePowerData(DeviceNode, v13, v11, PropertyBuffer, a2 + 16);
      if ( BufferForUserModeCaller == -2147483643 )
        BufferForUserModeCaller = -1073741789;
    }
LABEL_19:
    if ( BufferForUserModeCaller >= 0 )
    {
LABEL_20:
      v12 = a2 + 12;
      goto LABEL_21;
    }
    goto LABEL_33;
  }
  return result;
}

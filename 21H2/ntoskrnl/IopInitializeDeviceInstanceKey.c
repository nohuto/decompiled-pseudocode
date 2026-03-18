/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x1406CF970
 * Callers:
 *     IopGetRootDevices @ 0x1406CF708 (IopGetRootDevices.c)
 * Callees:
 *     PpDevNodeInsertIntoTree @ 0x14024D9D8 (PpDevNodeInsertIntoTree.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x1406CFCA4 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PipAllocateDeviceNode @ 0x1406CFCE0 (PipAllocateDeviceNode.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14074761C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140748B18 (PnpGetDeviceResourcesFromRegistry.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14076ACE4 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14076B030 (PnpIsDeviceInstanceEnabled.c)
 *     PpDeviceRegistration @ 0x14076B554 (PpDeviceRegistration.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14076C4E0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14076DC84 (PnpClearDeviceTemporaryProperties.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140859598 (IopCreateRootEnumeratedDeviceObject.c)
 *     PnpAllocateDeviceInstancePath @ 0x14085C93C (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14086358C (PiDevCfgGetFailedInstallProblemStatus.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // ebx
  void *v7; // rax
  void *v8; // rdx
  __int64 result; // rax
  int DeviceInstancePath; // esi
  struct _DEVICE_OBJECT *v11; // r14
  _QWORD *v12; // rcx
  char *v13; // rbx
  int DeviceRegProp; // eax
  __int16 v15; // ax
  int v16; // r15d
  __int64 v17; // rdx
  PVOID v18; // r15
  int v19; // ebx
  unsigned int v20; // ebx
  void *Pool2; // rax
  void *v22; // rsi
  __int64 FailedInstallProblemStatus; // r8
  __int64 v24; // rdx
  PVOID v25; // r15
  int v26; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h] BYREF
  PVOID v30; // [rsp+58h] [rbp-8h] BYREF
  int v31; // [rsp+B0h] [rbp+50h] BYREF
  int v32; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v32 = 0;
  v27 = 0;
  v30 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v19 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v19 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v20 = 8 * v6 + 1024;
    Pool2 = (void *)ExAllocatePool2(256LL, v20, 1684303952LL);
    v22 = Pool2;
    if ( !Pool2 )
    {
LABEL_66:
      DeviceInstancePath = -1073741670;
      goto LABEL_67;
    }
    memmove(Pool2, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v20 >> 3;
    *(_QWORD *)(a3 + 16) = v22;
  }
  v7 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(SourceString, 1953261124LL);
  Object = v7;
  if ( v7 )
  {
    if ( !(unsigned __int8)IopIsRootEnumeratedDeviceObjectActive(v7, v7) )
    {
      ObfDereferenceObject(v8);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_6:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IopCreateRootEnumeratedDeviceObject(&Object);
  if ( DeviceInstancePath < 0 )
    goto LABEL_67;
  v11 = (struct _DEVICE_OBJECT *)Object;
  v12 = Object;
  *((_DWORD *)Object + 12) |= 0x1000u;
  *(_DWORD *)(v12[39] + 32LL) |= 0x10u;
  if ( (unsigned int)PipAllocateDeviceNode(v12, &v30) == -1073740946 || (v13 = (char *)v30) == 0LL )
  {
    IoDeleteDevice(v11);
    goto LABEL_66;
  }
  DeviceInstancePath = PnpAllocateDeviceInstancePath(v30, (unsigned int)SourceString->Length + 2);
  if ( DeviceInstancePath >= 0 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 40), SourceString);
    PipSetDevNodeFlags(v13, 17LL);
    PipSetDevNodeState((__int64)v13, 772);
    PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v13);
    ObfReferenceObject(v11);
    v31 = 0;
    v26 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      *((_QWORD *)v13 + 6),
                      (_DWORD)KeyHandle,
                      11,
                      (__int64)&v32,
                      (__int64)&v31,
                      (__int64)&v26,
                      0);
    if ( DeviceRegProp < 0 )
    {
      FailedInstallProblemStatus = 3221226021LL;
      if ( DeviceRegProp != -1073741275 )
        goto LABEL_18;
      v24 = 1LL;
    }
    else
    {
      if ( v32 == 4 && v26 == 4 )
      {
        v15 = v31;
      }
      else
      {
        v15 = 0;
        v31 = 0;
      }
      if ( (v15 & 0x20) != 0 )
      {
        FailedInstallProblemStatus = 0LL;
        v24 = 18LL;
      }
      else if ( (v15 & 0x2000) != 0 )
      {
        FailedInstallProblemStatus = 0LL;
        v24 = 16LL;
      }
      else
      {
        if ( (v15 & 0x40) == 0 )
        {
LABEL_18:
          if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
          {
            v18 = P;
            if ( *((_DWORD *)P + 1) == 4
              && *((_DWORD *)P + 3) >= 4u
              && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            {
              PipSetDevNodeFlags(v13, 256LL);
            }
            ExFreePoolWithTag(v18, 0);
          }
          PnpQueryAndSaveDeviceNodeCapabilities(v13);
          if ( (*((_DWORD *)v13 + 140) & 0x4000) != 0
            && ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 1) )
          {
            PipClearDevNodeProblem(v13);
            PipSetDevNodeProblem(v13, 29LL, 0LL);
          }
          v16 = *((_DWORD *)v13 + 99) & 0x6000;
          if ( PnpBootMode )
          {
            *((_DWORD *)v13 + 176) |= 0x1000u;
            v27 = 2;
          }
          PnpClearDeviceTemporaryProperties(*((_QWORD *)v13 + 6), KeyHandle);
          if ( (*((_DWORD *)v13 + 140) & 0x4000) == 0 && (v31 & 1) == 0 )
          {
            if ( v16 )
            {
              if ( PiDevCfgMode )
                PiDevCfgProcessDevice(v13, KeyHandle, v27);
            }
            else
            {
              PpDevCfgProcessDeviceOperations(v13, KeyHandle);
            }
          }
          if ( ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 22 && *((_DWORD *)v13 + 101) != 29)
            && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v13 + 40, 1LL) )
          {
            PipClearDevNodeProblem(v13);
            PipSetDevNodeProblem(v13, 22LL, 0LL);
          }
          LOBYTE(v17) = 1;
          PpDeviceRegistration(v13 + 40, v17, v13 + 56, 0LL);
          PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v13 + 4), v13 + 40);
          v30 = 0LL;
          if ( (int)PnpGetDeviceResourcesFromRegistry((_DWORD)v11, 0, 4, (unsigned int)&v30, (__int64)&v27) >= 0 )
          {
            v25 = v30;
            if ( v30 )
            {
              if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                          4LL,
                          *((_QWORD *)v13 + 4),
                          v30) >= 0 )
                PipSetDevNodeFlags(v13, 64LL);
              ExFreePoolWithTag(v25, 0);
            }
          }
          ObfReferenceObject(v11);
          *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v11;
          goto LABEL_6;
        }
        FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                     *((_QWORD *)v13 + 6),
                                                     KeyHandle);
        v24 = 28LL;
      }
    }
    PipSetDevNodeProblem(v13, v24, FailedInstallProblemStatus);
    goto LABEL_18;
  }
  IoDeleteDevice(v11);
LABEL_67:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}

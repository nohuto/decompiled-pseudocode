/*
 * XREFs of PiInitializeDevice @ 0x1408B3C6C
 * Callers:
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x14036F9E8 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x140370C30 (PpDevNodeInsertIntoTree.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140634680 (PiPnpRtlBeginOperation.c)
 *     PnpUnicodeStringToWstrFree @ 0x140635794 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14063755C (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406386D0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x140639BC0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 *     _CmGetDeviceRegProp @ 0x14064146C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140641B70 (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeProblem @ 0x1407394EC (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14074561C (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746040 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpConcatenateUnicodeStrings @ 0x140749024 (PnpConcatenateUnicodeStrings.c)
 *     PnpSetPlugPlayEvent @ 0x14074AFE8 (PnpSetPlugPlayEvent.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14074B3A4 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipAllocateDeviceNode @ 0x14074E8E0 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752BC0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A51E4 (PnpCopyDeviceInstancePath.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A5200 (PnpAllocateDeviceInstancePath.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8CB8 (IopCreateRootEnumeratedDeviceObject.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A6868 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiInitializeDevice(UNICODE_STRING *a1)
{
  WCHAR *PoolWithTag; // r12
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  int DeviceInstancePath; // ebx
  __int16 *v6; // rsi
  unsigned __int16 Length; // r14
  int v9; // eax
  struct _DEVICE_OBJECT *v10; // r15
  int DeviceNode; // eax
  char *v12; // rdi
  __int16 v13; // ax
  int FailedInstallProblemStatus; // r8d
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v21; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v26; // [rsp+C8h] [rbp+48h]
  int v27; // [rsp+D0h] [rbp+50h] BYREF
  int v28; // [rsp+D8h] [rbp+58h] BYREF

  v19 = 0;
  PoolWithTag = 0LL;
  v27 = 0;
  v28 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  P = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  PpDevNodeLockTree(1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v26 = 1;
  v4 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a1, 0x43706E50u);
  Object = v4;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x43706E50u);
    DeviceInstancePath = 0;
LABEL_3:
    v6 = v21;
LABEL_4:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    goto LABEL_5;
  }
  DeviceInstancePath = PnpUnicodeStringToWstr(&v21, 0LL, &a1->Length);
  if ( DeviceInstancePath < 0 )
    goto LABEL_3;
  DeviceInstancePath = PiPnpRtlBeginOperation(&P);
  if ( DeviceInstancePath < 0 )
    goto LABEL_3;
  v6 = v21;
  DeviceInstancePath = CmOpenDeviceRegKey(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)v21,
                         16,
                         0,
                         983103,
                         0,
                         (__int64)&Handle,
                         0LL);
  if ( DeviceInstancePath < 0 )
    goto LABEL_4;
  *(_DWORD *)&DestinationString.Length = 0;
  v27 = 512;
  DestinationString.Buffer = 0LL;
  Length = 0;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( !PoolWithTag )
  {
    DeviceInstancePath = -1073741670;
    goto LABEL_4;
  }
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v6,
              (__int64)Handle,
              5,
              (__int64)&v28,
              (__int64)PoolWithTag,
              (__int64)&v27,
              0) >= 0
    && v28 == 1
    && v27 )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
    {
      Length = DestinationString.Length;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 0;
      Length = 0;
      DestinationString.Buffer = 0LL;
    }
  }
  v9 = IopCreateRootEnumeratedDeviceObject(&Object);
  v10 = (struct _DEVICE_OBJECT *)Object;
  DeviceInstancePath = v9;
  if ( v9 < 0 )
    goto LABEL_48;
  *((_DWORD *)Object + 12) |= 0x1000u;
  DeviceNode = PipAllocateDeviceNode((__int64)v10, (void **)&v23);
  v12 = (char *)v23;
  DeviceInstancePath = DeviceNode;
  if ( !v23 )
  {
    if ( DeviceNode == -1073740946 )
      DeviceInstancePath = -1073741670;
LABEL_47:
    if ( DeviceInstancePath >= 0 )
      goto LABEL_50;
    goto LABEL_48;
  }
  PipSetDevNodeFlags(v23, 17);
  PipSetDevNodeState((__int64)v12, 770);
  v27 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v6,
              (__int64)Handle,
              11,
              (__int64)&v28,
              (__int64)&v19,
              (__int64)&v27,
              0) >= 0 )
  {
    if ( v28 == 4 && v27 == 4 )
    {
      v13 = v19;
    }
    else
    {
      v13 = 0;
      v19 = 0;
    }
    if ( (v13 & 0x20) != 0 )
    {
      FailedInstallProblemStatus = 0;
      v15 = 18;
LABEL_40:
      PipSetDevNodeProblem((__int64)v12, v15, FailedInstallProblemStatus);
      goto LABEL_41;
    }
    if ( (v13 & 0x2000) != 0 )
    {
      FailedInstallProblemStatus = 0;
      v15 = 16;
      goto LABEL_40;
    }
    if ( (v13 & 0x40) != 0 )
    {
      FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus((__int64)v6, (__int64)Handle);
      v15 = 28;
      goto LABEL_40;
    }
  }
LABEL_41:
  DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v12, (unsigned int)a1->Length + 2);
  if ( DeviceInstancePath >= 0 )
  {
    PnpCopyDeviceInstancePath((__int64)v12, a1);
    if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v12 + 56), &DestinationString) < 0 )
    {
      *((_DWORD *)v12 + 14) = 0;
      *((_QWORD *)v12 + 8) = 0LL;
    }
    DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v12 + 4), (__int64)(v12 + 40));
    if ( DeviceInstancePath >= 0 )
    {
      PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v12);
      ObfReferenceObject(v10);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v26 = 0;
      PnpQueryAndSaveDeviceNodeCapabilities((__int64)v12);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *((_QWORD *)v12 + 6), 1);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v17, *((_QWORD *)v12 + 6), 14);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, *((_QWORD *)IopRootDeviceNode + 6), 15);
      PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *((_QWORD **)v12 + 4));
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( v10 )
    IoDeleteDevice(v10);
LABEL_50:
  if ( v26 )
    goto LABEL_4;
LABEL_5:
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( v6 )
    PnpUnicodeStringToWstrFree(v6, (__int64)a1);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInstancePath;
}

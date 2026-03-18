/*
 * XREFs of ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C031BDD4
 * Callers:
 *     NtDxgkDuplicateHandle @ 0x1C031EB80 (NtDxgkDuplicateHandle.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C031BB74 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z @ 0x1C0335ECC (-FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z.c)
 *     ??0DXGKVMB_GUEST_TRANSACTION@@QEAA@PEAXI@Z @ 0x1C036113C (--0DXGKVMB_GUEST_TRANSACTION@@QEAA@PEAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0376E78 (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0384790 (-BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z.c)
 *     ?CancelTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0384814 (-CancelTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z.c)
 *     ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C03849D0 (-EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkpDuplicateHandleToVm(struct _D3DKMT_DUPLICATEHANDLE *a1)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  struct _DXGSHAREDALLOCOBJECT *v4; // r15
  int v5; // ebx
  ACCESS_MASK GrantedAccess; // r14d
  struct DXGVIRTUALMACHINE *VirtualMachineByGuidAndAcquireLock; // rax
  DXGPROCESS **v8; // rsi
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // eax
  DXGSHAREDVMOBJECT *v12; // r14
  DXGSHAREDVMOBJECT *v14; // [rsp+30h] [rbp-39h] BYREF
  union _LARGE_INTEGER v15; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v16[128]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v17; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E8h] [rbp+7Fh] BYREF

  v18 = 0LL;
  v2 = *(void **)a1;
  v14 = 0LL;
  v17 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(v2, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &HandleInformation);
  v4 = (struct _DXGSHAREDALLOCOBJECT *)Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(3LL, *(_QWORD *)a1);
    goto LABEL_17;
  }
  GrantedAccess = HandleInformation.GrantedAccess;
  if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    GrantedAccess = *((_DWORD *)a1 + 10);
  VirtualMachineByGuidAndAcquireLock = FindVirtualMachineByGuidAndAcquireLock((struct _GUID *)((char *)a1 + 8));
  v8 = (DXGPROCESS **)VirtualMachineByGuidAndAcquireLock;
  if ( !VirtualMachineByGuidAndAcquireLock )
  {
    WdLogSingleEntry4(
      3LL,
      *((unsigned int *)a1 + 2),
      *((unsigned __int16 *)a1 + 6),
      *((unsigned __int16 *)a1 + 7),
      *((_QWORD *)a1 + 2));
    v5 = -1073741275;
    goto LABEL_17;
  }
  if ( *((_DWORD *)VirtualMachineByGuidAndAcquireLock + 98) >= 0x14u )
  {
    v5 = DxgkpCreateSharedVmObjectsForExistingResource(
           *((struct DXGPROCESSVMWP **)VirtualMachineByGuidAndAcquireLock + 7),
           *(void **)a1,
           v4,
           &v14,
           &v17);
    if ( v5 >= 0 )
    {
      DXGKVMB_GUEST_TRANSACTION::DXGKVMB_GUEST_TRANSACTION((DXGKVMB_GUEST_TRANSACTION *)v16, &v18, v9);
      DXGVIRTUALMACHINE::BeginTransaction((DXGVIRTUALMACHINE *)v8, (struct DXGKVMB_GUEST_TRANSACTION *)v16);
      v10 = DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
              (DXG_HOST_GLOBAL_VMBUS *)(v8 + 20),
              v4,
              v17,
              *((void **)a1 + 3),
              GrantedAccess,
              (struct DXGKVMB_GUEST_TRANSACTION *)v16);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v15.QuadPart = -50000000LL;
        v11 = DXGVIRTUALMACHINE::EndTransaction((DXGVIRTUALMACHINE *)v8, (struct DXGKVMB_GUEST_TRANSACTION *)v16, &v15);
        v5 = v11;
        if ( v11 >= 0 )
          goto LABEL_16;
        WdLogSingleEntry2(3LL, v11, 3123LL);
      }
      else
      {
        WdLogSingleEntry2(3LL, v10, 3113LL);
        DXGVIRTUALMACHINE::CancelTransaction((DXGVIRTUALMACHINE *)v8, (struct DXGKVMB_GUEST_TRANSACTION *)v16);
      }
    }
    v18 = 0LL;
    v12 = v14;
    if ( v14 )
    {
      DXGPROCESS::FreeHandleSafe(v8[7], v17);
      DXGSHAREDVMOBJECT::ReleaseReference(v12);
    }
    goto LABEL_16;
  }
  v5 = -1073741823;
  WdLogSingleEntry1(3LL, -1073741823LL);
LABEL_16:
  ExReleasePushLockSharedEx(v8 + 8, 0LL);
  KeLeaveCriticalRegion();
LABEL_17:
  *((_QWORD *)a1 + 4) = v18;
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v5;
}

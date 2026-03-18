/*
 * XREFs of ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C027633C
 * Callers:
 *     NtDxgkDuplicateHandle @ 0x1C0278A70 (NtDxgkDuplicateHandle.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGKVMB_GUEST_TRANSACTION@@QEAA@PEAXI@Z @ 0x1C02369BC (--0DXGKVMB_GUEST_TRANSACTION@@QEAA@PEAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0239AFC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0246DCC (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C0276120 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C02BD4BC (-BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z.c)
 *     ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C02BD670 (-EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkpDuplicateHandleToVm(struct _D3DKMT_DUPLICATEHANDLE *a1)
{
  struct VMBCHANNEL__ **v1; // rsi
  void *v3; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _DXGSHAREDALLOCOBJECT *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  ACCESS_MASK GrantedAccess; // r14d
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD **v18; // r8
  _QWORD *i; // rdx
  struct VMBCHANNEL__ **v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rax
  DXGSHAREDVMOBJECT *v37; // r14
  __int64 v38; // rdx
  DXGSHAREDVMOBJECT *v40; // [rsp+30h] [rbp-69h] BYREF
  union _LARGE_INTEGER v41; // [rsp+38h] [rbp-61h] BYREF
  char v42[8]; // [rsp+40h] [rbp-59h] BYREF
  DXGPUSHLOCK *v43; // [rsp+48h] [rbp-51h]
  int v44; // [rsp+50h] [rbp-49h]
  char v45[8]; // [rsp+58h] [rbp-41h] BYREF
  DXGPUSHLOCK *v46; // [rsp+60h] [rbp-39h]
  int v47; // [rsp+68h] [rbp-31h]
  _BYTE v48[128]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v49; // [rsp+100h] [rbp+67h] BYREF
  __int64 v50; // [rsp+108h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+110h] [rbp+77h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+118h] [rbp+7Fh] BYREF

  v50 = 0LL;
  v1 = 0LL;
  v40 = 0LL;
  v3 = *(void **)a1;
  v49 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(v3, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &HandleInformation);
  v8 = (struct _DXGSHAREDALLOCOBJECT *)Object;
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v10 + 24) = *(_QWORD *)a1;
    WdLogEvent5_WdWarning(v10);
    goto LABEL_24;
  }
  GrantedAccess = HandleInformation.GrantedAccess;
  if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    GrantedAccess = *((_DWORD *)a1 + 10);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42, (struct _KTHREAD **)Global + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v43);
  v44 = 2;
  v15 = DXGGLOBAL::GetGlobal(v14, v13);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45, (struct _KTHREAD **)v15 + 54, 0);
  DXGPUSHLOCK::AcquireExclusive(v46);
  v47 = 2;
  v18 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal(v17, v16) + 1584);
  for ( i = *v18; i != v18; i = (_QWORD *)*i )
  {
    v20 = (struct VMBCHANNEL__ **)(i - 1);
    v21 = i[30] - *((_QWORD *)a1 + 1);
    if ( !v21 )
      v21 = (__int64)v20[32] - *((_QWORD *)a1 + 2);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdEvent(0LL, i);
      *(_QWORD *)(v22 + 24) = v20;
      WdLogEvent5_WdEvent(v22);
      v1 = v20;
      break;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
  if ( !v1 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v26[3] = *((unsigned int *)a1 + 2);
    v26[4] = *((unsigned __int16 *)a1 + 6);
    v26[5] = *((unsigned __int16 *)a1 + 7);
    v26[6] = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdWarning(v26);
    LODWORD(v9) = -1073741275;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
    goto LABEL_24;
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v1 + 8));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  if ( *((_DWORD *)v1 + 88) >= 0x14u )
  {
    LODWORD(v9) = DxgkpCreateSharedVmObjectsForExistingResource(v1[7], *(void **)a1, v8, &v40, &v49);
    if ( (int)v9 >= 0 )
    {
      DXGKVMB_GUEST_TRANSACTION::DXGKVMB_GUEST_TRANSACTION((DXGKVMB_GUEST_TRANSACTION *)v48, &v50);
      DXGVIRTUALMACHINE::BeginTransaction((DXGVIRTUALMACHINE *)v1, (struct DXGKVMB_GUEST_TRANSACTION *)v48);
      v31 = DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
              v1 + 16,
              v8,
              v49,
              *((void **)a1 + 3),
              GrantedAccess,
              (struct DXGKVMB_GUEST_TRANSACTION *)v48);
      v9 = v31;
      if ( v31 >= 0 )
      {
        v41.QuadPart = -50000000LL;
        v35 = DXGVIRTUALMACHINE::EndTransaction((DXGVIRTUALMACHINE *)v1, (struct DXGKVMB_GUEST_TRANSACTION *)v48, &v41);
        v9 = v35;
        if ( v35 >= 0 )
          goto LABEL_23;
      }
      v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v36 + 24) = v9;
      WdLogEvent5_WdWarning(v36);
    }
    v50 = 0LL;
    v37 = v40;
    if ( v40 )
    {
      DXGPROCESS::FreeHandleSafe(v1[7], v49);
      DXGSHAREDVMOBJECT::ReleaseReference(v37, v38);
    }
    goto LABEL_23;
  }
  LODWORD(v9) = -1073741823;
  v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
  *(_QWORD *)(v30 + 24) = -1073741823LL;
  WdLogEvent5_WdWarning(v30);
LABEL_23:
  ExReleasePushLockSharedEx(v1 + 8, 0LL);
  KeLeaveCriticalRegion();
LABEL_24:
  *((_QWORD *)a1 + 4) = v50;
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v9;
}

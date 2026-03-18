/*
 * XREFs of ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0112914
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0112380 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0115870 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C011B1A0 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C0169BA4 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C0228300 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F470 (-VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACK.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0247944 (-VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PE.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2,
        __int64 a3)
{
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v3; // rsi
  __int64 v5; // rbx
  struct DXGPROCESS *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rdi
  char *v10; // rbx
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v17; // rdi
  struct DXGTHREAD *v18; // rax
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v31; // rax
  int v32; // r9d
  _QWORD *v33; // rax
  unsigned __int8 v34; // cl
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-60h] BYREF
  __int64 v39; // [rsp+28h] [rbp-58h]
  char v40; // [rsp+30h] [rbp-50h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v41; // [rsp+38h] [rbp-48h]
  _BYTE v42[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v38 = -1;
  v3 = a2;
  v39 = 0LL;
  v41 = a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 5004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5004);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 5004LL);
  v5 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(v5 + 209) )
  {
    Current = DXGPROCESS::GetCurrent();
    LODWORD(v3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 4240),
                    Current,
                    v3);
  }
  else
  {
    v6 = DXGPROCESS::GetCurrent();
    v9 = v6;
    if ( v6 )
      v10 = (char *)v6 + 112;
    else
      v10 = 0LL;
    v11 = 0;
    if ( v10 && *((struct _KTHREAD **)v10 + 1) == KeGetCurrentThread() )
    {
      v31 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v31 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v9 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v32 = *((_DWORD *)v10 + 6);
          if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, &EventBlockThread, v13, v32);
        }
        ExAcquirePushLockExclusiveEx(v10, 0LL);
      }
      v11 = 2;
      *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    v17 = 0LL;
    if ( CurrentIrql < 2u && (v18 = DXGTHREAD::GetCurrent(v15, v14), (v17 = v18) != 0LL) )
      v19 = *((_DWORD *)v18 + 8);
    else
      v19 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v42,
      *((struct DXGADAPTER **)this + 2));
    v3 = (struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *)(*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))(*((_QWORD *)this + 2) + 400LL))(
                                                              *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
                                                              v3);
    if ( v42[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
      v33[3] = 275LL;
      v33[4] = 16LL;
      v33[5] = this;
      v33[6] = CurrentIrql;
      v34 = KeGetCurrentIrql();
      v33[7] = v34;
      WdLogEvent5_WdCriticalError(v33);
    }
    if ( v17 && *((_DWORD *)v17 + 8) != v19 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
      v35[3] = 275LL;
      v35[4] = 38LL;
      v36 = *((int *)v17 + 8);
      v35[7] = 0LL;
      v35[5] = v36;
      v35[6] = v19;
      WdLogEvent5_WdCriticalError(v35);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v20);
    v23 = v41;
    v22[3] = v3;
    v22[4] = v23->AllocationPrivateDriverDataSize;
    v22[5] = v23->ResourcePrivateDriverDataSize;
    WdLogEvent5_WdEvent(v22);
    if ( (_DWORD)v3 != -1073741801 && (_DWORD)v3 )
    {
      v37 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v37 + 24) = v3;
      WdLogEvent5_WdError(v37);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    if ( v11 == 2 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v26);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v38);
  return (unsigned int)v3;
}

/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0117234
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0044460 (DxgkDeviceIoctl.c)
 *     ?VmBusCreateProcessCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8A20 (-VmBusCreateProcessCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C0117110 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C016B210 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0192DAC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C022EEBC (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0235DA0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02375E0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EA80 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000568C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C0048840 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ??0DXGPROCESSVMWP@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00488D0 (--0DXGPROCESSVMWP@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C004899C (--2-$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C010CF18 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0117604 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(
        struct DXGPROCESS **a1,
        struct DXGPROCESS *a2,
        struct DXGPROCESS *a3,
        char a4,
        struct _EPROCESS *a5,
        void *a6)
{
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  struct _EPROCESS *v14; // rbp
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rax
  struct DXGPROCESS *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGGLOBAL *v30; // rax
  DXGPROCESS *v31; // rax
  DXGPROCESSVMWP *v32; // rax
  __int64 v33; // rcx
  DXGPROCESSVMWP *v34; // rbx
  struct DXGGLOBAL *v35; // rax
  DXGPROCESSVM *v36; // rsi
  struct _KPROCESS *v37; // rcx
  HANDLE ProcessId; // rbx
  DXGPROCESSVM *v39; // rbx
  struct DXGGLOBAL *v40; // rax
  __int64 v41; // rax
  struct _EPROCESS *v42; // rax
  __int64 ProcessServerSilo; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ebx
  struct DXGGLOBAL *v47; // rbx
  char *v48; // r14
  _QWORD *v49; // rax
  char *v50; // rbx
  __int64 v51; // rcx
  _QWORD *v52; // r14
  __int64 v53; // rbx
  __int64 v54; // rbp
  _QWORD *v55; // rax
  __int64 v56; // rbx
  struct _KTHREAD **v57; // [rsp+30h] [rbp-28h] BYREF
  char v58; // [rsp+38h] [rbp-20h]

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v13 = 0;
  v14 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v12, v11);
  v58 = 0;
  v57 = (struct _KTHREAD **)((char *)Global + 320);
  if ( Global == (struct DXGGLOBAL *)-320LL )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v57[2] == CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(CurrentThread, v18);
    *(_QWORD *)(v22 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v57);
  if ( a2 )
  {
    v39 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x228uLL);
    if ( v39 )
    {
      v40 = DXGGLOBAL::GetGlobal((__int64)v37, v25);
      v36 = DXGPROCESSVM::DXGPROCESSVM(v39, v40, v14, a2, a3);
    }
    else
    {
      v36 = 0LL;
    }
    ProcessId = a6;
LABEL_28:
    if ( !v36 )
    {
      v41 = WdLogNewEntry5_WdLowResource(v37, v25, v28, v29);
      *(_QWORD *)(v41 + 24) = 249LL;
      WdLogEvent5_WdLowResource(v41);
      v13 = -1073741801;
      goto LABEL_45;
    }
    if ( a4 )
    {
      v42 = a5;
      if ( !a5 )
        v42 = v14;
      *((_QWORD *)v36 + 64) = v42;
    }
    ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)v36 + 7));
    *((_BYTE *)v36 + 348) = ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) != 0 ? 0 : 4) | *((_BYTE *)v36 + 348) & 0xFB;
    v46 = DXGPROCESS::Initialize((unsigned __int64)v36, ProcessId);
    if ( v46 < 0 )
    {
      (**(void (__fastcall ***)(DXGPROCESSVM *, __int64))v36)(v36, 1LL);
      v13 = v46;
      goto LABEL_45;
    }
    if ( !*((_BYTE *)v36 + 345) )
    {
      v47 = DXGGLOBAL::GetGlobal(v45, v44);
      v48 = (char *)v47 + 376;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v47 + 376, 0LL);
      v49 = (_QWORD *)((char *)v36 + 8);
      v50 = (char *)v47 + 360;
      *((_QWORD *)v48 + 1) = KeGetCurrentThread();
      v51 = *(_QWORD *)v50;
      if ( *(char **)(*(_QWORD *)v50 + 8LL) != v50 )
        goto LABEL_42;
      *v49 = v51;
      *((_QWORD *)v36 + 2) = v50;
      *(_QWORD *)(v51 + 8) = v49;
      *(_QWORD *)v50 = v49;
      *((_QWORD *)v48 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v48, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( !a2 )
    {
      PsSetProcessDxgProcess(v14, v36);
LABEL_44:
      *a1 = v36;
      goto LABEL_45;
    }
    v52 = (_QWORD *)((char *)v36 + 512);
    v53 = *(_QWORD *)(*((_QWORD *)v36 + 62) + 496LL);
    v54 = v53 + 96;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v53 + 96));
    v55 = *(_QWORD **)(v53 + 32);
    v56 = v53 + 24;
    if ( *v55 == v56 )
    {
      *v52 = v56;
      *((_QWORD *)v36 + 65) = v55;
      *v55 = v52;
      *(_QWORD *)(v56 + 8) = v52;
      *(_QWORD *)(v54 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v54, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_44;
    }
LABEL_42:
    __fastfail(3u);
  }
  v23 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v14);
  if ( !v23 )
  {
    if ( a4 )
    {
      if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
        v32 = (DXGPROCESSVMWP *)operator new(0x210uLL, 0x4B677844u, 1, (POOL_TYPE)512);
      else
        v32 = (DXGPROCESSVMWP *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x210uLL);
      v34 = v32;
      if ( v32 )
      {
        v35 = DXGGLOBAL::GetGlobal(v33, v25);
        v31 = DXGPROCESSVMWP::DXGPROCESSVMWP(v34, v35, v14);
        goto LABEL_19;
      }
    }
    else
    {
      PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1F0uLL, 0x50677844u);
      if ( PoolWithQuotaTag )
      {
        v30 = DXGGLOBAL::GetGlobal(v26, v25);
        v31 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v30, v14);
LABEL_19:
        v36 = v31;
        goto LABEL_21;
      }
    }
    v36 = 0LL;
LABEL_21:
    v37 = (struct _KPROCESS *)*((_QWORD *)v36 + 7);
    if ( v37 )
      ProcessId = PsGetProcessId(v37);
    else
      ProcessId = 0LL;
    goto LABEL_28;
  }
  *a1 = v23;
LABEL_45:
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v57, v24);
  return v13;
}

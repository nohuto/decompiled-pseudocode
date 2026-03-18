/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C011A908
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C00425A0 (DxgkDeviceIoctl.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C011AD70 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0156660 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C017CEEC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C022AECC (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0231D70 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02334D0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023A930 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C0046A28 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C0046B38 (--2-$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C010F304 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C011AB5C (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
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
  struct _EPROCESS *v13; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGPROCESS *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGGLOBAL *v26; // rax
  DXGPROCESS *v27; // rdi
  struct _KPROCESS *v28; // rcx
  HANDLE ProcessId; // rbx
  __int64 ProcessServerSilo; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // ebx
  struct DXGGLOBAL *v34; // rbx
  char *v35; // rbp
  _QWORD *v36; // rax
  char *v37; // rbx
  __int64 v38; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  struct DXGGLOBAL *v43; // rax
  DXGPROCESSVM *v44; // rbx
  struct DXGGLOBAL *v45; // rax
  __int64 v46; // rax
  struct _EPROCESS *v47; // rax
  _QWORD *v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // rbp
  _QWORD *v51; // rax
  __int64 v52; // rbx
  struct _KTHREAD **v53; // [rsp+30h] [rbp-28h] BYREF
  char v54; // [rsp+38h] [rbp-20h]

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v13 = (struct _EPROCESS *)CurrentProcess;
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
  v54 = 0;
  v53 = (struct _KTHREAD **)((char *)Global + 208);
  if ( Global == (struct DXGGLOBAL *)-208LL )
  {
    v40 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v40 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v40);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v53[2] == CurrentThread )
  {
    v41 = WdLogNewEntry5_WdAssertion(CurrentThread, v16);
    *(_QWORD *)(v41 + 24) = 767LL;
    WdLogEvent5_WdAssertion(v41);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v53);
  if ( !a2 )
  {
    v19 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v13);
    if ( v19 )
    {
      *a1 = v19;
      goto LABEL_23;
    }
    if ( a4 )
    {
      v27 = (DXGPROCESS *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x210uLL);
      if ( v27 )
      {
        v43 = DXGGLOBAL::GetGlobal(v42, v21);
        DXGPROCESS::DXGPROCESS(v27, v43, v13);
        *((_QWORD *)v27 + 62) = 0LL;
        *((_QWORD *)v27 + 63) = 0LL;
        *((_QWORD *)v27 + 64) = 0LL;
        *((_BYTE *)v27 + 347) |= 0x10u;
        *(_QWORD *)v27 = &DXGPROCESSVMWP::`vftable';
        *((_BYTE *)v27 + 520) = 0;
        goto LABEL_12;
      }
    }
    else
    {
      PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1F0uLL, 0x50677844u);
      if ( PoolWithQuotaTag )
      {
        v26 = DXGGLOBAL::GetGlobal(v22, v21);
        v27 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v26, v13);
        goto LABEL_12;
      }
    }
    v27 = 0LL;
LABEL_12:
    v28 = (struct _KPROCESS *)*((_QWORD *)v27 + 7);
    if ( v28 )
      ProcessId = PsGetProcessId(v28);
    else
      ProcessId = 0LL;
    goto LABEL_14;
  }
  v44 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x220uLL);
  if ( v44 )
  {
    v45 = DXGGLOBAL::GetGlobal((__int64)v28, v21);
    v27 = DXGPROCESSVM::DXGPROCESSVM(v44, v45, v13, a2, a3);
  }
  else
  {
    v27 = 0LL;
  }
  ProcessId = a6;
LABEL_14:
  if ( !v27 )
  {
    v46 = WdLogNewEntry5_WdLowResource(v28, v21, v24, v25);
    *(_QWORD *)(v46 + 24) = 238LL;
    WdLogEvent5_WdLowResource(v46);
    v33 = -1073741801;
    goto LABEL_24;
  }
  if ( a4 )
  {
    v47 = a5;
    if ( !a5 )
      v47 = v13;
    *((_QWORD *)v27 + 64) = v47;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)v27 + 7));
  *((_BYTE *)v27 + 348) = ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) != 0 ? 0 : 4) | *((_BYTE *)v27 + 348) & 0xFB;
  v33 = DXGPROCESS::Initialize(v27, ProcessId);
  if ( v33 < 0 )
  {
    (**(void (__fastcall ***)(DXGPROCESS *, __int64))v27)(v27, 1LL);
    goto LABEL_24;
  }
  if ( !*((_BYTE *)v27 + 345) )
  {
    v34 = DXGGLOBAL::GetGlobal(v32, v31);
    v35 = (char *)v34 + 264;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v34 + 264, 0LL);
    v36 = (_QWORD *)((char *)v27 + 8);
    v37 = (char *)v34 + 248;
    *((_QWORD *)v35 + 1) = KeGetCurrentThread();
    v38 = *(_QWORD *)v37;
    if ( *(char **)(*(_QWORD *)v37 + 8LL) != v37 )
      goto LABEL_44;
    *v36 = v38;
    *((_QWORD *)v27 + 2) = v37;
    *(_QWORD *)(v38 + 8) = v36;
    *(_QWORD *)v37 = v36;
    *((_QWORD *)v35 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v35, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a2 )
  {
    v48 = (_QWORD *)((char *)v27 + 512);
    v49 = *(_QWORD *)(*((_QWORD *)v27 + 62) + 496LL);
    v50 = v49 + 96;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v49 + 96));
    v51 = *(_QWORD **)(v49 + 32);
    v52 = v49 + 24;
    if ( *v51 == v52 )
    {
      *v48 = v52;
      *((_QWORD *)v27 + 65) = v51;
      *v51 = v48;
      *(_QWORD *)(v52 + 8) = v48;
      *(_QWORD *)(v50 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v50, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_22;
    }
LABEL_44:
    __fastfail(3u);
  }
  PsSetProcessDxgProcess(v13, v27);
LABEL_22:
  *a1 = v27;
LABEL_23:
  v33 = 0;
LABEL_24:
  if ( v54 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v53, v20);
  return (unsigned int)v33;
}

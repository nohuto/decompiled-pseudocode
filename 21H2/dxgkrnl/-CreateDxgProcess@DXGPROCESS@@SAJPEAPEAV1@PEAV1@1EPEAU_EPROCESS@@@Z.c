/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0050460 (DxgkDeviceIoctl.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0162730 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C0189A50 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0210BEC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C0356AD0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EP.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C035EDB0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0360E10 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036A410 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C00576A8 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C00577C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0189B78 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C018B330 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(
        struct DXGPROCESS **a1,
        struct DXGPROCESS *a2,
        struct DXGPROCESS *a3,
        __int64 a4,
        struct _EPROCESS *a5)
{
  char v5; // bp
  __int64 CurrentProcess; // rax
  struct _EPROCESS *v10; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGPROCESS *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGPROCESS *Pool2; // rbx
  struct DXGGLOBAL *v21; // rax
  DXGPROCESSVM *v22; // rax
  __int64 v23; // rdi
  struct _KPROCESS *v24; // rcx
  HANDLE ProcessId; // rax
  __int64 v26; // rcx
  void *v27; // rbx
  __int64 ProcessServerSilo; // rax
  int v29; // ebx
  struct DXGGLOBAL *v30; // rbx
  char *v31; // rbp
  _QWORD *v32; // rax
  char *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGGLOBAL *v37; // rax
  DXGPROCESSVM *v38; // rbx
  struct DXGGLOBAL *v39; // rax
  struct _EPROCESS *v40; // rax
  _QWORD *v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rbp
  _QWORD *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // [rsp+28h] [rbp-50h]
  __int64 v47; // [rsp+30h] [rbp-48h]
  DXGFASTMUTEX *v48; // [rsp+50h] [rbp-28h]
  char v49; // [rsp+58h] [rbp-20h]

  v5 = a4;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v10 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  Global = DXGGLOBAL_GetGlobal();
  v49 = 0;
  v48 = (struct DXGGLOBAL *)((char *)Global + 368);
  if ( Global == (struct DXGGLOBAL *)-368LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v48 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v48);
  v49 = 1;
  if ( a2 )
  {
    v38 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(664LL, v13, v14, v15);
    if ( !v38 )
      goto LABEL_44;
    v39 = DXGGLOBAL_GetGlobal();
    v22 = DXGPROCESSVM::DXGPROCESSVM(v38, v39, v10, a2, a3);
    goto LABEL_12;
  }
  v16 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v10);
  if ( v16 )
  {
    *a1 = v16;
    goto LABEL_25;
  }
  if ( !v5 )
  {
    Pool2 = (DXGPROCESS *)ExAllocatePool2(257LL, 608LL, 1348958276LL, v19);
    if ( Pool2 )
    {
      v21 = DXGGLOBAL_GetGlobal();
      v22 = DXGPROCESS::DXGPROCESS(Pool2, v21, v10);
LABEL_12:
      v23 = (__int64)v22;
      goto LABEL_13;
    }
LABEL_33:
    v23 = 0LL;
LABEL_13:
    if ( v23 )
      goto LABEL_14;
LABEL_44:
    WdLogSingleEntry1(6LL, 263LL);
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate DXGPROCESS", 263LL, 0LL, 0LL, 0LL, 0LL);
    v29 = -1073741801;
    goto LABEL_26;
  }
  v23 = DXGQUOTAALLOCATOR<256,1348958276>::operator new(640LL, v17, v18, v19);
  if ( !v23 )
    goto LABEL_33;
  v37 = DXGGLOBAL_GetGlobal();
  DXGPROCESS::DXGPROCESS((DXGPROCESS *)v23, v37, v10);
  *(_DWORD *)(v23 + 424) |= 0x80u;
  *(_QWORD *)v23 = &DXGPROCESSVMWP::`vftable';
  *(_QWORD *)(v23 + 608) = 0LL;
  *(_QWORD *)(v23 + 616) = 0LL;
  *(_QWORD *)(v23 + 624) = 0LL;
  *(_BYTE *)(v23 + 632) = 0;
LABEL_14:
  v24 = *(struct _KPROCESS **)(v23 + 56);
  if ( v24 )
  {
    ProcessId = PsGetProcessId(v24);
    v26 = *(_QWORD *)(v23 + 56);
    v27 = ProcessId;
  }
  else
  {
    v27 = 0LL;
    v26 = 0LL;
  }
  if ( v5 )
  {
    v40 = a5;
    if ( !a5 )
      v40 = v10;
    *(_QWORD *)(v23 + 624) = v40;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v26);
  *(_DWORD *)(v23 + 424) = ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) != 0 ? 0 : 0x200) | *(_DWORD *)(v23 + 424) & 0xFFFFFDFF;
  v29 = DXGPROCESS::Initialize((DXGPROCESS *)v23, v27);
  if ( v29 < 0 )
  {
    (**(void (__fastcall ***)(__int64, __int64))v23)(v23, 1LL);
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(v23 + 424) & 2) == 0 )
  {
    v30 = DXGGLOBAL_GetGlobal();
    v31 = (char *)v30 + 432;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v30 + 432, 0LL);
    v32 = (_QWORD *)(v23 + 8);
    v33 = (char *)v30 + 416;
    *((_QWORD *)v31 + 1) = KeGetCurrentThread();
    v34 = *(_QWORD *)v33;
    if ( *(char **)(*(_QWORD *)v33 + 8LL) != v33 )
      goto LABEL_43;
    *v32 = v34;
    *(_QWORD *)(v23 + 16) = v33;
    *(_QWORD *)(v34 + 8) = v32;
    *(_QWORD *)v33 = v32;
    *((_QWORD *)v31 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v31, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !a2 )
  {
    PsSetProcessDxgProcess(v10, v23);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v47) = *(_DWORD *)(v23 + 424);
      LODWORD(v46) = *(_DWORD *)(v23 + 504);
      McTemplateK0pxqt_EtwWriteTransfer(
        *(_QWORD *)(v23 + 64),
        &EventCreateDxgProcess,
        v35,
        v23,
        *(_QWORD *)(*(_QWORD *)(v23 + 64) + 80LL),
        v46,
        v47);
    }
    goto LABEL_24;
  }
  v41 = (_QWORD *)(v23 + 624);
  v42 = *(_QWORD *)(*(_QWORD *)(v23 + 608) + 608LL);
  v43 = v42 + 128;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v42 + 128));
  v44 = *(_QWORD **)(v42 + 32);
  v45 = v42 + 24;
  if ( *v44 != v45 )
LABEL_43:
    __fastfail(3u);
  *v41 = v45;
  *(_QWORD *)(v23 + 632) = v44;
  *v44 = v41;
  *(_QWORD *)(v45 + 8) = v41;
  *(_QWORD *)(v43 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v43, 0LL);
  KeLeaveCriticalRegion();
LABEL_24:
  *a1 = (struct DXGPROCESS *)v23;
LABEL_25:
  v29 = 0;
LABEL_26:
  if ( v49 )
  {
    v49 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v48);
  }
  return (unsigned int)v29;
}

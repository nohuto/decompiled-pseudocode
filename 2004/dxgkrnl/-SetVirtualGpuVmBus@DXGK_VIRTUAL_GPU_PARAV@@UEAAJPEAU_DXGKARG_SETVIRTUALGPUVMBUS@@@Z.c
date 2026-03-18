/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0236030
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006904 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C003F5E4 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003F62C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0114E94 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0115474 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C02387CC (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0285228 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C028537C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  __int64 *v2; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGPROCESSVMWP **v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  struct _EPROCESS *v15; // r15
  struct DXGVIRTUALMACHINE *v16; // r14
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  int DxgProcess; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  DXGPROCESS *v28; // rcx
  DXGPROCESS **Current; // rax
  int v30; // eax
  char v31; // cl
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _EPROCESS *v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  DXGVIRTUALMACHINE *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _BYTE v46[8]; // [rsp+40h] [rbp-20h] BYREF
  DXGPUSHLOCK *v47; // [rsp+48h] [rbp-18h]
  int v48; // [rsp+50h] [rbp-10h]
  struct DXGPROCESS *v49; // [rsp+A0h] [rbp+40h] BYREF
  struct _EPROCESS *v50; // [rsp+A8h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this + 168);
  LODWORD(v7) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 21, a2->VmBusHandle, this);
  if ( (int)v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46, (struct _KTHREAD **)Global + 50, 0);
    DXGPUSHLOCK::AcquireExclusive(v47);
    v11 = (DXGPROCESSVMWP **)((char *)this + 96);
    v48 = 2;
    v12 = *((_QWORD *)this + 12);
    if ( v12 )
    {
      if ( !*(_BYTE *)(v12 + 520) )
      {
        v42 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v42 + 24) = 389LL;
        WdLogEvent5_WdError(v42);
        LODWORD(v7) = -1073741823;
        goto LABEL_40;
      }
      LODWORD(v7) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 13), a2->VmBusHandle, 1u);
      if ( (int)v7 < 0 )
      {
        v38 = WdLogNewEntry5_WdError(v44, v43);
        *(_QWORD *)(v38 + 24) = 401LL;
        goto LABEL_37;
      }
      DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
      goto LABEL_39;
    }
    v13 = *v2;
    v50 = 0LL;
    if ( g_VgpuDisableVaBackedVm
      || (v14 = ((__int64 (__fastcall *)(__int64, struct _EPROCESS **))qword_1C00B3318)(v13, &v50), v15 = v50, v14 < 0) )
    {
      v15 = 0LL;
    }
    v16 = 0LL;
    if ( !v15 )
    {
      Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v13, v9);
      v49 = (struct DXGPROCESS *)Current;
      if ( !Current )
        goto LABEL_22;
      if ( (*((_BYTE *)Current + 347) & 0x10) == 0 )
      {
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
        Current = 0LL;
        v49 = 0LL;
      }
      if ( !Current )
      {
LABEL_22:
        v30 = DXGPROCESS::CreateDxgProcess(&v49, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL, 0LL);
        v7 = v30;
        if ( v30 < 0 )
        {
LABEL_16:
          v27 = WdLogNewEntry5_WdLowResource(v24, v18, v25, v26);
          *(_QWORD *)(v27 + 24) = v7;
          WdLogEvent5_WdLowResource(v27);
LABEL_40:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
          return (unsigned int)v7;
        }
        Current = (DXGPROCESS **)v49;
      }
      v31 = *((_BYTE *)Current + 347);
      if ( (v31 & 0x20) != 0 )
        v28 = Current[62];
      else
        v28 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v31 & 0x10) != 0));
      *v11 = v28;
      goto LABEL_28;
    }
    CurrentProcess = PsGetCurrentProcess(v13, v9);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v21, v22) + 24) = ProcessDxgProcess;
      if ( (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0 )
      {
        *v11 = (DXGPROCESSVMWP *)ProcessDxgProcess;
        v16 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 496);
        if ( v16 )
        {
          if ( *((_QWORD *)v16 + 29) )
            goto LABEL_14;
          *(_QWORD *)(ProcessDxgProcess + 496) = 0LL;
          *((_QWORD *)v16 + 7) = 0LL;
        }
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
        *v11 = 0LL;
      }
      else
      {
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
      }
    }
LABEL_14:
    if ( !*v11 )
    {
      DxgProcess = DXGPROCESS::CreateDxgProcess(
                     (struct DXGPROCESS **)this + 12,
                     0LL,
                     0LL,
                     a2->VmBusHandle != 0LL,
                     v15,
                     0LL);
      v7 = DxgProcess;
      if ( DxgProcess < 0 )
        goto LABEL_16;
    }
    v28 = *v11;
LABEL_28:
    DXGPROCESS::AcquireReference(v28, v18);
    v34 = (struct _EPROCESS *)PsGetCurrentProcess(v33, v32);
    v35 = DXGPROCESSVMWP::InitializeVmwpProcess(
            *v11,
            a2->VmBusHandle,
            *((struct DXGPROCESS **)this + 11),
            v34,
            v15,
            *((_BYTE *)this + 153),
            v16);
    v7 = v35;
    if ( v35 < 0 )
    {
      v38 = WdLogNewEntry5_WdError(v37, v36);
      *(_QWORD *)(v38 + 24) = v7;
LABEL_37:
      WdLogEvent5_WdError(v38);
      goto LABEL_40;
    }
    v39 = (DXGVIRTUALMACHINE *)*((_QWORD *)*v11 + 62);
    *((_QWORD *)this + 13) = v39;
    LODWORD(v7) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v39, a2->VmBusHandle, 1u);
    if ( (int)v7 < 0 )
    {
      v38 = WdLogNewEntry5_WdError(v41, v40);
      *(_QWORD *)(v38 + 24) = 374LL;
      goto LABEL_37;
    }
    *(_OWORD *)(*((_QWORD *)this + 13) + 248LL) = *(_OWORD *)((char *)this + 328);
    DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
LABEL_39:
    *((_BYTE *)this + 154) = 0;
    goto LABEL_40;
  }
  return (unsigned int)v7;
}

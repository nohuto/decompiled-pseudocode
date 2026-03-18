/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02366C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006904 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C003F494 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003F4DC (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0113D14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0233B40 (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0284248 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C028439C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  DXGPROCESS **Current; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  char v16; // cl
  DXGPROCESS *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  DXGVIRTUALMACHINE *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  ULONG v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  struct DXGPROCESS *v35; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v36[8]; // [rsp+48h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v37; // [rsp+50h] [rbp-B8h]
  int v38; // [rsp+58h] [rbp-B0h]
  _BYTE v39[144]; // [rsp+60h] [rbp-A8h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36, (struct _KTHREAD **)Global + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v37);
  v7 = *((_QWORD *)this + 12);
  v38 = 2;
  if ( v7 )
  {
    if ( !*(_BYTE *)(v7 + 520) )
    {
      v28 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v28 + 24) = 239LL;
      WdLogEvent5_WdError(v28);
      LODWORD(v14) = -1073741823;
      goto LABEL_26;
    }
    LODWORD(v14) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 13), 0LL, 0);
    if ( (int)v14 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v24 + 24) = 250LL;
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
  }
  else
  {
    Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v6, v5);
    v35 = (struct DXGPROCESS *)Current;
    if ( !Current )
      goto LABEL_6;
    if ( (*((_BYTE *)Current + 347) & 0x10) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
      Current = 0LL;
      v35 = 0LL;
    }
    if ( !Current )
    {
LABEL_6:
      v10 = DXGPROCESS::CreateDxgProcess(&v35, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL, 0LL);
      v14 = v10;
      if ( v10 < 0 )
      {
        v15 = WdLogNewEntry5_WdLowResource(v11, v9, v12, v13);
        *(_QWORD *)(v15 + 24) = v14;
        WdLogEvent5_WdLowResource(v15);
        goto LABEL_26;
      }
      Current = (DXGPROCESS **)v35;
    }
    v16 = *((_BYTE *)Current + 347);
    if ( (v16 & 0x20) != 0 )
      v17 = Current[62];
    else
      v17 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v16 & 0x10) != 0));
    *((_QWORD *)this + 12) = v17;
    DXGPROCESS::AcquireReference(v17, v9);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v19, v18);
    v21 = DXGPROCESSVMWP::InitializeVmwpProcess(
            *((DXGPROCESSVMWP **)this + 12),
            a2->VmBusHandle,
            *((struct DXGPROCESS **)this + 11),
            CurrentProcess,
            0LL,
            0,
            0LL);
    v14 = v21;
    if ( v21 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v24 + 24) = v14;
LABEL_21:
      WdLogEvent5_WdError(v24);
      goto LABEL_26;
    }
    v25 = *(DXGVIRTUALMACHINE **)(*((_QWORD *)this + 12) + 496LL);
    *((_QWORD *)this + 13) = v25;
    LODWORD(v14) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v25, 0LL, 0);
    if ( (int)v14 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v24 + 24) = 225LL;
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
  }
  v31 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 154) = 0;
  a2->VirtualGpuIndex = v31;
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v39,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 1) + 16LL),
    0LL);
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
  if ( (int)v14 >= 0 )
    LODWORD(v14) = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2, v33);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39, v32);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  return (unsigned int)v14;
}

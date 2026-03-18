/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0360E10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C005C3F4 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005C43C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0336764 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C033693C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C035D524 (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXGPROCESS **Current; // rax
  __int64 v11; // r9
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdi
  int v15; // edx
  const wchar_t *v16; // r9
  int v17; // ecx
  DXGPROCESS *v18; // rcx
  DXGPROCESSVMWP *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _EPROCESS *CurrentProcess; // rax
  int v25; // eax
  struct DXGPROCESSVMWP **v26; // rcx
  ULONG v27; // eax
  __int64 v28; // r8
  struct DXGPROCESS *v30; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v31[8]; // [rsp+58h] [rbp-D0h] BYREF
  DXGPUSHLOCK *v32; // [rsp+60h] [rbp-C8h]
  int v33; // [rsp+68h] [rbp-C0h]
  _BYTE v34[144]; // [rsp+70h] [rbp-B8h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, (struct _KTHREAD **)Global + 57, 0);
  DXGPUSHLOCK::AcquireExclusive(v32);
  v9 = *((_QWORD *)this + 12);
  v33 = 2;
  if ( v9 )
  {
    if ( !*(_BYTE *)(v9 + 632) )
    {
      v14 = 249LL;
      WdLogSingleEntry1(2LL, 249LL);
      v16 = L"VMWP process failed to reset";
      v13 = -1073741823;
      goto LABEL_22;
    }
    v13 = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((struct DXGPROCESSVMWP ***)this + 13), 0LL, 0);
    if ( v13 < 0 )
    {
      v14 = 260LL;
      WdLogSingleEntry1(2LL, 260LL);
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
  }
  else
  {
    Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
    v30 = (struct DXGPROCESS *)Current;
    if ( !Current )
      goto LABEL_6;
    if ( ((_DWORD)Current[53] & 0x80) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
      Current = 0LL;
      v30 = 0LL;
    }
    if ( !Current )
    {
LABEL_6:
      LOBYTE(v11) = a2->VmBusHandle != 0LL;
      v12 = DXGPROCESS::CreateDxgProcess(&v30, 0LL, 0LL, v11, 0LL);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = v12;
        WdLogSingleEntry1(6LL, v12);
        v15 = 262145;
        v16 = L"Failed to create DXGPROCESS for VMWP process: 0x%I64x";
LABEL_23:
        DxgkLogInternalTriageEvent(0LL, v15, -1, (__int64)v16, v14, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_28;
      }
      Current = (DXGPROCESS **)v30;
    }
    v17 = *((_DWORD *)Current + 106);
    if ( (v17 & 0x100) != 0 )
      v18 = Current[76];
    else
      v18 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v17 & 0x80u) != 0));
    *((_QWORD *)this + 12) = v18;
    DXGPROCESS::AcquireReference(v18);
    v19 = (DXGPROCESSVMWP *)*((_QWORD *)this + 12);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v21, v20, v22, v23);
    v25 = DXGPROCESSVMWP::InitializeVmwpProcess(
            v19,
            a2->VmBusHandle,
            *((struct DXGPROCESS **)this + 11),
            CurrentProcess,
            0LL,
            0,
            0LL);
    v13 = v25;
    if ( v25 < 0 )
    {
      v14 = v25;
      WdLogSingleEntry1(2LL, v25);
      v16 = L"Failed to setup VM worker process: 0x%I64x";
LABEL_22:
      v15 = 0x40000;
      goto LABEL_23;
    }
    v26 = *(struct DXGPROCESSVMWP ***)(*((_QWORD *)this + 12) + 608LL);
    *((_QWORD *)this + 13) = v26;
    v13 = DXGVIRTUALMACHINE::InitializeVirtualMachine(v26, 0LL, 0);
    if ( v13 < 0 )
    {
      v14 = 235LL;
      WdLogSingleEntry1(2LL, 235LL);
LABEL_21:
      v16 = L"Failed to initalize virtual machine";
      goto LABEL_22;
    }
    DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
  }
  v27 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 154) = 0;
  a2->VirtualGpuIndex = v27;
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v34,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 1) + 16LL),
    0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
  if ( v13 >= 0 )
    v13 = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2, v28);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
LABEL_28:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  return (unsigned int)v13;
}

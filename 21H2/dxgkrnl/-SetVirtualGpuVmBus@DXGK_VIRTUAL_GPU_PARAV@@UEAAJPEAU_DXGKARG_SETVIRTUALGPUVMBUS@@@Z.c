/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C035EDB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C005C3F4 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005C43C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0336764 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C033693C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z @ 0x1C033780C (-SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C03621B0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _EPROCESS *v13; // r12
  struct DXGVIRTUALMACHINE *v14; // r15
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v19; // r9
  int DxgProcess; // eax
  DXGPROCESS *v21; // rcx
  DXGPROCESS **Current; // rax
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdi
  int v26; // edx
  const wchar_t *v27; // r9
  int v28; // ecx
  DXGPROCESSVMWP *v29; // rdi
  unsigned __int8 v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _EPROCESS *v35; // rax
  int v36; // eax
  struct DXGPROCESSVMWP **v37; // rcx
  _BYTE v39[8]; // [rsp+50h] [rbp-20h] BYREF
  DXGPUSHLOCK *v40; // [rsp+58h] [rbp-18h]
  int v41; // [rsp+60h] [rbp-10h]
  struct DXGPROCESS *v42; // [rsp+B0h] [rbp+40h] BYREF
  struct _EPROCESS *v43; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this + 176);
  LODWORD(v5) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 22, a2->VmBusHandle, this);
  if ( (int)v5 >= 0 )
  {
    Global = DXGGLOBAL_GetGlobal();
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39, (struct _KTHREAD **)Global + 57, 0);
    DXGPUSHLOCK::AcquireExclusive(v40);
    v10 = (char *)this + 96;
    v11 = *((_QWORD *)this + 12);
    v41 = 2;
    if ( v11 )
    {
      if ( !*(_BYTE *)(v11 + 632) )
      {
        v25 = 388LL;
        WdLogSingleEntry1(2LL, 388LL);
        v27 = L"VMWP process failed to reset";
        LODWORD(v5) = -1073741823;
        goto LABEL_38;
      }
      LODWORD(v5) = DXGVIRTUALMACHINE::InitializeVirtualMachine(
                      *((struct DXGPROCESSVMWP ***)this + 13),
                      a2->VmBusHandle,
                      1);
      if ( (int)v5 < 0 )
      {
        v25 = 400LL;
        WdLogSingleEntry1(2LL, 400LL);
        goto LABEL_37;
      }
      DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
LABEL_41:
      *((_BYTE *)this + 154) = 0;
      goto LABEL_42;
    }
    v12 = *v2;
    v43 = 0LL;
    if ( g_VgpuDisableVaBackedVm
      || (int)((__int64 (__fastcall *)(__int64, struct _EPROCESS **))qword_1C0131E38)(v12, &v43) < 0 )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = v43;
      v14 = 0LL;
      if ( v43 )
      {
        CurrentProcess = PsGetCurrentProcess(v12, v7, v8, v9);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        if ( ProcessDxgProcess )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = ProcessDxgProcess;
          if ( (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
          {
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            goto LABEL_13;
          }
          *(_QWORD *)v10 = ProcessDxgProcess;
          v14 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 608);
          if ( !v14 )
            goto LABEL_11;
          if ( !*((_QWORD *)v14 + 34) )
          {
            *(_QWORD *)(ProcessDxgProcess + 608) = 0LL;
            *((_QWORD *)v14 + 7) = 0LL;
LABEL_11:
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            *(_QWORD *)v10 = 0LL;
          }
        }
LABEL_13:
        if ( *(_QWORD *)v10
          || (LOBYTE(v19) = a2->VmBusHandle != 0LL,
              DxgProcess = DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)this + 12, 0LL, 0LL, v19, v13),
              v5 = DxgProcess,
              DxgProcess >= 0) )
        {
          v21 = *(DXGPROCESS **)v10;
LABEL_28:
          DXGPROCESS::AcquireReference(v21);
          v29 = *(DXGPROCESSVMWP **)v10;
          v30 = *((_BYTE *)this + 153);
          v35 = (struct _EPROCESS *)PsGetCurrentProcess(v32, v31, v33, v34);
          v36 = DXGPROCESSVMWP::InitializeVmwpProcess(
                  v29,
                  a2->VmBusHandle,
                  *((struct DXGPROCESS **)this + 11),
                  v35,
                  v13,
                  v30,
                  v14);
          LODWORD(v5) = v36;
          if ( v36 < 0 )
          {
            v25 = v36;
            WdLogSingleEntry1(2LL, v36);
            v27 = L"Failed to setup VM worker process: 0x%I64x";
LABEL_38:
            v26 = 0x40000;
            goto LABEL_39;
          }
          v37 = *(struct DXGPROCESSVMWP ***)(*(_QWORD *)v10 + 608LL);
          *((_QWORD *)this + 13) = v37;
          LODWORD(v5) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v37, a2->VmBusHandle, 1);
          if ( (int)v5 < 0 )
          {
            v25 = 373LL;
            WdLogSingleEntry1(2LL, 373LL);
LABEL_37:
            v27 = L"Failed to initalize virtual machine";
            goto LABEL_38;
          }
          DXGVIRTUALMACHINE::SetVmGuid(*((struct _GUID **)this + 13), (const struct _GUID *)this + 22);
          DXGVIRTUALMACHINE::AddVirtualGpu(
            *((struct _KTHREAD ***)this + 13),
            (struct _LIST_ENTRY *)((char *)this + 136));
          goto LABEL_41;
        }
LABEL_22:
        v25 = v5;
        WdLogSingleEntry1(6LL, v5);
        v26 = 262145;
        v27 = L"Failed to create DXGPROCESS for VMWP process: 0x%I64x";
LABEL_39:
        DxgkLogInternalTriageEvent(0LL, v26, -1, (__int64)v27, v25, 0LL, 0LL, 0LL, 0LL);
LABEL_42:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
        return (unsigned int)v5;
      }
    }
    Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v12, v7, v8, v9);
    v42 = (struct DXGPROCESS *)Current;
    if ( !Current )
      goto LABEL_21;
    if ( ((_DWORD)Current[53] & 0x80) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
      Current = 0LL;
      v42 = 0LL;
    }
    if ( !Current )
    {
LABEL_21:
      LOBYTE(v23) = a2->VmBusHandle != 0LL;
      v24 = DXGPROCESS::CreateDxgProcess(&v42, 0LL, 0LL, v23, 0LL);
      v5 = v24;
      if ( v24 < 0 )
        goto LABEL_22;
      Current = (DXGPROCESS **)v42;
    }
    v28 = *((_DWORD *)Current + 106);
    if ( (v28 & 0x100) != 0 )
      v21 = Current[76];
    else
      v21 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v28 & 0x80u) != 0));
    *(_QWORD *)v10 = v21;
    v14 = 0LL;
    goto LABEL_28;
  }
  return (unsigned int)v5;
}

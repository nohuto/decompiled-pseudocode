/*
 * XREFs of ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180075640 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18007751C (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083450 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180084998 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x18018C7D8 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E1E4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18018F0B8 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCSixDofProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct IMPCTarget *v4; // rbx
  MPCSixDofProcessor *v5; // rbp
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v7; // r14
  struct IMPCTarget *v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v13; // [rsp+40h] [rbp+8h] BYREF
  struct IMPCTarget *v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(struct IMPCTarget **)(this + 4576);
  v14 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( *((_BYTE *)a2 + 940) && *((_BYTE *)a2 + 941) )
  {
    v5 = (MPCSixDofProcessor *)(this - 24);
    if ( MPCSixDofProcessor::ShouldRequestPrimary((MPCSixDofProcessor *)(this - 24), a2) )
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  }
  else
  {
    if ( MPCInputProviderBase::IsPrimary(this) )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      MPCHolographicInputManager::DemoteProviderPrimary(
        Instance,
        (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)));
    }
    v5 = (MPCSixDofProcessor *)(this - 24);
  }
  MPCSixDofProcessor::ProcessHomeGesture(v5, a2);
  v13 = 0LL;
  v7 = MPCHolographicInputManager::GetInstance();
  v8 = v13;
  v13 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = MPCHolographicInputManager::Process3DInput(
         v7,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(v5 != 0LL)),
         &v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    MPCSixDofProcessor::DeliverInputToTarget(v5, a2, v4, v13);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v13);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v14);
  return v10;
}

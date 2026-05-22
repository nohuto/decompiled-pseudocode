/*
 * XREFs of ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180075588
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180075640 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputProviderBase___::_Do_call @ 0x180079010 (std--_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputPr_ea_180079010.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006ACCC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006AF0C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B38C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18007C4E0 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

void __fastcall MPCHolographicInputManager::DemotePrimaryProviderInternal(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  __int64 v2; // rbx
  MPCGestureHandlerManager *Instance; // rbx
  _QWORD *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 298);
  if ( *(_BYTE *)(v2 + 64) )
  {
    if ( *(_BYTE *)(v2 + 56) && *(_BYTE *)(v2 + 65) )
    {
      if ( ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
      {
        MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v2, 0, 1, 0);
        *(_DWORD *)(v2 + 32) = 0;
        *(_OWORD *)v2 = 0LL;
        *(_OWORD *)(v2 + 16) = 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 32) = 0;
      *(_OWORD *)v2 = 0LL;
      *(_OWORD *)(v2 + 16) = 0LL;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v2, 1, 1, 0);
    }
  }
  Instance = MPCGestureHandlerManager::GetInstance((__int64)this);
  v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v6,
         (__int64)a2);
  MPCGestureHandlerManager::DetachProvider(Instance, v5);
}

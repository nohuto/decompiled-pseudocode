/*
 * XREFs of ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180197A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006AD6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B0E4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B42C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BA50 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800834F0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800846FC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 *     ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x1801979E0 (-Display3DCursor@MPCHeadProcessor@@UEAA_NXZ.c)
 */

void __fastcall MPCHeadProcessor::PostHitTestProcessing(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  bool v7; // al
  __int64 *Instance; // rbx
  _QWORD *v9; // rax
  const char *v10; // r9
  __int64 v11; // rcx
  struct MPCGestureHandlerManager *v12; // rbx
  _QWORD *v13; // rax
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) && *((_BYTE *)a3 + 152) )
  {
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v5, (__int64)a3, 4);
    v7 = *((_BYTE *)a3 + 700) || !MPCHeadProcessor::Display3DCursor(this);
    *((_BYTE *)a3 + 700) = v7;
    Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(v6);
    v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v16,
           (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v9, v10);
    v12 = MPCGestureHandlerManager::GetInstance(v11);
    v13 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v16,
            (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v12, v13);
  }
  v14 = *((_BYTE *)a3 + 224) != 0;
  if ( !*((_BYTE *)this + 4609) || *((_BYTE *)this + 4608) != v14 )
  {
    v15 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 4608) = v14;
    *((_BYTE *)this + 4609) = 1;
    *(_BYTE *)(v15 + 1488) = v14;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 48LL))(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3));
  }
}

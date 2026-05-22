/*
 * XREFs of ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18018CE14
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018E390 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180190B78 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B33C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B6B4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B9FC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BAFC (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 */

void __fastcall MPCSixDofProcessor::EndGesture(MPCSixDofProcessor *this)
{
  __int64 v2; // rcx
  struct MPCGestureHandlerManager *Instance; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  const char *v8; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-818h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-808h] BYREF
  int v11; // [rsp+48h] [rbp-7F0h]
  char v12; // [rsp+C8h] [rbp-770h]
  char v13; // [rsp+208h] [rbp-630h]
  int v14; // [rsp+2C0h] [rbp-578h]
  int WorkspaceId; // [rsp+2E8h] [rbp-550h]

  memset_0(v10, 0, 0x7F0uLL);
  v11 = 2032;
  Instance = MPCGestureHandlerManager::GetInstance(v2);
  v4 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v9,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)Instance, v4);
  v14 = 2;
  v12 = 1;
  v13 = 1;
  v6 = (__int64 *)MPCGestureHandlerManager::GetInstance(v5);
  v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v9,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DownLevelTo2D(v6, (__int64)v10, v7, v8);
  *((_BYTE *)this + 4645) = 0;
  *(_QWORD *)((char *)this + 5164) = 0LL;
  *((_DWORD *)this + 1159) = 0;
}

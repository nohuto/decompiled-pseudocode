/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018E390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B33C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B6B4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B9FC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BBB8 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BD24 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800735C0 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x180076780 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?IsCapturing@MPCInputProviderBase@@UEBA_NXZ @ 0x18007E340 (-IsCapturing@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800839A0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18018CE14 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18018D0B8 (-HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018DF64 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018F924 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180190B78 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  bool HasMenuButtonReleased; // bl
  __int64 v6; // rcx
  struct MPCHolographicInputManager *Instance; // rax
  const char *v8; // r9
  int v9; // eax
  struct MPCHolographicInputManager *v10; // rax
  const char *v11; // r9
  int v12; // eax
  struct MPCGestureHandlerManager *v13; // rbx
  _QWORD *v14; // rax
  char IsInjecting; // al
  struct InputInfo *v16; // rdx
  MPCSixDofProcessor *v17; // rcx
  __int64 v18; // rcx
  struct MPCGestureHandlerManager *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rbx
  _QWORD *v24; // rax
  const char *v25; // r9
  struct MPCGestureHandlerManager *v26; // rbx
  __int64 *v27; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    MPCSixDofProcessor::UpdatePoint((MPCSixDofProcessor *)(this - 24), a3);
    HasMenuButtonReleased = MPCSixDofProcessor::HasMenuButtonReleased((MPCSixDofProcessor *)(this - 24), a3);
    if ( HasMenuButtonReleased )
      MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, 5u, *(_DWORD *)(this + 1164));
    if ( *((_BYTE *)a3 + 152) )
    {
      memcpy_0((void *)(this + 5552), a3, 0x7F0uLL);
      if ( HasMenuButtonReleased )
      {
        Instance = MPCHolographicInputManager::GetInstance();
        v9 = MPCHolographicInputManager::InjectRightClick(
               (__int64)Instance,
               1,
               *((_DWORD *)a3 + 46),
               v8,
               *((float *)a3 + 40));
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            986LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v9);
        v10 = MPCHolographicInputManager::GetInstance();
        v12 = MPCHolographicInputManager::InjectRightClick(
                (__int64)v10,
                0,
                *((_DWORD *)a3 + 46),
                v11,
                *((float *)a3 + 40));
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            994LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v12);
      }
      if ( *(_BYTE *)(this + 4621) )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling((MPCSixDofProcessor *)(this - 24), a3);
        return;
      }
      v13 = MPCGestureHandlerManager::GetInstance(v6);
      v14 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v29,
              this & -(__int64)(this != 24));
      IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v13, v14);
      v16 = a3;
      v17 = (MPCSixDofProcessor *)(this - 24);
      if ( !IsInjecting )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling(v17, a3);
        if ( *(_BYTE *)(this + 4621) )
          return;
        v16 = a3;
        v17 = (MPCSixDofProcessor *)(this - 24);
      }
      MPCSixDofProcessor::PopulateDownLevelInfo(v17, v16);
      v19 = MPCGestureHandlerManager::GetInstance(v18);
      v20 = this & -(__int64)(this != 24);
      goto LABEL_19;
    }
    if ( MPCInputProviderBase::IsCapturing((MPCInputProviderBase *)this) && *(_BYTE *)(this + 4592) )
    {
      a3 = (struct InputInfo *)(this + 5552);
      MPCSixDofProcessor::PopulateDownLevelInfo((MPCSixDofProcessor *)(this - 24), (struct InputInfo *)(this + 5552));
      v19 = MPCGestureHandlerManager::GetInstance(v22);
      v20 = this & -(__int64)(this != 24);
LABEL_19:
      v23 = (__int64 *)v19;
      v24 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v29,
              v20);
      MPCGestureHandlerManager::DownLevelTo2D(v23, (__int64)a3, v24, v25);
      return;
    }
    v26 = MPCGestureHandlerManager::GetInstance(v21);
    v27 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v29,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsHovering((__int64)v26, v27) )
      MPCSixDofProcessor::EndGesture((MPCSixDofProcessor *)(this - 24));
  }
}

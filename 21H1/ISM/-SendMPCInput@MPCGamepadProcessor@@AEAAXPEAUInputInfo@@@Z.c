/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18019416C
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180193990 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B33C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B6B4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B9FC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800735C0 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800764B0 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x180076780 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084BAC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801994D4 (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180199514 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  char v11; // r8
  volatile signed __int32 *v12; // rcx
  char v13; // r14
  __int64 v14; // rax
  volatile signed __int32 *v15; // rcx
  char v16; // bl
  int v17; // ebx
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v19; // rcx
  __int64 *v20; // rbx
  _QWORD *v21; // rax
  const char *v22; // r9
  struct MPCHolographicInputManager *v23; // rax
  const char *v24; // r9
  int v25; // eax
  struct MPCHolographicInputManager *v26; // rax
  const char *v27; // r9
  int v28; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  std::_Ref_count_base *v30; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v30) = 0;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)this, (__int64)a2, 0);
  v5 = *(_QWORD *)(v4 + 5160);
  v6 = *(volatile signed __int32 **)(v5 + 24);
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = *(volatile signed __int32 **)(v5 + 24);
  }
  v7 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 10LL);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  v8 = *((_QWORD *)this + 645);
  v9 = v8 + 16;
  v10 = *(volatile signed __int32 **)(v8 + 24);
  if ( v10 )
  {
    _InterlockedAdd(v10 + 2, 1u);
    v10 = *(volatile signed __int32 **)(v8 + 24);
    v8 = *((_QWORD *)this + 645);
  }
  v11 = 1;
  if ( *(_BYTE *)(*(_QWORD *)v9 + 10LL) )
  {
    v12 = (volatile signed __int32 *)v30;
LABEL_13:
    v13 = 1;
    goto LABEL_14;
  }
  v12 = *(volatile signed __int32 **)(v8 + 24);
  if ( v12 )
  {
    _InterlockedAdd(v12 + 2, 1u);
    v12 = *(volatile signed __int32 **)(v8 + 24);
  }
  v11 = 3;
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 16) + 12LL) )
    goto LABEL_13;
  v13 = 0;
LABEL_14:
  if ( (v11 & 2) != 0 && v12 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
  if ( v10 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  v14 = *((_QWORD *)this + 645);
  v15 = *(volatile signed __int32 **)(v14 + 24);
  if ( v15 )
  {
    _InterlockedAdd(v15 + 2, 1u);
    v15 = *(volatile signed __int32 **)(v14 + 24);
  }
  v16 = *(_BYTE *)(*(_QWORD *)(v14 + 16) + 8LL);
  if ( v15 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
  if ( v16 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 5168),
      (MPCGamepadProcessor *)((char *)this + 5076));
  if ( v13 )
  {
    v17 = v7 != 0;
    if ( v7 )
    {
      MPCGestureCancelTracker::StartTracking(
        (MPCGamepadProcessor *)((char *)this + 5168),
        (MPCGamepadProcessor *)((char *)this + 5076),
        0.025);
    }
    else if ( *((_BYTE *)this + 5185) && *((_BYTE *)this + 5184) )
    {
      v17 = 2;
      *((_WORD *)this + 2592) = 0;
      *((_DWORD *)this + 1297) = 0;
    }
    Instance = MPCHolographicInputManager::GetInstance();
    v19 = *((_QWORD *)this + 576);
    if ( !v19 )
      v19 = *((_QWORD *)this + 577);
    MPCHolographicInputManager::InjectInteractionState(
      (__int64)Instance,
      v17,
      **((_DWORD **)this + 7),
      (__int64)a2 + 152,
      v19);
  }
  if ( (*((_BYTE *)this + 4668) & 1) == 0 && (*((_BYTE *)this + 4664) & 1) != 0 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, 4u, 1u);
  if ( *((_BYTE *)a2 + 152) && *((_BYTE *)a2 + 154) && !*((_DWORD *)this + 1264) && v13 )
  {
    *((_DWORD *)a2 + 164) = 2 - (v7 != 0);
    v20 = (__int64 *)MPCGestureHandlerManager::GetInstance((__int64)v15);
    v21 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v30,
            (__int64)this + 32);
    MPCGestureHandlerManager::DownLevelTo2D(v20, (__int64)a2, v21, v22);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 644) + 12LL) )
  {
    v23 = MPCHolographicInputManager::GetInstance();
    v25 = MPCHolographicInputManager::InjectRightClick((__int64)v23, 1, *((_DWORD *)a2 + 46), v24, *((float *)a2 + 40));
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        694LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v25);
    v26 = MPCHolographicInputManager::GetInstance();
    v28 = MPCHolographicInputManager::InjectRightClick((__int64)v26, 0, *((_DWORD *)a2 + 46), v27, *((float *)a2 + 40));
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        702LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v28);
  }
}

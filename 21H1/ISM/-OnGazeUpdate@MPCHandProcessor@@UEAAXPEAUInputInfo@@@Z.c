/*
 * XREFs of ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18007E650
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B33C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B6B4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B9FC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BAFC (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BBB8 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BD24 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006C020 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CD08 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800839A0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084BAC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 */

void __fastcall MPCHandProcessor::OnGazeUpdate(
        MPCHandProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  char v6; // bl
  _OWORD *v7; // rdi
  struct MPCGestureHandlerManager *Instance; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rcx
  struct MPCGestureHandlerManager *v24; // rbx
  _QWORD *v25; // rax
  struct MPCGestureHandlerManager *v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rcx
  struct MPCGestureHandlerManager *v29; // rbx
  _QWORD *v30; // rax
  __int64 *v31; // rbx
  _QWORD *v32; // rax
  const char *v33; // r9
  struct MPCGestureHandlerManager *v34; // rbx
  _QWORD *v35; // rax
  _QWORD v36[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v37; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v38[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+58h] [rbp-A8h]
  _BYTE v40[504]; // [rsp+D8h] [rbp-28h] BYREF
  int v41; // [rsp+2D0h] [rbp+1D0h]
  int WorkspaceId; // [rsp+2F8h] [rbp+1F8h]
  wil::details::in1diag3 *retaddr; // [rsp+868h] [rbp+768h]

  if ( *((_BYTE *)this + 4608) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
      __debugbreak();
    }
    *((_QWORD *)&v37 + 1) = 21LL;
    *(_QWORD *)&v37 = L"DisableInputInjection";
    v6 = MPCConstantManager::GetConstant<bool>(
           (__int64)MPCConstantManager::s_instance,
           (__int64 *)((unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24)),
           &v37);
    if ( MPCInputProviderBase::IsPrimary(this) && !v6 )
    {
      v7 = (_OWORD *)((char *)a2 + 152);
      if ( *((_BYTE *)a2 + 152) )
      {
        Instance = MPCGestureHandlerManager::GetInstance((__int64)this);
        v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
               v36,
               (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
        if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, v9) && !*((_BYTE *)a2 + 474) )
        {
          memset_0(v38, 0, 0x7F0uLL);
          v10 = 2LL;
          v39 = 2032;
          v11 = v40;
          do
          {
            v12 = v7[1];
            *v11 = *v7;
            v13 = v7[2];
            v11[1] = v12;
            v14 = v7[3];
            v11[2] = v13;
            v15 = v7[4];
            v11[3] = v14;
            v16 = v7[5];
            v11[4] = v15;
            v17 = v7[6];
            v11[5] = v16;
            v18 = v7[7];
            v7 += 8;
            v11[6] = v17;
            v11 += 8;
            *(v11 - 1) = v18;
            --v10;
          }
          while ( v10 );
          v19 = *((_QWORD *)v7 + 8);
          v20 = v7[1];
          *v11 = *v7;
          v21 = v7[2];
          v11[1] = v20;
          v22 = v7[3];
          v11[2] = v21;
          v11[3] = v22;
          *((_QWORD *)v11 + 8) = v19;
          MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v11, v38, 4LL);
          goto LABEL_17;
        }
      }
    }
    if ( !*((_QWORD *)this + 571) )
    {
      v24 = MPCGestureHandlerManager::GetInstance((__int64)this);
      v25 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v36,
              (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v24, v25)
        || (v26 = MPCGestureHandlerManager::GetInstance((__int64)this),
            v27 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v36,
                    (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24)),
            MPCGestureHandlerManager::IsHovering((__int64)v26, v27)) )
      {
        if ( !*((_BYTE *)a2 + 474) )
        {
          memset_0(v38, 0, 0x7F0uLL);
          v39 = 2032;
          v41 = 2;
          v29 = MPCGestureHandlerManager::GetInstance(v28);
          v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v36,
                  (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
          WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v29, v30);
          v40[0] = 1;
          v40[320] = 1;
LABEL_17:
          v31 = (__int64 *)MPCGestureHandlerManager::GetInstance(v23);
          v32 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v36,
                  (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
          MPCGestureHandlerManager::DownLevelTo2D(v31, (__int64)v38, v32, v33);
        }
      }
    }
  }
  v34 = MPCGestureHandlerManager::GetInstance((__int64)this);
  v35 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v36,
          (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v34, v35);
}

/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180198880
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B89C (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B958 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BAC4 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BDC0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084A7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 */

void __fastcall MPCClickerProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  _OWORD *v5; // rdi
  struct MPCGestureHandlerManager *Instance; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rcx
  struct MPCGestureHandlerManager *v22; // rax
  unsigned __int64 v23; // rdx
  struct MPCGestureHandlerManager *v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  struct MPCGestureHandlerManager *v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rcx
  struct MPCGestureHandlerManager *v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rbx
  _QWORD *v34; // rax
  const char *v35; // r9
  struct MPCGestureHandlerManager *v36; // rbx
  _QWORD *v37; // rax
  _QWORD v38[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v39[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+48h] [rbp-B8h]
  _BYTE v41[504]; // [rsp+C8h] [rbp-38h] BYREF
  int v42; // [rsp+2C0h] [rbp+1C0h]
  int WorkspaceId; // [rsp+2E8h] [rbp+1E8h]

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v5 = (_OWORD *)((char *)a2 + 152);
    if ( *(_BYTE *)v5 )
    {
      Instance = MPCGestureHandlerManager::GetInstance(v4);
      v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v38,
             this & -(__int64)(this != 24));
      if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, v7) )
      {
        memset_0(v39, 0, 0x7F0uLL);
        v8 = 2LL;
        v40 = 2032;
        v9 = v41;
        do
        {
          v10 = v5[1];
          *v9 = *v5;
          v11 = v5[2];
          v9[1] = v10;
          v12 = v5[3];
          v9[2] = v11;
          v13 = v5[4];
          v9[3] = v12;
          v14 = v5[5];
          v9[4] = v13;
          v15 = v5[6];
          v9[5] = v14;
          v16 = v5[7];
          v5 += 8;
          v9[6] = v15;
          v9 += 8;
          *(v9 - 1) = v16;
          --v8;
        }
        while ( v8 );
        v17 = *((_QWORD *)v5 + 8);
        v18 = v5[1];
        *v9 = *v5;
        v19 = v5[2];
        v9[1] = v18;
        v20 = v5[3];
        v9[2] = v19;
        v9[3] = v20;
        *((_QWORD *)v9 + 8) = v17;
        MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v9, (__int64)v39, 4);
        v22 = MPCGestureHandlerManager::GetInstance(v21);
        v23 = this & -(__int64)(this != 24);
        goto LABEL_11;
      }
    }
  }
  if ( !*(_QWORD *)(this + 4568) )
  {
    v24 = MPCGestureHandlerManager::GetInstance(v4);
    v25 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            v38,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v24, v25)
      || (v27 = MPCGestureHandlerManager::GetInstance(v26),
          v28 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v38,
                  this & -(__int64)(this != 24)),
          MPCGestureHandlerManager::IsHovering((__int64)v27, v28)) )
    {
      memset_0(v39, 0, 0x7F0uLL);
      v40 = 2032;
      v42 = 2;
      v30 = MPCGestureHandlerManager::GetInstance(v29);
      v31 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v38,
              this & -(__int64)(this != 24));
      WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v30, v31);
      v41[0] = 1;
      v41[320] = 1;
      v22 = MPCGestureHandlerManager::GetInstance(v32);
      v23 = this & -(__int64)(this != 24);
LABEL_11:
      v33 = (__int64 *)v22;
      v34 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v38,
              v23);
      MPCGestureHandlerManager::DownLevelTo2D(v33, (__int64)v39, v34, v35);
    }
  }
  v36 = MPCGestureHandlerManager::GetInstance(v4);
  v37 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v38,
          this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v36, v37);
}

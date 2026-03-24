/*
 * XREFs of ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x180186884
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180038E0C (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18006E9E8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DE5C0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x180186D00 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW **); // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+90h] [rbp+10h] BYREF
  struct CResourceTable *v16; // [rsp+98h] [rbp+18h] BYREF
  const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *v17; // [rsp+A0h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 11));
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v15,
    (__int64)PrimaryMonitorTarget);
  if ( v15 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 120LL))(v15);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v16,
      v5);
    if ( v16 )
    {
      v17 = 0LL;
      v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW **))((char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8);
      v8 = (**v7)(v7, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v17);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5Du, 0LL);
      }
      else
      {
        memset_0(&v13, 0, 0x48uLL);
        v14 = *((_QWORD *)this + 32);
        v13 = 4;
        v10 = (*(__int64 (__fastcall **)(const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *, int *))(*(_QWORD *)v17 + 48LL))(
                v17,
                &v13);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x63u, 0LL);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003304307, 0x67u, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x6Cu, 0LL);
  }
  CRenderTargetManager::RemoveRenderTarget(*((CRenderTargetManager **)g_pComposition + 11), this);
  CRemoteAppRenderTarget::ReleaseSwapChain(this);
  *((_QWORD *)this + 32) = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  return 0LL;
}

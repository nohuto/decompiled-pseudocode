/*
 * XREFs of ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x180186F90
 * Callers:
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x180186694 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180038E0C (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18006E9E8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SendCompSurfHandle(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // ebx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v4; // rax
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 21) )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 11));
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v13,
      (__int64)PrimaryMonitorTarget);
    if ( v13 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13);
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        &v12,
        v4);
      v11 = 0LL;
      if ( v12 )
      {
        v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v12 + 8) + 4LL) + v12 + 8);
        if ( (**v5)(v5, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v11) >= 0 )
        {
          v9 = 6;
          memset_0(v10, 0, 0x40uLL);
          v10[0] = *((_QWORD *)this + 32);
          v10[1] = *((_QWORD *)this + 21);
          v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 48LL))(v11, &v9);
          v1 = v6;
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1A0u, 0LL);
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
  }
  return v1;
}

/*
 * XREFs of ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x18007E068
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18007DDA4 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x18002A648 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     ??0?$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z @ 0x1800793D8 (--0-$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18007F334 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ @ 0x180080CC8 (-UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::PostPresent(HANDLE *this, char a2)
{
  char v4; // si
  CDeviceManager *v5; // rcx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v8; // rax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h] BYREF
  int v13; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v14[72]; // [rsp+48h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+90h] [rbp-28h] BYREF

  CRenderTargetManager::UpdateCompositorClockBoost((CRenderTargetManager *)this);
  v4 = *((_BYTE *)this + 578);
  *((_BYTE *)this + 578) = 0;
  CDeviceManager::AdvanceFrame(v5);
  if ( !a2 && *((int *)*this + 276) >= 5 )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget((CRenderTargetManager *)this);
    if ( PrimaryMonitorTarget )
    {
      v8 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 152LL))(PrimaryMonitorTarget);
      wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v12, v8);
      if ( v12 )
      {
        v11 = 0LL;
        v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v12 + 8) + 4LL) + v12 + 8);
        if ( (**v9)(v9, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v11) >= 0 )
        {
          v13 = 5;
          memset_0(v14, 0, 0x40uLL);
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 64LL))(v11, &v13);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McGenEventWrite_EventWriteTransfer(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES,
              v10,
              1u,
              &v15);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
    }
  }
  if ( v4 && (int)CRenderTargetManager::EnsureDxDisplayModeChangedEvent((CRenderTargetManager *)this) >= 0 )
    SetEvent(this[66]);
  return v4;
}

/*
 * XREFs of ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x1800FDC68
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800FBD24 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x1800FDDF4 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CMonitorManager::IsMonitorMirrorEligible(CMonitorManager *this, struct IMMDevice *a2)
{
  bool v2; // bl
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-10h]
  __int64 v6; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)pvar = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v6) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(
           v6,
           &PKEY_MonitorMirrorEligible,
           pvar) >= 0
      && LOWORD(pvar[0]) == 11 )
    {
      v2 = LOWORD(pvar[1]) == 0xFFFF;
    }
    PropVariantClear(pvar);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  return v2;
}

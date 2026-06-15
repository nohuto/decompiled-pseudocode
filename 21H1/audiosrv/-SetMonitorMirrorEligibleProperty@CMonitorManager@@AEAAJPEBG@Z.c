/*
 * XREFs of ?SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z @ 0x1800FFFD0
 * Callers:
 *     ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x180100598 (-UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitorManager::SetMonitorMirrorEligibleProperty(CMonitorManager *this, const unsigned __int16 *a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v9 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v2 = *((_QWORD *)this + 8);
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v2 + 40LL))(v2, a2, &v10);
  if ( v3 >= 0 )
  {
    v4 = v10;
    v5 = v9;
    v9 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, 1LL, &v9);
    if ( v3 >= 0 )
    {
      LOWORD(pvar[0]) = 11;
      LOWORD(pvar[1]) = -1;
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 48LL))(
             v9,
             &PKEY_MonitorMirrorEligible,
             pvar);
    }
  }
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  return (unsigned int)v3;
}

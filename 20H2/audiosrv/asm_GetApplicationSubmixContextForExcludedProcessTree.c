/*
 * XREFs of asm_GetApplicationSubmixContextForExcludedProcessTree @ 0x1800713F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054398 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall asm_GetApplicationSubmixContextForExcludedProcessTree(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _TP_TIMER *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  v5 = AudioSrvTelemetryProvider::Provider(a1);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v5,
    v6,
    (struct _TP_TIMER *)L"asm_GetApplicationSubmixContextForExcludedProcessTree");
  v14 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v14);
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         0LL,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IProcessSubmixManager *, _QWORD, __int64, __int64, int *))(*(_QWORD *)g_ProcessSubmixManager + 24LL))(
           g_ProcessSubmixManager,
           a2,
           3LL,
           v14,
           v11);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      *a3 = *(_QWORD *)v11;
      goto LABEL_7;
    }
    v9 = 189LL;
  }
  else
  {
    v9 = 186LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v8;
}

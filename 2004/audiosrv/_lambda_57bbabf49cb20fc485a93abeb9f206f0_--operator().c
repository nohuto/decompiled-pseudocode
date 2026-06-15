/*
 * XREFs of _lambda_57bbabf49cb20fc485a93abeb9f206f0_::operator() @ 0x180072474
 * Callers:
 *     ?Stop@CVirtualAudioStream@@QEAAXXZ @ 0x180072824 (-Stop@CVirtualAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800DB344 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_57bbabf49cb20fc485a93abeb9f206f0_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)a1 + 44LL) )
  {
    v6 = 0LL;
    v2 = wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(a1, &v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
        (const char *)(unsigned int)v2);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
      return v3;
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 36LL) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(
      v6,
      *(_QWORD *)(*(_QWORD *)a1 + 48LL),
      1LL);
    *(_BYTE *)(*(_QWORD *)a1 + 44LL) = 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  }
  return 0LL;
}

/*
 * XREFs of _lambda_c784a04be11cf4276203bd8d352aab46_::operator() @ 0x18007242C
 * Callers:
 *     ?Start@CVirtualAudioStream@@QEAAXXZ @ 0x180072704 (-Start@CVirtualAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800DB284 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c784a04be11cf4276203bd8d352aab46_::operator()(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*a1 + 44LL) )
  {
    v7 = 0LL;
    v2 = wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(a1, &v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 39LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
        (const char *)(unsigned int)v2);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
      return v3;
    }
    *(_DWORD *)(*(_QWORD *)(*a1 + 48LL) + 36LL) = 1;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(
           v7,
           *(_QWORD *)(*a1 + 48LL),
           0LL,
           1LL,
           *a1);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 44LL;
      goto LABEL_6;
    }
    *(_BYTE *)(*a1 + 44LL) = 1;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  }
  return 0LL;
}

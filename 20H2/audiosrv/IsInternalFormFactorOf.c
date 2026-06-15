/*
 * XREFs of IsInternalFormFactorOf @ 0x1801218A0
 * Callers:
 *     DisableSpatialOnInternalSpeakers @ 0x1801215BC (DisableSpatialOnInternalSpeakers.c)
 *     SearchForHeadphones @ 0x180121B88 (SearchForHeadphones.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     GetEndpointFormFactor @ 0x18005E020 (GetEndpointFormFactor.c)
 *     GetContainerId @ 0x18005E368 (GetContainerId.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsInternalFormFactorOf(__int64 a1, int a2)
{
  char v3; // bl
  int ContainerId; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
  int EndpointFormFactor; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  v11 = 0LL;
  ContainerId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v11);
  v5 = retaddr;
  if ( ContainerId < 0 )
  {
    v6 = 334LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v5,
      v6,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_11;
  }
  EndpointFormFactor = GetEndpointFormFactor((__int64)v11);
  ContainerId = GetContainerId(v8, v11, &v12);
  v5 = retaddr;
  if ( ContainerId < 0 )
  {
    v6 = 339LL;
    goto LABEL_5;
  }
  if ( a2 == EndpointFormFactor )
  {
    v9 = v12;
    if ( !(_QWORD)v12 )
      v9 = *((_QWORD *)&v12 + 1) + 1LL;
    if ( !v9 )
      v3 = 1;
  }
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  return v3;
}

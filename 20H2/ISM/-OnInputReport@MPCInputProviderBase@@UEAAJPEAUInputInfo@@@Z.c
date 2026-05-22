/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180084420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800298C0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z @ 0x18004003C (-IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z.c)
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x180083C80 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x1800869F0 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  bool v4; // bp
  char *v5; // r14
  struct MPCHolographicInputManager *Instance; // rbx
  int v7; // eax
  bool v8; // al
  __int64 v9; // rax
  char *v10; // rcx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  MPCPerfCounter *v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  ISMTracing *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v21; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a2 & 0x44) == 0 )
    memcpy_0((char *)this + 472, a2, 0x7F0uLL);
  v4 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2364)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 293);
  v21 = v4;
  v5 = (char *)this + 24;
  Instance = MPCHolographicInputManager::GetInstance();
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 56LL))((char *)this + 24);
  v8 = MPCHolographicInputManager::IsDesiredCursorActive((__int64)Instance, v7)
    || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v5 + 48LL))((char *)this + 24) != 0x40000;
  *((_BYTE *)this + 4540) = v8;
  v9 = *(_QWORD *)v5;
  v10 = (char *)this + 24;
  if ( v4 )
  {
    v11 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v9 + 272))(v10, a2);
    if ( v11 >= 0 )
      goto LABEL_17;
    v13 = 232LL;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v9 + 280))(v10, a2);
    if ( v11 >= 0 )
      goto LABEL_17;
    v13 = 237LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    v13,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    (const char *)(unsigned int)v11);
LABEL_17:
  v14 = *((_QWORD *)a2 + 2);
  v15 = (MPCInputProviderBase *)((char *)this + 4544);
  if ( !*((_QWORD *)this + 571) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      70LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v12);
    JUMPOUT(0x1800845B5LL);
  }
  v16 = *((_QWORD *)this + 572);
  if ( !v16 )
  {
    *((_QWORD *)this + 572) = v14;
    v16 = v14;
  }
  ++*((_QWORD *)this + 573);
  if ( v14 - v16 > *((_QWORD *)this + 571) )
    MPCPerfCounter::ReportPerf(v15, v14);
  if ( (*(_BYTE *)a2 & 0x44) == 0 )
    memcpy_0((char *)this + 2504, a2, 0x7F0uLL);
  if ( ISMTracing::IsEnabled((__int64)v15) )
  {
    wil::details::static_lazy<ISMTracing>::get(v17, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogMPCInputReport_(v18, a2, &v21);
  }
  return 0LL;
}

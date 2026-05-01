/*
 * XREFs of _lambda_a0ee7bb0dcee848556900d8415f399c8_::operator() @ 0x18002F6D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67bdfaa79d84c6c64bb926bff21dcc7f___::Run @ 0x18002F7A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67bdfaa79d84c6c64bb926bff21dcc7f___--Run.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002BA04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134468 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall lambda_a0ee7bb0dcee848556900d8415f399c8_::operator()(unsigned int *a1)
{
  bool v2; // zf
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // r9
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 120LL) + 112LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 120LL),
    *a1,
    a1[1]);
  v2 = (a1[1] & 0x20) == 0;
  v3 = _mm_cvtsi128_si32((__m128i)0LL);
  v9 = 0LL;
  if ( !v2 )
    v3 = 5;
  LODWORD(v9) = v3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    1u);
  if ( (a1[1] & 0x100) != 0 )
    DWORD1(v9) |= 0x1E0u;
  v4 = *((_QWORD *)a1 + 2);
  v6 = 19;
  v7 = &v9;
  v8 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v4 + 128), &v6) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x53B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      v5);
  if ( *((_BYTE *)a1 + 8) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 128LL),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}

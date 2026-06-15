/*
 * XREFs of ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x18001C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18000C380 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180015254 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProcess::IsSpatializerAllowed(CProcess *this)
{
  int v1; // eax
  bool v2; // bl
  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  if ( (int)RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v5) < 0 )
    goto LABEL_9;
  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v4);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10C9,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v1);
  if ( v4 )
  {
    v2 = (unsigned int)CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(g_PolicyManager) == 0;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
LABEL_9:
    v2 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v2;
}

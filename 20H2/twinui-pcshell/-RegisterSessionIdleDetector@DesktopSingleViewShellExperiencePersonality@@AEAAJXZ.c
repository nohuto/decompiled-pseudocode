/*
 * XREFs of ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x180476C5C
 * Callers:
 *     ?EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServiceProvider@@@Z @ 0x180476AB0 (-EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServicePr.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180084C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x180474834 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce_____lambda_ac7f06c1f321a489bd31a220fb60b5ce__&_ @ 0x1804767FC (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce_____l.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // esi
  volatile int *v6; // rdx
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  DesktopSingleViewShellExperiencePersonality *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 96LL);
  *(_QWORD *)v9 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v10 = this;
  Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce_____lambda_ac7f06c1f321a489bd31a220fb60b5ce____(
    &v13,
    (__int64 *)v9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = v13;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 3) + 32LL))(
         *((_QWORD *)this + 3),
         v13,
         (char *)this + 32);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v12);
    if ( v7 >= 0 )
      CSingleViewShellExperience::OnSessionIdleStateChanged(*((CSingleViewShellExperience **)this + 1), v12);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
      v3,
      v6);
  return v5;
}

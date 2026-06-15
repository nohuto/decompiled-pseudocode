/*
 * XREFs of ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800DA6B4
 * Callers:
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x18006E934 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 *     _lambda_57bbabf49cb20fc485a93abeb9f206f0_::operator() @ 0x1800719B4 (_lambda_57bbabf49cb20fc485a93abeb9f206f0_--operator().c)
 *     _lambda_c784a04be11cf4276203bd8d352aab46_::operator() @ 0x180071A6C (_lambda_c784a04be11cf4276203bd8d352aab46_--operator().c)
 *     ??1DialogSession@@EEAA@XZ @ 0x1800F6F0C (--1DialogSession@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x1800F7120 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 *     ?ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z @ 0x1800F9280 (-ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64))g_PolicyManager)(
         g_PolicyManager,
         &GUID_c013f1c5_445a_4e19_8cd2_f88de6b9e0ee,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E1,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v2);
  return v3;
}

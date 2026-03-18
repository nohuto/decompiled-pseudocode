/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C0201E80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0253A98 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, int a2, __int128 *a3)
{
  __int64 v6; // r8
  BOOL v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  InteractiveControlManager *v11; // rax
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a2 == 16 )
  {
    ProbeForRead(a3, 0x10uLL, 1u);
    v13 = *a3;
    v11 = InteractiveControlManager::Instance();
    v7 = InteractiveControlManager::SendDeviceHapticsOutput(
           v11,
           a1,
           (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v13) >= 0;
  }
  else
  {
    v7 = 0;
    UserSetLastError(87LL, 16LL, v6);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v7;
}

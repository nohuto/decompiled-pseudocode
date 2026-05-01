/*
 * XREFs of ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1803D4C04
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1803D4AE0 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1803D66E0 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___ @ 0x1803D2EAC (ShellPositionerManager--DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___.c)
 */

__int64 __fastcall ShellPositionerManager::PerformPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  __int64 v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 24LL))(a2, &v16) >= 0 && v16 )
  {
    v13 = a6;
    v14 = a7;
    v15 = a5;
    v12 = a1;
    ShellPositionerManager::DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___(
      a1,
      a2,
      a3,
      a4,
      (__int64)&v12);
  }
  return 0LL;
}

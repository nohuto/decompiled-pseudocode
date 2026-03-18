/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C002A340
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C002A20C (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(int a1, int a2, __int64 a3, int a4)
{
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // ebx

  if ( a4 )
  {
    EnterCrit(0LL, 1LL);
    CurrentProcess = PsGetCurrentProcess();
    v12 = gpepCSRSS;
    if ( CurrentProcess == gpepCSRSS )
      v13 = xxxUserNotifyProcessCreate(a1, a2, a3, a4);
    else
      v13 = -1073741790;
    UserSessionSwitchLeaveCrit(v12, v10, v11);
    return v13;
  }
  else
  {
    GiveForegroundActivateRight(a1);
    return 0LL;
  }
}

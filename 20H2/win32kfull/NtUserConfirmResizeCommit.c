/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01F7330
 * Callers:
 *     <none>
 * Callees:
 *     GreConfirmWindowResizeCommit @ 0x1C026EAA0 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  HWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = (HWND *)v3;
  if ( v3 )
  {
    v4 = (*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v3;
      HMLockObject(v3);
      CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v2 = GreConfirmWindowResizeCommit(*v5);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}

/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01F81A0
 * Callers:
 *     <none>
 * Callees:
 *     GreConfirmWindowResizeCommit @ 0x1C02700C0 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  HWND *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v7 = (HWND *)v3;
  if ( v3 )
  {
    v5 = (*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v16;
      *((_QWORD *)&v16 + 1) = v3;
      HMLockObject(v3);
      CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v2 = GreConfirmWindowResizeCommit(*v7);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v2;
}

/*
 * XREFs of _NtUserConfirmResizeCommit@4 @ 0x160672
 * Callers:
 *     <none>
 * Callees:
 *     _GreConfirmWindowResizeCommit@4 @ 0x1CDF50 (_GreConfirmWindowResizeCommit@4.c)
 */

int __stdcall NtUserConfirmResizeCommit(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int CurrentProcess; // eax
  int v7; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v1 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_WORD *)(v2[5] + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
    {
      v7 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v7;
      v8 = v3;
      HMLockObject(v3);
      CurrentProcess = PsGetCurrentProcess();
      if ( IsProcessDwm(CurrentProcess) )
        v1 = GreConfirmWindowResizeCommit(*v3);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}

/*
 * XREFs of NtUserGetCursorInfo @ 0x1C003CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C003D0D8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  ULONG64 v8; // rcx
  _BYTE *v9; // rdx
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v4 = *(_QWORD *)(v2 + 448)) == 0 || v4 == grpdeskRitInput) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v11);
    if ( PsGetCurrentProcessWow64Process(v5) )
      v7 = 0LL;
    else
      v7 = 3LL;
    if ( (v7 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = MmUserProbeAddress;
    v9 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[23] = v9[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v11;
      *(_QWORD *)(a1 + 16) = v12;
      v3 = 1;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v8, v9, v6);
  return v3;
}

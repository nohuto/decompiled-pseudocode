/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C011AD60
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 && (v7 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v14;
    *((_QWORD *)&v14 + 1) = v5;
    HMLockObject(v5);
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(v9 + 40) + 25LL) |= 0x80u;
    else
      SetOrClrWF(0, v9, 0x980u, 0);
    ThreadUnlock1(v11, v10, v12);
  }
  else
  {
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}

/*
 * XREFs of NtUserShowWindowAsync @ 0x1C0125F20
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowWindowAsync(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v2 = a2;
  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v4;
      HMLockObject(v4);
      if ( (unsigned int)v2 > 0xB )
        UserSetLastError(87LL, v8, v9);
      else
        v6 = PostEventMessageEx(
               *(struct tagTHREADINFO **)(v7 + 16),
               *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 432LL),
               1u,
               (struct tagWND *)v7,
               2u,
               0LL,
               v2 | gdwPUDFlags & 0x10000,
               0LL);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}

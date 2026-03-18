/*
 * XREFs of NtUserDisableThreadIme @ 0x1C011C710
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 i; // rdi
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rax

  EnterCrit(0LL, 1LL);
  v3 = gpsi;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, gpsi, v2);
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = 0LL;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 320LL); i; i = *(_QWORD *)(i + 656) )
    {
      *(_DWORD *)(i + 480) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v8 = *(unsigned __int64 **)(i + 776);
        if ( v8 )
          PostEventMessageEx((struct tagTHREADINFO *)i, *(struct tagQ **)(i + 424), 8u, 0LL, 0, *v8, 0LL, 0LL);
      }
    }
LABEL_11:
    v4 = *(_QWORD *)(gptiCurrent + 776LL);
    if ( v4 )
      xxxDestroyWindow((__int64 *)v4);
LABEL_13:
    v5 = 1LL;
    goto LABEL_3;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x2000000u;
    goto LABEL_11;
  }
  v4 = PtiFromThreadId(a1);
  if ( v4 && *(_QWORD *)(v4 + 416) == *(_QWORD *)(gptiCurrent + 416LL) )
  {
    *(_DWORD *)(v4 + 480) |= 0x2000000u;
    v9 = *(unsigned __int64 **)(v4 + 776);
    if ( v9 )
      PostEventMessageEx((struct tagTHREADINFO *)v4, *(struct tagQ **)(v4 + 424), 8u, 0LL, 0, *v9, 0LL, 0LL);
    goto LABEL_13;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v4, v3, v2);
  return v5;
}

/*
 * XREFs of NtUserDisableThreadIme @ 0x1C011D780
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 i; // rdi
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // rax

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, gpsi, v2);
    v4 = 0LL;
    goto LABEL_3;
  }
  v4 = 0LL;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 320LL); i; i = *(_QWORD *)(i + 664) )
    {
      *(_DWORD *)(i + 488) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v7 = *(unsigned __int64 **)(i + 784);
        if ( v7 )
          PostEventMessageEx((struct tagTHREADINFO *)i, *(struct tagQ **)(i + 432), 8u, 0LL, 0, *v7, 0LL, 0LL);
      }
    }
LABEL_11:
    v3 = *(_QWORD *)(gptiCurrent + 784LL);
    if ( v3 )
      xxxDestroyWindow(v3);
LABEL_13:
    v4 = 1LL;
    goto LABEL_3;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x2000000u;
    goto LABEL_11;
  }
  v3 = PtiFromThreadId(a1);
  if ( v3 && *(_QWORD *)(v3 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    *(_DWORD *)(v3 + 488) |= 0x2000000u;
    v8 = *(unsigned __int64 **)(v3 + 784);
    if ( v8 )
      PostEventMessageEx((struct tagTHREADINFO *)v3, *(struct tagQ **)(v3 + 432), 8u, 0LL, 0, *v8, 0LL, 0LL);
    goto LABEL_13;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}

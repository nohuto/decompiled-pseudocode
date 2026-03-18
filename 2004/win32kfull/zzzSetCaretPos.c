/*
 * XREFs of zzzSetCaretPos @ 0x1C0112850
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0246230 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C005FED0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C006015C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0061924 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0090E5C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GreTransformPoints @ 0x1C00F211C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(LONG a1, LONG a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v10; // edx
  int v11; // edx
  __int64 DC; // rbx
  LONG y; // edx
  int v14; // eax
  int v15; // eax
  struct _POINTL v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+3Ch] [rbp-2Ch]

  if ( UT_CaretSet(0LL) )
  {
    v6 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_DWORD *)(v6 + 316) != a1 || *(_DWORD *)(v6 + 320) != a2 )
    {
      v7 = *(_QWORD *)(v6 + 296);
      if ( v7 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 136) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v10 = a1 + *(_DWORD *)(v6 + 328);
        v16.x = a1;
        v17 = v10;
        v11 = a2 + *(_DWORD *)(v6 + 324);
        v16.y = a2;
        v18 = v11;
        DC = _GetDC();
        GreTransformPoints(DC, &v16, &v16, 2, 1);
        _ReleaseDC(DC);
        y = v16.y;
        v14 = v17 - v16.x;
        *(_DWORD *)(v6 + 356) = v16.x;
        *(_DWORD *)(v6 + 364) = v14;
        v15 = v18 - y;
        *(_DWORD *)(v6 + 360) = y;
        *(_DWORD *)(v6 + 368) = v15;
      }
      if ( (*(_DWORD *)(v6 + 304) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v6 + 316) = a1;
      *(_DWORD *)(v6 + 320) = a2;
      if ( *(_QWORD *)(v6 + 344) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v6 + 296), (struct tagQ *)v6);
        CreateCaretTimer(*(struct tagWND **)(v6 + 296), (struct tagQ *)v6);
      }
      v8 = *(_DWORD *)(v6 + 304) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v6 + 304) = v8;
      if ( !*(_DWORD *)(v6 + 308) )
      {
        *(_DWORD *)(v6 + 304) = v8 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(struct tagWND **)(v6 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v4, v5);
    return 0LL;
  }
}

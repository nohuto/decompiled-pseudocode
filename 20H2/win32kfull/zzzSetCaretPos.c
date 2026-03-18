/*
 * XREFs of zzzSetCaretPos @ 0x1C0018BC0
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0244F90 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0017AA8 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0018DCC (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0037408 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00D603C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     GreTransformPoints @ 0x1C00EC98C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(int a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v8; // edx
  int v9; // edx
  __int64 DC; // rbx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+34h] [rbp-34h]
  int v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v4 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( *(_DWORD *)(v4 + 316) != a1 || *(_DWORD *)(v4 + 320) != a2 )
    {
      v5 = *(_QWORD *)(v4 + 296);
      if ( v5 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 136) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v8 = a1 + *(_DWORD *)(v4 + 328);
        v14 = a1;
        v16 = v8;
        v9 = a2 + *(_DWORD *)(v4 + 324);
        v15 = a2;
        v17 = v9;
        DC = _GetDC();
        GreTransformPoints(DC, (unsigned int)&v14, (unsigned int)&v14, 2, 1);
        _ReleaseDC(DC);
        v11 = v15;
        v12 = v16 - v14;
        *(_DWORD *)(v4 + 356) = v14;
        *(_DWORD *)(v4 + 364) = v12;
        v13 = v17 - v11;
        *(_DWORD *)(v4 + 360) = v11;
        *(_DWORD *)(v4 + 368) = v13;
      }
      if ( (*(_DWORD *)(v4 + 304) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v4 + 316) = a1;
      *(_DWORD *)(v4 + 320) = a2;
      if ( *(_QWORD *)(v4 + 344) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v4 + 296), (struct tagQ *)v4);
        CreateCaretTimer(*(struct tagWND **)(v4 + 296), (struct tagQ *)v4);
      }
      v6 = *(_DWORD *)(v4 + 304) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v4 + 304) = v6;
      if ( !*(_DWORD *)(v4 + 308) )
      {
        *(_DWORD *)(v4 + 304) = v6 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}

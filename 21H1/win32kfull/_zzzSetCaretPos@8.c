/*
 * XREFs of _zzzSetCaretPos@8 @ 0x820C0
 * Callers:
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     ?zzzSetSBCaretPos@@YGXPAUtagSBWND@@@Z @ 0x1A3529 (-zzzSetSBCaretPos@@YGXPAUtagSBWND@@@Z.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0x7DBAC (-RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     ?UT_CaretSet@@YGHPAUtagWND@@@Z @ 0x810C2 (-UT_CaretSet@@YGHPAUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GreTransformPoints@20 @ 0x8DA90 (_GreTransformPoints@20.c)
 *     ?CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0xBA7AE (-CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall zzzSetCaretPos(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  unsigned int v5; // eax
  int v7; // eax
  int v8; // eax
  int DC; // esi
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  struct tagWND *v13; // [esp+0h] [ebp-20h]
  struct tagQ *v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+Ch] [ebp-14h] BYREF
  int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-8h]

  if ( UT_CaretSet(0) )
  {
    v2 = a1;
    v3 = *(_DWORD *)(_gptiCurrent + 236);
    if ( *(_DWORD *)(v3 + 232) != a1 || *(_DWORD *)(v3 + 236) != a2 )
    {
      v4 = *(_DWORD *)(v3 + 216);
      if ( v4 && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 76) + 4) + 8) & 0x20) != 0 )
      {
        v7 = a1 + *(_DWORD *)(v3 + 244);
        v15 = a1;
        v17 = v7;
        v8 = a2 + *(_DWORD *)(v3 + 240);
        v16 = a2;
        v18 = v8;
        DC = _GetDC(v4);
        GreTransformPoints(&v15, 2, 1);
        _ReleaseDC(DC);
        v10 = v15;
        v11 = v16;
        v2 = a1;
        *(_DWORD *)(v3 + 268) = v17 - v15;
        v12 = v18 - v11;
        *(_DWORD *)(v3 + 260) = v10;
        *(_DWORD *)(v3 + 264) = v11;
        *(_DWORD *)(v3 + 272) = v12;
      }
      if ( (*(_BYTE *)(v3 + 220) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v3 + 232) = v2;
      *(_DWORD *)(v3 + 236) = a2;
      if ( *(_DWORD *)(v3 + 252) )
      {
        RemoveCaretTimer(*(_DWORD *)(v3 + 216), v3);
        CreateCaretTimer(v13, v14);
      }
      v5 = *(_DWORD *)(v3 + 220) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v3 + 220) = v5;
      if ( !*(_DWORD *)(v3 + 224) )
      {
        *(_DWORD *)(v3 + 220) = v5 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(struct tagEVENTHOOK **)(v3 + 216), 0xFFFFFFF8, 0, _gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
}

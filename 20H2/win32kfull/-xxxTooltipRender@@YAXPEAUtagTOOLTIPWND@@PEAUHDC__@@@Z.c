/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0242B4C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     CALL_LPK @ 0x1C014E024 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(WCHAR **a1, HDC a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // r9
  int v6; // r8d
  int v7; // ecx
  unsigned int v8; // edi
  __int64 ThreadWin32Thread; // rax
  int v10; // eax
  WCHAR *SourceString; // r9
  __int64 v12; // rcx
  RECT v13; // [rsp+50h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    GetDPIMETRICSForDpi(*(unsigned __int16 *)(*((_QWORD *)*a1 + 5) + 284LL));
    GreSelectFont(a2);
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4660LL));
    v4 = *(_DWORD *)(gpsi + 4664LL);
    v5 = (_DWORD *)*((_QWORD *)*a1 + 5);
    v6 = v5[27];
    v7 = v5[26];
    v13.left = 0;
    v13.right = v5[28] - v7;
    v13.top = v5[27] - v6;
    v13.bottom = v5[29] - v6;
    if ( v4 == (unsigned int)GreGetNearestColor(a2, v4) )
    {
      GreSetBkColor(a2, v4);
      v8 = 2;
    }
    else
    {
      FillRect(a2, &v13, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode(a2, 1);
      v8 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v10 = CALL_LPK(ThreadWin32Thread);
    SourceString = a1[6];
    v12 = -1LL;
    do
      ++v12;
    while ( SourceString[v12] );
    if ( v10 )
      xxxClientExtTextOutW(a2, 2, 1, v8, &v13, SourceString, v12);
    else
      GreExtTextOutWInternal(a2, 2, 1, v8, &v13, SourceString, v12, 0LL, 0LL, 0);
  }
}

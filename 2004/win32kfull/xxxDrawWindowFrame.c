/*
 * XREFs of xxxDrawWindowFrame @ 0x1C00AFD24
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 * Callees:
 *     GetRect @ 0x1C00276C0 (GetRect.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C005FF14 (GetWindowBorders.c)
 *     DrawEdge @ 0x1C0061B00 (DrawEdge.c)
 *     IsVisible @ 0x1C0069C04 (IsVisible.c)
 *     GetCaptionHeight @ 0x1C01084FC (GetCaptionHeight.c)
 *     xxxDrawScrollBar @ 0x1C014A280 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0246280 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C024E57C (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(__int64 a1, HDC a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int WindowBorders; // esi
  _BYTE *v12; // rdx
  unsigned int v13; // r15d
  char v14; // r8
  int v15; // r8d
  int CaptionHeight; // eax
  __int64 v17; // rcx
  bool v18; // r14
  bool v19; // cl
  unsigned int v20; // r8d
  int v21; // eax
  RECT v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF

  v24 = 0LL;
  LODWORD(v6) = IsVisible(a1);
  if ( (_DWORD)v6 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    LOBYTE(v6) = *(_BYTE *)(v8 + 17);
    if ( (v6 & 1) == 0 || (v6 & 0x80u) != 0LL )
    {
      v9 = *(_QWORD *)(v8 + 88) - *(_QWORD *)(v8 + 104);
      if ( !v9 )
        v9 = *(_QWORD *)(v8 + 96) - *(_QWORD *)(v8 + 112);
      if ( v9 )
      {
        if ( *(_QWORD *)(v8 + 136) || (LODWORD(v6) = GreGetClipBox(a2, &v24, 1LL), (_DWORD)v6 != 1) )
        {
          v10 = *(_QWORD *)(a1 + 40);
          v23 = 0LL;
          if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v10 + 28), *(unsigned int *)(v10 + 24));
            GetRect(a1, (__int64)&v23, 34);
            v12 = *(_BYTE **)(a1 + 40);
            v23.left += WindowBorders;
            v13 = v23.top + WindowBorders;
            v23.right -= WindowBorders;
            v23.bottom -= WindowBorders;
            if ( (v12[16] & 1) != 0 && (a3 & 0x2000) == 0 )
            {
              v21 = xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders);
              v12 = *(_BYTE **)(a1 + 40);
              v13 += v21;
            }
            v14 = v12[30];
            if ( (v14 & 0xC0) != 0 )
              goto LABEL_10;
            v19 = 0;
            if ( (v14 & 4) == 0 )
              v19 = (v12[24] & 1) == 0;
            if ( !v19 || (v12[25] & 1) != 0 || (v12[26] & 2) != 0 && (v12[17] & 1) == 0 )
            {
LABEL_10:
              v15 = a3 & 0x2000 | 0x900D;
              if ( (a3 & 1) == 0 )
                v15 = a3 & 0x2000 | 0x900C;
              xxxDrawCaptionBar(a1, a2, v15 | 0x800);
            }
            CaptionHeight = GetCaptionHeight(a1);
            v17 = *(_QWORD *)(a1 + 40);
            v23.top = CaptionHeight + v13;
            if ( (*(_BYTE *)(v17 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2, &v23, 10, 8207);
              v17 = *(_QWORD *)(a1 + 40);
            }
            v18 = (a3 & 0x2000) == 0;
            if ( (v18 & (*(_BYTE *)(v17 + 16) >> 1) & 1) != 0 )
            {
              if ( (*(_BYTE *)(v17 + 16) & 4) != 0 )
                DrawSize(
                  a1,
                  a2,
                  WindowBorders,
                  WindowBorders,
                  *(_QWORD *)&v23.left,
                  *(_QWORD *)&v23.right,
                  v24,
                  *((_QWORD *)&v24 + 1));
              xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
            }
            v6 = *(_QWORD *)(a1 + 40);
            if ( (v18 & (*(_BYTE *)(v6 + 16) >> 2) & 1) != 0 )
              LOBYTE(v6) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
          }
          else
          {
            v20 = ((*(_BYTE *)(v10 + 16) & 0x40 | 0x240300u) >> 6) | 0x2000;
            if ( (a3 & 0x2000) == 0 )
              v20 = (*(_BYTE *)(v10 + 16) & 0x40 | 0x240300u) >> 6;
            LOBYTE(v6) = xxxDrawCaptionBar(a1, a2, v20);
          }
        }
      }
    }
  }
  return v6;
}

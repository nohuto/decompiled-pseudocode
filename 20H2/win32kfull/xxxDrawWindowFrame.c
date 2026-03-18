/*
 * XREFs of xxxDrawWindowFrame @ 0x1C003EDF8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C01045E8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0240E74 (xxxRedrawHungWindow.c)
 * Callees:
 *     DrawEdge @ 0x1C00375E4 (DrawEdge.c)
 *     IsVisible @ 0x1C0041324 (IsVisible.c)
 *     GetRect @ 0x1C005E0AC (GetRect.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C0079A1C (GetWindowBorders.c)
 *     GetCaptionHeight @ 0x1C0109718 (GetCaptionHeight.c)
 *     xxxDrawScrollBar @ 0x1C014CAB0 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0244FE0 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C024CF74 (xxxMenuBarDraw.c)
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
  int CaptionHeight; // eax
  __int64 v16; // rcx
  bool v17; // r14
  bool v18; // cl
  int v19; // eax
  RECT v21; // [rsp+20h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF

  v22 = 0LL;
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
        if ( *(_QWORD *)(v8 + 136) || (LODWORD(v6) = GreGetClipBox(a2, &v22, 1LL), (_DWORD)v6 != 1) )
        {
          v10 = *(_QWORD *)(a1 + 40);
          v21 = 0LL;
          if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v10 + 28), *(unsigned int *)(v10 + 24));
            GetRect(a1, &v21, 34LL);
            v12 = *(_BYTE **)(a1 + 40);
            v21.left += WindowBorders;
            v13 = v21.top + WindowBorders;
            v21.right -= WindowBorders;
            v21.bottom -= WindowBorders;
            if ( (v12[16] & 1) != 0 && (a3 & 0x2000) == 0 )
            {
              v19 = xxxMenuBarDraw(
                      a1,
                      a2,
                      WindowBorders,
                      WindowBorders,
                      *(_QWORD *)&v21.left,
                      *(_QWORD *)&v21.right,
                      v22,
                      *((_QWORD *)&v22 + 1));
              v12 = *(_BYTE **)(a1 + 40);
              v13 += v19;
            }
            v14 = v12[30];
            if ( (v14 & 0xC0) != 0 )
              goto LABEL_10;
            v18 = 0;
            if ( (v14 & 4) == 0 )
              v18 = (v12[24] & 1) == 0;
            if ( !v18 || (v12[25] & 1) != 0 || (v12[26] & 2) != 0 && (v12[17] & 1) == 0 )
LABEL_10:
              xxxDrawCaptionBar(a1, a2);
            CaptionHeight = GetCaptionHeight(a1);
            v16 = *(_QWORD *)(a1 + 40);
            v21.top = CaptionHeight + v13;
            if ( (*(_BYTE *)(v16 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2, &v21, 10, 8207);
              v16 = *(_QWORD *)(a1 + 40);
            }
            v17 = (a3 & 0x2000) == 0;
            if ( (v17 & (*(_BYTE *)(v16 + 16) >> 1) & 1) != 0 )
            {
              if ( (*(_BYTE *)(v16 + 16) & 4) != 0 )
                DrawSize(a1, a2, WindowBorders, WindowBorders);
              xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
            }
            v6 = *(_QWORD *)(a1 + 40);
            if ( (v17 & (*(_BYTE *)(v6 + 16) >> 2) & 1) != 0 )
              LOBYTE(v6) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
          }
          else
          {
            LOBYTE(v6) = xxxDrawCaptionBar(a1, a2);
          }
        }
      }
    }
  }
  return v6;
}

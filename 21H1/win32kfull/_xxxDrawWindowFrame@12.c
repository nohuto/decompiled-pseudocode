/*
 * XREFs of _xxxDrawWindowFrame@12 @ 0x8E7D8
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _GetCaptionHeight@4 @ 0x8EDFE (_GetCaptionHeight@4.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     _xxxDrawScrollBar@12 @ 0xC1AFC (_xxxDrawScrollBar@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _DrawSize@16 @ 0x1A3566 (_DrawSize@16.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 */

char __fastcall xxxDrawWindowFrame(struct tagVWPL **a1, int a2, __int16 a3)
{
  struct tagVWPL *ClipBox; // eax
  struct tagVWPL *v6; // edi
  struct tagVWPL *v7; // eax
  int v8; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // ecx
  struct tagVWPL *v12; // edx
  char v13; // cl
  int v14; // ecx
  struct tagVWPL *v15; // eax
  unsigned __int8 v16; // ah
  __int16 v17; // dx
  unsigned int v18; // eax
  int v19; // eax
  int v21; // [esp+Ch] [ebp-2Ch]
  int WindowBordersForDpiWithCompatFlags2; // [esp+Ch] [ebp-2Ch]
  INT DpiForSystem; // [esp+10h] [ebp-28h]
  int v24; // [esp+10h] [ebp-28h]
  int v25; // [esp+14h] [ebp-24h] BYREF
  int v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+1Ch] [ebp-1Ch]
  int v28; // [esp+20h] [ebp-18h]
  _BYTE v29[16]; // [esp+24h] [ebp-14h] BYREF

  memset(v29, 0, sizeof(v29));
  ClipBox = (struct tagVWPL *)IsVisible(a1);
  if ( ClipBox )
  {
    v6 = a1[5];
    LOBYTE(ClipBox) = *((_BYTE *)v6 + 9) & 0x81;
    if ( (_BYTE)ClipBox != 1 )
    {
      ClipBox = (struct tagVWPL *)EqualRectInl((char *)v6 + 52, (char *)v6 + 68);
      if ( !ClipBox )
      {
        if ( *((_DWORD *)v6 + 23)
          || (ClipBox = (struct tagVWPL *)GreGetClipBox(a2, v29, 1), ClipBox != (struct tagVWPL *)1) )
        {
          v25 = 0;
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v7 = a1[5];
          if ( (*((_BYTE *)v7 + 23) & 0x20) == 0 || (*((_BYTE *)v7 + 9) & 1) != 0 )
          {
            v8 = *((_DWORD *)v7 + 4);
            v21 = *((_DWORD *)v7 + 5);
            DpiForSystem = GetDpiForSystem();
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            if ( *(_DWORD *)(ThreadWin32Thread + 340) > 0x9900u )
              v11 = 0;
            else
              v11 = *(_DWORD *)(ThreadWin32Thread + 352);
            WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                                    v21,
                                                    v8,
                                                    v11,
                                                    0,
                                                    DpiForSystem,
                                                    v11);
            GetRect((int)a1, &v25, 34);
            v25 += WindowBordersForDpiWithCompatFlags2;
            v27 -= WindowBordersForDpiWithCompatFlags2;
            v28 -= WindowBordersForDpiWithCompatFlags2;
            v24 = v26 + WindowBordersForDpiWithCompatFlags2;
            v12 = a1[5];
            if ( (*((_BYTE *)v12 + 8) & 1) != 0 && (a3 & 0x2000) == 0 )
            {
              v24 += xxxMenuBarDraw(a1, a2, WindowBordersForDpiWithCompatFlags2, WindowBordersForDpiWithCompatFlags2);
              v12 = a1[5];
            }
            v13 = *((_BYTE *)v12 + 22);
            if ( (v13 & 0xC0) != 0
              || ((unsigned __int8)-((v13 & 4) == 0) & ((*((_BYTE *)v12 + 16) & 1) == 0)) == 0
              || (*((_BYTE *)v12 + 17) & 1) != 0
              || (*((_BYTE *)v12 + 18) & 2) != 0 && (*((_BYTE *)v12 + 9) & 1) == 0 )
            {
              v19 = a3 & 0x2000 | 0x900C;
              if ( (a3 & 1) != 0 )
                v19 = a3 & 0x2000 | 0x900D;
              xxxDrawCaptionBar(a1, v19 | 0x800);
            }
            v14 = GetCaptionHeight(a1) + v24;
            v15 = a1[5];
            v26 = v14;
            if ( (*((_BYTE *)v15 + 12) & 0x10) != 0 )
            {
              WindowBordersForDpiWithCompatFlags2 += 2;
              DrawEdge(a2, &v25, 10, 8207);
              v15 = a1[5];
            }
            v16 = *((_BYTE *)v15 + 8);
            v17 = a3;
            if ( (((a3 & 0x2000) == 0) & (v16 >> 1)) != 0 )
            {
              if ( (v16 & 4) != 0 )
                DrawSize(WindowBordersForDpiWithCompatFlags2, WindowBordersForDpiWithCompatFlags2);
              xxxDrawScrollBar(1);
              v17 = a3;
            }
            ClipBox = a1[5];
            if ( (*((_BYTE *)ClipBox + 8) & 4) != 0 && (v17 & 0x2000) == 0 )
              LOBYTE(ClipBox) = xxxDrawScrollBar(0);
          }
          else
          {
            v18 = ((unsigned int)&loc_240300 | *((_BYTE *)v7 + 8) & 0x40) >> 6;
            if ( (a3 & 0x2000) != 0 )
              v18 |= 0x2000u;
            LOBYTE(ClipBox) = xxxDrawCaptionBar(a1, v18);
          }
        }
      }
    }
  }
  return (char)ClipBox;
}

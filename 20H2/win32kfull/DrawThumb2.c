/*
 * XREFs of DrawThumb2 @ 0x1C014CDC4
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0243EB4 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244694 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244954 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     DrawPushButton @ 0x1C0037338 (DrawPushButton.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C014CEFC (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02443B8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall DrawThumb2(__int64 a1, _DWORD *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  int v6; // eax
  LONG v11; // edx
  LONG v12; // ecx
  struct tagRECT *p_top; // rdi
  struct tagRECT *v14; // rax
  LONG v15; // ecx
  LONG v16; // edx
  LONG v17; // eax
  LONG v18; // r8d
  LONG v19; // eax
  __int64 v20; // rdi
  int v21; // ecx
  int *v22; // rax
  int v23; // edx
  int v24; // ecx
  struct tagRECT v25; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2[5];
  v25 = 0LL;
  if ( a2[4] < v6 )
  {
    v11 = a2[6];
    v12 = a2[7];
    if ( v11 < v12 )
    {
      p_top = &v25;
      if ( a5 )
        p_top = (struct tagRECT *)&v25.top;
      v14 = (struct tagRECT *)&v25.top;
      if ( a5 )
        v14 = &v25;
      v14->left = v11;
      v14->right = v12;
      if ( (a6 & 3) == 3 || (v15 = a2[10], v16 = a2[9], v15 - v16 < a2[8]) )
      {
        p_top->left = a2[9];
        p_top->right = a2[10];
        DrawGroove(a3, a4, &v25, a5);
      }
      else
      {
        v17 = a2[13];
        if ( v16 < v17 )
        {
          p_top->left = v16;
          p_top->right = v17;
          DrawGroove(a3, a4, &v25, a5);
          v15 = a2[10];
        }
        v18 = a2[12];
        if ( v18 < v15 )
        {
          p_top->left = v18;
          p_top->right = v15;
          DrawGroove(a3, a4, &v25, a5);
          v18 = a2[12];
        }
        v19 = a2[13];
        p_top->right = v18;
        p_top->left = v19;
        DrawPushButton(a3, &v25, 0, 0);
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 720LL);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v20 + 56);
          if ( (unsigned int)(v21 - 2) <= 1 && a1 == *(_QWORD *)(v20 + 8) && ((*(_DWORD *)v20 >> 1) & 1) == a5 )
          {
            if ( (*(_DWORD *)v20 & 8) != 0 )
            {
              RecalcTrackRect((struct tagSBTRACK *)v20);
              *(_DWORD *)v20 &= ~8u;
              v21 = *(_DWORD *)(v20 + 56);
            }
            v22 = (int *)(v20 + (a5 != 0 ? 36LL : 32LL));
            if ( v21 == 2 )
            {
              v23 = a2[13];
              v24 = *v22;
              v22[2] = v23;
            }
            else
            {
              v24 = a2[12];
              v23 = v22[2];
              *v22 = v24;
            }
            if ( v24 < v23 )
              NtGdiPatBlt(
                a3,
                *(unsigned int *)(v20 + 32),
                *(_DWORD *)(v20 + 36),
                *(_DWORD *)(v20 + 40) - *(_DWORD *)(v20 + 32),
                *(_DWORD *)(v20 + 44) - *(_DWORD *)(v20 + 36),
                5570569);
          }
        }
      }
    }
  }
}

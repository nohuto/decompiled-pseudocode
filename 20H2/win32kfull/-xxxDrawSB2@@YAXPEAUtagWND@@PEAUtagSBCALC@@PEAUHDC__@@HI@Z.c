/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44
 * Callers:
 *     xxxDrawScrollBar @ 0x1C014CAB0 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     DrawFrameControl @ 0x1C0036FB0 (DrawFrameControl.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C014CDC4 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014CF4C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C014CF8C (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C014CFDC (GreGetBkColor.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v8; // esi
  int v10; // eax
  int v11; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // r12d
  struct tagRECT *v14; // rdx
  struct tagRECT *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // esi
  LONG v19; // edx
  unsigned int v20; // r9d
  LONG v21; // r8d
  __int64 v22; // rbx
  unsigned int v23; // eax
  __m128i v24; // xmm6
  unsigned int v25; // r9d
  __m128i v26; // xmm6
  int BkColor; // [rsp+30h] [rbp-50h]
  int TextColor; // [rsp+34h] [rbp-4Ch]
  __int64 v29; // [rsp+38h] [rbp-48h]
  HBRUSH ColorObjects; // [rsp+40h] [rbp-40h]
  __m128i v32; // [rsp+50h] [rbp-30h] BYREF

  v8 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v10 = (*((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4)) / 2;
  v32 = 0LL;
  v11 = v10;
  if ( v10 > 0 && v8 > 0 )
  {
    DpiForSystem = GetDpiForSystem(2LL);
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v14 = (struct tagRECT *)&v32;
    v15 = (struct tagRECT *)((char *)v32.m128i_i64 + 4);
    if ( v11 > DpiDependentMetric )
      v11 = DpiDependentMetric;
    if ( !a4 )
    {
      v14 = (struct tagRECT *)((char *)v32.m128i_i64 + 4);
      v15 = (struct tagRECT *)&v32;
    }
    v14->left = *((_DWORD *)a2 + 6);
    v15->left = *((_DWORD *)a2 + 4);
    v14->right = *((_DWORD *)a2 + 7);
    v15->right = *((_DWORD *)a2 + 5);
    v29 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4840LL));
    if ( a4 )
    {
      if ( v11 == DpiDependentMetric )
      {
        v17 = GetDpiForSystem(v16);
        if ( v8 == (unsigned int)GetDpiDependentMetric(0LL, v17) )
        {
          v18 = a5;
          BitBltSysBmp((__int64)a3, v32.m128i_i32[0], v32.m128i_i32[1], (a5 & 1) != 0 ? 49 : 46, 1);
          v19 = v32.m128i_i32[0];
          v20 = (a5 & 2) != 0 ? 53 : 50;
          v21 = v32.m128i_i32[3] - v11;
LABEL_11:
          BitBltSysBmp((__int64)a3, v19, v21, v20, 1);
LABEL_12:
          v22 = GreSelectBrush(a3, v29);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v18);
          GreSelectBrush(a3, v22);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v24 = v32;
      v18 = a5;
      v32.m128i_i32[3] = v11 + v32.m128i_i32[1];
      DrawFrameControl(a3, (struct tagRECT *)&v32, 3u, (a5 & 1) << 8);
      v32.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128(v24, 12));
      v32.m128i_i32[1] = v32.m128i_i32[3] - v11;
      v25 = ((a5 & 2) << 7) | 1;
    }
    else
    {
      if ( v11 == DpiDependentMetric )
      {
        v23 = GetDpiForSystem(v16);
        if ( v8 == (unsigned int)GetDpiDependentMetric(1LL, v23) )
        {
          v18 = a5;
          BitBltSysBmp((__int64)a3, v32.m128i_i32[0], v32.m128i_i32[1], (a5 & 1) != 0 ? 61 : 58, 1);
          v21 = v32.m128i_i32[1];
          v20 = (a5 & 2) != 0 ? 57 : 54;
          v19 = v32.m128i_i32[2] - v11;
          goto LABEL_11;
        }
      }
      v26 = v32;
      v18 = a5;
      v32.m128i_i32[2] = v11 + v32.m128i_i32[0];
      DrawFrameControl(a3, (struct tagRECT *)&v32, 3u, ((a5 & 1) << 8) | 2);
      v32.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
      v32.m128i_i32[0] = v32.m128i_i32[2] - v11;
      v25 = ((a5 & 2) << 7) | 3;
    }
    DrawFrameControl(a3, (struct tagRECT *)&v32, 3u, v25);
    goto LABEL_12;
  }
}

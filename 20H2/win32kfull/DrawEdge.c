/*
 * XREFs of DrawEdge @ 0x1C00375E4
 * Callers:
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     DrawPushButton @ 0x1C0037338 (DrawPushButton.c)
 *     xxxDrawWindowFrame @ 0x1C003EDF8 (xxxDrawWindowFrame.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C014CEFC (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3568 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNDrawFullNC @ 0x1C024C4A4 (xxxMNDrawFullNC.c)
 * Callees:
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C0037B68 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C025D630 (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C025D96C (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, char a3, int a4)
{
  RECT v5; // xmm0
  char v6; // r13
  unsigned int v7; // r10d
  LONG bottom; // r15d
  LONG right; // r14d
  LONG top; // edi
  int v11; // ecx
  LONG left; // esi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  HBRUSH v18; // r8
  HBRUSH v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v27; // eax
  HBRUSH v28; // r8
  int v29; // eax
  HBRUSH v30; // r8
  RECT v31; // [rsp+30h] [rbp-69h] BYREF
  RECT *v32; // [rsp+40h] [rbp-59h]
  LONG v33; // [rsp+50h] [rbp-49h]
  LONG v34; // [rsp+54h] [rbp-45h]
  int v35; // [rsp+58h] [rbp-41h]
  int v36; // [rsp+5Ch] [rbp-3Dh]
  _QWORD v37[10]; // [rsp+60h] [rbp-39h]

  v5 = *a2;
  v6 = a3;
  v32 = a2;
  v7 = 1;
  v31 = v5;
  bottom = v5.bottom;
  right = v5.right;
  top = v5.top;
  v11 = a4 | 0x8000;
  left = v5.left;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v11 = a4;
  v13 = v11 | 0x4000;
  if ( (v11 & 0x8000) == 0 )
    v13 = v11;
  v14 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_24;
  while ( 1 )
  {
    if ( (v13 & 0x4000) != 0 )
    {
      v27 = v14 & 3;
      if ( (v13 & 0x8000) != 0 )
        v19 = v27 ? *(HBRUSH *)(gpsi + 4744LL) : *(HBRUSH *)(gpsi + 4736LL);
      else
        v19 = v27 ? *(HBRUSH *)(gpsi + 4824LL) : *(HBRUSH *)(gpsi + 4816LL);
      v18 = v19;
    }
    else
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 4 )
              return 0LL;
            v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4824LL) : *(HBRUSH *)(gpsi + 4864LL);
            v19 = *(HBRUSH *)(gpsi + 4872LL);
          }
          else
          {
            v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4872LL) : *(HBRUSH *)(gpsi + 4856LL);
            v19 = *(HBRUSH *)(gpsi + 4824LL);
          }
        }
        else
        {
          v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4864LL) : *(HBRUSH *)(gpsi + 4824LL);
          v19 = *(HBRUSH *)(gpsi + 4856LL);
        }
      }
      else
      {
        v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4856LL) : *(HBRUSH *)(gpsi + 4872LL);
        v19 = *(HBRUSH *)(gpsi + 4864LL);
      }
    }
    if ( (v13 & 0x10) != 0 )
    {
      v25 = DrawDiagonal(a1, &v31, v18, v19, v13);
      bottom = v31.bottom;
      right = v31.right;
      top = v31.top;
      left = v31.left;
    }
    else
    {
      v20 = 0;
      if ( (v13 & 4) != 0 )
      {
        --right;
        v34 = top;
        v31.right = right;
        v33 = right;
        v36 = bottom - top;
        v20 = 1;
        v35 = 1;
        v37[0] = v19;
      }
      if ( (v13 & 8) != 0 )
      {
        v31.bottom = --bottom;
        v21 = 3LL * v20;
        *(&v33 + 2 * v21) = left;
        *(&v35 + 2 * v21) = right - left;
        ++v20;
        *(&v34 + 2 * v21) = bottom;
        *(&v36 + 2 * v21) = 1;
        v37[v21] = v19;
      }
      if ( (v13 & 1) != 0 )
      {
        v22 = v20++;
        v23 = 3 * v22;
        *(&v33 + 2 * v23) = left++;
        *(&v34 + 2 * v23) = top;
        v31.left = left;
        *(&v35 + 2 * v23) = 1;
        *(&v36 + 2 * v23) = bottom - top;
        v37[v23] = v18;
      }
      if ( (v13 & 2) != 0 )
      {
        v24 = 3LL * v20;
        *(&v34 + 2 * v24) = top++;
        *(&v33 + 2 * v24) = left;
        v31.top = top;
        *(&v35 + 2 * v24) = right - left;
        *(&v36 + 2 * v24) = 1;
        v37[v24] = v18;
      }
      v25 = GrePolyPatBlt(a1);
    }
    v7 = v25;
LABEL_24:
    v14 = v6 & 0xC;
    if ( (v6 & 0xC) == 0 )
      break;
    v6 &= 0xF3u;
  }
  if ( (v13 & 0x800) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      if ( (v13 & 0x8000) != 0 )
        v28 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v28 = *(HBRUSH *)(gpsi + 4816LL);
      v29 = FillTriangle(a1, &v31, v28, v13);
    }
    else
    {
      if ( (v13 & 0x8000) != 0 )
        v30 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v30 = *(HBRUSH *)(gpsi + 4816LL);
      v29 = FillRect(a1, &v31, v30);
    }
    v7 = v29;
  }
  if ( (v13 & 0x2000) != 0 )
    *v32 = v31;
  return v7;
}

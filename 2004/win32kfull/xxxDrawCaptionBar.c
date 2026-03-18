/*
 * XREFs of xxxDrawCaptionBar @ 0x1C005E728
 * Callers:
 *     xxxRedrawTitle @ 0x1C0033990 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C005E4B4 (xxxDWP_DoNCActivate.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x1C00AFD24 (xxxDrawWindowFrame.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     GetRect @ 0x1C00276C0 (GetRect.c)
 *     GetWindowBorders @ 0x1C005FF14 (GetWindowBorders.c)
 *     GetResizeBorderWidthForDpi @ 0x1C0060384 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00603AC (GetWindowFrameMetricForDpi.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     DrawEdge @ 0x1C0061B00 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     IsVisible @ 0x1C0069C04 (IsVisible.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     ClearHungFlag @ 0x1C008CC64 (ClearHungFlag.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C00A00C0 (xxxMNCanClose.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     IS_UI_LANGID @ 0x1C0102050 (IS_UI_LANGID.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     DrawFrame @ 0x1C014CC98 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(__int64 a1, HDC a2, int a3)
{
  char v3; // bl
  int WindowFrameMetricForDpi; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned int v13; // r13d
  __int64 v14; // rcx
  char v15; // al
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // r8
  unsigned int v38; // r8d
  int v39; // edx
  _BOOL8 v40; // rcx
  int v41; // ecx
  __int64 v42; // r13
  __int16 *OemBitmapInfoForDpi; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v45; // r8
  int DpiDependentMetric; // eax
  unsigned int v47; // eax
  int v48; // ebx
  int v49; // ebx
  unsigned int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // ebx
  bool v53; // cl
  unsigned int v54; // eax
  int v56; // [rsp+20h] [rbp-99h]
  int v57; // [rsp+60h] [rbp-59h]
  unsigned int v58; // [rsp+60h] [rbp-59h]
  bool v59; // [rsp+64h] [rbp-55h]
  unsigned int v60; // [rsp+68h] [rbp-51h]
  int v62; // [rsp+74h] [rbp-45h]
  int v63; // [rsp+78h] [rbp-41h]
  __int64 v64; // [rsp+80h] [rbp-39h]
  __int64 v65; // [rsp+90h] [rbp-29h]
  int v66[4]; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = a3;
  v57 = 0;
  v65 = 0LL;
  *(_OWORD *)v66 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetricForDpi = IsVisible(a1);
    if ( !WindowFrameMetricForDpi )
      return WindowFrameMetricForDpi;
  }
  ClearHungFlag((struct tagWND *)a1);
  GetRect(a1, (__int64)v66, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 4912LL);
    else
      v7 = *(_QWORD *)(gpsi + 4920LL);
    v63 = 32;
    goto LABEL_8;
  }
  v63 = 0;
  if ( (v3 & 1) == 0 )
  {
    v7 = *(_QWORD *)(gpsi + 4720LL);
LABEL_8:
    v64 = v7;
    goto LABEL_9;
  }
  v64 = *(_QWORD *)(gpsi + 4712LL);
LABEL_9:
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v9 == 3 )
  {
    v60 = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
LABEL_12:
      v60 = WindowDpiLastNotify;
      goto LABEL_13;
    }
    if ( v9
      || (v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
      goto LABEL_12;
    }
    v60 = 96;
  }
LABEL_13:
  v12 = 0;
  v13 = 8;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    v12 = 16;
  v14 = *(_QWORD *)(a1 + 40);
  LOBYTE(v11) = *(_BYTE *)(v14 + 30);
  v15 = *(_BYTE *)(v14 + 31);
  if ( (v11 & 1) != 0 )
  {
    if ( (v15 & 1) != 0 )
      v12 |= 2u;
  }
  else
  {
    v12 |= 8u;
  }
  v16 = v15 & 0x20;
  if ( (v11 & 2) != 0 )
  {
    if ( !v16 )
      goto LABEL_20;
    v12 |= 1u;
  }
  else
  {
    v12 |= 4u;
  }
  if ( v16 )
  {
    if ( (a3 & 0x8000) != 0 )
    {
      DrawEdge(a2);
      DrawFrame(a2);
      ++v66[0];
      --v66[2];
      ++v66[1];
      --v66[3];
    }
    else
    {
      v66[0] += 3;
      v66[2] -= 3;
      v66[1] += 3;
      v66[3] -= 3;
    }
    DpiForSystem = GetDpiForSystem(v14, v11);
    DpiDependentMetric = GetDpiDependentMetric(13LL, DpiForSystem, v45);
    v66[3] = v66[1] + DpiDependentMetric;
    v65 = GreSelectBrush(a2, v64);
LABEL_44:
    v29 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v29 + 30) & 8) != 0 || (*(_BYTE *)(v29 + 21) & 2) == 0 )
    {
      v30 = 1;
      v31 = GetDpiForSystem(v29, v28);
      v33 = GetDpiDependentMetric(12LL, v31, v32);
      v36 = GetDpiForSystem(v35, v34);
      v38 = GetDpiDependentMetric(23LL, v36, v37);
      if ( (a3 & 0x1000) != 0 )
      {
        if ( v12 )
        {
          if ( v12 != 12 )
          {
            v66[3] -= 2;
            v56 = v66[3] - (v66[1] + 2);
            v66[1] += 2;
            v66[2] -= 2;
            NtGdiPatBlt(a2, v66[2], v66[1], 2, v56, 15728673);
            v52 = v57 + 3;
            if ( (v12 & 0x10) == 0 )
              v52 = v57;
            v66[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(v52, v60) + 4);
            BitBltSysBmp(a2, 1);
            v53 = (v12 & 0x20) == 0;
            v59 = v53;
            if ( (v12 & 0xC) != 12 && v53 )
            {
              v66[2] -= 2;
              NtGdiPatBlt(a2, v66[2], v66[1], 2, v66[3] - v66[1], 15728673);
              if ( (v12 & 2) != 0 )
                v54 = 8;
              else
                v54 = (v12 & 8) != 0 ? 17 : 14;
              v66[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(v54, v60) + 4);
              BitBltSysBmp(a2, 1);
              if ( (v12 & 1) == 0 )
                v13 = (v12 & 4) != 0 ? 7 : 4;
              v66[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(v13, v60) + 4);
              BitBltSysBmp(a2, 1);
              v66[2] -= 2;
              NtGdiPatBlt(a2, v66[2], v66[1], 2, v66[3] - v66[1], 15728673);
              v53 = v59;
            }
            if ( (v12 & 0x1C) != 0 && v53 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 4) != 0 )
            {
              v66[2] -= 2;
              NtGdiPatBlt(a2, v66[2], v66[1], 2, v66[3] - v66[1], 15728673);
              v66[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v60) + 4);
              BitBltSysBmp(a2, 1);
            }
            v66[1] -= 2;
            v66[3] += 2;
            GrePolyPatBlt(a2);
            if ( v65 )
              GreSelectBrush(a2, v65);
            goto LABEL_51;
          }
          v41 = v33 + 2;
        }
        else
        {
          v41 = 3 * v33;
        }
        v58 = v41;
        v42 = PrepareHDCBITSBitmap(0LL);
        if ( v42 )
        {
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v60);
          v66[2] -= v58;
          NtGdiBitBltInternal(
            a2,
            (unsigned int)v66[2],
            (unsigned int)v66[1],
            v58,
            OemBitmapInfoForDpi[3],
            v42,
            OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v58 - v33,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
          if ( v12 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 4) != 0 )
            {
              v66[2] += 2 - v33;
              NtGdiBitBltInternal(
                a2,
                (unsigned int)v66[2],
                (unsigned int)v66[1],
                v33,
                OemBitmapInfoForDpi[3],
                v42,
                OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v33,
                OemBitmapInfoForDpi[1],
                13369376,
                0,
                0);
              if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
                && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 0x40) != 0 )
              {
                NtGdiBitBltInternal(
                  a2,
                  (unsigned int)(v66[2] - 2),
                  (unsigned int)(v66[1] + 2),
                  v33 - 4,
                  OemBitmapInfoForDpi[3] - 4,
                  v42,
                  OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v33 + 2,
                  OemBitmapInfoForDpi[1] + 2,
                  -2134114272,
                  0,
                  0);
              }
            }
          }
        }
      }
      else
      {
        if ( !v12 || (v12 & 0xC) != 12 && (v12 & 0x20) == 0 )
        {
          v39 = v66[2];
          v30 = 3;
        }
        else
        {
          v39 = v66[2] - 2;
          v66[2] -= 2;
          if ( v12 == 12 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 4) != 0 )
            v30 = 2;
        }
        if ( (v12 & 0x20) != 0 )
          v33 = v38;
        v66[2] = v39 - v30 * v33;
      }
    }
LABEL_51:
    LOBYTE(WindowFrameMetricForDpi) = a3;
    if ( (a3 & 0xC) != 0 )
    {
      v40 = (unsigned int)xxxDrawCaptionTemp(a1, a2, v66, 0LL, 0LL, 0LL, a3 | v63 | (v12 >> 4) & 2) == 0;
      LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v40, a1, 1800LL, 1LL);
    }
    return WindowFrameMetricForDpi;
  }
LABEL_20:
  if ( (a3 & 0x8000) != 0 )
  {
    v19 = GetDpiForSystem(v14, v11);
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v20, v19);
    v17 = *(_QWORD *)(a1 + 40);
    v21 = WindowFrameMetricForDpi;
    v62 = WindowFrameMetricForDpi;
    if ( (*(_BYTE *)(v17 + 25) & 1) != 0 || (*(_BYTE *)(v17 + 26) & 2) != 0 )
    {
      LOBYTE(WindowFrameMetricForDpi) = DrawEdge(a2);
      v21 = v62;
    }
    v22 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v22 + 30) & 4) != 0
      || v21 > 0
      && (v17 = *(unsigned int *)(v22 + 28),
          LOBYTE(WindowFrameMetricForDpi) = (v17 & 0x40000) == 0,
          (((v17 & 0xC00000) != 12582912) & (unsigned __int8)WindowFrameMetricForDpi) == 0)
      && (WindowFrameMetricForDpi = GetAppCompatFlags2(39168LL), (WindowFrameMetricForDpi & 0x30000000) == 0) )
    {
      v47 = GetDpiForSystem(v22, v17);
      v48 = v62 + GetResizeBorderWidthForDpi(v47);
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      v49 = -v48;
      v66[0] -= v49;
      v66[2] += v49;
      v66[1] -= v49;
      v66[3] += v49;
    }
    v23 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v23 + 30) & 0xC0) != 0 || (*(_BYTE *)(v23 + 24) & 1) != 0 )
    {
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      ++v66[0];
      --v66[2];
      ++v66[1];
      --v66[3];
    }
  }
  else
  {
    WindowFrameMetricForDpi = -(int)GetWindowBorders(*(unsigned int *)(v14 + 28), *(unsigned int *)(v14 + 24));
    v66[0] -= WindowFrameMetricForDpi;
    v66[2] += WindowFrameMetricForDpi;
    v66[1] -= WindowFrameMetricForDpi;
    v66[3] += WindowFrameMetricForDpi;
  }
  v18 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v18 + 16) & 8) != 0 )
  {
    if ( *(char *)(v18 + 24) < 0 )
    {
      v12 |= 0x20u;
      v50 = GetDpiForSystem(v18, v17);
      v27 = GetDpiDependentMetric(24LL, v50, v51);
      v57 = 41;
    }
    else
    {
      v25 = GetDpiForSystem(v18, v17);
      v27 = GetDpiDependentMetric(13LL, v25, v26);
    }
    v66[3] = v66[1] + v27;
    GrePolyPatBlt(a2);
    GreSelectBrush(a2, v64);
    goto LABEL_44;
  }
  return WindowFrameMetricForDpi;
}

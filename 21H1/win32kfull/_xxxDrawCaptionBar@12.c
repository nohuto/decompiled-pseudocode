/*
 * XREFs of _xxxDrawCaptionBar@12 @ 0x8F42C
 * Callers:
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _xxxMNCanClose@4 @ 0x31A3A (_xxxMNCanClose@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _IS_UI_LANGID@4 @ 0x91280 (_IS_UI_LANGID@4.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z @ 0x91676 (-GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z @ 0x916D2 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _DrawFrame@16 @ 0xC2994 (_DrawFrame@16.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __fastcall xxxDrawCaptionBar(struct tagVWPL **a1, HDC a2, int a3)
{
  unsigned int v3; // ebx
  struct tagVWPL **v4; // esi
  unsigned int result; // eax
  int v6; // eax
  struct tagVWPL *v7; // ecx
  int v8; // eax
  int WindowDpiLastNotify; // eax
  int v10; // eax
  struct tagVWPL *v11; // ecx
  char v12; // ah
  char v13; // al
  char v14; // al
  INT DpiForSystem; // eax
  int DpiDependentMetric; // eax
  PKTHREAD v17; // eax
  int v18; // eax
  int v19; // eax
  int WindowFrameMetricForDpiWithCompatFlags2; // eax
  struct tagVWPL *v21; // ecx
  struct tagVWPL *v22; // edx
  PKTHREAD v23; // eax
  int v24; // eax
  int v25; // eax
  PKTHREAD v26; // eax
  int v27; // esi
  int v28; // esi
  struct tagVWPL *v29; // eax
  int v30; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v33; // ecx
  int v34; // eax
  INT v35; // eax
  int v36; // eax
  INT v37; // eax
  INT v38; // eax
  INT v39; // eax
  int v40; // edi
  int v41; // ecx
  HDC v42; // edi
  BOOL v43; // ecx
  int v44; // ecx
  int v45; // eax
  int OemBitmapInfoForDpi; // eax
  int v47; // edi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  __int16 *v53; // edi
  int v54; // eax
  struct ECLIPOBJ *v55; // [esp-14h] [ebp-8Ch]
  struct ECLIPOBJ *v56; // [esp-10h] [ebp-88h]
  unsigned int v57; // [esp+0h] [ebp-78h]
  unsigned int v58; // [esp+0h] [ebp-78h]
  unsigned int v59; // [esp+4h] [ebp-74h]
  unsigned int v60; // [esp+4h] [ebp-74h]
  int v62; // [esp+10h] [ebp-68h]
  int v63; // [esp+10h] [ebp-68h]
  int v64; // [esp+14h] [ebp-64h]
  int v65; // [esp+14h] [ebp-64h]
  int v66; // [esp+18h] [ebp-60h]
  int v67; // [esp+1Ch] [ebp-5Ch]
  HDC v68; // [esp+1Ch] [ebp-5Ch]
  int v69; // [esp+20h] [ebp-58h]
  int v70; // [esp+20h] [ebp-58h]
  INT v72; // [esp+24h] [ebp-54h]
  int v73; // [esp+24h] [ebp-54h]
  int v74; // [esp+28h] [ebp-50h]
  int v75; // [esp+28h] [ebp-50h]
  int v76; // [esp+2Ch] [ebp-4Ch]
  int v77; // [esp+30h] [ebp-48h]
  int v78; // [esp+34h] [ebp-44h]
  unsigned int v79; // [esp+38h] [ebp-40h]
  int v80; // [esp+3Ch] [ebp-3Ch] BYREF
  int v81; // [esp+40h] [ebp-38h]
  int v82; // [esp+44h] [ebp-34h]
  int v83; // [esp+48h] [ebp-30h]
  int v84; // [esp+4Ch] [ebp-2Ch]
  int v85; // [esp+50h] [ebp-28h]
  int v86; // [esp+54h] [ebp-24h]
  int v87; // [esp+58h] [ebp-20h]
  int v88; // [esp+5Ch] [ebp-1Ch]
  int v89; // [esp+60h] [ebp-18h]
  int v90; // [esp+64h] [ebp-14h] BYREF
  int v91; // [esp+68h] [ebp-10h]
  int v92; // [esp+6Ch] [ebp-Ch]
  int v93; // [esp+70h] [ebp-8h]

  v3 = 0;
  v4 = a1;
  v90 = 0;
  v64 = 0;
  v79 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  if ( (a3 & 0x800) != 0 || (result = IsVisible(a1)) != 0 )
  {
    ClearHungFlag(v4, 0x310u);
    GetRect((int)v4, &v90, 34);
    if ( _gbDisableAlpha || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
    {
      v77 = 0;
      v76 = a3 & 1;
      if ( (a3 & 1) != 0 )
      {
        v62 = *(_DWORD *)(_gpsi + 4300);
        goto LABEL_13;
      }
      v6 = *(_DWORD *)(_gpsi + 4304);
    }
    else
    {
      v76 = a3 & 1;
      if ( (a3 & 1) != 0 )
        v6 = *(_DWORD *)(_gpsi + 4400);
      else
        v6 = *(_DWORD *)(_gpsi + 4404);
      v77 = 32;
    }
    v62 = v6;
LABEL_13:
    v7 = v4[5];
    v8 = *((_DWORD *)v7 + 46) & 0xF;
    if ( v8 == 3 )
    {
      v66 = (*((_DWORD *)v7 + 46) >> 8) & 0x1FF;
      goto LABEL_23;
    }
    if ( (*((_DWORD *)v7 + 36) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v4);
    }
    else
    {
      if ( !v8 )
      {
        v10 = *((_DWORD *)v4[2] + 62);
        if ( v10 )
        {
          if ( (*(_BYTE *)(**(_DWORD **)(v10 + 4) + 32) & 1) != 0 )
          {
            v66 = 96;
            goto LABEL_23;
          }
        }
      }
      WindowDpiLastNotify = *(unsigned __int16 *)(*((_DWORD *)v4[2] + 58) + 160);
    }
    v66 = WindowDpiLastNotify;
LABEL_23:
    if ( !xxxMNCanClose(v4) )
      v3 = 16;
    v11 = v4[5];
    v78 = 8;
    v12 = *((_BYTE *)v11 + 22);
    v13 = *((_BYTE *)v11 + 23);
    if ( (v12 & 1) != 0 )
    {
      if ( (v13 & 1) != 0 )
        v3 |= 2u;
    }
    else
    {
      v3 |= 8u;
    }
    v14 = v13 & 0x20;
    if ( (v12 & 2) != 0 )
    {
      if ( !v14 )
        goto LABEL_38;
      v3 |= 1u;
    }
    else
    {
      v3 |= 4u;
    }
    if ( v14 )
    {
      if ( (a3 & 0x8000) != 0 )
      {
        DrawEdge(a2, &v90, 5, 8207);
        DrawFrame(1, 120);
        ++v90;
        --v92;
        ++v91;
        --v93;
      }
      else
      {
        v90 += 3;
        v92 -= 3;
        v91 += 3;
        v93 -= 3;
      }
      DpiForSystem = GetDpiForSystem();
      DpiDependentMetric = GetDpiDependentMetric(13, DpiForSystem);
      v93 = v91 + DpiDependentMetric;
      v79 = GreSelectBrush(a2, v62);
      goto LABEL_71;
    }
LABEL_38:
    if ( (*((_BYTE *)v11 + 17) & 3) == 0 || (*((_BYTE *)v11 + 12) & 8) != 0 )
    {
      v74 = 48;
      v69 = 4316;
    }
    else
    {
      v74 = 120;
      v69 = 4352;
    }
    if ( (a3 & 0x8000) == 0 )
    {
      v30 = *((_DWORD *)v11 + 4);
      v75 = *((_DWORD *)v11 + 5);
      v72 = GetDpiForSystem();
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
        v33 = *(_DWORD *)(ThreadWin32Thread + 352);
      else
        v33 = 0;
      v34 = -GetWindowBordersForDpiWithCompatFlags2(v75, v30, v33, 0, v72, v33);
      v90 -= v34;
      v92 += v34;
      v91 -= v34;
      v93 += v34;
LABEL_66:
      result = (unsigned int)v4[5];
      if ( (*(_BYTE *)(result + 8) & 8) == 0 )
        return result;
      if ( *(char *)(result + 16) >= 0 )
      {
        v37 = GetDpiForSystem();
        v36 = GetDpiDependentMetric(13, v37);
      }
      else
      {
        v3 |= 0x20u;
        v35 = GetDpiForSystem();
        v36 = GetDpiDependentMetric(24, v35);
        v64 = 41;
      }
      v93 = v91 + v36;
      v81 = v91 + v36;
      v80 = v90;
      v82 = v92 - v90;
      v83 = 1;
      v84 = *(_DWORD *)(v69 + _gpsi);
      GrePolyPatBlt(a2, 0xF00021u, (struct XDCOBJ *)&v80, 1u, 1);
      GreSelectBrush(a2, v62);
LABEL_71:
      result = (unsigned int)v4[5];
      if ( (*(_BYTE *)(result + 22) & 8) != 0 || (*(_BYTE *)(result + 13) & 2) == 0 )
      {
        v70 = 1;
        v38 = GetDpiForSystem();
        v63 = GetDpiDependentMetric(12, v38);
        v39 = GetDpiForSystem();
        v40 = GetDpiDependentMetric(23, v39);
        v73 = v40;
        if ( (a3 & 0x1000) != 0 )
        {
          if ( v3 )
          {
            if ( v3 != 12 )
            {
              v93 -= 2;
              v44 = v93 - (v91 + 2);
              v91 += 2;
              v92 -= 2;
              NtGdiPatBlt(a2, v92, (struct XDCOBJ *)v91, 2, v44, (struct EXFORMOBJ *)0xF00021);
              v45 = v64;
              if ( (v3 & 0x10) != 0 )
              {
                v45 = v64 + 3;
                v64 += 3;
              }
              OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v45, v66);
              v92 -= *(__int16 *)(OemBitmapInfoForDpi + 4);
              BitBltSysBmp(a2, v91, v64, 1);
              if ( (v3 & 0xC) != 12 && (v3 & 0x20) == 0 )
              {
                v92 -= 2;
                NtGdiPatBlt(a2, v92, (struct XDCOBJ *)v91, 2, v93 - v91, (struct EXFORMOBJ *)0xF00021);
                if ( (v3 & 2) != 0 )
                  v47 = 8;
                else
                  v47 = (v3 & 8) != 0 ? 17 : 14;
                v48 = GetOemBitmapInfoForDpi(v47, v66);
                v92 -= *(__int16 *)(v48 + 4);
                BitBltSysBmp(a2, v91, v47, 1);
                if ( (v3 & 1) != 0 )
                {
                  v49 = 8;
                }
                else
                {
                  v49 = (v3 & 4) != 0 ? 7 : 4;
                  v78 = v49;
                }
                v50 = GetOemBitmapInfoForDpi(v49, v66);
                v92 -= *(__int16 *)(v50 + 4);
                BitBltSysBmp(a2, v91, v78, 1);
                v92 -= 2;
                NtGdiPatBlt(a2, v92, (struct XDCOBJ *)v91, 2, v93 - v91, (struct EXFORMOBJ *)0xF00021);
                v40 = v73;
                v51 = 3;
                v70 = 3;
              }
              else
              {
                v51 = 1;
              }
              if ( (v3 & 0x1C) != 0 && (v3 & 0x20) == 0 && (*((_BYTE *)v4[5] + 17) & 4) != 0 )
              {
                v92 -= 2;
                NtGdiPatBlt(a2, v92, (struct XDCOBJ *)v91, 2, v93 - v91, (struct EXFORMOBJ *)0xF00021);
                v52 = GetOemBitmapInfoForDpi(11, v66);
                v92 -= *(__int16 *)(v52 + 4);
                BitBltSysBmp(a2, v91, 11, 1);
                v51 = v70 + 1;
              }
              v91 -= 2;
              v93 += 2;
              if ( (v3 & 0x20) == 0 )
                v40 = v63;
              v84 = 0;
              v89 = 0;
              v80 = v92;
              v85 = v92;
              v81 = v91;
              v86 = v93 - 2;
              v82 = v51 * v40;
              v87 = v51 * v40;
              v42 = a2;
              v83 = 2;
              v88 = 2;
              GrePolyPatBlt(a2, 0xF00021u, (struct XDCOBJ *)&v80, 2u, 2);
              result = v79;
              if ( v79 )
                result = GreSelectBrush(a2, v79);
              goto LABEL_85;
            }
            v65 = v63 + 2;
          }
          else
          {
            v65 = 3 * v63;
          }
          result = PrepareHDCBITSBitmap(0);
          v68 = (HDC)result;
          if ( result )
          {
            v53 = (__int16 *)GetOemBitmapInfoForDpi((v76 ^ 1) + 39, v66);
            v92 -= v65;
            result = (unsigned int)NtGdiBitBltInternal(
                                     a2,
                                     v92,
                                     (struct XDCOBJ *)v91,
                                     v65,
                                     v53[3],
                                     v68,
                                     (struct ECLIPOBJ *)(v53[2] + *v53 - v65 - v63),
                                     (struct ECLIPOBJ *)v53[1],
                                     13369376,
                                     0,
                                     0);
            if ( v3 )
            {
              result = (unsigned int)v4[5];
              if ( (*(_BYTE *)(result + 17) & 4) != 0 )
              {
                v92 += 2 - v63;
                NtGdiBitBltInternal(
                  a2,
                  v92,
                  (struct XDCOBJ *)v91,
                  v63,
                  v53[3],
                  v68,
                  (struct ECLIPOBJ *)(v53[2] + *v53 - v63),
                  (struct ECLIPOBJ *)v53[1],
                  13369376,
                  0,
                  0);
                if ( IS_UI_LANGID() || (result = _gpsi, *(_WORD *)(_gpsi + 6256) == 1037) )
                {
                  result = (unsigned int)v4[5];
                  if ( (*(_BYTE *)(result + 18) & 0x40) != 0 )
                  {
                    v56 = (struct ECLIPOBJ *)(v53[1] + 2);
                    v55 = (struct ECLIPOBJ *)(*v53 - v63 + 2 + v53[2]);
                    v54 = v53[3];
                    v42 = a2;
                    result = (unsigned int)NtGdiBitBltInternal(
                                             a2,
                                             v92 - 2,
                                             (struct XDCOBJ *)(v91 + 2),
                                             v63 - 4,
                                             v54 - 4,
                                             v68,
                                             v55,
                                             v56,
                                             -2134114272,
                                             0,
                                             0);
LABEL_85:
                    if ( (a3 & 0xC) != 0 )
                    {
                      v43 = xxxDrawCaptionTemp(v4, v42, &v90, 0, 0, 0, a3 | v77 | (v3 >> 4) & 2) == 0;
                      return SetOrClrWF(v43, (int)v4, 0x708u, 1);
                    }
                    return result;
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( !v3 || (v3 & 0xC) != 12 && (v3 & 0x20) == 0 )
          {
            v41 = v92;
            result = 3;
          }
          else
          {
            v41 = v92 - 2;
            v92 -= 2;
            if ( v3 == 12 && (*((_BYTE *)v4[5] + 17) & 4) != 0 )
              result = 2;
            else
              result = 1;
          }
          if ( (v3 & 0x20) == 0 )
            v40 = v63;
          v92 = v41 - result * v40;
        }
      }
      v42 = a2;
      goto LABEL_85;
    }
    GetDpiForSystem();
    v17 = KeGetCurrentThread();
    v18 = W32GetThreadWin32Thread(v17);
    if ( *(_DWORD *)(v18 + 340) <= 0x9900u )
      v19 = *(_DWORD *)(v18 + 352);
    else
      v19 = 0;
    WindowFrameMetricForDpiWithCompatFlags2 = GetWindowFrameMetricForDpiWithCompatFlags2(v19, v57, v59);
    v21 = v4[5];
    v67 = WindowFrameMetricForDpiWithCompatFlags2;
    if ( (*((_BYTE *)v21 + 17) & 1) != 0 )
    {
      DrawEdge(a2, &v90, 5, 8207);
    }
    else
    {
      if ( (*((_BYTE *)v21 + 18) & 2) == 0 )
        goto LABEL_51;
      DrawEdge(a2, &v90, 2, 8207);
    }
    WindowFrameMetricForDpiWithCompatFlags2 = v67;
LABEL_51:
    v22 = v4[5];
    if ( (*((_BYTE *)v22 + 22) & 4) != 0
      || WindowFrameMetricForDpiWithCompatFlags2 > 0
      && ((*((_DWORD *)v22 + 5) & 0xC00000) == 12582912 || (*((_DWORD *)v22 + 5) & 0x40000) != 0)
      && ((v23 = KeGetCurrentThread(), v24 = W32GetThreadWin32Thread(v23), *(_DWORD *)(v24 + 340) <= 0x9900u)
        ? (v25 = *(_DWORD *)(v24 + 352))
        : (v25 = 0),
          (v25 & 0x30000000) == 0) )
    {
      GetDpiForSystem();
      v26 = KeGetCurrentThread();
      W32GetThreadWin32Thread(v26);
      v27 = v67 + GetResizeBorderWidthForDpiWithAppCompat2(v58, v60);
      DrawFrame(v27, 8 * (v76 ^ 1) + 80);
      v28 = -v27;
      v90 -= v28;
      v92 += v28;
      v91 -= v28;
      v93 += v28;
      v4 = a1;
    }
    v29 = v4[5];
    if ( (*((_BYTE *)v29 + 22) & 0xC0) != 0 || (*((_BYTE *)v29 + 16) & 1) != 0 )
    {
      DrawFrame(1, v74);
      ++v90;
      --v92;
      ++v91;
      --v93;
    }
    goto LABEL_66;
  }
  return result;
}

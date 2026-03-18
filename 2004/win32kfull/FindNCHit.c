/*
 * XREFs of FindNCHit @ 0x1C01179B4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C0060694 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     Feature_Servicing_2108c_33766748__private_IsEnabled @ 0x1C0159848 (Feature_Servicing_2108c_33766748__private_IsEnabled.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA9F0 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     SizeBoxHwnd @ 0x1C025E57C (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r10d
  unsigned int v4; // edi
  unsigned int WindowDpiLastNotify; // edi
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int64 v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // r15d
  int v13; // esi
  int v14; // r14d
  __int64 v15; // r8
  int v16; // r9d
  __int128 v18; // xmm6
  _BYTE *v19; // r8
  unsigned __int8 v20; // dl
  __int64 v21; // r13
  int v22; // esi
  int v23; // r14d
  int v24; // r15d
  bool v25; // zf
  unsigned int v26; // edx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // edx
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v35; // r8
  __int64 v36; // r9
  int WindowBordersForDpi; // eax
  _DWORD *v38; // r8
  int v39; // r13d
  char v40; // cl
  int v41; // eax
  __int64 v42; // rcx
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  int v51; // r15d
  int v52; // esi
  int v53; // r13d
  int v54; // eax
  int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // edx
  int v58; // r14d
  int v59; // eax
  int v60; // eax
  int v61; // edx
  int v62; // eax
  _BYTE *v63; // r8
  char v64; // r10
  int v65; // eax
  int v66; // esi
  int v67; // esi
  char v68; // al
  __int64 v69; // rax
  int v70; // eax
  __int128 v71; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v72; // [rsp+48h] [rbp-29h]
  __int64 v73; // [rsp+50h] [rbp-21h]
  int v74; // [rsp+58h] [rbp-19h] BYREF
  int v75; // [rsp+5Ch] [rbp-15h]
  int v76; // [rsp+60h] [rbp-11h]
  int v77; // [rsp+64h] [rbp-Dh]
  __int128 v78; // [rsp+68h] [rbp-9h] BYREF
  __int64 v79; // [rsp+78h] [rbp+7h]
  __int64 v80; // [rsp+80h] [rbp+Fh]

  v2 = *(_DWORD **)(a1 + 40);
  v75 = 0;
  v3 = a2;
  v73 = a1;
  v4 = v2[72];
  v71 = 0LL;
  if ( (v4 & 0xF) == 3 )
  {
    WindowDpiLastNotify = (v4 >> 8) & 0x1FF;
  }
  else if ( (v2[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (v4 & 0xF) == 0
         && (v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
  }
  v7 = (__int16)v3;
  HIDWORD(v72) = SHIWORD(v3);
  LODWORD(v72) = (__int16)v3;
  v8 = v72;
  if ( !PtInRect(v2 + 22, v72) )
    return 0LL;
  if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 )
  {
    v18 = *(_OWORD *)(v10 + 104);
    v78 = v18;
    if ( PtInRect(&v78, v72) )
      return 1LL;
    v20 = v19[25];
    if ( (v20 & 2) != 0 )
    {
      v21 = (unsigned int)(DWORD1(v78) - 2);
      v22 = HIDWORD(v78) + 2;
      DWORD1(v71) = DWORD1(v78) - 2;
      v23 = v78 - 2;
      HIDWORD(v71) = HIDWORD(v78) + 2;
      v24 = DWORD2(v78) + 2;
      LODWORD(v71) = v78 - 2;
      DWORD2(v71) = DWORD2(v78) + 2;
    }
    else
    {
      v71 = v18;
      v22 = HIDWORD(v18);
      v24 = DWORD2(v18);
      v21 = DWORD1(v18);
      v23 = v18;
    }
    v25 = (v19[16] & 2) == 0;
    v79 = v21;
    if ( v25 )
    {
LABEL_41:
      if ( (*(_BYTE *)(*(_QWORD *)(v73 + 40) + 16LL) & 4) == 0 )
        goto LABEL_52;
      if ( (unsigned int)Feature_Servicing_2108c_33766748__private_IsEnabled() )
      {
        v32 = WindowDpiLastNotify;
LABEL_49:
        DpiDependentMetric = GetDpiDependentMetric(1LL, v32);
        goto LABEL_51;
      }
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2288LL);
      }
      else
      {
        if ( WindowDpiLastNotify != 96 )
        {
          DpiCacheSlot = GetDpiCacheSlot(WindowDpiLastNotify);
          v32 = WindowDpiLastNotify;
          if ( DpiCacheSlot == -1 )
          {
            DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(1LL, WindowDpiLastNotify);
            goto LABEL_51;
          }
          goto LABEL_49;
        }
        DpiDependentMetric = *(_DWORD *)(gpsi + 2408LL);
      }
LABEL_51:
      v22 += DpiDependentMetric;
      HIDWORD(v71) = v22;
LABEL_52:
      v80 = *(_QWORD *)(v73 + 40);
      if ( !PtInRect(&v71, v72) )
      {
        WindowBordersForDpi = GetWindowBordersForDpi(
                                *(_DWORD *)(v35 + 28),
                                *(_DWORD *)(v35 + 24),
                                v35,
                                v36,
                                WindowDpiLastNotify);
        v38 = *(_DWORD **)(v73 + 40);
        v12 = WindowBordersForDpi + v38[22];
        v13 = v38[24] - WindowBordersForDpi;
        v14 = WindowBordersForDpi + v38[23];
        v39 = v38[25] - WindowBordersForDpi;
        v74 = v12;
        v76 = v13;
        v75 = v14;
        v77 = v39;
        if ( PtInRect(&v74, v8) )
        {
          v16 = HIDWORD(v72);
          if ( SHIDWORD(v72) < (int)v79 )
          {
            if ( (*(_BYTE *)(v15 + 30) & 0xC0) == 0xC0 )
              goto LABEL_106;
            if ( (*(_BYTE *)(v15 + 16) & 1) != 0 )
              return 5LL;
          }
          return 0LL;
        }
        v40 = *(_BYTE *)(v15 + 30);
        if ( (v40 & 4) == 0 )
        {
          if ( (*(_BYTE *)(v15 + 21) & 2) == 0 && (v40 & 0x40) == 0 && (*(_BYTE *)(v15 + 24) & 1) == 0 )
            return 0LL;
          return 18LL;
        }
        if ( *(char *)(v15 + 24) >= 0 )
        {
          if ( (unsigned int)Feature_Servicing_2108c_33766748__private_IsEnabled() )
          {
            v41 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
            v42 = 12LL;
            goto LABEL_62;
          }
          if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
          {
            v45 = *(_DWORD *)(gpsi + 2336LL);
          }
          else if ( WindowDpiLastNotify == 96 )
          {
            v45 = *(_DWORD *)(gpsi + 2456LL);
          }
          else
          {
            if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
              v49 = ScaleSystemMetricForDPIWithoutCache(13LL, WindowDpiLastNotify);
            else
              v49 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
            v45 = v49;
          }
          if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
          {
            v44 = *(_DWORD *)(gpsi + 2332LL);
            goto LABEL_94;
          }
          if ( WindowDpiLastNotify == 96 )
          {
            v44 = *(_DWORD *)(gpsi + 2452LL);
            goto LABEL_94;
          }
          v47 = GetDpiCacheSlot(WindowDpiLastNotify);
          v48 = 12LL;
        }
        else
        {
          if ( (unsigned int)Feature_Servicing_2108c_33766748__private_IsEnabled() )
          {
            v41 = GetDpiDependentMetric(24LL, WindowDpiLastNotify);
            v42 = 23LL;
LABEL_62:
            v43 = -v41;
            v44 = GetDpiDependentMetric(v42, WindowDpiLastNotify);
LABEL_95:
            v50 = -v44;
            v51 = v12 - v50;
            v52 = v50 + v13;
            v53 = v43 + v39;
            if ( SHIDWORD(v72) >= v14 - v43 )
            {
              v54 = 0;
              if ( SHIDWORD(v72) >= v53 )
                v54 = 6;
            }
            else
            {
              v54 = 3;
            }
            if ( v7 >= v51 )
            {
              if ( v7 >= v52 )
                v54 += 2;
            }
            else
            {
              ++v54;
            }
            return (unsigned int)(v54 + 9);
          }
          if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
          {
            v45 = *(_DWORD *)(gpsi + 2380LL);
          }
          else if ( WindowDpiLastNotify == 96 )
          {
            v45 = *(_DWORD *)(gpsi + 2500LL);
          }
          else
          {
            if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
              v46 = ScaleSystemMetricForDPIWithoutCache(24LL, WindowDpiLastNotify);
            else
              v46 = GetDpiDependentMetric(24LL, WindowDpiLastNotify);
            v45 = v46;
          }
          if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
          {
            v44 = *(_DWORD *)(gpsi + 2376LL);
LABEL_94:
            v43 = -v45;
            goto LABEL_95;
          }
          if ( WindowDpiLastNotify == 96 )
          {
            v44 = *(_DWORD *)(gpsi + 2496LL);
            goto LABEL_94;
          }
          v47 = GetDpiCacheSlot(WindowDpiLastNotify);
          v48 = 23LL;
        }
        if ( v47 == -1 )
          v44 = ScaleSystemMetricForDPIWithoutCache(v48, WindowDpiLastNotify);
        else
          v44 = GetDpiDependentMetric(v48, WindowDpiLastNotify);
        goto LABEL_94;
      }
      if ( (*(_BYTE *)(v35 + 25) & 2) != 0 )
      {
        LODWORD(v71) = v23 + 2;
        DWORD2(v71) = v24 - 2;
        DWORD1(v71) = v21 + 2;
        HIDWORD(v71) = v22 - 2;
        if ( !PtInRect(&v71, v8) )
          return 18LL;
      }
      v68 = *(_BYTE *)(v35 + 16);
      if ( (v68 & 4) == 0 || SHIDWORD(v72) < SHIDWORD(v78) )
        return 7LL;
      if ( (v68 & 2) != 0 )
      {
        v69 = SizeBoxHwnd(v73);
        if ( v7 >= SDWORD2(v78) )
        {
          v70 = v69 != 0 ? 0xD : 0;
          return (unsigned int)(v70 + 4);
        }
        if ( (*(_BYTE *)(v80 + 26) & 0x40) != 0 && v7 < (int)v78 )
        {
          v70 = v69 != 0 ? 0xC : 0;
          return (unsigned int)(v70 + 4);
        }
      }
      return 6LL;
    }
    if ( ((v20 ^ v19[26]) & 0x40) != 0 )
    {
      if ( (unsigned int)Feature_Servicing_2108c_33766748__private_IsEnabled() )
      {
        v26 = WindowDpiLastNotify;
LABEL_28:
        v27 = GetDpiDependentMetric(0LL, v26);
        goto LABEL_30;
      }
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
      {
        v27 = *(_DWORD *)(gpsi + 2284LL);
      }
      else
      {
        if ( WindowDpiLastNotify != 96 )
        {
          v28 = GetDpiCacheSlot(WindowDpiLastNotify);
          v26 = WindowDpiLastNotify;
          if ( v28 == -1 )
          {
            v27 = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
            goto LABEL_30;
          }
          goto LABEL_28;
        }
        v27 = *(_DWORD *)(gpsi + 2404LL);
      }
LABEL_30:
      v23 -= v27;
      LODWORD(v71) = v23;
      goto LABEL_41;
    }
    if ( (unsigned int)Feature_Servicing_2108c_33766748__private_IsEnabled() )
    {
      v29 = WindowDpiLastNotify;
LABEL_38:
      v30 = GetDpiDependentMetric(0LL, v29);
      goto LABEL_40;
    }
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v30 = *(_DWORD *)(gpsi + 2284LL);
    }
    else
    {
      if ( WindowDpiLastNotify != 96 )
      {
        v31 = GetDpiCacheSlot(WindowDpiLastNotify);
        v29 = WindowDpiLastNotify;
        if ( v31 == -1 )
        {
          v30 = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
          goto LABEL_40;
        }
        goto LABEL_38;
      }
      v30 = *(_DWORD *)(gpsi + 2404LL);
    }
LABEL_40:
    v24 += v30;
    DWORD2(v71) = v24;
    goto LABEL_41;
  }
  v11 = v9[3] - 4;
  v12 = *v9 + 4;
  v13 = v9[2] - 4;
  v14 = v9[1] + 4;
  v74 = v12;
  v76 = v13;
  v75 = v14;
  v77 = v11;
  if ( !PtInRect(&v74, v72) )
    return 2LL;
LABEL_106:
  if ( (*(_BYTE *)(v15 + 26) & 0x40) != 0 )
    v7 = *(_DWORD *)(v15 + 88) + *(_DWORD *)(v15 + 96) - v7;
  if ( v16 < v14 )
    return 2LL;
  if ( *(char *)(v15 + 24) >= 0 )
  {
    if ( (unsigned int)Feature_Servicing_2108c_33766748__private_IsEnabled() )
    {
      v55 = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
      v56 = 12LL;
      goto LABEL_112;
    }
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v65 = *(_DWORD *)(gpsi + 2292LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v65 = *(_DWORD *)(gpsi + 2412LL);
    }
    else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
    {
      v65 = ScaleSystemMetricForDPIWithoutCache(2LL, WindowDpiLastNotify);
    }
    else
    {
      v65 = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
    }
    v58 = v65 + v14;
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v61 = *(_DWORD *)(gpsi + 2332LL);
      goto LABEL_129;
    }
    if ( WindowDpiLastNotify == 96 )
    {
      v61 = *(_DWORD *)(gpsi + 2452LL);
      goto LABEL_129;
    }
    v62 = GetDpiCacheSlot(WindowDpiLastNotify);
    v56 = 12LL;
    goto LABEL_126;
  }
  if ( (unsigned int)Feature_Servicing_2108c_33766748__private_IsEnabled() )
  {
    v55 = GetDpiDependentMetric(22LL, WindowDpiLastNotify);
    v56 = 23LL;
LABEL_112:
    v57 = WindowDpiLastNotify;
    v58 = v55 + v14;
    goto LABEL_113;
  }
  if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v60 = *(_DWORD *)(gpsi + 2372LL);
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v60 = *(_DWORD *)(gpsi + 2492LL);
  }
  else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
  {
    v60 = ScaleSystemMetricForDPIWithoutCache(22LL, WindowDpiLastNotify);
  }
  else
  {
    v60 = GetDpiDependentMetric(22LL, WindowDpiLastNotify);
  }
  v58 = v60 + v14;
  if ( WindowDpiLastNotify != *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    if ( WindowDpiLastNotify == 96 )
    {
      v61 = *(_DWORD *)(gpsi + 2496LL);
      goto LABEL_129;
    }
    v62 = GetDpiCacheSlot(WindowDpiLastNotify);
    v56 = 23LL;
LABEL_126:
    v57 = WindowDpiLastNotify;
    if ( v62 == -1 )
    {
      v59 = ScaleSystemMetricForDPIWithoutCache(v56, WindowDpiLastNotify);
      goto LABEL_128;
    }
LABEL_113:
    v59 = GetDpiDependentMetric(v56, v57);
LABEL_128:
    v61 = v59;
    goto LABEL_129;
  }
  v61 = *(_DWORD *)(gpsi + 2376LL);
LABEL_129:
  if ( SHIDWORD(v72) >= v58 && (*(_BYTE *)(*(_QWORD *)(v73 + 40) + 16LL) & 1) != 0 )
    return 5LL;
  if ( v7 < v12 || v7 >= v13 || SHIDWORD(v72) >= v58 )
    return 2LL;
  v63 = *(_BYTE **)(v73 + 40);
  v64 = v63[30];
  if ( (v64 & 8) == 0 )
  {
    if ( (v63[21] & 2) != 0 )
      return 2LL;
    goto LABEL_153;
  }
  if ( v7 >= v12 + v61 )
  {
LABEL_153:
    v66 = v13 - v61;
    if ( v7 >= v66 )
      return 20LL;
    if ( (char)v63[24] < 0 )
      return 2LL;
    if ( (v64 & 3) != 0 )
    {
      v67 = v66 - v61;
      if ( v7 < v67 )
      {
        if ( v7 < v67 - v61 )
          return 2LL;
        return 8LL;
      }
      else
      {
        return 9LL;
      }
    }
    else
    {
      if ( (v63[25] & 4) == 0 || v7 < v66 - v61 )
        return 2LL;
      return 21LL;
    }
  }
  if ( !(unsigned int)HasCaptionIcon(v73) )
    return 2LL;
  return 3LL;
}

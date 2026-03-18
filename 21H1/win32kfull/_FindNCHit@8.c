/*
 * XREFs of _FindNCHit@8 @ 0xA9F04
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 *     _SizeBoxHwnd@4 @ 0x1B6D75 (_SizeBoxHwnd@4.c)
 */

int __fastcall FindNCHit(_DWORD *a1, int a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  INT v5; // ebx
  int WindowDpiLastNotify; // eax
  int v7; // eax
  int v8; // edi
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  _BYTE *v15; // edx
  unsigned __int8 v17; // al
  int v18; // esi
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  int DpiDependentMetric; // eax
  int v23; // esi
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v30; // ecx
  int v31; // eax
  int WindowBordersForDpiWithCompatFlags2; // ecx
  _DWORD *v33; // edx
  int v34; // eax
  char v35; // al
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // ebx
  int v42; // esi
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  _BYTE *v54; // eax
  char v55; // cl
  int v56; // esi
  int v57; // esi
  char v58; // al
  int v59; // eax
  int v60; // eax
  int v61; // [esp-4h] [ebp-5Ch]
  int v64; // [esp+Ch] [ebp-4Ch]
  int v65; // [esp+14h] [ebp-44h]
  int v66; // [esp+14h] [ebp-44h]
  int v67; // [esp+18h] [ebp-40h]
  int v68; // [esp+1Ch] [ebp-3Ch]
  int v69; // [esp+1Ch] [ebp-3Ch]
  int v70; // [esp+1Ch] [ebp-3Ch]
  int v71; // [esp+1Ch] [ebp-3Ch]
  int v72; // [esp+20h] [ebp-38h]
  int v73; // [esp+24h] [ebp-34h] BYREF
  int v74; // [esp+28h] [ebp-30h]
  int v75; // [esp+2Ch] [ebp-2Ch]
  int v76; // [esp+30h] [ebp-28h]
  int v77; // [esp+34h] [ebp-24h] BYREF
  int v78; // [esp+38h] [ebp-20h]
  int v79; // [esp+3Ch] [ebp-1Ch]
  int v80; // [esp+40h] [ebp-18h]
  int v81; // [esp+44h] [ebp-14h] BYREF
  int v82; // [esp+48h] [ebp-10h]
  int v83; // [esp+4Ch] [ebp-Ch]
  int v84; // [esp+50h] [ebp-8h]

  v78 = 0;
  v73 = 0;
  v68 = a1[5];
  v3 = v68;
  v74 = 0;
  v4 = *(_DWORD *)(v68 + 184);
  v75 = 0;
  v76 = 0;
  if ( (v4 & 0xF) == 3 )
  {
    v5 = (v4 >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v68 + 144) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    v3 = v68;
    v5 = WindowDpiLastNotify;
  }
  else if ( (v4 & 0xF) == 0 && (v7 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v7 + 4) + 32) & 1) != 0 )
  {
    v5 = 96;
  }
  else
  {
    v5 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
  }
  v8 = (__int16)a2;
  v67 = SHIWORD(a2);
  if ( !PtInRect((_DWORD *)(v3 + 52), (__int16)a2, SHIWORD(a2)) )
    return 0;
  if ( (*(_BYTE *)(v9 + 23) & 0x20) != 0 )
  {
    v72 = *v10 + 4;
    v11 = v10[2] - 4;
    v77 = v72;
    v12 = v10[1] + 4;
    v79 = v11;
    v65 = v12;
    v78 = v12;
    v80 = v10[3] - 4;
    if ( !PtInRect(&v77, v8, v67) )
      return 2;
    v14 = v67;
    goto LABEL_100;
  }
  v81 = *(_DWORD *)(v9 + 68);
  v82 = *(_DWORD *)(v9 + 72);
  v83 = *(_DWORD *)(v9 + 76);
  v84 = *(_DWORD *)(v9 + 80);
  v8 = (__int16)a2;
  if ( PtInRect(&v81, (__int16)a2, SHIWORD(a2)) )
    return 1;
  v17 = v15[17];
  if ( (v17 & 2) != 0 )
  {
    v75 = v83 + 2;
    v18 = v81 - 2;
    v73 = v81 - 2;
    v74 = v82 - 2;
    v76 = v84 + 2;
  }
  else
  {
    v73 = v81;
    v74 = v82;
    v75 = v83;
    v76 = v84;
    v8 = (__int16)a2;
    v18 = v81;
  }
  if ( (v15[8] & 2) != 0 )
  {
    v19 = ((v17 ^ v15[18]) & 0x40) == 0;
    v20 = *(unsigned __int16 *)(_gpsi + 6242);
    if ( v19 )
    {
      if ( v5 == v20 )
      {
        DpiDependentMetric = *(_DWORD *)(_gpsi + 1884);
      }
      else if ( v5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(_gpsi + 2004);
      }
      else if ( GetDpiCacheSlot(v5) == -1 )
      {
        DpiDependentMetric = _ScaleSystemMetricForDPIWithoutCache(0, v5);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(0, v5);
      }
      v75 += DpiDependentMetric;
    }
    else
    {
      if ( v5 == v20 )
      {
        v21 = *(_DWORD *)(_gpsi + 1884);
      }
      else if ( v5 == 96 )
      {
        v21 = *(_DWORD *)(_gpsi + 2004);
      }
      else if ( GetDpiCacheSlot(v5) == -1 )
      {
        v21 = _ScaleSystemMetricForDPIWithoutCache(0, v5);
      }
      else
      {
        v21 = GetDpiDependentMetric(0, v5);
      }
      v73 = v18 - v21;
    }
  }
  v23 = a1[5];
  if ( (*(_BYTE *)(v23 + 8) & 4) != 0 )
  {
    if ( v5 == *(unsigned __int16 *)(_gpsi + 6242) )
    {
      v24 = *(_DWORD *)(_gpsi + 1888);
    }
    else if ( v5 == 96 )
    {
      v24 = *(_DWORD *)(_gpsi + 2008);
    }
    else if ( GetDpiCacheSlot(v5) == -1 )
    {
      v24 = _ScaleSystemMetricForDPIWithoutCache(1, v5);
    }
    else
    {
      v24 = GetDpiDependentMetric(1, v5);
    }
    v76 += v24;
    v23 = a1[5];
  }
  if ( PtInRect(&v73, v8, v67) )
  {
    if ( (*(_BYTE *)(v23 + 17) & 2) != 0 )
    {
      v73 += 2;
      v75 -= 2;
      v74 += 2;
      v76 -= 2;
      if ( !PtInRect(&v73, v8, v25) )
        return 18;
    }
    v58 = *(_BYTE *)(v23 + 8);
    if ( (v58 & 4) == 0 || v25 < v84 )
      return 7;
    if ( (v58 & 2) != 0 )
    {
      v59 = SizeBoxHwnd(a1);
      if ( v8 >= v83 )
      {
        v60 = v59 != 0 ? 0xD : 0;
        return v60 + 4;
      }
      if ( (*(_BYTE *)(v23 + 18) & 0x40) != 0 && v8 < v81 )
      {
        v60 = v59 != 0 ? 0xC : 0;
        return v60 + 4;
      }
    }
    return 6;
  }
  v26 = *(_DWORD *)(v23 + 16);
  v27 = *(_DWORD *)(v23 + 20);
  v69 = v26;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
    v31 = *(_DWORD *)(ThreadWin32Thread + 352);
  else
    v31 = 0;
  WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(v27, v69, v30, 0, v5, v31);
  v33 = (_DWORD *)a1[5];
  v72 = WindowBordersForDpiWithCompatFlags2 + v33[13];
  v11 = v33[15] - WindowBordersForDpiWithCompatFlags2;
  v77 = v72;
  v34 = WindowBordersForDpiWithCompatFlags2 + v33[14];
  v79 = v11;
  v65 = v34;
  v78 = v34;
  v70 = v33[16] - WindowBordersForDpiWithCompatFlags2;
  v80 = v70;
  if ( PtInRect(&v77, v8, v67) )
  {
    v14 = v67;
    if ( v67 < v74 )
    {
      if ( (*(_BYTE *)(v13 + 22) & 0xC0) == 0xC0 )
      {
LABEL_100:
        if ( (*(_BYTE *)(v13 + 18) & 0x40) != 0 )
          v8 = *(_DWORD *)(v13 + 52) + *(_DWORD *)(v13 + 60) - v8;
        if ( v14 < v65 )
          return 2;
        v44 = *(unsigned __int16 *)(_gpsi + 6242);
        if ( *(char *)(v13 + 16) >= 0 )
        {
          if ( v5 == v44 )
          {
            v50 = *(_DWORD *)(_gpsi + 1892);
          }
          else if ( v5 == 96 )
          {
            v50 = *(_DWORD *)(_gpsi + 2012);
          }
          else
          {
            if ( GetDpiCacheSlot(v5) == -1 )
              v51 = _ScaleSystemMetricForDPIWithoutCache(2, v5);
            else
              v51 = GetDpiDependentMetric(2, v5);
            v50 = v51;
          }
          v49 = v50 + v65;
          v66 = v49;
          v71 = v49;
          if ( v5 == *(unsigned __int16 *)(_gpsi + 6242) )
          {
            v47 = *(_DWORD *)(_gpsi + 1932);
          }
          else if ( v5 == 96 )
          {
            v47 = *(_DWORD *)(_gpsi + 2052);
          }
          else
          {
            if ( GetDpiCacheSlot(v5) == -1 )
              v52 = _ScaleSystemMetricForDPIWithoutCache(12, v5);
            else
              v52 = GetDpiDependentMetric(12, v5);
            v49 = v71;
            v47 = v52;
          }
        }
        else
        {
          if ( v5 == v44 )
          {
            v45 = *(_DWORD *)(_gpsi + 1972);
          }
          else if ( v5 == 96 )
          {
            v45 = *(_DWORD *)(_gpsi + 2092);
          }
          else
          {
            if ( GetDpiCacheSlot(v5) == -1 )
              v46 = _ScaleSystemMetricForDPIWithoutCache(22, v5);
            else
              v46 = GetDpiDependentMetric(22, v5);
            v45 = v46;
          }
          v66 = v45 + v65;
          if ( v5 == *(unsigned __int16 *)(_gpsi + 6242) )
          {
            v47 = *(_DWORD *)(_gpsi + 1976);
          }
          else if ( v5 == 96 )
          {
            v47 = *(_DWORD *)(_gpsi + 2096);
          }
          else
          {
            if ( GetDpiCacheSlot(v5) == -1 )
              v48 = _ScaleSystemMetricForDPIWithoutCache(23, v5);
            else
              v48 = GetDpiDependentMetric(23, v5);
            v47 = v48;
          }
          v49 = v66;
        }
        v53 = v67;
        if ( v67 < v49 )
        {
LABEL_140:
          if ( v8 < v72 || v8 >= v11 || v53 >= v66 )
            return 2;
          v54 = (_BYTE *)a1[5];
          v55 = v54[22];
          if ( (v55 & 8) != 0 )
          {
            if ( v8 < v72 + v47 )
            {
              if ( _HasCaptionIcon(a1) )
                return 3;
              return 2;
            }
          }
          else if ( (v54[13] & 2) != 0 )
          {
            return 2;
          }
          v56 = v11 - v47;
          if ( v8 >= v56 )
            return 20;
          if ( (char)v54[16] >= 0 )
          {
            if ( (v55 & 3) != 0 )
            {
              v57 = v56 - v47;
              if ( v8 >= v57 )
                return 9;
              if ( v8 >= v57 - v47 )
                return 8;
            }
            else if ( (v54[17] & 4) != 0 && v8 >= v56 - v47 )
            {
              return 21;
            }
          }
          return 2;
        }
        if ( (*(_BYTE *)(a1[5] + 8) & 1) == 0 )
        {
          v53 = v67;
          goto LABEL_140;
        }
        return 5;
      }
      if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
        return 5;
    }
    return 0;
  }
  v35 = *(_BYTE *)(v13 + 22);
  if ( (v35 & 4) == 0 )
  {
    if ( (*(_BYTE *)(v13 + 13) & 2) == 0 && (v35 & 0x40) == 0 && (*(_BYTE *)(v13 + 16) & 1) == 0 )
      return 0;
    return 18;
  }
  v36 = *(unsigned __int16 *)(_gpsi + 6242);
  if ( *(char *)(v13 + 16) >= 0 )
  {
    if ( v5 == v36 )
    {
      v64 = *(_DWORD *)(_gpsi + 1936);
    }
    else
    {
      if ( v5 == 96 )
      {
        v39 = *(_DWORD *)(_gpsi + 2056);
      }
      else if ( GetDpiCacheSlot(v5) == -1 )
      {
        v39 = _ScaleSystemMetricForDPIWithoutCache(13, v5);
      }
      else
      {
        v39 = GetDpiDependentMetric(13, v5);
      }
      v64 = v39;
    }
    if ( v5 == *(unsigned __int16 *)(_gpsi + 6242) )
    {
      v38 = *(_DWORD *)(_gpsi + 1932);
    }
    else if ( v5 == 96 )
    {
      v38 = *(_DWORD *)(_gpsi + 2052);
    }
    else if ( GetDpiCacheSlot(v5) == -1 )
    {
      v38 = _ScaleSystemMetricForDPIWithoutCache(12, v5);
    }
    else
    {
      v38 = GetDpiDependentMetric(12, v5);
    }
  }
  else
  {
    if ( v5 == v36 )
    {
      v64 = *(_DWORD *)(_gpsi + 1980);
    }
    else
    {
      if ( v5 == 96 )
      {
        v37 = *(_DWORD *)(_gpsi + 2100);
      }
      else if ( GetDpiCacheSlot(v5) == -1 )
      {
        v37 = _ScaleSystemMetricForDPIWithoutCache(24, v5);
      }
      else
      {
        v37 = GetDpiDependentMetric(24, v5);
      }
      v64 = v37;
    }
    if ( v5 == *(unsigned __int16 *)(_gpsi + 6242) )
    {
      v38 = *(_DWORD *)(_gpsi + 1976);
    }
    else if ( v5 == 96 )
    {
      v38 = *(_DWORD *)(_gpsi + 2096);
    }
    else if ( GetDpiCacheSlot(v5) == -1 )
    {
      v38 = _ScaleSystemMetricForDPIWithoutCache(23, v5);
    }
    else
    {
      v38 = GetDpiDependentMetric(23, v5);
    }
  }
  v40 = -v38;
  v41 = v72 - v40;
  v42 = v40 + v11;
  if ( v67 >= v65 + v64 )
  {
    if ( v67 < v70 - v64 )
    {
      v43 = 0;
      goto LABEL_93;
    }
    v61 = 6;
  }
  else
  {
    v61 = 3;
  }
  v43 = v61;
LABEL_93:
  if ( v8 >= v41 )
  {
    if ( v8 >= v42 )
      v43 += 2;
  }
  else
  {
    ++v43;
  }
  return v43 + 9;
}

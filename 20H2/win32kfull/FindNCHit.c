/*
 * XREFs of FindNCHit @ 0x1C0119040
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C005C5D8 (_HasCaptionIcon.c)
 *     GetWindowBordersForDpi @ 0x1C00C7CA0 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     SizeBoxHwnd @ 0x1C025CF6C (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  int v4; // r15d
  int v5; // ecx
  unsigned int WindowDpiLastNotify; // esi
  int v7; // r14d
  unsigned __int64 v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int128 v11; // xmm6
  _BYTE *v12; // r8
  __int64 v14; // rax
  int v15; // eax
  int v16; // edi
  int v17; // r12d
  __int64 v18; // r8
  int v19; // r10d
  unsigned __int8 v20; // r9
  __int64 v21; // r12
  int v22; // edi
  bool v23; // zf
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r9
  int WindowBordersForDpi; // eax
  _DWORD *v29; // r8
  int v30; // r12d
  int v31; // ecx
  unsigned __int8 v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  int v35; // ebx
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rcx
  int DpiDependentMetric; // r9d
  _BYTE *v40; // rdx
  char v41; // r8
  int v42; // edi
  int v43; // edi
  char v44; // al
  __int64 v45; // rax
  int v46; // eax
  __int128 v47; // [rsp+38h] [rbp-39h] BYREF
  int v48; // [rsp+48h] [rbp-29h]
  __int64 v49; // [rsp+50h] [rbp-21h]
  unsigned __int64 v50; // [rsp+58h] [rbp-19h]
  int v51; // [rsp+60h] [rbp-11h] BYREF
  int v52; // [rsp+64h] [rbp-Dh]
  int v53; // [rsp+68h] [rbp-9h]
  int v54; // [rsp+6Ch] [rbp-5h]
  __int128 v55; // [rsp+78h] [rbp+7h] BYREF
  __int64 v56; // [rsp+88h] [rbp+17h]

  v2 = *(_DWORD **)(a1 + 40);
  v52 = 0;
  v4 = 3;
  v47 = 0LL;
  v5 = v2[72] & 0xF;
  if ( v5 == 3 )
  {
    WindowDpiLastNotify = (v2[72] >> 8) & 0x1FF;
  }
  else if ( (v2[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( !v5
         && (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v14 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
  }
  v7 = (__int16)a2;
  HIDWORD(v50) = SHIWORD(a2);
  LODWORD(v50) = (__int16)a2;
  v8 = v50;
  if ( !PtInRect(v2 + 22, v50) )
    return 0LL;
  if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
  {
    v15 = v9[3] - 4;
    v16 = v9[2] - 4;
    v17 = v9[1] + 4;
    v48 = *v9 + 4;
    v51 = v48;
    v53 = v16;
    v52 = v17;
    v54 = v15;
    if ( !PtInRect(&v51, v50) )
      return 2LL;
LABEL_47:
    if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
      v7 = *(_DWORD *)(v18 + 88) + *(_DWORD *)(v18 + 96) - v7;
    if ( v19 >= v17 )
    {
      if ( *(char *)(v18 + 24) >= 0 )
      {
        v37 = 12;
        v38 = 2LL;
      }
      else
      {
        v37 = 23;
        v38 = 22LL;
      }
      LODWORD(v49) = v17 + GetDpiDependentMetric(v38, WindowDpiLastNotify);
      DpiDependentMetric = GetDpiDependentMetric(v37, WindowDpiLastNotify);
      if ( SHIDWORD(v50) >= (int)v49 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 1) != 0 )
        return 5LL;
      if ( v7 >= v48 && v7 < v16 && SHIDWORD(v50) < (int)v49 )
      {
        v40 = *(_BYTE **)(a1 + 40);
        v41 = v40[30];
        if ( (v41 & 8) != 0 )
        {
          if ( v7 < DpiDependentMetric + v48 )
          {
            if ( (unsigned int)HasCaptionIcon(a1) )
              return 3LL;
            return 2LL;
          }
        }
        else if ( (v40[21] & 2) != 0 )
        {
          return 2LL;
        }
        v42 = v16 - DpiDependentMetric;
        if ( v7 >= v42 )
          return 20LL;
        if ( (char)v40[24] >= 0 )
        {
          if ( (v41 & 3) != 0 )
          {
            v43 = v42 - DpiDependentMetric;
            if ( v7 >= v43 )
              return 9LL;
            if ( v7 >= v43 - DpiDependentMetric )
              return 8LL;
          }
          else if ( (v40[25] & 4) != 0 && v7 >= v42 - DpiDependentMetric )
          {
            return 21LL;
          }
        }
      }
    }
    return 2LL;
  }
  v11 = *(_OWORD *)(v10 + 104);
  v55 = v11;
  if ( PtInRect(&v55, v50) )
    return 1LL;
  v20 = v12[25];
  if ( (v20 & 2) != 0 )
  {
    v21 = (unsigned int)(DWORD1(v55) - 2);
    DWORD1(v47) = DWORD1(v55) - 2;
    LODWORD(v47) = v55 - 2;
    v22 = HIDWORD(v55) + 2;
    HIDWORD(v47) = HIDWORD(v55) + 2;
    DWORD2(v47) = DWORD2(v55) + 2;
  }
  else
  {
    v47 = v11;
    v22 = HIDWORD(v11);
    v21 = DWORD1(v11);
  }
  v23 = (v12[16] & 2) == 0;
  v56 = v21;
  if ( !v23 )
  {
    if ( ((v20 ^ v12[26]) & 0x40) != 0 )
      LODWORD(v47) = v47 - GetDpiDependentMetric(0LL, WindowDpiLastNotify);
    else
      DWORD2(v47) += GetDpiDependentMetric(0LL, WindowDpiLastNotify);
  }
  v49 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v49 + 16) & 4) != 0 )
  {
    v24 = GetDpiDependentMetric(1LL, WindowDpiLastNotify);
    v25 = *(_QWORD *)(a1 + 40);
    v22 += v24;
    HIDWORD(v47) = v22;
    v49 = v25;
  }
  if ( PtInRect(&v47, v50) )
  {
    if ( (*(_BYTE *)(v26 + 25) & 2) != 0 )
    {
      LODWORD(v47) = v47 + 2;
      DWORD2(v47) -= 2;
      DWORD1(v47) = v21 + 2;
      HIDWORD(v47) = v22 - 2;
      if ( !PtInRect(&v47, v8) )
        return 18LL;
    }
    v44 = *(_BYTE *)(v26 + 16);
    if ( (v44 & 4) == 0 || SHIDWORD(v50) < SHIDWORD(v55) )
      return 7LL;
    if ( (v44 & 2) != 0 )
    {
      v45 = SizeBoxHwnd(a1);
      if ( v7 >= SDWORD2(v55) )
      {
        v46 = v45 != 0 ? 0xD : 0;
        return (unsigned int)(v46 + 4);
      }
      if ( (*(_BYTE *)(v49 + 26) & 0x40) != 0 && v7 < (int)v55 )
      {
        v46 = v45 != 0 ? 0xC : 0;
        return (unsigned int)(v46 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v26 + 28),
                          *(_DWORD *)(v26 + 24),
                          v26,
                          v27,
                          WindowDpiLastNotify);
  v29 = *(_DWORD **)(a1 + 40);
  v30 = v29[23];
  v16 = v29[24] - WindowBordersForDpi;
  v51 = WindowBordersForDpi + v29[22];
  v17 = WindowBordersForDpi + v30;
  v48 = v51;
  v31 = v29[25] - WindowBordersForDpi;
  v53 = v16;
  v54 = v31;
  LODWORD(v49) = v31;
  v52 = v17;
  if ( PtInRect(&v51, v8) )
  {
    v19 = HIDWORD(v50);
    if ( SHIDWORD(v50) >= (int)v56 )
      return 0LL;
    if ( (*(_BYTE *)(v18 + 30) & 0xC0) != 0xC0 )
    {
      if ( (*(_BYTE *)(v18 + 16) & 1) != 0 )
        return 5LL;
      return 0LL;
    }
    goto LABEL_47;
  }
  v32 = *(_BYTE *)(v18 + 30);
  if ( (v32 & 4) == 0 )
  {
    if ( ((unsigned __int8)~(v32 >> 6) & (unsigned __int8)~(*(_BYTE *)(v18 + 21) >> 1) & 1) != 0
      && (*(_BYTE *)(v18 + 24) & 1) == 0 )
    {
      return 0LL;
    }
    return 18LL;
  }
  if ( *(char *)(v18 + 24) >= 0 )
  {
    v33 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
    v34 = 12LL;
  }
  else
  {
    v33 = GetDpiDependentMetric(24LL, WindowDpiLastNotify);
    v34 = 23LL;
  }
  v35 = -v33;
  v36 = -(int)GetDpiDependentMetric(v34, WindowDpiLastNotify);
  if ( SHIDWORD(v50) >= v17 - v35 )
  {
    v4 = 0;
    if ( SHIDWORD(v50) >= v35 + (int)v49 )
      v4 = 6;
  }
  if ( v7 >= v48 - v36 )
  {
    if ( v7 >= v16 + v36 )
      v4 += 2;
  }
  else
  {
    ++v4;
  }
  return (unsigned int)(v4 + 9);
}

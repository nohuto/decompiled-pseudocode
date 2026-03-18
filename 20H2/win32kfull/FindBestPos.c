/*
 * XREFs of FindBestPos @ 0x1C024A110
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F6A50 (NtUserCalculatePopupWindowPosition.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C024A020 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorMenuRect @ 0x1C025D40C (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025D450 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  unsigned int **v12; // rax
  __int128 v14; // xmm6
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 *MonitorRectForWindow; // rax
  unsigned int *v18; // rcx
  const struct tagWND *v19; // r14
  __int64 v20; // rdx
  unsigned int *v21; // rcx
  __int64 v22; // r8
  BOOL v23; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v25; // rax
  __int128 v26; // xmm0
  unsigned int **v27; // rax
  int v28; // ecx
  int v29; // r15d
  int v30; // r14d
  bool v31; // cf
  int v32; // r8d
  int v33; // ecx
  int v34; // r15d
  __int64 v35; // r14
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int *v39; // rcx
  unsigned int v40; // eax
  __int128 v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+50h] [rbp-B0h]
  struct tagMONITOR *v44; // [rsp+58h] [rbp-A8h]
  struct tagPOINT v45; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v46; // [rsp+68h] [rbp-98h] BYREF
  __int128 v47; // [rsp+80h] [rbp-80h] BYREF
  char v48[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-50h] BYREF
  char v51[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v53; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v54; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v55; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v56[4]; // [rsp+110h] [rbp+10h]

  v45 = 0LL;
  v12 = *a7;
  v44 = a8;
  v46 = 0LL;
  if ( *v12 )
  {
    v18 = **a7;
    if ( *((_QWORD *)v18 + 7) )
      v19 = (const struct tagWND *)*((_QWORD *)v18 + 7);
    else
      v19 = (const struct tagWND *)*((_QWORD *)v18 + 2);
    v55 = *(_OWORD *)GetMonitorMenuRectForWindow(v51, v44, v19);
    v14 = *GetMonitorWorkRectForWindow(&v52, (__int64)v44, v19);
    v47 = v14;
    MonitorRectForWindow = GetMonitorRectForWindow(&v53, (__int64)v44, v19);
  }
  else
  {
    v55 = *(_OWORD *)GetMonitorMenuRect(v48, a8);
    v14 = *GetMonitorWorkRect(&v49, (__int64)a8);
    v47 = v14;
    MonitorRectForWindow = GetMonitorRect(&v50, (__int64)a8, v15, v16);
  }
  v54 = *MonitorRectForWindow;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_12;
  if ( PtInRect(&v47, a9) )
  {
    if ( !**a7 || (v21 = **a7, (*v21 & 0x10000000) == 0) )
    {
      v14 = v47;
LABEL_12:
      v42 = v14;
      goto LABEL_13;
    }
  }
  if ( **a7 )
  {
    v23 = ***a7 >> 31;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v20, v22);
    if ( CurrentProcessWin32Process )
      v23 = (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) == 0;
    else
      v23 = 0;
  }
  v25 = &v54;
  if ( v23 )
    v25 = &v55;
  v26 = *v25;
  v27 = *a7;
  v42 = v26;
  if ( *v27 )
    ***a7 |= 0x10000000u;
LABEL_13:
  if ( a5 )
  {
    v46 = *a5;
    IntersectRect(&v46, &v46.left, (int *)&v42);
  }
  else
  {
    v46.left = a1;
    v46.top = a2;
    v46.right = a1;
    v46.bottom = a2;
  }
  if ( a1 + a3 > SDWORD2(v42) )
  {
    a1 = DWORD2(v42) - a3;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < (int)v42 )
  {
    a1 = v42;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  v43 = a6 & 8;
  if ( (a6 & 8) != 0 && a1 + a3 > SDWORD2(v42) )
    a1 = DWORD2(v42) - a3;
  v28 = HIDWORD(v42);
  if ( a4 + a2 > SHIDWORD(v42) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SDWORD1(v42) || a2 >= SHIDWORD(v42) )
      a2 = HIDWORD(v42) - a4;
    else
      a2 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
    v28 = HIDWORD(v42);
  }
  if ( a2 < SDWORD1(v42) )
  {
    a2 = DWORD1(v42);
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    v28 = HIDWORD(v42);
  }
  v29 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a4 + a2 > v28 && (a6 & 0x20000) != 0 )
    a2 = v28 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, a3, a4, &v46, &v45, v44) )
  {
    v30 = a6 & 0x40;
    v31 = v43 != 0;
    v43 = -v43;
    v32 = v31 ? 0 : 2;
    *(unsigned int *)((char *)v56 + (v30 != 0 ? 8 : 0)) = v32;
    *(unsigned int *)((char *)&v56[1] + (v30 != 0 ? 8 : 0)) = 2 - v32;
    *(unsigned int *)((char *)v56 + (v30 == 0 ? 8 : 0)) = v29 != 0 ? 1 : 3;
    v33 = v29 != 0 ? 3 : 1;
    v34 = 0;
    v35 = 0LL;
    *(unsigned int *)((char *)&v56[3] + (-(__int64)((a6 & 0x40) != 0) & 0xFFFFFFFFFFFFFFF8uLL)) = v33;
    while ( !(unsigned int)TryRect(v56[v35], a1, a2, a3, a4, &v46, &v45, v44) )
    {
      ++v34;
      if ( ++v35 >= 4 )
        return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
    }
    if ( !**a7 )
      goto LABEL_70;
    v36 = v56[v34];
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          if ( v38 != 1 )
          {
LABEL_70:
            LOWORD(a1) = v45.x;
            LOWORD(a2) = v45.y;
            return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
          }
          v39 = **a7;
          v40 = *v39 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v39 = **a7;
          v40 = *v39 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v39 = **a7;
        v40 = *v39 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v39 = **a7;
      v40 = *v39 & 0xF07FFFFF | 0x1000000;
    }
    *v39 = v40;
    goto LABEL_70;
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}

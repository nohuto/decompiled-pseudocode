/*
 * XREFs of _FindBestPos@40 @ 0x1A7CE6
 * Callers:
 *     _NtUserCalculatePopupWindowPosition@20 @ 0x15FC6D (_NtUserCalculatePopupWindowPosition@20.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TryRect@@YGHIHHHHPAUtagRECT@@PAUtagPOINT@@PAUtagMONITOR@@@Z @ 0x1A7C3C (-TryRect@@YGHIHHHHPAUtagRECT@@PAUtagPOINT@@PAUtagMONITOR@@@Z.c)
 *     _GetMonitorMenuRect@4 @ 0x1B71FD (_GetMonitorMenuRect@4.c)
 *     _GetMonitorMenuRectForWindow@8 @ 0x1B722C (_GetMonitorMenuRectForWindow@8.c)
 */

int __fastcall FindBestPos(
        int a1,
        signed int a2,
        int a3,
        int a4,
        int *a5,
        unsigned int a6,
        unsigned int ***a7,
        struct tagRECT *a8,
        int a9,
        int a10)
{
  int *MonitorMenuRect; // eax
  int *MonitorWorkRect; // eax
  _DWORD *MonitorRectForWindow; // eax
  unsigned int *v13; // eax
  _DWORD *v14; // eax
  int *MonitorMenuRectForWindow; // eax
  int *MonitorWorkRectForWindow; // eax
  BOOL v17; // eax
  int CurrentProcessWin32Process; // eax
  int *v19; // esi
  unsigned int **v20; // eax
  signed int *v21; // esi
  unsigned int *v22; // eax
  signed int v23; // esi
  int v24; // edi
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  unsigned int *v29; // ecx
  unsigned int v30; // eax
  struct tagPOINT *v32; // [esp+0h] [ebp-F0h]
  struct tagPOINT *v33; // [esp+0h] [ebp-F0h]
  struct tagMONITOR *v34; // [esp+4h] [ebp-ECh]
  struct tagMONITOR *v35; // [esp+4h] [ebp-ECh]
  unsigned int v37; // [esp+Ch] [ebp-E4h]
  unsigned int v38; // [esp+Ch] [ebp-E4h]
  int v39; // [esp+14h] [ebp-DCh]
  int v40; // [esp+14h] [ebp-DCh]
  _DWORD *v41; // [esp+18h] [ebp-D8h]
  int v42; // [esp+1Ch] [ebp-D4h] BYREF
  signed int v43; // [esp+20h] [ebp-D0h]
  int v44; // [esp+24h] [ebp-CCh]
  signed int v45; // [esp+28h] [ebp-C8h]
  int v46; // [esp+2Ch] [ebp-C4h]
  int v47; // [esp+30h] [ebp-C0h] BYREF
  int v48; // [esp+34h] [ebp-BCh]
  int v49; // [esp+38h] [ebp-B8h] BYREF
  int v50; // [esp+3Ch] [ebp-B4h]
  int v51; // [esp+40h] [ebp-B0h]
  int v52; // [esp+44h] [ebp-ACh]
  int v53; // [esp+48h] [ebp-A8h] BYREF
  signed int v54; // [esp+4Ch] [ebp-A4h]
  int v55; // [esp+50h] [ebp-A0h]
  signed int v56; // [esp+54h] [ebp-9Ch]
  char v57[16]; // [esp+58h] [ebp-98h] BYREF
  int v58[4]; // [esp+68h] [ebp-88h] BYREF
  int v59[4]; // [esp+78h] [ebp-78h] BYREF
  char v60[16]; // [esp+88h] [ebp-68h] BYREF
  int v61[4]; // [esp+98h] [ebp-58h] BYREF
  int v62[5]; // [esp+A8h] [ebp-48h] BYREF
  int v63; // [esp+BCh] [ebp-34h] BYREF
  int v64; // [esp+C0h] [ebp-30h]
  int v65; // [esp+C4h] [ebp-2Ch]
  int v66; // [esp+C8h] [ebp-28h]
  _DWORD v67[6]; // [esp+CCh] [ebp-24h] BYREF
  _BYTE v68[4]; // [esp+E4h] [ebp-Ch]
  _BYTE v69[4]; // [esp+E8h] [ebp-8h]

  v49 = 0;
  v46 = a1;
  v50 = 0;
  v47 = 0;
  v48 = 0;
  v51 = 0;
  v52 = 0;
  if ( **a7 )
  {
    v13 = **a7;
    if ( v13[7] )
      v14 = (_DWORD *)v13[7];
    else
      v14 = (_DWORD *)v13[2];
    v41 = v14;
    MonitorMenuRectForWindow = (int *)GetMonitorMenuRectForWindow(a8, v14, v60);
    v63 = *MonitorMenuRectForWindow;
    v64 = MonitorMenuRectForWindow[1];
    v65 = MonitorMenuRectForWindow[2];
    v66 = MonitorMenuRectForWindow[3];
    MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((int)a8, v41, v61);
    v53 = *MonitorWorkRectForWindow;
    v54 = MonitorWorkRectForWindow[1];
    v55 = MonitorWorkRectForWindow[2];
    v56 = MonitorWorkRectForWindow[3];
    MonitorRectForWindow = GetMonitorRectForWindow(v62);
  }
  else
  {
    MonitorMenuRect = (int *)GetMonitorMenuRect(a8, v57);
    v63 = *MonitorMenuRect;
    v64 = MonitorMenuRect[1];
    v65 = MonitorMenuRect[2];
    v66 = MonitorMenuRect[3];
    MonitorWorkRect = GetMonitorWorkRect(a8, v58);
    v53 = *MonitorWorkRect;
    v54 = MonitorWorkRect[1];
    v55 = MonitorWorkRect[2];
    v56 = MonitorWorkRect[3];
    MonitorRectForWindow = GetMonitorRect(a8, v59);
  }
  v67[0] = *MonitorRectForWindow;
  v67[1] = MonitorRectForWindow[1];
  v67[2] = MonitorRectForWindow[2];
  v67[3] = MonitorRectForWindow[3];
  if ( (a6 & 0x10000) != 0 || PtInRect(&v53, a9, a10) && (!**a7 || (***a7 & 0x10000000) == 0) )
  {
    v42 = v53;
    v43 = v54;
    v44 = v55;
    v45 = v56;
  }
  else
  {
    if ( **a7 )
    {
      v17 = ***a7 >> 31;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
        v17 = (*(_BYTE *)(CurrentProcessWin32Process + 464) & 0x30) == 0;
      else
        v17 = 0;
    }
    v19 = &v63;
    if ( !v17 )
      v19 = v67;
    v20 = *a7;
    v42 = *v19;
    v21 = v19 + 1;
    v22 = *v20;
    v43 = *v21++;
    v44 = *v21;
    v45 = v21[1];
    if ( v22 )
      ***a7 |= 0x10000000u;
  }
  if ( a5 )
  {
    v49 = *a5;
    v50 = a5[1];
    v51 = a5[2];
    v52 = a5[3];
    IntersectRect(&v49, &v49, &v42);
    v23 = a2;
    v24 = v46;
  }
  else
  {
    v24 = v46;
    v23 = a2;
    v49 = v46;
    v50 = a2;
    v51 = v46;
    v52 = a2;
  }
  if ( v24 + a3 > v44 )
  {
    v24 = v44 - a3;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( v24 < v42 )
  {
    v24 = v42;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  v39 = a6 & 8;
  if ( (a6 & 8) != 0 && v24 + a3 > v44 )
    v24 = v44 - a3;
  v25 = v45;
  if ( v23 + a4 > v45 )
  {
    if ( (a6 & 0x20010) != 0 || v23 - a4 < v43 || v23 >= v45 )
      v23 = v45 - a4;
    else
      v23 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
    v25 = v45;
  }
  if ( v23 < v43 )
  {
    v23 = v43;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    v25 = v45;
  }
  v37 = a6 & 0x20;
  v26 = a4;
  if ( (a6 & 0x20) != 0 )
  {
    v26 = a4;
    if ( v23 + a4 > v25 && ((unsigned int)&loc_20000 & a6) != 0 )
      v23 = v25 - a4;
  }
  if ( !TryRect(v24, 4, v23, a3, v26, &v49, &v47, a8, v32, v34) )
  {
    v27 = (a6 >> 3) & 8;
    *(_DWORD *)((char *)&v67[4] + v27) = v39 != 0 ? 0 : 2;
    *(_DWORD *)((char *)&v67[5] + v27) = -(v39 != 0 ? 0xFFFFFFFE : 0);
    *(_DWORD *)&v68[-v27] = 2 * (v37 == 0) + 1;
    *(_DWORD *)&v69[-v27] = 2 * (v37 != 0) + 1;
    v28 = 0;
    v38 = 0;
    while ( 1 )
    {
      v40 = v67[v28 + 4];
      if ( TryRect(v24, v40, v23, a3, a4, &v49, &v47, a8, v33, v35) )
        break;
      v28 = v38 + 1;
      v38 = v28;
      if ( v28 >= 4 )
        return (unsigned __int16)v24 | ((unsigned __int16)v23 << 16);
    }
    if ( !**a7 )
      goto LABEL_69;
    if ( v40 )
    {
      switch ( v40 )
      {
        case 1:
          v29 = **a7;
          v30 = *v29 & 0xF07FFFFF | 0x4000000;
          break;
        case 2:
          v29 = **a7;
          v30 = *v29 & 0xF07FFFFF | 0x800000;
          break;
        case 3:
          v29 = **a7;
          v30 = *v29 & 0xF07FFFFF | 0x2000000;
          break;
        default:
LABEL_69:
          LOWORD(v24) = v47;
          LOWORD(v23) = v48;
          return (unsigned __int16)v24 | ((unsigned __int16)v23 << 16);
      }
    }
    else
    {
      v29 = **a7;
      v30 = *v29 & 0xF07FFFFF | 0x1000000;
    }
    *v29 = v30;
    goto LABEL_69;
  }
  return (unsigned __int16)v24 | ((unsigned __int16)v23 << 16);
}

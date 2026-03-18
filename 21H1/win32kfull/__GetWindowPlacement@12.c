/*
 * XREFs of __GetWindowPlacement@12 @ 0xB456C
 * Callers:
 *     _NtUserGetWindowPlacement@8 @ 0xB44BE (_NtUserGetWindowPlacement@8.c)
 *     _NtUserGetInternalWindowPos@12 @ 0x16344D (_NtUserGetInternalWindowPos@12.c)
 * Callees:
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _UpdateCheckpoint@4 @ 0xB4838 (_UpdateCheckpoint@4.c)
 *     _CkptUpdate@12 @ 0xB48F4 (_CkptUpdate@12.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     _CkptInit@8 @ 0xB4EF2 (_CkptInit@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall _GetWindowPlacement(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  _DWORD *updated; // edi
  char v6; // al
  PKTHREAD CurrentThread; // eax
  PKTHREAD v8; // eax
  unsigned int v9; // esi
  int v10; // esi
  int v11; // eax
  _BYTE *v12; // ecx
  _DWORD *v13; // esi
  _DWORD *v14; // edx
  int *MonitorWorkRect; // eax
  int *MonitorRect; // eax
  _BYTE *v17; // edx
  bool v18; // zf
  int v19; // ecx
  int v20; // edi
  int v21; // edi
  int v22; // ecx
  int v23; // ecx
  const void *Prop; // eax
  int v26; // ecx
  _BYTE *v27; // [esp+Ch] [ebp-7Ch]
  int v29; // [esp+14h] [ebp-74h]
  int *v30; // [esp+18h] [ebp-70h]
  int v32; // [esp+20h] [ebp-68h] BYREF
  int v33; // [esp+24h] [ebp-64h]
  int v34; // [esp+28h] [ebp-60h]
  int v35; // [esp+2Ch] [ebp-5Ch]
  _BYTE v36[16]; // [esp+30h] [ebp-58h] BYREF
  int v37; // [esp+40h] [ebp-48h] BYREF
  int v38; // [esp+44h] [ebp-44h]
  int v39; // [esp+48h] [ebp-40h]
  int v40; // [esp+4Ch] [ebp-3Ch]
  _BYTE v41[52]; // [esp+50h] [ebp-38h] BYREF

  v3 = a2;
  v4 = a1;
  memset(v41, 0, sizeof(v41));
  if ( (*(_BYTE *)(_HMPheFromObject(v4) + 13) & 1) != 0 )
    return 0;
  if ( !a3 )
  {
    Prop = (const void *)_GetProp((int)v4, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
    if ( Prop )
    {
      qmemcpy(v41, Prop, sizeof(v41));
      v3 = a2;
      updated = v41;
      v27 = v41;
    }
    else
    {
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      updated = v41;
      v27 = v41;
      GetRect((int)v4, &v37, 66);
      CkptInit(&v37, v41);
      CkptUpdate(v4, v26, v41);
    }
    goto LABEL_4;
  }
  updated = (_DWORD *)UpdateCheckpoint(v4);
  v27 = updated;
  if ( !updated )
    return 0;
LABEL_4:
  v6 = *(_BYTE *)(v4[5] + 23);
  if ( (v6 & 0x20) != 0 )
    v3[2] = 2;
  else
    v3[2] = (2 * (v6 & 1)) | 1;
  v30 = v3 + 7;
  v3[7] = *updated;
  v3[8] = updated[1];
  v3[9] = updated[2];
  v3[10] = updated[3];
  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) != 0
    || (v8 = KeGetCurrentThread(), (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v8) + 260) + 148) & 0x20) != 0)
    || (v9 = *(_DWORD *)(v4[5] + 184),
        (((v9 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) == 0)
    && ((*(_DWORD *)(v4[5] + 184) & 0xF) == 2 && (*(_DWORD *)(v4[5] + 184) & 0x20000000) != 0 ? (v10 = 1) : (v10 = 0),
        (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
     && (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0
      ? (v11 = 1)
      : (v11 = 0),
        v10 == v11) )
  {
    v29 = 0;
  }
  else
  {
    v29 = 1;
    TransformRectBetweenCoordinateSpaces(v30, v30, 0, v4);
  }
  v12 = v27;
  v13 = a2;
  v14 = a2 + 3;
  if ( (v27[48] & 0x20) != 0 )
  {
    *v14 = *((_DWORD *)v27 + 8);
    a2[4] = *((_DWORD *)v27 + 9);
    if ( v29 )
    {
      TransformPointBetweenCoordinateSpaces(v14, v14, 0, v4);
      v12 = v27;
    }
  }
  else
  {
    a2[4] = -1;
    *v14 = -1;
  }
  if ( (v12[48] & 0x40) == 0 || (*(_BYTE *)(v4[5] + 11) & 0x40) != 0 )
  {
    a2[6] = -1;
    a2[5] = -1;
  }
  else
  {
    a2[5] = *((_DWORD *)v12 + 10);
    a2[6] = *((_DWORD *)v12 + 11);
    if ( v29 )
      TransformPointBetweenCoordinateSpaces(a2 + 5, a2 + 5, 0, v4);
  }
  if ( v4[14] == _GetDesktopWindow(v4) && *(char *)(v4[5] + 16) >= 0 )
  {
    _MonitorFromRect(v30, 1, 0);
    MonitorWorkRect = (int *)GetMonitorWorkRect(&v32);
    v37 = *MonitorWorkRect;
    v38 = MonitorWorkRect[1];
    v39 = MonitorWorkRect[2];
    v40 = MonitorWorkRect[3];
    MonitorRect = (int *)GetMonitorRect(v36);
    v17 = v27;
    v18 = (v27[48] & 0x20) == 0;
    v32 = *MonitorRect;
    v33 = MonitorRect[1];
    v34 = MonitorRect[2];
    v35 = MonitorRect[3];
    v19 = v33;
    v20 = v32;
    v13 = a2;
    if ( !v18 )
    {
      a2[3] += v32 - v37;
      a2[4] += v19 - v38;
    }
    v21 = v20 - v37;
    v22 = v19 - v38;
    a2[7] += v21;
    a2[9] += v21;
    a2[10] += v22;
    a2[8] += v22;
    v4 = a1;
  }
  else
  {
    v17 = v27;
  }
  v23 = 0;
  v13[1] = 0;
  if ( (*(_BYTE *)(v4[5] + 23) & 0xC0) == 0x40 && (v17[48] & 1) != 0 )
  {
    v13[1] = 1;
    v23 = 1;
  }
  if ( (v17[48] & 2) != 0 || (*(_BYTE *)(v4[5] + 23) & 1) != 0 )
    v13[1] = v23 | 2;
  *v13 = 44;
  return 1;
}

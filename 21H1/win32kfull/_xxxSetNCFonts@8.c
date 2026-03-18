/*
 * XREFs of _xxxSetNCFonts@8 @ 0xDA4C2
 * Callers:
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     __GetTextMetricsW@8 @ 0x8440E (__GetTextMetricsW@8.c)
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _InvalidateKMDpiMetricsCacheDPIMETRICS@0 @ 0xDA4B0 (_InvalidateKMDpiMetricsCacheDPIMETRICS@0.c)
 *     _UserSetAltScaleFont@8 @ 0xDAC76 (_UserSetAltScaleFont@8.c)
 *     _UserSetFont@16 @ 0xDAD12 (_UserSetFont@16.c)
 *     ?GetLogFontFromUserProfile@@YG?AUtagLOGFONTW@@PAU_UNICODE_STRING@@I@Z @ 0xDAE42 (-GetLogFontFromUserProfile@@YG-AUtagLOGFONTW@@PAU_UNICODE_STRING@@I@Z.c)
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     _UpdateDpiMetricsCacheDPISERVERINFO@0 @ 0xDB010 (_UpdateDpiMetricsCacheDPISERVERINFO@0.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xxxSetNCFonts(int a1, int a2)
{
  HDC v3; // ebx
  int v4; // ecx
  int v5; // eax
  struct HLFONT__ **v6; // esi
  _DWORD *v7; // edi
  int v8; // esi
  _DWORD *v9; // edi
  int v10; // esi
  int *v11; // esi
  int *v12; // edi
  int v13; // esi
  int v14; // esi
  int v15; // eax
  int *v16; // edi
  int *ProcessDpiMetrics; // eax
  int v18; // esi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int *v23; // edi
  int v24; // esi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  struct HLFONT__ **v29; // ebx
  struct HLFONT__ *v30; // ecx
  struct HLFONT__ *v31; // ecx
  _DWORD *v32; // esi
  int v34; // [esp-4h] [ebp-16Ch]
  struct _UNICODE_STRING *v35; // [esp+0h] [ebp-168h]
  unsigned int v36; // [esp+4h] [ebp-164h]
  struct tagSIZE v37; // [esp+10h] [ebp-158h] BYREF
  int *v38; // [esp+18h] [ebp-150h]
  int *SessionDpiMetrics; // [esp+1Ch] [ebp-14Ch]
  _DWORD *v40; // [esp+20h] [ebp-148h]
  int *v41; // [esp+24h] [ebp-144h]
  int v42; // [esp+28h] [ebp-140h]
  _DWORD *SessionDpiServerInfo; // [esp+2Ch] [ebp-13Ch]
  int v44; // [esp+30h] [ebp-138h]
  int v45; // [esp+34h] [ebp-134h]
  _DWORD v46[25]; // [esp+38h] [ebp-130h] BYREF
  int v47; // [esp+9Ch] [ebp-CCh]
  struct tagLOGFONTW v48; // [esp+A0h] [ebp-C8h] BYREF
  _DWORD v49[25]; // [esp+100h] [ebp-68h] BYREF

  v44 = a2;
  v45 = a1;
  memset(v49, 0, 0x5Cu);
  v3 = *(HDC *)(_gpDispInfo + 32);
  SessionDpiServerInfo = (_DWORD *)GetSessionDpiServerInfo();
  v41 = (int *)Get96DpiServerInfo();
  SessionDpiMetrics = (int *)GetSessionDpiMetrics();
  v38 = (int *)Get96DpiMetrics();
  v4 = a2 + 24;
  v5 = a2;
  v6 = (struct HLFONT__ **)(SessionDpiServerInfo + 2);
  v42 = v5 != 0 ? v4 : 0;
  if ( !UserSetFont(139, SessionDpiServerInfo + 2) || !UserSetAltScaleFont(*v6) )
    return 0;
  v47 = GreSelectFont(v3, (int)*v6);
  memset(v46, 0, 0x3Cu);
  v7 = (_DWORD *)GreTextInitialized();
  v40 = v7;
  if ( v7 && _GetTextMetricsW(v3, v46) )
  {
    v8 = v46[5];
  }
  else
  {
    qmemcpy(v46, (const void *)(GetDPIServerInfo() + 32), 0x3Cu);
    v8 = v46[5];
    v7 = v40;
    if ( !v46[5] )
      v8 = 8;
  }
  if ( SessionDpiServerInfo != (_DWORD *)-16 )
    SessionDpiServerInfo[4] = v46[0];
  if ( v7 )
  {
    if ( (v46[13] & 0x1000000) != 0 )
    {
      v37.cx = 0;
      v37.cy = 0;
      if ( GreGetTextExtentW(v3, 52, &v37, 1) )
        v8 = (v37.cx / 26 + 1) / 2;
    }
  }
  SessionDpiServerInfo[3] = v8;
  GreSelectFont(v3, v41[2]);
  memset(v46, 0, 0x3Cu);
  v9 = (_DWORD *)GreTextInitialized();
  v40 = v9;
  if ( v9 && _GetTextMetricsW(v3, v46) )
  {
    v10 = v46[5];
  }
  else
  {
    qmemcpy(v46, (const void *)(GetDPIServerInfo() + 32), 0x3Cu);
    v10 = v46[5];
    v9 = v40;
    if ( !v46[5] )
      v10 = 8;
  }
  if ( v41 != (int *)-16 )
    v41[4] = v46[0];
  if ( v9 )
  {
    if ( (v46[13] & 0x1000000) != 0 )
    {
      v37.cx = 0;
      v37.cy = 0;
      if ( GreGetTextExtentW(v3, 52, &v37, 1) )
        v10 = (v37.cx / 26 + 1) / 2;
    }
  }
  v41[3] = v10;
  if ( v44 )
    v42 = v44 + 124;
  v11 = SessionDpiMetrics;
  if ( !UserSetFont(142, SessionDpiMetrics + 7) )
    return 0;
  v12 = v38;
  if ( !UserSetAltScaleFont((struct HLFONT__ *)v11[7]) )
    return 0;
  GreSelectFont(v3, v11[7]);
  v40 = v11 + 9;
  memset(v46, 0, 0x3Cu);
  v37.cx = GreTextInitialized();
  if ( v37.cx && _GetTextMetricsW(v3, v46) )
  {
    v13 = v46[5];
  }
  else
  {
    qmemcpy(v46, (const void *)(GetDPIServerInfo() + 32), 0x3Cu);
    v13 = v46[5];
    v12 = v38;
    if ( !v46[5] )
      v13 = 8;
  }
  if ( v40 )
    *v40 = v46[0];
  if ( v37.cx )
  {
    if ( (v46[13] & 0x1000000) != 0 )
    {
      v37.cx = 0;
      v37.cy = 0;
      if ( GreGetTextExtentW(v3, 52, &v37, 1) )
        v13 = (v37.cx / 26 + 1) / 2;
    }
  }
  SessionDpiMetrics[8] = v13;
  GreSelectFont(v3, v12[7]);
  memset(v46, 0, 0x3Cu);
  v37.cx = GreTextInitialized();
  if ( v37.cx && _GetTextMetricsW(v3, v46) )
  {
    v14 = v46[5];
  }
  else
  {
    qmemcpy(v46, (const void *)(GetDPIServerInfo() + 32), 0x3Cu);
    v14 = v46[5];
    v12 = v38;
    if ( !v46[5] )
      v14 = 8;
  }
  if ( v12 != (int *)-36 )
    v12[9] = v46[0];
  if ( v37.cx )
  {
    if ( (v46[13] & 0x1000000) != 0 )
    {
      v37.cx = 0;
      v37.cy = 0;
      if ( GreGetTextExtentW(v3, 52, &v37, 1) )
        v14 = (v37.cx / 26 + 1) / 2;
    }
  }
  v15 = v44;
  v12[8] = v14;
  if ( v15 )
    v42 = v15 + 224;
  if ( !UserSetFont(145, SessionDpiMetrics) )
    return 0;
  v16 = SessionDpiMetrics;
  if ( !UserSetAltScaleFont((struct HLFONT__ *)*SessionDpiMetrics) )
    return 0;
  if ( _gMenuState[24] )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      ProcessDpiMetrics = (int *)GetProcessDpiMetrics();
    else
      ProcessDpiMetrics = (int *)Get96DpiMetrics();
    GreSelectFont(_gMenuState[24], *ProcessDpiMetrics);
  }
  GreSelectFont(v3, *v16);
  memset(v46, 0, 0x3Cu);
  v37.cx = GreTextInitialized();
  if ( v37.cx && _GetTextMetricsW(v3, v46) )
  {
    v18 = v46[5];
  }
  else
  {
    qmemcpy(v46, (const void *)(GetDPIServerInfo() + 32), 0x3Cu);
    v18 = v46[5];
    v16 = SessionDpiMetrics;
    if ( !v46[5] )
      v18 = 8;
  }
  if ( v16 != (int *)-8 )
    v16[2] = v46[0];
  if ( v37.cx )
  {
    if ( (v46[13] & 0x1000000) != 0 )
    {
      v37.cx = 0;
      v37.cy = 0;
      if ( GreGetTextExtentW(v3, 52, &v37, 1) )
        v18 = (v37.cx / 26 + 1) / 2;
    }
  }
  v19 = v46[4];
  v20 = v16[2];
  v16[3] = v46[8];
  v16[1] = v18;
  v16[6] = v20 + v19 + 2;
  v21 = v46[1];
  v16[4] = v19;
  v16[5] = v21;
  v22 = (((_WORD)v20 + (_WORD)v19 + 1) & 0xFFFE) - 1;
  SetDpiDepSysMet(27, v22);
  SetDpiDepSysMet(28, v22);
  v23 = v38;
  GreSelectFont(v3, *v38);
  memset(v46, 0, 0x3Cu);
  v37.cx = GreTextInitialized();
  if ( !v37.cx )
    goto LABEL_74;
  if ( _GetTextMetricsW(v3, v46) )
  {
    v24 = v46[5];
  }
  else
  {
LABEL_74:
    qmemcpy(v46, (const void *)(GetDPIServerInfo() + 32), 0x3Cu);
    v24 = v46[5];
    v23 = v38;
    if ( !v46[5] )
      v24 = 8;
  }
  if ( v23 != (int *)-8 )
    v23[2] = v46[0];
  if ( v37.cx )
  {
    if ( (v46[13] & 0x1000000) != 0 )
    {
      v37.cx = 0;
      v37.cy = 0;
      if ( GreGetTextExtentW(v3, 52, &v37, 1) )
        v24 = (v37.cx / 26 + 1) / 2;
    }
  }
  v25 = v46[4];
  v26 = v23[2];
  v34 = v47;
  v23[3] = v46[8];
  v23[4] = v25;
  v23[6] = v26 + v25 + 2;
  v27 = v46[1];
  v23[1] = v24;
  v28 = (((_WORD)v26 + (_WORD)v25 + 1) & 0xFFFE) - 1;
  v23[5] = v27;
  *(_DWORD *)(_gpsi + 2112) = v28;
  *(_DWORD *)(_gpsi + 2116) = v28;
  GreSelectFont(v3, v34);
  v29 = (struct HLFONT__ **)SessionDpiMetrics;
  ++SessionDpiMetrics[5];
  ++v23[5];
  v30 = v29[10];
  if ( v30 && v30 != (struct HLFONT__ *)SessionDpiServerInfo[5] )
  {
    GreMarkDeletableFont(v30);
    GreDeleteObject(v29[10]);
    v29[10] = 0;
  }
  if ( !GreExtGetObjectW(*v29, 92, v49) )
    return 0;
  if ( v49[4] <= 700 )
    v49[4] = 700;
  v29[10] = (struct HLFONT__ *)GreCreateFontIndirectW((int)v49, 136);
  v31 = (struct HLFONT__ *)v23[10];
  if ( v31 && v31 != (struct HLFONT__ *)v41[5] )
  {
    GreMarkDeletableFont(v31);
    GreDeleteObject(v23[10]);
    v23[10] = 0;
  }
  if ( !GreExtGetObjectW((struct HLFONT__ *)*v23, 92, v49) )
    return 0;
  if ( v49[4] <= 700 )
    v49[4] = 700;
  v23[10] = GreCreateFontIndirectW((int)v49, 136);
  if ( !UserSetFont(156, v29 + 11) || !UserSetAltScaleFont(v29[11]) )
    return 0;
  if ( v44 )
  {
    v32 = (_DWORD *)(v44 + 408);
  }
  else
  {
    qmemcpy(v46, GetLogFontFromUserProfile(&v48, v35, v36), 0x5Cu);
    v32 = v46;
  }
  qmemcpy((void *)(_gpsi + 4472), v32, 0x5Cu);
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1;
}

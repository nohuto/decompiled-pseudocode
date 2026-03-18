/*
 * XREFs of xxxSetNCFonts @ 0x1C0024488
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C0023B4C (xxxSetWindowNCMetrics.c)
 * Callees:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00236E0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0023EB8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetFont @ 0x1C00242BC (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024974 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GetCharDimensions @ 0x1C0024BC8 (GetCharDimensions.c)
 *     GreMarkDeletableFont @ 0x1C0025288 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C0026F48 (UserSetAltScaleFont.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C008F8E0 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  HDC v3; // r15
  __int64 SessionDpiServerInfo; // r12
  __int64 v5; // r13
  struct HLFONT__ **SessionDpiMetrics; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  int CharDimensions; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *DPIMetrics; // rax
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v21; // rcx
  int v22; // eax
  struct HLFONT__ *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v27; // edx
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int128 v30; // xmm5
  __int128 v31; // xmm6
  __int64 v32; // xmm0_8
  __int64 v34; // [rsp+28h] [rbp-E0h]
  __int64 v35; // [rsp+28h] [rbp-E0h]
  struct tagLOGFONTW v37; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v38[24]; // [rsp+A8h] [rbp-60h] BYREF

  memset(&v37.lfEscapement, 0, 60);
  memset(v38, 0, 0x5CuLL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v5 = Get96DpiServerInfo();
  SessionDpiMetrics = (struct HLFONT__ **)GetSessionDpiMetrics();
  v7 = Get96DpiMetrics();
  v8 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v8, 139LL, (struct HLFONT__ **)(SessionDpiServerInfo + 8))
    || !(unsigned int)UserSetAltScaleFont(*(HBRUSH *)(SessionDpiServerInfo + 8)) )
  {
    return 0LL;
  }
  *(_QWORD *)&v37.lfHeight = GreSelectFont(v3, *(_QWORD *)(SessionDpiServerInfo + 8));
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensions(v3);
  GreSelectFont(v3, *(_QWORD *)(v5 + 8));
  CharDimensions = GetCharDimensions(v3);
  v10 = a2 + 124;
  *(_DWORD *)(v5 + 16) = CharDimensions;
  if ( !a2 )
    v10 = v8;
  v34 = v10;
  if ( !(unsigned int)UserSetFont(a1, v10, 142LL, SessionDpiMetrics + 4)
    || !(unsigned int)UserSetAltScaleFont((HBRUSH)SessionDpiMetrics[4]) )
  {
    return 0LL;
  }
  GreSelectFont(v3, SessionDpiMetrics[4]);
  *((_DWORD *)SessionDpiMetrics + 10) = GetCharDimensions(v3);
  GreSelectFont(v3, *(_QWORD *)(v7 + 32));
  *(_DWORD *)(v7 + 40) = GetCharDimensions(v3);
  v11 = a2 + 224;
  if ( !a2 )
    v11 = v34;
  v35 = v11;
  if ( !(unsigned int)UserSetFont(a1, v11, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont((HBRUSH)*SessionDpiMetrics) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    DPIMetrics = (_QWORD *)GetDPIMetrics();
    GreSelectFont(gMenuState[17], *DPIMetrics);
  }
  GreSelectFont(v3, *SessionDpiMetrics);
  v13 = GetCharDimensions(v3);
  v14 = *(_DWORD *)&v37.lfOutPrecision;
  v15 = *((_DWORD *)SessionDpiMetrics + 3);
  *((_DWORD *)SessionDpiMetrics + 2) = v13;
  *((_DWORD *)SessionDpiMetrics + 4) = *(_DWORD *)&v37.lfFaceName[6];
  *((_DWORD *)SessionDpiMetrics + 5) = v14;
  *((_DWORD *)SessionDpiMetrics + 7) = v15 + v14 + 2;
  *((_DWORD *)SessionDpiMetrics + 6) = v37.lfOrientation;
  SetDpiDepSysMet(27LL);
  SetDpiDepSysMet(28LL);
  GreSelectFont(v3, *(_QWORD *)v7);
  v16 = GetCharDimensions(v3);
  v17 = *(_DWORD *)&v37.lfOutPrecision;
  v18 = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 8) = v16;
  *(_DWORD *)(v7 + 16) = *(_DWORD *)&v37.lfFaceName[6];
  *(_DWORD *)(v7 + 20) = v17;
  *(_DWORD *)(v7 + 28) = v18 + v17 + 2;
  v19 = (((_WORD)v18 + (_WORD)v17 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v7 + 24) = v37.lfOrientation;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v19;
  GreSelectFont(v3, *(_QWORD *)&v37.lfHeight);
  ++*((_DWORD *)SessionDpiMetrics + 6);
  ++*(_DWORD *)(v7 + 24);
  v21 = SessionDpiMetrics[6];
  if ( v21 && v21 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v21);
    GreDeleteObject(SessionDpiMetrics[6]);
    SessionDpiMetrics[6] = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW((HBRUSH)*SessionDpiMetrics) )
    return 0LL;
  v22 = v38[4];
  if ( v38[4] <= 700 )
    v22 = 700;
  v38[4] = v22;
  SessionDpiMetrics[6] = (struct HLFONT__ *)GreCreateFontIndirectW(v38, 136LL);
  v23 = *(struct HLFONT__ **)(v7 + 48);
  if ( v23 && v23 != *(struct HLFONT__ **)(v5 + 24) )
  {
    GreMarkDeletableFont(v23);
    GreDeleteObject(*(_QWORD *)(v7 + 48));
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)v7) )
    return 0LL;
  v24 = v38[4];
  if ( v38[4] <= 700 )
    v24 = 700;
  v38[4] = v24;
  *(_QWORD *)(v7 + 48) = GreCreateFontIndirectW(v38, 136LL);
  v25 = a2 + 316;
  if ( !a2 )
    v25 = v35;
  if ( !(unsigned int)UserSetFont(a1, v25, 156LL, SessionDpiMetrics + 7)
    || !(unsigned int)UserSetAltScaleFont((HBRUSH)SessionDpiMetrics[7]) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)(a2 + 408);
    *(_OWORD *)(gpsi + 5020LL) = *(_OWORD *)(a2 + 424);
    *(_OWORD *)(gpsi + 5036LL) = *(_OWORD *)(a2 + 440);
    *(_OWORD *)(gpsi + 5052LL) = *(_OWORD *)(a2 + 456);
    *(_OWORD *)(gpsi + 5068LL) = *(_OWORD *)(a2 + 472);
    *(_QWORD *)(gpsi + 5084LL) = *(_QWORD *)(a2 + 488);
    *(_DWORD *)(gpsi + 5092LL) = *(_DWORD *)(a2 + 496);
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile((struct tagLOGFONTW *)&v37.lfEscapement, a1, 0x9Du);
    v27 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v28 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v29 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v30 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v31 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v32 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v28;
    *(_OWORD *)(gpsi + 5036LL) = v29;
    *(_OWORD *)(gpsi + 5052LL) = v30;
    *(_OWORD *)(gpsi + 5068LL) = v31;
    *(_QWORD *)(gpsi + 5084LL) = v32;
    *(_DWORD *)(gpsi + 5092LL) = v27;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}

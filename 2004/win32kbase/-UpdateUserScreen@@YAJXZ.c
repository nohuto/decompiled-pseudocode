/*
 * XREFs of ?UpdateUserScreen@@YAJXZ @ 0x1C0013354
 * Callers:
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C000C504 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     InitLoadResources @ 0x1C0010780 (InitLoadResources.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0012894 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C0013310 (EnforceColorDependentSettings.c)
 *     GreGetDeviceCaps @ 0x1C00138C0 (GreGetDeviceCaps.c)
 *     ApiSetEditionUpdateCursorSizes @ 0x1C00159FC (ApiSetEditionUpdateCursorSizes.c)
 *     DestroyMonitor @ 0x1C0019D20 (DestroyMonitor.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C005A2B8 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     HdevFromMonitor @ 0x1C0062CA0 (HdevFromMonitor.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0084880 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     MonitorFromHdev @ 0x1C00A5D50 (MonitorFromHdev.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 UpdateUserScreen(void)
{
  __int64 v0; // r14
  struct tagMONITOR **v1; // rdi
  struct tagMONITOR **v2; // rbx
  unsigned int v3; // r15d
  char CurrentThreadDpiAwarenessContext; // al
  int v5; // esi
  struct tagMONITOR **v6; // rsi
  struct tagMONITOR **v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int16 v11; // r8
  __int64 v12; // rax
  int v13; // r15d
  signed int v14; // r9d
  signed int v15; // r10d
  signed int v16; // r11d
  signed int v17; // r8d
  _QWORD *v18; // rdx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  CInputConfig *v29; // rcx
  int v30; // eax
  __int64 v31; // rbx
  int v32; // r14d
  unsigned int v33; // esi
  HPALETTE *v34; // rdi
  __int64 v35; // rdx
  __int64 i; // r8
  unsigned __int8 DeviceCaps; // al
  __int16 v38; // r9
  __int64 j; // r9
  struct tagMONITOR *v41; // rax
  __int64 v42; // rdx
  __int128 v43; // [rsp+30h] [rbp-30h]
  __int128 v44; // [rsp+40h] [rbp-20h]

  v0 = *(_QWORD *)(gpDispInfo + 16);
  v1 = (struct tagMONITOR **)(gpDispInfo + 104);
  v2 = *(struct tagMONITOR ***)(gpDispInfo + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      10,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  v3 = 0;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v5 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
    v3 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  InitLoadResources(1);
  if ( !v5 )
    W32SetCurrentThreadDpiAwarenessContext(v3);
  while ( v2 )
  {
    v6 = v2;
    v7 = v2 + 7;
    v2 = (struct tagMONITOR **)v2[7];
    v8 = HdevFromMonitor(v6);
    if ( v8 == -1 )
    {
      DestroyMonitor(v6);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v6, v8);
      v1 = v7;
    }
  }
  if ( *(_DWORD *)(v0 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(56LL * (unsigned int)v2 + v0 + 40)) )
      {
        v41 = SetMonitorData(0LL, (unsigned int)v2);
        if ( v41 )
        {
          v42 = gpDispInfo;
          if ( *(_QWORD *)(gpDispInfo + 104) )
          {
            *((_QWORD *)*(v1 - 2) + 2) = *((_QWORD *)v41 + 6);
            *v1 = v41;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)gpDispInfo + 16LL) = *((_QWORD *)v41 + 6);
            *(_QWORD *)(v42 + 104) = v41;
          }
          v1 = (struct tagMONITOR **)((char *)v41 + 56);
        }
      }
      LODWORD(v2) = (_DWORD)v2 + 1;
    }
    while ( (unsigned int)v2 < *(_DWORD *)(v0 + 20) );
  }
  v9 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v9 || !*(_QWORD *)(gpDispInfo + 96) )
    return 3221225495LL;
  v10 = *(_QWORD *)(gpDispInfo + 104);
  v11 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL);
  do
  {
    v12 = *(_QWORD *)(v10 + 40);
    v10 = *(_QWORD *)(v10 + 56);
    if ( v11 >= *(_WORD *)(v12 + 64) )
      v11 = *(_WORD *)(v12 + 64);
  }
  while ( v10 );
  do
  {
    *(_WORD *)(*(_QWORD *)(v9 + 40) + 66LL) = v11;
    v9 = *(_QWORD *)(v9 + 56);
  }
  while ( v9 );
  ApiSetEditionUpdateCursorSizes();
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v0 + 16) & 1) == 0;
  v13 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 38) & 0x100;
  v43 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFD | (v13 != 0 ? 2 : 0);
  v17 = 0;
  **(_DWORD **)gpDispInfo = 0;
  v18 = *(_QWORD **)(gpDispInfo + 104);
  if ( v18 )
  {
    do
    {
      v19 = (_DWORD *)v18[5];
      if ( (v19[6] & 1) != 0 )
      {
        v20 = v19[7];
        if ( v16 < v20 )
          v20 = v16;
        v16 = v20;
        v21 = v19[8];
        if ( v15 < v21 )
          v21 = v15;
        v15 = v21;
        v22 = v19[9];
        if ( v14 > v22 )
          v22 = v14;
        v14 = v22;
        v23 = v19[10];
        if ( v17 > v23 )
          v23 = v17;
        v17 = v23;
        ++**(_DWORD **)gpDispInfo;
      }
      if ( *((_DWORD *)gpsi + 555) )
      {
        v24 = v18[5];
        v25 = *(_DWORD *)(v24 + 24);
        if ( v13 )
          v26 = v25 | 2;
        else
          v26 = v25 & 0xFFFFFFFD;
        *(_DWORD *)(v24 + 24) = v26;
      }
      else if ( (*(_DWORD *)(v18[29] + 2172LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v18[5] + 24LL) |= 2u;
        *(_DWORD *)(gpDispInfo + 132) |= 2u;
      }
      v18 = (_QWORD *)v18[7];
    }
    while ( v18 );
    *((_QWORD *)&v43 + 1) = __PAIR64__(v17, v14);
    *(_QWORD *)&v43 = __PAIR64__(v15, v16);
  }
  v27 = gpDispInfo;
  v44 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v28 = v43 - v44;
  if ( (_QWORD)v43 == (_QWORD)v44 )
    v28 = *((_QWORD *)&v43 + 1) - *((_QWORD *)&v44 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v16;
  *(_DWORD *)(*(_QWORD *)v27 + 28LL) = v15;
  *(_DWORD *)(*(_QWORD *)v27 + 32LL) = v14;
  *(_DWORD *)(*(_QWORD *)v27 + 36LL) = v17;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v28 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v29 = *(CInputConfig **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = **(_DWORD **)gpDispInfo;
  CInputConfig::OnDisplayStateChange(v29);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( qword_1C0252A08 )
    v30 = qword_1C0252A08();
  else
    v30 = -1073741637;
  if ( v30 >= 0 && qword_1C0252A10 )
    qword_1C0252A10();
  SetOrCreateRectRgnIndirectPublic(gpDispInfo + 120, &gZero);
  if ( *(_QWORD *)(gpDispInfo + 120) )
  {
    v31 = *(_QWORD *)(gpDispInfo + 104);
    v32 = 0;
    while ( v31 )
    {
      if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v31 + 72, *(_QWORD *)(v31 + 40) + 28LL)
        && (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 24LL) & 1) != 0 )
      {
        v32 = GreCombineRgn(*(HRGN *)(gpDispInfo + 120), *(HRGN *)(gpDispInfo + 120), *(HRGN *)(v31 + 72));
      }
      v33 = 0;
      v34 = (HPALETTE *)(v31 + 80);
      do
      {
        if ( *v34 )
        {
          GreDeleteObject(*v34);
          *v34 = 0LL;
        }
        ++v33;
        ++v34;
      }
      while ( v33 < 0x12 );
      v31 = *(_QWORD *)(v31 + 56);
    }
    *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFE | (v32 == 2);
  }
  if ( (*(_DWORD *)(gpDispInfo + 132) & 1) != 0 )
    v35 = 0LL;
  else
    v35 = *(_QWORD *)(gpDispInfo + 120);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 24LL) + 40LL) + 168LL) = v35;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 14);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v38 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v38;
  *(_WORD *)(gpDispInfo + 128) = v38;
  if ( v13 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  return 0LL;
}

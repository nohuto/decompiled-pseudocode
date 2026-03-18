/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020C470
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C020AC20 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020BFE4 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F894 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020B23C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  const struct tagWND *v6; // r8
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // r13d
  __m128i *MonitorWorkRectForWindow; // rax
  int v13; // r14d
  int v14; // r15d
  __m128i v15; // xmm1
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // rdi
  __int64 v24; // r8
  __int128 *v25; // rax
  int v26; // esi
  int v27; // r13d
  unsigned int v28; // edi
  int v29; // edx
  int v30; // eax
  __int64 v31; // rdi
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rdi
  __int64 v36; // r8
  __int128 *v37; // rax
  int v38; // esi
  int v39; // r13d
  unsigned int v40; // edi
  int v41; // eax
  int v42; // esi
  int v43; // eax
  __int128 v45; // [rsp+20h] [rbp-59h]
  __int64 v46; // [rsp+30h] [rbp-49h] BYREF
  __int64 v47; // [rsp+38h] [rbp-41h] BYREF
  unsigned int CurrentThreadDpiAwarenessContext; // [rsp+40h] [rbp-39h]
  __int128 v49; // [rsp+50h] [rbp-29h] BYREF
  __int128 v50; // [rsp+60h] [rbp-19h] BYREF
  __int128 v51; // [rsp+70h] [rbp-9h] BYREF

  v46 = 0LL;
  v6 = *(const struct tagWND **)(a1 + 16);
  v47 = a2;
  v9 = 0;
  v45 = *GetMonitorWorkRectForWindow(&v49, a2, v6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
  v11 = CurrentThreadDpiAwarenessContext;
  if ( a4 )
  {
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v49, a4, *(const struct tagWND **)(a1 + 16));
    v13 = HIDWORD(v45);
    v14 = DWORD1(v45);
    v15 = *MonitorWorkRectForWindow;
    v16 = MonitorWorkRectForWindow->m128i_i64[0];
    v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
    if ( SHIDWORD(v17) > SHIDWORD(v45) )
      v13 = HIDWORD(v17);
    v18 = HIDWORD(v16);
    HIDWORD(v45) = v13;
    if ( (int)v18 < SDWORD1(v45) )
      v14 = v18;
    DWORD1(v45) = v14;
  }
  else
  {
    v13 = HIDWORD(v45);
    v14 = DWORD1(v45);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v9;
    v19 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v20 = *GetMonitorWorkRectForWindow(&v50, v19, *(const struct tagWND **)(a1 + 16));
      v21 = *(_QWORD *)(a1 + 16);
      v51 = 0LL;
      v49 = v20;
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 288LL) & 0xF) == 2 || v19 == v47 )
      {
        v51 = v20;
      }
      else
      {
        v51 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v51, &v51, v11, &v47);
      }
      if ( IsDockTargetActive(a1, v19, 0) && (int)v51 <= a5 && a5 < SDWORD2(v51) )
        break;
      v23 = *(_QWORD *)(v19 + 280);
      if ( v23 == gpDispInfo + 144LL )
        v23 = *(_QWORD *)(gpDispInfo + 144LL);
      v19 = v23 - 280;
      if ( v19 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v24 = *(_QWORD *)(a1 + 16);
    v46 = v19;
    if ( (*(_DWORD *)(*(_QWORD *)(v24 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v19 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v22 + 40) + 64LL) )
    {
      v26 = DWORD1(v49);
      DWORD1(v45) = DWORD1(v49);
    }
    else
    {
      v46 = v22;
      v25 = GetMonitorWorkRectForWindow(&v50, v22, (const struct tagWND *)v24);
      v24 = *(_QWORD *)(a1 + 16);
      v19 = v46;
      v45 = *v25;
      v13 = HIDWORD(*v25);
      v26 = HIDWORD(*(_QWORD *)v25);
    }
    v27 = *(_DWORD *)(a1 + 48);
    LODWORD(v45) = *(_DWORD *)(a1 + 40);
    DWORD2(v45) = v27;
    if ( (*(_DWORD *)(*(_QWORD *)(v24 + 40) + 288LL) & 0xF) != 2 && v19 != *(_QWORD *)(a1 + 208) )
    {
      v28 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v51 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v51, &v51, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v51, &v51, v28, &v46);
      LODWORD(v45) = (__int16)v51;
      LODWORD(v51) = v27;
      LogicalToPhysicalDPIPoint(&v51, &v51, v28, a1 + 208);
      PhysicalToLogicalDPIPoint(&v51, &v51, v28, &v46);
      DWORD2(v45) = (__int16)v51;
    }
    v29 = *(_DWORD *)(a1 + 108);
    if ( v13 - v26 < v29 )
      DWORD1(v45) = v13 - v29;
    v30 = *(_DWORD *)(a1 + 116);
    if ( v13 - v26 >= v30 )
      DWORD1(v45) = v13 - v30;
  }
  else
  {
    v31 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v32 = *GetMonitorWorkRectForWindow(&v50, v31, *(const struct tagWND **)(a1 + 16));
      v33 = *(_QWORD *)(a1 + 16);
      v51 = 0LL;
      v49 = v32;
      if ( (*(_DWORD *)(*(_QWORD *)(v33 + 40) + 288LL) & 0xF) == 2 || v31 == v47 )
      {
        v51 = v32;
      }
      else
      {
        v51 = *(_OWORD *)(*(_QWORD *)(v31 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v51, &v51, v11, &v47);
      }
      if ( IsDockTargetActive(a1, v31, 3) && (int)v51 <= a5 && a5 < SDWORD2(v51) )
        break;
      v35 = *(_QWORD *)(v31 + 280);
      if ( v35 == gpDispInfo + 144LL )
        v35 = *(_QWORD *)(gpDispInfo + 144LL);
      v31 = v35 - 280;
      if ( v31 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v36 = *(_QWORD *)(a1 + 16);
    v46 = v31;
    if ( (*(_DWORD *)(*(_QWORD *)(v36 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v31 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v34 + 40) + 64LL) )
    {
      v38 = HIDWORD(v49);
      HIDWORD(v45) = HIDWORD(v49);
    }
    else
    {
      v46 = v34;
      v37 = GetMonitorWorkRectForWindow(&v50, v34, (const struct tagWND *)v36);
      v36 = *(_QWORD *)(a1 + 16);
      v31 = v46;
      v45 = *v37;
      v38 = HIDWORD(*v37);
      v14 = HIDWORD(*(_QWORD *)v37);
    }
    v39 = *(_DWORD *)(a1 + 48);
    LODWORD(v45) = *(_DWORD *)(a1 + 40);
    DWORD2(v45) = v39;
    if ( (*(_DWORD *)(*(_QWORD *)(v36 + 40) + 288LL) & 0xF) != 2 && v31 != *(_QWORD *)(a1 + 208) )
    {
      v40 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v51 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v51, &v51, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v51, &v51, v40, &v46);
      LODWORD(v45) = (__int16)v51;
      LODWORD(v51) = v39;
      LogicalToPhysicalDPIPoint(&v51, &v51, v40, a1 + 208);
      PhysicalToLogicalDPIPoint(&v51, &v51, v40, &v46);
      DWORD2(v45) = (__int16)v51;
    }
    v41 = *(_DWORD *)(a1 + 108);
    v42 = v38 - v14;
    if ( v42 < v41 )
      HIDWORD(v45) = v14 + v41;
    v43 = *(_DWORD *)(a1 + 116);
    if ( v42 >= v43 )
      HIDWORD(v45) = v14 + v43;
  }
  v9 = 1;
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v45;
  else
    *(_OWORD *)(a1 + 40) = v45;
  return v9;
}

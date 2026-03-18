/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020A710
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020AFB8 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall ComputeSourceRectAndMonitorWithPrecision(
        const struct _MOVESIZEDATA *const a1,
        struct tagPOINT *a2,
        struct tagMONITOR **a3,
        struct tagRECT *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v9; // r9
  int v10; // r8d
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  struct tagRECT v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  const struct tagWND *v18; // r8
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  const struct tagWND *v22; // r8
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h] BYREF
  __int128 v25; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+48h] [rbp-20h] BYREF

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  v10 = *((_DWORD *)a1 + 49);
  v11 = CurrentThreadDpiAwarenessContext;
  if ( (v10 & 0x38000) == 0x30000 )
  {
    v21 = MonitorFromPoint((__int64)*a2, 2LL, CurrentThreadDpiAwarenessContext, v9);
    v22 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v23 = v21;
    v14 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v24, v21, v22);
LABEL_13:
    v13 = v23;
    goto LABEL_14;
  }
  if ( *(_DWORD *)*gpDispInfo <= 1u || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 )
  {
    if ( (v10 & 0x20) != 0 )
      v15 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
    else
      v15 = *((_QWORD *)a1 + 26);
    v23 = v15;
    LogicalToPhysicalDPIPoint(a2, a2, v11, &v23);
    v17 = MonitorFromPoint((__int64)*a2, 2LL, 18LL, v16);
    v18 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v23 = v17;
    if ( *(_DWORD *)*gpDispInfo <= 1u )
      MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v24, v17, v18);
    else
      MonitorWorkRectForWindow = (__m128i *)GetMonitorRectForWindow(&v25, v17, v18);
    v20 = *MonitorWorkRectForWindow;
    *(_QWORD *)&v26.left = MonitorWorkRectForWindow->m128i_i64[0];
    v26.bottom = v20.m128i_i32[3] - 1;
    v26.right = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8)) - 1;
    LogicalToPhysicalDPIRect(&v26, &v26, v11, &v23);
    ++v26.right;
    ++v26.bottom;
    v14 = v26;
    goto LABEL_13;
  }
  v12 = *(_QWORD *)((char *)a1 + 308);
  *a2 = (struct tagPOINT)v12;
  v13 = MonitorFromPoint(v12, 2LL, 18LL, v9);
  v23 = v13;
  v14 = *(struct tagRECT *)(*(_QWORD *)(v13 + 40) + 28LL);
LABEL_14:
  *a3 = (struct tagMONITOR *)v13;
  *a4 = v14;
}

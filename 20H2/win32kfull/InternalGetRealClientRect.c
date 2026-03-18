/*
 * XREFs of InternalGetRealClientRect @ 0x1C01093C8
 * Callers:
 *     ParkIcon @ 0x1C001893C (ParkIcon.c)
 *     SetTiledRect @ 0x1C006143C (SetTiledRect.c)
 *     xxxArrangeIconicWindows @ 0x1C0152DE0 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C003BDF0 (GetMonitorRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GetRect @ 0x1C005E0AC (GetRect.c)
 *     GetMonitorWorkRectForDpi @ 0x1C00D3D88 (GetMonitorWorkRectForDpi.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  char v7; // bp
  __int64 v9; // rcx
  unsigned __int16 v10; // di
  __m128i *MonitorRectForDpi; // rax
  __m128i v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __m128i v18; // [rsp+30h] [rbp-48h] BYREF
  __m128i v19; // [rsp+40h] [rbp-38h] BYREF

  v6 = a4;
  v7 = a3;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v9 == 669 )
  {
    v10 = 0;
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9, a2, a3, 0LL) + 96);
    if ( !a5 )
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9) >> 8) & 0x1FF;
    if ( (v7 & 4) != 0 )
      MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(&v17, v6, v10);
    else
      MonitorRectForDpi = GetMonitorWorkRectForDpi(&v18, v6, v10);
    v12 = *MonitorRectForDpi;
    result = (__int64)&v19;
    v19 = v12;
    *(__m128i *)a2 = v12;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (v7 & 1) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v14 + 16) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v14);
        result = GetDpiDependentMetric(1LL, DpiForSystem);
        *(_DWORD *)(a2 + 12) += result;
        v14 = *(_QWORD *)(a1 + 40);
      }
      if ( (*(_BYTE *)(v14 + 16) & 2) != 0 )
      {
        v16 = GetDpiForSystem(v14);
        result = GetDpiDependentMetric(0LL, v16);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (v7 & 2) != 0 )
  {
    result = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) >= 0 )
    {
      if ( (int)result <= 1 )
      {
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 12) -= result;
        return result;
      }
      if ( (int)result <= 3 )
      {
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 4) += result;
        return result;
      }
      switch ( (_DWORD)result )
      {
        case 4:
          goto LABEL_26;
        case 5:
LABEL_25:
          result = *(unsigned int *)(gpsi + 2084LL);
          *(_DWORD *)(a2 + 8) -= result;
          return result;
        case 6:
LABEL_26:
          result = *(unsigned int *)(gpsi + 2084LL);
          *(_DWORD *)a2 += result;
          return result;
        case 7:
          goto LABEL_25;
      }
    }
  }
  return result;
}

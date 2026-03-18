/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0243B2C
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02439FC (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     _MonitorFromPoint @ 0x1C0025880 (_MonitorFromPoint.c)
 *     GetMonitorRect @ 0x1C002A734 (GetMonitorRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00BACF8 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     CALL_LPK @ 0x1C014B814 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C02433E4 (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rax
  const WCHAR *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int16 *v18; // rdx
  __int64 v19; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v23; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __m128i v26; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0LL, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v27[2] = 0LL;
    v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v27[0] = *(_QWORD *)(v12 + 408);
    *(_QWORD *)(v12 + 408) = v27;
    v27[1] = v8;
    HMLockObject(v8);
    v13 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    xxxClientGetTextExtentPointW(TooltipDC, v13, v14, a2);
    if ( !ThreadUnlock1(v16, v15, v17) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v18 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    GreGetTextExtentW(TooltipDC, v18, v19, a2, 1u);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect(&v26, v8);
  cy = a2->cy;
  y = a3->y;
  v26 = *MonitorRect;
  v23 = _mm_srli_si128(v26, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v23) )
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 8) |= 1u;
  }
  else
  {
    *((_DWORD *)a1 + 8) &= ~1u;
    a3->y = y - cy;
  }
  cx = a2->cx;
  x = a3->x;
  if ( a3->x + a2->cx >= (int)v23 )
  {
    x = v23 - cx;
    a3->x = v23 - cx;
  }
  if ( x < v26.m128i_i32[0] )
    a3->x = v26.m128i_i32[0];
  return 1LL;
}

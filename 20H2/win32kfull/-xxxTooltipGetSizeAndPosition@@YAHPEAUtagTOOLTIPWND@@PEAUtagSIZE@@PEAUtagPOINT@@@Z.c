/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C024288C
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024275C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011C934 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     CALL_LPK @ 0x1C014E024 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0242144 (-GetCursorHeight@@YAHXZ.c)
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
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v25; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __m128i v28; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v29[3]; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0LL, 0LL, gpsi);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v29[2] = 0LL;
    v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v29[0] = *(_QWORD *)(v12 + 416);
    *(_QWORD *)(v12 + 416) = v29;
    v29[1] = v8;
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
  MonitorRect = (__m128i *)GetMonitorRect(&v28, v8, v20, v21);
  cy = a2->cy;
  y = a3->y;
  v28 = *MonitorRect;
  v25 = _mm_srli_si128(v28, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v25) )
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
  if ( a3->x + a2->cx >= (int)v25 )
  {
    x = v25 - cx;
    a3->x = v25 - cx;
  }
  if ( x < v28.m128i_i32[0] )
    a3->x = v28.m128i_i32[0];
  return 1LL;
}

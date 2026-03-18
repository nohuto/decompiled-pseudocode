/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025D364
 * Callers:
 *     IsSmallerThanScreen @ 0x1C0018AD0 (IsSmallerThanScreen.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     SelectWindowRgn @ 0x1C00C7B7C (SelectWindowRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C003BDF0 (GetMonitorRectForDpi.c)
 *     GetDpiCacheSlot @ 0x1C005BD68 (GetDpiCacheSlot.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  int DpiCacheSlot; // eax
  unsigned __int16 v5; // r11
  int v6; // ecx
  __int64 v7; // rdi
  char *v8; // rsi
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
    return (HRGN)*((_QWORD *)a1 + 9);
  DpiCacheSlot = GetDpiCacheSlot(a2);
  v6 = 0;
  if ( DpiCacheSlot != -1 )
    v6 = DpiCacheSlot;
  v7 = v6;
  v8 = (char *)a1 + 8 * v6;
  if ( !*((_QWORD *)v8 + 10) )
  {
    v10 = *(_OWORD *)GetMonitorRectForDpi(&v9, (__int64)a1, v5);
    SetOrCreateRectRgnIndirectPublic(v8 + 80, &v10);
  }
  return (HRGN)*((_QWORD *)a1 + v7 + 10);
}

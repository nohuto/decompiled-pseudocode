/*
 * XREFs of ?PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z @ 0x1C023EF04
 * Callers:
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C02418A0 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01E5440 (PhysicalToLogicalPointForWindow.c)
 *     ?GetWindowFrameBounds@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C023EECC (-GetWindowFrameBounds@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 */

bool __fastcall PtInsideWindowFrameBounds(const struct tagPOINT *a1, const struct tagWND *a2)
{
  __int64 v2; // rcx
  const struct tagWND *v3; // r11
  unsigned __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v6; // [rsp+28h] [rbp-20h] BYREF

  v2 = (__int64)*a1;
  v5 = 0LL;
  PhysicalToLogicalPointForWindow(v2, (__int64)a2, &v5);
  v6 = *GetWindowFrameBounds(&v6, v3);
  return PtInRect(&v6, v5);
}

/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00F4DB0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  __int64 v2; // rcx
  _BYTE v3[80]; // [rsp+20h] [rbp-68h] BYREF

  memset(v3, 0, 0x48uLL);
  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 20) & 4) == 0 || IsRectEmptyInl((const struct tagRECT *)(v2 + 104)) )
  {
    if ( xxxBeginPaint(a1, (__int64)v3) )
      xxxEndPaint(a1);
  }
}

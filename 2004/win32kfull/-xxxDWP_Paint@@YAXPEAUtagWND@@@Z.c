/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C005D518
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  __int64 v2; // rcx
  _BYTE v3[72]; // [rsp+20h] [rbp-68h] BYREF

  memset(v3, 0, sizeof(v3));
  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 20) & 4) == 0 || (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v2 + 104)) )
  {
    if ( xxxBeginPaint(a1) )
      xxxEndPaint(a1);
  }
}

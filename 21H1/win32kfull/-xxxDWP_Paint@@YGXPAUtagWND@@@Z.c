/*
 * XREFs of ?xxxDWP_Paint@@YGXPAUtagWND@@@Z @ 0x1246C
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall xxxDWP_Paint(int this)
{
  int v2; // ecx
  _BYTE v3[64]; // [esp+8h] [ebp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  v2 = *(_DWORD *)(this + 20);
  if ( (*(_BYTE *)(v2 + 12) & 4) == 0 || ERECTL::bWrapped((ERECTL *)(v2 + 68)) )
  {
    if ( xxxBeginPaint((struct tagVWPL **)this) )
      xxxEndPaint((struct tagVWPL **)this);
  }
}

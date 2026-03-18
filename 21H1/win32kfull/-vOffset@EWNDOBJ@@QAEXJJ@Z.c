/*
 * XREFs of ?vOffset@EWNDOBJ@@QAEXJJ@Z @ 0x1E6899
 * Callers:
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 * Callees:
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 */

void __thiscall EWNDOBJ::vOffset(EWNDOBJ *this, LONG a2, LONG a3)
{
  struct _POINTL v4; // [esp+4h] [ebp-8h] BYREF

  if ( a2 || a3 )
  {
    v4.y = a3;
    v4.x = a2;
    RGNOBJ::bOffset((EWNDOBJ *)((char *)this + 48), &v4);
    ERECTL::bOffsetAdd((EWNDOBJ *)((char *)this + 4), &v4, 0);
    ERECTL::bOffsetAdd((EWNDOBJ *)((char *)this + 28), &v4, 0);
  }
}

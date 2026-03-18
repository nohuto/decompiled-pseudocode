/*
 * XREFs of ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C028342C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0073F4C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027E9B4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027EAD0 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0285920 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpCheckForWndobjOverlap(struct _SPRITESTATE *a1, struct _RECTL *a2, struct _RECTL *a3)
{
  TRACKOBJ *i; // rdi
  struct EWNDOBJ *j; // rbx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
  {
    for ( j = (struct EWNDOBJ *)*((_QWORD *)i + 3); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v8, j, a1);
      if ( (unsigned int)bIntersect((char *)j + 4, a2) || (unsigned int)bIntersect((char *)j + 4, a3) )
        vSpUpdateWndobjOverlap(a1, j);
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v8);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
}

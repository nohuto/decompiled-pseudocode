/*
 * XREFs of ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0282F18
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284BF0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027E9B4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027EAD0 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0285920 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  struct _SPRITESTATE *v1; // rsi
  TRACKOBJ *i; // rdi
  __int64 j; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(struct _SPRITESTATE **)(*(_QWORD *)this + 16LL);
  v5 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
  {
    for ( j = *((_QWORD *)i + 3); j; j = *(_QWORD *)(j + 160) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v4, (struct EWNDOBJ *)j, v1);
      if ( (*(_DWORD *)(j + 184) & 0x800200) == 0x800200 )
      {
        *(_DWORD *)(j + 184) &= ~0x800000u;
        vSpUpdateWndobjOverlap(v1, (struct EWNDOBJ *)j);
      }
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v4);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}

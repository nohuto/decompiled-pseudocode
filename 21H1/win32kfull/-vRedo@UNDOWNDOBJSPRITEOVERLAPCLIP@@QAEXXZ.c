/*
 * XREFs of ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1DFBF4
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 */

void __thiscall UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  struct _SPRITESTATE *v1; // ebx
  struct TRACKOBJ *i; // edi
  struct EWNDOBJ *j; // esi
  struct _SPRITESTATE *v4; // [esp+0h] [ebp-20h]
  struct EWNDOBJ *v5; // [esp+4h] [ebp-1Ch]
  _BYTE v6[12]; // [esp+10h] [ebp-10h] BYREF
  int v7; // [esp+1Ch] [ebp-4h] BYREF

  v1 = *(struct _SPRITESTATE **)(*(_DWORD *)this + 12);
  v7 = _ghsemWndobj;
  GreAcquireSemaphore(_ghsemWndobj);
  for ( i = gpto; i; i = (struct TRACKOBJ *)*((_DWORD *)i + 1) )
  {
    for ( j = (struct EWNDOBJ *)*((_DWORD *)i + 3); j; j = (struct EWNDOBJ *)*((_DWORD *)j + 32) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v6, j, v1);
      if ( (*((_DWORD *)j + 35) & 0x800200) == 0x800200 )
      {
        *((_DWORD *)j + 35) &= ~0x800000u;
        vSpUpdateWndobjOverlap(v4, v5);
      }
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v6);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
}

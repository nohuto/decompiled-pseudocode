/*
 * XREFs of ?vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z @ 0x1E0285
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 */

void __userpurge vSpCheckForWndobjOverlap(
        int a1@<edx>,
        struct _SPRITESTATE *a2@<ecx>,
        struct _SPRITESTATE *a3,
        struct _RECTL *a4,
        struct _RECTL *a5)
{
  struct TRACKOBJ *i; // edi
  struct EWNDOBJ *v6; // esi
  struct _SPRITESTATE *v7; // edi
  struct _SPRITESTATE *v8; // [esp+0h] [ebp-24h]
  struct EWNDOBJ *v9; // [esp+4h] [ebp-20h]
  _BYTE v10[12]; // [esp+8h] [ebp-1Ch] BYREF
  int v11; // [esp+14h] [ebp-10h] BYREF
  int v12; // [esp+18h] [ebp-Ch]
  struct _SPRITESTATE *v13; // [esp+1Ch] [ebp-8h]
  struct TRACKOBJ *v14; // [esp+20h] [ebp-4h]

  v13 = a2;
  v12 = a1;
  v11 = _ghsemWndobj;
  GreAcquireSemaphore(_ghsemWndobj);
  for ( i = gpto; ; i = (struct TRACKOBJ *)*((_DWORD *)i + 1) )
  {
    v14 = i;
    if ( !i )
      break;
    v6 = (struct EWNDOBJ *)*((_DWORD *)i + 3);
    if ( v6 )
    {
      v7 = v13;
      do
      {
        UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v10, v6, v7);
        if ( bIntersect((char *)v6 + 4, v12) || bIntersect((char *)v6 + 4, a3) )
          vSpUpdateWndobjOverlap(v8, v9);
        UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v10);
        v6 = (struct EWNDOBJ *)*((_DWORD *)v6 + 32);
      }
      while ( v6 );
      i = v14;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
}

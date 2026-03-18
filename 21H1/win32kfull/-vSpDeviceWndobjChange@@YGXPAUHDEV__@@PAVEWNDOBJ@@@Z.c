/*
 * XREFs of ?vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E14C8
 * Callers:
 *     ?vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E3129 (-vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpDeviceWndobjChange(int a1, struct EWNDOBJ *a2)
{
  int v2; // esi
  struct _SPRITESTATE *v4; // [esp+0h] [ebp-18h]
  struct EWNDOBJ *v5; // [esp+4h] [ebp-14h]
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a1 + 64;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v6, a2, (struct _SPRITESTATE *)(a1 + 64));
  if ( a2 )
    vSpUpdateWndobjOverlap(v4, v5);
  vSpComputeUnlockedRegion(v2);
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v6);
}

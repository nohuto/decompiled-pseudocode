/*
 * XREFs of ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3
 * Callers:
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?SpSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x1DBE11 (-SpSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1DFBF4 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z @ 0x1E0285 (-vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E14C8 (-vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1E33D5 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ.c)
 * Callees:
 *     ?vOffset@EWNDOBJ@@QAEXJJ@Z @ 0x1E6899 (-vOffset@EWNDOBJ@@QAEXJJ@Z.c)
 */

UNDODESKTOPCOORD *__thiscall UNDODESKTOPCOORD::UNDODESKTOPCOORD(
        UNDODESKTOPCOORD *this,
        struct EWNDOBJ *a2,
        struct _SPRITESTATE *a3)
{
  struct EWNDOBJ *v3; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  LONG v9; // eax
  struct _POINTL v11; // [esp+8h] [ebp-8h] BYREF

  v3 = a2;
  *(_DWORD *)this = 0;
  if ( v3 && (*((_DWORD *)v3 + 35) & 0x100) != 0 )
  {
    v5 = *(_DWORD *)a3;
    *(_DWORD *)this = v3;
    v6 = *(_DWORD *)(v5 + 1836);
    *((_DWORD *)this + 1) = v6;
    v7 = *(_DWORD *)(v5 + 1840);
    *((_DWORD *)this + 2) = v7;
    EWNDOBJ::vOffset(v3, -v6, -v7);
    v8 = *((_DWORD *)v3 + 35);
    if ( (v8 & 0x200) != 0 && *((_DWORD *)v3 + 37) )
    {
      v9 = -*((_DWORD *)this + 1);
      a2 = (struct EWNDOBJ *)*((_DWORD *)v3 + 37);
      v11.x = v9;
      v11.y = -*((_DWORD *)this + 2);
      RGNOBJ::bOffset((RGNOBJ *)&a2, &v11);
      v8 = *((_DWORD *)v3 + 35);
    }
    *((_DWORD *)v3 + 35) = v8 & 0xFFFFFEFF;
  }
  return this;
}

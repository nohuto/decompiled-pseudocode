/*
 * XREFs of ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7
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

void __thiscall UNDODESKTOPCOORD::~UNDODESKTOPCOORD(UNDODESKTOPCOORD *this)
{
  EWNDOBJ *v2; // ecx
  struct _POINTL v3; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(EWNDOBJ **)this;
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 35) & 0x200) != 0 )
    {
      if ( *((_DWORD *)v2 + 37) )
      {
        v4 = *((_DWORD *)v2 + 37);
        v3 = *(struct _POINTL *)((char *)this + 4);
        RGNOBJ::bOffset((RGNOBJ *)&v4, &v3);
        v2 = *(EWNDOBJ **)this;
      }
    }
    EWNDOBJ::vOffset(v2, *((_DWORD *)this + 1), *((_DWORD *)this + 2));
    *(_DWORD *)(*(_DWORD *)this + 140) |= 0x100u;
  }
}

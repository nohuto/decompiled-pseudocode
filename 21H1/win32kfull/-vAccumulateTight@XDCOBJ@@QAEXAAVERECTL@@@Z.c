/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0xBB856
 * Callers:
 *     ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A (-GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDD88 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 */

void __thiscall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ERECTL *a2)
{
  int v2; // ecx
  _DWORD *v3; // ecx

  v2 = *(_DWORD *)this;
  if ( (*(_BYTE *)(v2 + 24) & 0x40) != 0 )
  {
    if ( ERECTL::bEmpty((ERECTL *)(v2 + 1112)) )
    {
      *v3 = *(_DWORD *)a2;
      v3[1] = *((_DWORD *)a2 + 1);
      v3[2] = *((_DWORD *)a2 + 2);
      v3[3] = *((_DWORD *)a2 + 3);
    }
    else
    {
      ERECTL::operator|=(v3, a2);
    }
  }
}

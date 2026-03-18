/*
 * XREFs of _GreWatchVisRgnChange@8 @ 0x1FDF85
 * Callers:
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0DCOBJA@@QAE@PAUHDC__@@@Z @ 0x7AB76 (--0DCOBJA@@QAE@PAUHDC__@@@Z.c)
 */

void __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  int *v3[3]; // [esp+4h] [ebp-Ch] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
  {
    if ( a2 )
      v3[0][6] |= (unsigned int)&loc_20000;
    else
      v3[0][6] &= ~0x20000u;
    XDCOBJ::vAltUnlockFast(v3);
  }
}

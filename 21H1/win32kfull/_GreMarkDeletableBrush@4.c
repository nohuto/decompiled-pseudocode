/*
 * XREFs of _GreMarkDeletableBrush@4 @ 0xE9408
 * Callers:
 *     _RecolorDeskPattern@0 @ 0xAEE98 (_RecolorDeskPattern@0.c)
 *     _SetDesktopPattern@8 @ 0xE9318 (_SetDesktopPattern@8.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338 (-RestoreAttributes@XEBRUSHOBJ@@IAEXXZ.c)
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 */

int __thiscall GreMarkDeletableBrush(HBRUSH this)
{
  int v2; // edx
  int result; // eax
  _DWORD v4[2]; // [esp+8h] [ebp-8h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v4, this);
  result = v4[0];
  if ( v4[0] )
  {
    if ( (*(_DWORD *)(v4[0] + 24) & 0x200) == 0 )
    {
      if ( this )
      {
        LOBYTE(v2) = 16;
        HmgMarkDeletable(this, v2);
      }
    }
    XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v4);
    return DEC_SHARE_REF_CNT(v4[0]);
  }
  return result;
}

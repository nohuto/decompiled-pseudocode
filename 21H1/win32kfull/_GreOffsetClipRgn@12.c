/*
 * XREFs of _GreOffsetClipRgn@12 @ 0xE7DDC
 * Callers:
 *     _xxxInternalPaintDesktop@12 @ 0xE7CB0 (_xxxInternalPaintDesktop@12.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  int v3; // esi
  int v5; // ecx
  int v7; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-14h] BYREF
  struct _POINTL v9; // [esp+14h] [ebp-8h] BYREF

  v3 = 0;
  memset(v8, 0, sizeof(v8));
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v5 = v8[0];
  if ( v8[0] )
  {
    v9.x = a2;
    v9.y = a3;
    a3 = *(_DWORD *)(v8[0] + 104);
    if ( a3 )
    {
      v7 = RGNOBJ::bOffset((RGNOBJ *)&a3, &v9);
      v5 = v8[0];
      v3 = v7;
    }
    else
    {
      v3 = 1;
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}

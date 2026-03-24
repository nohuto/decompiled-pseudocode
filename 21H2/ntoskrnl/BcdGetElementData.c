/*
 * XREFs of BcdGetElementData @ 0x14096F428
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC750 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x14096F608 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}

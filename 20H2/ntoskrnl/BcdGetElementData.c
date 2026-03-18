/*
 * XREFs of BcdGetElementData @ 0x140971D10
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BAD00 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x140971EF0 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}

/*
 * XREFs of BcdGetElementData @ 0x14096ABA0
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405B6A80 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x14096AD80 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}

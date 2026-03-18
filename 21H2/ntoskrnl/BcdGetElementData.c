/*
 * XREFs of BcdGetElementData @ 0x14081D380
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x140A1D568 (BiResolveLocateDevice.c)
 *     PopAdaptiveInitializeBootContext @ 0x140AF3434 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, GUID *a3, unsigned int *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, (__int64)a3, a3, a4);
}

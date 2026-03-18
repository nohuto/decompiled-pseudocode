/*
 * XREFs of BcdSetElementData @ 0x140A1D3AC
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}

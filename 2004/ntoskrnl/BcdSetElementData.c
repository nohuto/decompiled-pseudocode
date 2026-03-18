/*
 * XREFs of BcdSetElementData @ 0x14096BF60
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405B71A0 (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}

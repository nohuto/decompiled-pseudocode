/*
 * XREFs of KyRetireDpcList @ 0x140428D70
 * Callers:
 *     KiDispatchInterrupt @ 0x140428B10 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140428B50LL);
}

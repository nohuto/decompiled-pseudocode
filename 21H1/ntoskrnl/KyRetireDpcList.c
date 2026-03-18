/*
 * XREFs of KyRetireDpcList @ 0x1403FCE80
 * Callers:
 *     KiDispatchInterrupt @ 0x1403FCC30 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x140206910 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1403FCC70LL);
}

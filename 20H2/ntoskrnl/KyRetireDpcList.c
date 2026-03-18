/*
 * XREFs of KyRetireDpcList @ 0x140404190
 * Callers:
 *     KiDispatchInterrupt @ 0x140403F40 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x14028A670 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140403F80LL);
}

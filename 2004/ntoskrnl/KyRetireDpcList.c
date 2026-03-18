/*
 * XREFs of KyRetireDpcList @ 0x1403FE110
 * Callers:
 *     KiDispatchInterrupt @ 0x1403FDEC0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x140299420 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1403FDF00LL);
}

/*
 * XREFs of KyRetireDpcList @ 0x1404067A0
 * Callers:
 *     KiDispatchInterrupt @ 0x140406550 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402466B0 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140406590LL);
}

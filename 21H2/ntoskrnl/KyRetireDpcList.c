/*
 * XREFs of KyRetireDpcList @ 0x140406980
 * Callers:
 *     KiDispatchInterrupt @ 0x140406730 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140406770LL);
}

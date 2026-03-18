/*
 * XREFs of MiFlushEnclaveTb @ 0x140544B7C
 * Callers:
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 */

void __fastcall MiFlushEnclaveTb(__int64 a1, _KPROCESS *a2, int a3)
{
  if ( a2 != (_KPROCESS *)-1LL )
  {
    if ( (a3 & 0x20000000) == 0 && !*(_DWORD *)(a1 + 12) )
      MiInsertTbFlushEntry(a1, (unsigned __int64)a2, 1LL, 0);
    MiFlushTbList(a1, a2);
  }
}

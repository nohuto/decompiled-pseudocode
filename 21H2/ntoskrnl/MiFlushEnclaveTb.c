/*
 * XREFs of MiFlushEnclaveTb @ 0x1405A94F4
 * Callers:
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 */

void __fastcall MiFlushEnclaveTb(__int64 a1, unsigned __int64 a2, int a3)
{
  if ( a2 != -1LL )
  {
    if ( (a3 & 0x20000000) == 0 && !*(_DWORD *)(a1 + 12) )
      MiInsertTbFlushEntry(a1, a2, 1LL, 0);
    MiFlushTbList(a1);
  }
}

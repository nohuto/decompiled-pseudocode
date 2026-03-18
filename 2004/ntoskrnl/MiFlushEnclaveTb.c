/*
 * XREFs of MiFlushEnclaveTb @ 0x1405451CC
 * Callers:
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 * Callees:
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
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

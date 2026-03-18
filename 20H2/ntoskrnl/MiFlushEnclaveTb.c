/*
 * XREFs of MiFlushEnclaveTb @ 0x140548B9C
 * Callers:
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 */

void __fastcall MiFlushEnclaveTb(unsigned int *a1, _KPROCESS *a2, int a3)
{
  if ( a2 != (_KPROCESS *)-1LL )
  {
    if ( (a3 & 0x20000000) == 0 && !a1[3] )
      MiInsertTbFlushEntry((__int64)a1, (unsigned __int64)a2, 1LL, 0);
    MiFlushTbList(a1, a2);
  }
}

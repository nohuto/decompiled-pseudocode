/*
 * XREFs of MiArbitraryCodeBlocked @ 0x1407092F4
 * Callers:
 *     MiAllowProtectionChange @ 0x140357874 (MiAllowProtectionChange.c)
 *     MiMapViewOfSection @ 0x140632050 (MiMapViewOfSection.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1403579C4 (EtwTraceMemoryAcg.c)
 *     EtwTimLogProhibitDynamicCode @ 0x1409374D8 (EtwTimLogProhibitDynamicCode.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 2512);
  if ( (v3 & 0x100) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) != 0 )
  {
    if ( (v3 & 0x800) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      EtwTimLogProhibitDynamicCode(1LL, a1);
    EtwTraceMemoryAcg(0);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000);
    EtwTimLogProhibitDynamicCode(2LL, a1);
    return 3221227012LL;
  }
}

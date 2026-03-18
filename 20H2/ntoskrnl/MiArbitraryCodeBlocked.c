/*
 * XREFs of MiArbitraryCodeBlocked @ 0x14069A130
 * Callers:
 *     MiAllowProtectionChange @ 0x1402EBE64 (MiAllowProtectionChange.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1402EBFB4 (EtwTraceMemoryAcg.c)
 *     EtwTimLogProhibitDynamicCode @ 0x14093E5A8 (EtwTimLogProhibitDynamicCode.c)
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

/*
 * XREFs of HaliLocateHiberRanges @ 0x140A4EB20
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerMarkHiberPhase @ 0x14038D480 (HalpTimerMarkHiberPhase.c)
 *     HalpPciMarkHiberPhase @ 0x14038D4BC (HalpPciMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x14038D91C (HalpDmaMarkHiberAdapter.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14038DF04 (HalpExtEnvMarkHiberRegions.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuMarkHiberPhase @ 0x140A4E6D4 (HalpIommuMarkHiberPhase.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A4F0DC (HalpMmAllocCtxMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  unsigned int i; // ebx
  unsigned __int64 v3; // rax
  void *v4; // r8

  if ( MemoryMap )
  {
    if ( dword_140C4DF38 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4DF40 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4DF38 >> 12,
        0x6D6C6168u);
    if ( dword_140C4E0F8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4E100 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4E0F8 >> 12,
        0x6D6C6168u);
    if ( dword_140C4E018 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4E020 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4E018 >> 12,
        0x6D6C6168u);
    if ( dword_140C4E1D8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4E1E0 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4E1D8 >> 12,
        0x6D6C6168u);
    HalpPciMarkHiberPhase(MemoryMap);
    HalpIommuMarkHiberPhase(MemoryMap);
    HalpExtEnvMarkHiberRegions(MemoryMap);
    HalpDmaMarkHiberAdapter(MemoryMap);
  }
  else
  {
    HalpMmAllocCtxMarkHiberPhase();
    HalpDmaMarkHiberAdapter(0LL);
    HalpIommuMarkHiberPhase(0LL);
    HalpExtEnvMarkHiberRegions(0LL);
    PoSetHiberRange(0LL, 0x10000u, HalpCR3Root, 0x1000uLL, 0x746C6168u);
    PoSetHiberRange(0LL, 0x10000u, HaliLocateHiberRanges, 0LL, 0x746C6168u);
    for ( i = 0; i < HalpExtHandleCount; ++i )
    {
      v3 = HalpExtHandleArray + ((unsigned __int64)i << 6);
      v4 = *(void **)(v3 + 48);
      if ( v4 )
        PoSetHiberRange(0LL, 0x10000u, v4, *(unsigned int *)(v3 + 56), 0x456C6148u);
    }
    if ( HalpMceErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpMceErrorSource, 0x3CCuLL, 0x746C6168u);
    if ( HalpCmcErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpCmcErrorSource, 0x3CCuLL, 0x746C6168u);
    PshedMarkHiberPhase();
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(PmAcpiDispatchTable + 8), 0LL, 0x636C6168u);
    (*(void (**)(void))(PmAcpiDispatchTable + 32))();
    PoSetHiberRange(0LL, 0x10000u, off_140C01E10, 0LL, 0x636C6168u);
    off_140C01E50[0]();
    if ( HalpMcUpdateMicrocodeFunc )
      PoSetHiberRange(0LL, 0x10000u, HalpMcUpdateMicrocodeFunc, 0LL, 0x636C6168u);
    if ( HalpMcUpdateData )
      PoSetHiberRange(0LL, 0x10000u, HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize, 0x636C6168u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}

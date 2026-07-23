/*
 * XREFs of HaliLocateHiberRanges @ 0x140997620
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     HalpPciMarkHiberPhase @ 0x14038808C (HalpPciMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     HalpDmaMarkHiberAdapter @ 0x140388488 (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x140388534 (HalpExtEnvMarkHiberRegions.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerMarkHiberPhase @ 0x1404B6BC4 (HalpTimerMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140997560 (HalpIommuMarkHiberPhase.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x1409A7DFC (HalpMmAllocCtxMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int i; // ebx
  unsigned __int64 v6; // rax
  void *v7; // r8

  if ( MemoryMap )
  {
    if ( dword_140C4BDB8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4BDC0 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4BDB8 >> 12,
        0x6D6C6168u);
    if ( dword_140C4BBF8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4BC00 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4BBF8 >> 12,
        0x6D6C6168u);
    if ( dword_140C4BE98 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4BEA0 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4BE98 >> 12,
        0x6D6C6168u);
    if ( dword_140C4BCD8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4BCE0 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4BCD8 >> 12,
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
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      v3 = 0LL;
      v4 = ActiveProcessorCount;
      do
      {
        PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v3 + HalpCR3Root), 0x1000uLL, 0x746C6168u);
        v3 += 8LL;
        --v4;
      }
      while ( v4 );
    }
    PoSetHiberRange(0LL, 0x10000u, HaliLocateHiberRanges, 0LL, 0x746C6168u);
    for ( i = 0; i < HalpExtHandleCount; ++i )
    {
      v6 = HalpExtHandleArray + ((unsigned __int64)i << 6);
      v7 = *(void **)(v6 + 48);
      if ( v7 )
        PoSetHiberRange(0LL, 0x10000u, v7, *(unsigned int *)(v6 + 56), 0x456C6148u);
    }
    if ( HalpMceErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpMceErrorSource, 0x3CCuLL, 0x746C6168u);
    if ( HalpCmcErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpCmcErrorSource, 0x3CCuLL, 0x746C6168u);
    PshedMarkHiberPhase();
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(PmAcpiDispatchTable + 8), 0LL, 0x636C6168u);
    (*(void (**)(void))(PmAcpiDispatchTable + 32))();
    PoSetHiberRange(0LL, 0x10000u, off_140C007C0, 0LL, 0x636C6168u);
    off_140C00800[0]();
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

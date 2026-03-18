/*
 * XREFs of HaliLocateHiberRanges @ 0x1409933F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     HalpPciMarkHiberPhase @ 0x14038563C (HalpPciMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x140385760 (PoSetHiberRange.c)
 *     HalpDmaMarkHiberAdapter @ 0x140385A38 (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x140385AE4 (HalpExtEnvMarkHiberRegions.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalpTimerMarkHiberPhase @ 0x1404B1AA4 (HalpTimerMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x14099332C (HalpIommuMarkHiberPhase.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x1409A40A4 (HalpMmAllocCtxMarkHiberPhase.c)
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
    if ( dword_140C4B9B8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4B9C0 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4B9B8 >> 12,
        0x6D6C6168u);
    if ( dword_140C4BB78 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4BB80 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4BB78 >> 12,
        0x6D6C6168u);
    if ( dword_140C4BA98 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4BAA0 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4BA98 >> 12,
        0x6D6C6168u);
    if ( dword_140C4BC58 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4BC60 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4BC58 >> 12,
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

/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140994860
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140323280 (VfIsVerifierEnabled.c)
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 *     FirstEntrySList @ 0x1403FDD50 (FirstEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HvlMarkHiberPhase @ 0x1404F2450 (HvlMarkHiberPhase.c)
 *     MmIsAddressValid @ 0x140531050 (MmIsAddressValid.c)
 *     RtlMarkHiberPhase @ 0x14058D1B4 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x14059AB24 (VfIsVerifierExtensionEnabled.c)
 *     MiConvertHiberPhasePages @ 0x140990F78 (MiConvertHiberPhasePages.c)
 *     BgkResumePrepare @ 0x140991A38 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x1409AB228 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x1409AB2B8 (KeMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x1409AC94C (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x1409AD8F8 (PopMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(PVOID Address)
{
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int k; // ebx
  _QWORD *v5; // rbx
  PVOID *m; // rbx

  if ( !byte_140C23621 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      if ( MmIsAddressValid(i[12]) )
        PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      if ( MmIsAddressValid(i[10]) )
        PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&stru_140C505E0); j; j = j->Next )
      KeMarkHiberPhase(*((PVOID *)&j[-1].Next + 1));
    ((void (__fastcall *)(_QWORD))off_140C005A8[0])(0LL);
    PopMarkHiberPhase(Address);
    KdMarkHiberPhase();
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      if ( ViTrackIrqlQueue )
        PoSetHiberRange(0LL, 0x10000u, ViTrackIrqlQueue, 56LL * (unsigned int)ViTrackIrqlQueueLength, 0x72696656u);
      if ( (unsigned int)VfIsVerifierExtensionEnabled() == 1 && ViFnExtensionHiberFunc )
        PoSetHiberRange(0LL, 0x10000u, ViFnExtensionHiberFunc, 0LL, 0x72696656u);
    }
    BgkResumePrepare(0LL);
    RtlMarkHiberPhase();
    HvlMarkHiberPhase();
    MmMarkHiberPhase();
    for ( k = 0; k < IopNumTriageDumpDataBlocks; ++k )
      PoSetHiberRange(
        0LL,
        0x10000u,
        (PVOID)IopTriageDumpDataBlocks[2 * k],
        _mm_srli_si128(*(__m128i *)&IopTriageDumpDataBlocks[2 * k], 8).m128i_u64[0] - IopTriageDumpDataBlocks[2 * k],
        0x42706D44u);
    v5 = PopShutdownNotificationCallback;
    if ( PopShutdownNotificationCallback )
    {
      PoSetHiberRange(0LL, 0x10000u, PopShutdownNotificationCallback, 0x18uLL, 0x6E72654Bu);
      ((void (__fastcall *)(_QWORD))*v5)(v5[2]);
    }
    for ( m = (PVOID *)PopThermal; m != &PopThermal; m = (PVOID *)*m )
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages((__int64)Address + 32);
    *((_BYTE *)Address + 3) = 1;
  }
  *((_BYTE *)Address + 28) = 1;
}

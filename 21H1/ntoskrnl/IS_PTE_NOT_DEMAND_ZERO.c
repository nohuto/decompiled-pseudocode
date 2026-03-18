/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14022956C
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14020F5F0 (MiResolvePrivateZeroFault.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x1405339AC (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x14054FE80 (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MmHardFaultBytesRequired @ 0x140631D10 (MmHardFaultBytesRequired.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C4DE80 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140C4DE80;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}

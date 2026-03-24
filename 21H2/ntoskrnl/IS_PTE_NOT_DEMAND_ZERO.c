/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14023C0AC
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140210120 (MiResolvePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x1405394CC (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x140555970 (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x1406EF710 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C4DF40 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140C4DF40;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}

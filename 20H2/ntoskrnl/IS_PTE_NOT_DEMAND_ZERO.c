/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x140349584
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiResolvePrivateZeroFault @ 0x140271440 (MiResolvePrivateZeroFault.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x1405379CC (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140680B90 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C4DDC0 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140C4DDC0;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}

/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiResolvePrivateZeroFault @ 0x1403219B0 (MiResolvePrivateZeroFault.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiPrefetchJumpVad @ 0x140594ABC (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C50780 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140C50780;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}

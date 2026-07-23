/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x14053970C (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140706AF0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C4DF80 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140C4DF80;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}

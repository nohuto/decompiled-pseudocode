/*
 * XREFs of MiLocateCloneAddress @ 0x14033A8E4
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiTrimThisWsle @ 0x140246E80 (MiTrimThisWsle.c)
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MiGetPfnProtection @ 0x140253B70 (MiGetPfnProtection.c)
 *     MiComputePageCommitment @ 0x140254480 (MiComputePageCommitment.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiSharedVaToPartition @ 0x1402B8FC8 (MiSharedVaToPartition.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x140525C3C (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B8C4 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x140542514 (MiMakeProtoPrivate.c)
 *     MiReferenceCloneProto @ 0x1405560F8 (MiReferenceCloneProto.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 1264);
  while ( result )
  {
    if ( a2 > result[4] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a2 >= result[3] )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return 0LL;
}

/*
 * XREFs of MiLocateCloneAddress @ 0x14023EF08
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiSharedVaToPartition @ 0x14024144C (MiSharedVaToPartition.c)
 *     MiGetPfnProtection @ 0x140270C88 (MiGetPfnProtection.c)
 *     MiTrimThisWsle @ 0x140308DA0 (MiTrimThisWsle.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x140530D94 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x1405479E4 (MiMakeProtoPrivate.c)
 *     MiReferenceCloneProto @ 0x14055B598 (MiReferenceCloneProto.c)
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

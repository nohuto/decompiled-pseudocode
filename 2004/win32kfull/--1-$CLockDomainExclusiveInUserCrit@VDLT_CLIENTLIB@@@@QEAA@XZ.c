/*
 * XREFs of ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0243F84
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0046334 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **a1)
{
  tagDomLock::UnLockExclusive(*a1);
}

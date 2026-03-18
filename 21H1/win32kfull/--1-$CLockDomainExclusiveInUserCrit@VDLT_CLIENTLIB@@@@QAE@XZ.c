/*
 * XREFs of ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x1A1140
 * Callers:
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 * Callees:
 *     <none>
 */

void __thiscall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **this)
{
  tagDomLock::UnLockExclusive(*this);
}

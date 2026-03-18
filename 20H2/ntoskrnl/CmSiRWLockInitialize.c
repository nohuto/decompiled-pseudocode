/*
 * XREFs of CmSiRWLockInitialize @ 0x14078B1F0
 * Callers:
 *     RtlpHpHeapCreate @ 0x14037ACD4 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14039E0FC (RtlHpHeapManagerInitialize.c)
 *     CmFcManagerInitialize @ 0x140A3BD98 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 *     SshInitialize @ 0x140A42A1C (SshInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A70560 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}

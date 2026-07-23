/*
 * XREFs of CmSiRWLockInitialize @ 0x140795910
 * Callers:
 *     RtlpHpHeapCreate @ 0x14037AA74 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14039DE8C (RtlHpHeapManagerInitialize.c)
 *     CmFcManagerInitialize @ 0x140A39D64 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     SshInitialize @ 0x140A41584 (SshInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A6E4E0 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}

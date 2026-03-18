/*
 * XREFs of CmSiRWLockInitialize @ 0x14077DC50
 * Callers:
 *     RtlpHpHeapCreate @ 0x140378FA4 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14039AFAC (RtlHpHeapManagerInitialize.c)
 *     CmFcManagerInitialize @ 0x140A35D98 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 *     SshInitialize @ 0x140A3C77C (SshInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A69C54 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}

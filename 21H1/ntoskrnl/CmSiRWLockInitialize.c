/*
 * XREFs of CmSiRWLockInitialize @ 0x14077E460
 * Callers:
 *     RtlpHpHeapCreate @ 0x1403781E4 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14039A81C (RtlHpHeapManagerInitialize.c)
 *     CmFcManagerInitialize @ 0x140A35D98 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     SshInitialize @ 0x140A3CB24 (SshInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A697D4 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}

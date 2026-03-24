/*
 * XREFs of CmSiRWLockInitialize @ 0x140795710
 * Callers:
 *     RtlpHpHeapCreate @ 0x14037AF24 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14039DD3C (RtlHpHeapManagerInitialize.c)
 *     CmFcManagerInitialize @ 0x140A38D64 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     SshInitialize @ 0x140A40584 (SshInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A6D4E0 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}

/*
 * XREFs of PspLockProcessSharedUnsafe @ 0x14057BE5C
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessSharedUnsafe(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}

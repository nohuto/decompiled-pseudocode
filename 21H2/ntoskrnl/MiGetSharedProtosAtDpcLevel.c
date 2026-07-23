/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x1403A63DC
 * Callers:
 *     MiImageProtoChargedCommit @ 0x140379DF0 (MiImageProtoChargedCommit.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x14024D58C (MiLocateSessionProtosInSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 *__fastcall MiGetSharedProtosAtDpcLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rdi
  __int64 *SessionProtosInSubsection; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return SessionProtosInSubsection;
}

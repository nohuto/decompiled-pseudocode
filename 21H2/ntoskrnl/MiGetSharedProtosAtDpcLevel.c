/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x1403A628C
 * Callers:
 *     MiImageProtoChargedCommit @ 0x14037A2A0 (MiImageProtoChargedCommit.c)
 *     MiGetSharedProtos @ 0x1403A6208 (MiGetSharedProtos.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x1402CF08C (MiLocateSessionProtosInSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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

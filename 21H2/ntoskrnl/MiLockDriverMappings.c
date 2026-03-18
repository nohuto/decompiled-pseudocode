/*
 * XREFs of MiLockDriverMappings @ 0x1402DC334
 * Callers:
 *     MiReleaseDriverPtes @ 0x14076200C (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F4E0, 0LL);
}

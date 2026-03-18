/*
 * XREFs of MiLockDriverMappings @ 0x14036FCD0
 * Callers:
 *     MiReleaseDriverPtes @ 0x140748668 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CC68, 0LL);
}

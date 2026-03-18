/*
 * XREFs of MiLockDriverMappings @ 0x140370900
 * Callers:
 *     MiReleaseDriverPtes @ 0x14074A1E8 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x14074A39C (MiReserveDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB28, 0LL);
}

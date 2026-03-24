/*
 * XREFs of MiLockDriverMappings @ 0x140372BBC
 * Callers:
 *     MiReleaseDriverPtes @ 0x14075FCF0 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x14075FEA4 (MiReserveDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CD28, 0LL);
}

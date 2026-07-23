/*
 * XREFs of MiLockDriverMappings @ 0x14037270C
 * Callers:
 *     MiReleaseDriverPtes @ 0x14075FEB0 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CD68, 0LL);
}

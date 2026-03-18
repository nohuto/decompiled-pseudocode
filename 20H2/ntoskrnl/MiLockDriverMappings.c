/*
 * XREFs of MiLockDriverMappings @ 0x140372850
 * Callers:
 *     MiReleaseDriverPtes @ 0x140758DC8 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140758F7C (MiReserveDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CBA8, 0LL);
}

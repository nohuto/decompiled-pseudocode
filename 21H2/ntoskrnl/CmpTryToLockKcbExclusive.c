/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x14061EC84
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateRegistryRoot @ 0x140A5BED4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  char v3; // bl
  PRTL_BALANCED_NODE v4; // rax

  v1 = (volatile signed __int32 *)(a1 + 48);
  v3 = 1;
  v4 = KeAbPreAcquire(a1 + 48, 0LL, 1);
  if ( _interlockedbittestandset64(v1, 0LL) )
  {
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v1, (ULONG_PTR)v4);
    return 0;
  }
  else
  {
    if ( v4 )
      BYTE2(v4[1].Left) |= 1u;
    *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  }
  return v3;
}

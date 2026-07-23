/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x14070D8E4
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpCreateRegistryRoot @ 0x140A59228 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  char v3; // bl
  ULONG_PTR v4; // rax

  v1 = (volatile signed __int32 *)(a1 + 48);
  v3 = 1;
  v4 = KeAbPreAcquire(a1 + 48, 0LL, 1);
  if ( _interlockedbittestandset64(v1, 0LL) )
  {
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v1, v4);
    return 0;
  }
  else
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  }
  return v3;
}

/*
 * XREFs of CmpAddToDelayedClose @ 0x1406E3324
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406E31D0 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     CmpArmDelayedCloseTimer @ 0x14033B4A8 (CmpArmDelayedCloseTimer.c)
 */

void __fastcall CmpAddToDelayedClose(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  unsigned int v4; // eax
  bool v5; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = CmpDelayedLRUListHead;
  v3 = (_QWORD *)(a1 + 224);
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v3 = CmpDelayedLRUListHead;
  *(_QWORD *)(a1 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v2 + 8) = v3;
  CmpDelayedLRUListHead = a1 + 224;
  v4 = CmpDelayedCloseElements + 1;
  *(_BYTE *)(a1 + 64) |= 2u;
  ++qword_140D2EF88;
  v5 = v4 > CmpDelayedCloseSize;
  CmpDelayedCloseElements = v4;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  if ( v5 )
    CmpArmDelayedCloseTimer();
}

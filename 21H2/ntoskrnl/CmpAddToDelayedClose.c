/*
 * XREFs of CmpAddToDelayedClose @ 0x1406FEB88
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     CmpArmDelayedCloseTimer @ 0x140345F84 (CmpArmDelayedCloseTimer.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall CmpAddToDelayedClose(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  bool v4; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*v2 != v2 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
  v3 = CmpDelayedLRUListHead;
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v2 = CmpDelayedLRUListHead;
  *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v3 + 8) = v2;
  CmpDelayedLRUListHead = BugCheckParameter2 + 224;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
  ++qword_140D3D2C8;
  v4 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  if ( v4 )
    CmpArmDelayedCloseTimer();
}

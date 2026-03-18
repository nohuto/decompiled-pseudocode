/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x1406A39B0
 * Callers:
 *     CmpReferenceKeyControlBlock @ 0x1406A364C (CmpReferenceKeyControlBlock.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406A37D8 (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  char v2; // al
  _QWORD *v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  _QWORD *v6; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = *(_BYTE *)(a1 + 64);
  if ( (v2 & 2) != 0 )
  {
    v3 = (_QWORD *)(a1 + 224);
    v4 = (v2 & 4) == 0;
    v5 = *(_QWORD *)(a1 + 224);
    if ( v4 )
    {
      if ( *(_QWORD **)(v5 + 8) != v3 || (v6 = *(_QWORD **)(a1 + 232), (_QWORD *)*v6 != v3) )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      --qword_140D2EF88;
    }
    else
    {
      *(_BYTE *)v5 = 1;
      *(_BYTE *)(a1 + 64) &= ~4u;
    }
    *(_QWORD *)(a1 + 232) = a1 + 224;
    *v3 = v3;
    _InterlockedOr(v7, 0);
    *(_BYTE *)(a1 + 64) &= ~2u;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
}

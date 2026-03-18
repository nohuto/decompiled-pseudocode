/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x14069FB00
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14069F904 (CmpCleanUpKCBCacheTable.c)
 *     CmpReferenceKeyControlBlock @ 0x14071B250 (CmpReferenceKeyControlBlock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
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
      --qword_140D3D2C8;
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

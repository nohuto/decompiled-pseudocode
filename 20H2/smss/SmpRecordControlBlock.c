/*
 * XREFs of SmpRecordControlBlock @ 0x140003E78
 * Callers:
 *     SmpStartCsr @ 0x1400020F0 (SmpStartCsr.c)
 * Callees:
 *     SmpInsertControlBlock @ 0x140003EF8 (SmpInsertControlBlock.c)
 */

__int64 __fastcall SmpRecordControlBlock(__int64 a1)
{
  int v1; // eax
  struct _RTL_SPLAY_LINKS *v2; // rdi
  int inserted; // eax
  struct _RTL_SPLAY_LINKS *v5; // rdx

  v1 = *(_DWORD *)(a1 + 4);
  v2 = (struct _RTL_SPLAY_LINKS *)(a1 + 104);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  *(_DWORD *)(a1 + 4) = v1 + 1;
  RtlAcquireSRWLockExclusive(&SmpControlLock);
  inserted = SmpInsertControlBlock(SmpControlBlockRoot, a1);
  v5 = SmpControlBlockRoot;
  if ( inserted )
    v5 = v2;
  SmpControlBlockRoot = v5;
  return RtlReleaseSRWLockExclusive(&SmpControlLock);
}

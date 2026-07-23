/*
 * XREFs of CmpCloneToUnbackedKcb @ 0x14086EC3C
 * Callers:
 *     CmpPrepareDiscardReplacePost @ 0x140876600 (CmpPrepareDiscardReplacePost.c)
 * Callees:
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406DF600 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpAllocateKeyControlBlock @ 0x1406DF70C (CmpAllocateKeyControlBlock.c)
 */

__int64 __fastcall CmpCloneToUnbackedKcb(__int64 a1, ULONG_PTR *a2)
{
  PSLIST_ENTRY KeyControlBlock; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int *v11; // rcx

  KeyControlBlock = CmpAllocateKeyControlBlock();
  v5 = (ULONG_PTR)KeyControlBlock;
  if ( KeyControlBlock )
  {
    v7 = &KeyControlBlock[7].Next + 1;
    v7[1] = v7;
    *v7 = v7;
    *(_OWORD *)(v5 + 136) = 0LL;
    *(_OWORD *)(v5 + 152) = 0LL;
    *(_QWORD *)v5 = 1LL;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 40) = -1;
    LODWORD(v7) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 240) = 0LL;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
    *(_DWORD *)(v5 + 16) = (_DWORD)v7;
    *(_DWORD *)(v5 + 248) = 0;
    *(_QWORD *)(v5 + 256) = 0LL;
    *(_DWORD *)(v5 + 264) = 0;
    *(_QWORD *)(v5 + 272) = 0LL;
    *(_QWORD *)(v5 + 216) = v5 + 208;
    *(_QWORD *)(v5 + 208) = v5 + 208;
    *(_QWORD *)(v5 + 232) = v5 + 224;
    *(_QWORD *)(v5 + 224) = v5 + 224;
    *(_DWORD *)(v5 + 284) = -1;
    v8 = *(_DWORD **)(a1 + 80);
    if ( (*v8 & 0xFFFFFFFE) == 0xFFFFFFFE )
    {
      v6 = -1073741670;
    }
    else
    {
      *(_QWORD *)(v5 + 80) = v8;
      *v8 += 2;
      v9 = *(_QWORD *)(a1 + 72);
      if ( v9 )
      {
        *(_BYTE *)(v5 + 65) = ((*(_BYTE *)(v9 + 65) - 1) & 0xFD) == 0;
        CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int64 **)(a1 + 72));
        *(_QWORD *)(v5 + 72) = *(_QWORD *)(a1 + 72);
      }
      v10 = *(_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 8) ^= (*(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 8)) & 0x7FE00000;
      if ( *(_BYTE *)(v10 + 2936) == 1 )
        *(_WORD *)(v5 + 8) |= 0x20u;
      *a2 = v5;
      v5 = 0LL;
      v6 = 0;
    }
    if ( v5 )
    {
      v11 = *(unsigned int **)(v5 + 80);
      if ( v11 )
      {
        CmpDereferenceNameControlBlockWithLock(v11);
        *(_QWORD *)(v5 + 80) = 0LL;
      }
      *(_DWORD *)(v5 + 8) |= 0x80000u;
      CmpFreeKeyControlBlock(v5);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}

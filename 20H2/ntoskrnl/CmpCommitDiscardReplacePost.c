/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x1408786E0
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140878674 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14061D4F4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140682488 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRebuildKcbCache @ 0x1406A1CF8 (CmpRebuildKcbCache.c)
 *     CmpMarkKeyUnbacked @ 0x1407018BC (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD **v13; // rax
  _QWORD *v14; // r14
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3 + 16;
  v6 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
    __fastfail(3u);
  *(_QWORD *)v3 = v7;
  v8 = (ULONG_PTR)(v6 - 15);
  *(_QWORD *)(v7 + 8) = v3;
  v6[1] = v6;
  *v6 = v6;
  *((_WORD *)v6 - 27) = *(_WORD *)(a1 + 66);
  v6[9] = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_WORD *)(a1 + 66) = 0;
  *(_QWORD *)(v6[9] + 16LL) = v6 - 15;
  v9 = *(_DWORD *)(a1 + 40);
  if ( v9 != -1 )
  {
    *(_DWORD *)(v8 + 40) = v9;
    CmpMarkKeyUnbacked(a1);
    CmpRebuildKcbCache(v8);
  }
  CmpDiscardKcb(a1, a2);
  v10 = *(_QWORD *)(v8 + 32);
  v11 = *(_QWORD *)(v10 + 1640);
  v12 = 3
      * ((unsigned int)(*(_DWORD *)(v10 + 1648) - 1) & ((unsigned int)(101027
                                                                     * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)));
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v11
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v10 + 1648) - 1) & ((unsigned int)(101027
                                                                                                  * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v11 + 8 * v12 + 16) = v8 + 16;
  v13 = (_QWORD **)(*(_QWORD *)(v8 + 192) + 32LL);
  v14 = *v13;
  while ( v14 != v13 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
    v14 = (_QWORD *)*v14;
    v13 = (_QWORD **)(*(_QWORD *)(v8 + 192) + 32LL);
  }
  v16[0] = a1;
  v16[1] = v8;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    *(_QWORD *)(v8 + 32),
    a2,
    (__int64)v16,
    0);
  CmpDereferenceKeyControlBlockWithLock(a1, a2, 0);
  CmpDereferenceKeyControlBlockWithLock(v8, a2, 0);
  return 0LL;
}

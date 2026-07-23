/*
 * XREFs of CmpLightWeightCommitRenameKeyUoW @ 0x14087F024
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpSearchForOpenSubKeys @ 0x1405DF4D8 (CmpSearchForOpenSubKeys.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F334 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUpdateParentForEachSon @ 0x14087B448 (CmpUpdateParentForEachSon.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087EC24 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14087FE5C (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r9
  unsigned __int16 v10; // dx
  unsigned int *v11; // rbx
  ULONG_PTR v12; // rcx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+64h] [rbp+Ch]
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+6Ch] [rbp+14h]

  v15 = 0;
  v17 = 0;
  v14 = -1;
  v6 = a1[6];
  v16 = -1;
  v7 = *(_QWORD *)(v6 + 32);
  CmpUpdateParentForEachSon(v7, *(unsigned int *)(v6 + 40), a3);
  ++*(_QWORD *)(a1[6] + 304);
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(a1[6] + 40), &v14);
  *(_DWORD *)(v8 + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(
         v7,
         *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL),
         &v16);
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 304LL);
  v10 = 2 * *(_WORD *)(v8 + 72);
  if ( (*(_BYTE *)(v8 + 2) & 0x20) == 0 )
    v10 = *(_WORD *)(v8 + 72);
  if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v10 )
  {
    *(_WORD *)(v9 + 52) = v10;
    *(_WORD *)(*(_QWORD *)(a1[6] + 72) + 176LL) = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *, _QWORD, __int64))(v7 + 16))(v7, &v14, v10, v9);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v16);
  v13[1] = a1[6];
  v13[0] = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    v7,
    a3,
    (__int64)v13,
    0);
  CmpSearchForOpenSubKeys(a1[6], 1, 0LL);
  HvFreeCell(v7, *(unsigned int *)(a1[11] + 40));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8, a3, 1);
  CmpMarkKeyUnbacked(a1[11], a3);
  CmpDiscardKcb(a1[11]);
  v11 = (unsigned int *)a1[13];
  if ( *v11 == 1 )
    CmpLightWeightSwapParentSubKeyList(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v7, v11);
  v12 = a1[6];
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v12, a3, 0);
  CmpDereferenceKeyControlBlockWithLock(a1[11], a3, 0);
}

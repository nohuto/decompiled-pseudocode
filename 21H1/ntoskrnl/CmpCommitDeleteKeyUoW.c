/*
 * XREFs of CmpCommitDeleteKeyUoW @ 0x14071F748
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140691E68 (CmpMarkKeyUnbacked.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140692AA4 (CmpCleanupDiscardReplaceContext.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140696930 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14071F8B8 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x14085F494 (CmpReleaseKeyNodeForKcb.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140871834 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140871C44 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 */

__int64 __fastcall CmpCommitDeleteKeyUoW(__int64 a1, __int64 *a2, __int64 a3)
{
  ULONG_PTR v5; // rdi
  __int64 KeyNodeForKcb; // rax
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+28h] [rbp-18h]
  int v19; // [rsp+2Ch] [rbp-14h]
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v19 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v20[1] = v20;
  LODWORD(v21) = -1;
  LODWORD(v22) = -1;
  v20[0] = v20;
  v18 = -1073741823;
  KeyNodeForKcb = CmpGetKeyNodeForKcb(v5, (__int64)&v21, 1);
  v7 = *(_DWORD *)(KeyNodeForKcb + 20) + *(_DWORD *)(KeyNodeForKcb + 24);
  CmpReleaseKeyNodeForKcb(v5, &v21);
  if ( v7 )
  {
    v11 = -1073741535;
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 192);
    if ( !v9
      || *(_QWORD *)(v9 + 32) == v9 + 32
      || (v11 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, &v17, v8), v11 >= 0) )
    {
      v11 = CmpFreeKeyByCell(*(_QWORD *)(v5 + 32), *(_DWORD *)(v5 + 40), 1);
      if ( v11 >= 0 )
      {
        LOBYTE(v12) = 1;
        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v5, v10, a3, v12);
        CmpFlushNotifiesOnKeyBodyList(v5, 8LL, a3, 1);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v5 + 72), 1);
        v13 = CmpGetKeyNodeForKcb(*(_QWORD *)(v5 + 72), (__int64)&v22, 1);
        ++*(_QWORD *)(*(_QWORD *)(v5 + 72) + 304LL);
        *(_WORD *)(*(_QWORD *)(v5 + 72) + 176LL) = *(_WORD *)(v13 + 52);
        v14 = *a2;
        *(_QWORD *)(v13 + 4) = *a2;
        *(_QWORD *)(*(_QWORD *)(v5 + 72) + 168LL) = v14;
        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v5 + 72), &v22);
        CmpMarkKeyUnbacked(v5);
        v15 = *(_QWORD *)(v5 + 192);
        if ( !v15 || *(_QWORD *)(v15 + 32) == v15 + 32 )
          CmpDiscardKcb(v5, a3);
        else
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
        v11 = 0;
      }
    }
  }
  CmpCleanupDiscardReplaceContext(&v17, a3);
  return (unsigned int)v11;
}

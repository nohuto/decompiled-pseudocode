/*
 * XREFs of CmpCommitDeleteKeyUoW @ 0x140721608
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpGetKeyNodeForKcb @ 0x140644540 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406445B4 (CmpCleanupDiscardReplaceContext.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x14069CE70 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140721778 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408607E8 (CmpReleaseKeyNodeForKcb.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872B24 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872F34 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
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
      v11 = CmpFreeKeyByCell(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 1);
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

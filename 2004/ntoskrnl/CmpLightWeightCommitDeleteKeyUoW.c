/*
 * XREFs of CmpLightWeightCommitDeleteKeyUoW @ 0x14087BC0C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140654690 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406445B4 (CmpCleanupDiscardReplaceContext.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x14069CE70 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140721778 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872B24 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087BA30 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14087CBCC (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int *v3; // r14
  __int64 v6; // rax
  ULONG_PTR v8; // rsi
  int v9; // r9d
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  ULONG_PTR v15; // rcx
  int v16; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-19h] BYREF
  int *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  __int64 *v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+8Ch] [rbp+23h]

  v17[0] = -1;
  v3 = *(unsigned int **)(a1 + 104);
  v17[1] = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (int)CmpFreeKeyByCell(v8, *(unsigned int *)(v6 + 40), 0) < 0
    && (unsigned int)dword_140C02130 > 5
    && tlgKeywordOn((__int64)&dword_140C02130, 0x200000000000LL) )
  {
    v22 = 0;
    v25 = 0;
    v20 = &v16;
    v16 = v9;
    v23 = &v18;
    v21 = 4;
    v18 = 0x1000000LL;
    v24 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140022D69, 0LL, 0LL, 4u, &v19);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( *v3 == 1 )
    CmpLightWeightSwapParentSubKeyList(v8, *(unsigned int *)(v10 + 40), v3);
  CmpCleanUpSubKeyInfo(v10, 1);
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, *(unsigned int *)(v10 + 40), v17);
  *(_WORD *)(v10 + 176) = *(_WORD *)(v11 + 52);
  *(_QWORD *)(v11 + 4) = *a2;
  v12 = *a2;
  ++*(_QWORD *)(v10 + 304);
  *(_QWORD *)(v10 + 168) = v12;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v17);
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v13, a3, 1);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, a3, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48));
  v14 = *(_QWORD *)(a1 + 112);
  v15 = *(_QWORD *)(a1 + 48);
  if ( v14 )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v15, v14, a3);
    CmpCleanupDiscardReplaceContext(*(_QWORD **)(a1 + 112), a3);
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v15, a3);
  }
  CmpLightWeightCleanupModifyKeyDataUoW(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
}

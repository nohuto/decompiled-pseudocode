/*
 * XREFs of CmpLightWeightCommitRecreateKeyUoW @ 0x1405CD7BC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140734C14 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 */

__int64 __fastcall CmpLightWeightCommitRecreateKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  v13 = -1;
  v14 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(v4 + 72);
  *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(v8 + 40), &v13) + 4) = *a2;
  v9 = *a2;
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = v9;
  (*(void (__fastcall **)(__int64, int *))(v7 + 16))(v7, &v13);
  LOBYTE(v10) = 1;
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v11, a3, v10);
  return CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, a3);
}

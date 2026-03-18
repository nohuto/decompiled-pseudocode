/*
 * XREFs of CmpFreeValue @ 0x14069787C
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140658030 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406585D4 (CmpCleanupLightWeightPrepare.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x140697F98 (CmpSetValueKeyNew.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14071E93C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x14074D9D4 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x14086A450 (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValueList @ 0x140874844 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x1408748E0 (CmpFreeKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpFreeValueData @ 0x140697754 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  bool v5; // zf
  void (__fastcall *v6)(ULONG_PTR, int *); // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = BugCheckParameter3;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v8);
  if ( v4 )
  {
    v5 = CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(v4 + 8), *(_DWORD *)(v4 + 4)) == 0;
    v6 = *(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16);
    if ( !v5 )
    {
      v6(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, v2);
      return 1;
    }
    v6(BugCheckParameter2, &v8);
  }
  return 0;
}

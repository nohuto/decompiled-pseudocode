/*
 * XREFs of CmpFreeValue @ 0x140706124
 * Callers:
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406A42E0 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406A45F8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4758 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x1407063C8 (CmpSetValueKeyNew.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14072E6CC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140760C44 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x1408711F4 (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValueList @ 0x14087B684 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x14087B720 (CmpFreeKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpFreeValueData @ 0x140705FFC (CmpFreeValueData.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
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

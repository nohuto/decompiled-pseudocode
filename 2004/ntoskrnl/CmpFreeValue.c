/*
 * XREFs of CmpFreeValue @ 0x14069DDBC
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpCleanupLightWeightPrepare @ 0x140653C68 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140654874 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406549D4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x14069E068 (CmpSetValueKeyNew.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1407206DC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140752064 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x14086B7A0 (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValueList @ 0x140875B34 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140875BD0 (CmpFreeKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpFreeValueData @ 0x14069DC94 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
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

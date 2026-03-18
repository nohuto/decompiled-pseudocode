/*
 * XREFs of CmpFindSubKeyByNumber @ 0x140671D20
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140671DE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpClearKeyAccessBits @ 0x1406F9DAC (CmpClearKeyAccessBits.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14086E720 (CmpDoAccessCheckOnSubtree.c)
 *     CmpCopySyncTree2 @ 0x1408750C0 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x14087617C (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140876D80 (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x1408778D0 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140877DD4 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x14087B48C (CmpDeleteTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A495F4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140A4AD98 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x140671A60 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int16 *v9; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v11 = -1;
  v12 = 0;
  v5 = a2[5];
  v6 = a3;
  *a4 = -1;
  if ( a3 >= v5 )
  {
    if ( *(_DWORD *)(a1 + 208) <= 1u )
      return 0LL;
    v6 = a3 - v5;
    if ( a3 - v5 >= a2[6] )
      return 0LL;
    v8 = (unsigned int)a2[8];
  }
  else
  {
    v8 = (unsigned int)a2[7];
  }
  v9 = (__int16 *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v8, &v11);
  if ( v9 )
  {
    *a4 = CmpDoFindSubKeyByNumber(a1, v9, v6);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
    return 0LL;
  }
  return 3221225626LL;
}

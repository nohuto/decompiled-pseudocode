/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1405F34E0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED078 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpClearKeyAccessBits @ 0x1406A961C (CmpClearKeyAccessBits.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871AC4 (CmpDoAccessCheckOnSubtree.c)
 *     CmpCopySyncTree2 @ 0x140878590 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x14087966C (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14087A268 (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x14087ADD8 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14087B2E8 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x14087E99C (CmpDeleteTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140A60F64 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1405F2D00 (CmpDoFindSubKeyByNumber.c)
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

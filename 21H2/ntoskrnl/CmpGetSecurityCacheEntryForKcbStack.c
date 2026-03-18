/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0
 * Callers:
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x140657654 (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406689D4 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406793E4 (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckNotifyAccess @ 0x1406BC164 (CmpCheckNotifyAccess.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpQueryKeySecurity @ 0x140721254 (CmpQueryKeySecurity.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F7AD0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckKcbStackAccess @ 0x140918134 (CmpCheckKcbStackAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1409188CC (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140918BC4 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmRmIsKCBVisible @ 0x1406A7690 (CmRmIsKCBVisible.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x140721D00 (CmGetKCBCacheSecurity.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rsi
  __int16 i; // di
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // r8
  __int64 v10; // rbx

  v3 = 0LL;
  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, (unsigned __int16)i);
    v10 = KcbAtLayerHeight;
    if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
      break;
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
    {
      if ( CmRmIsKCBVisible(KcbAtLayerHeight, a2, v9) )
      {
        v3 = v10;
        if ( *(_WORD *)(v10 + 66) )
        {
          if ( *(_BYTE *)(v10 + 65) )
            break;
        }
      }
    }
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 66);
  return CmGetKCBCacheSecurity(v3, a2);
}

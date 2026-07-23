/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1406DEBC0
 * Callers:
 *     CmpCheckKeyOwnerForPca @ 0x1405DA778 (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckKeyBodyAccess @ 0x1405EA3A4 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1405FC750 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpQueryKeySecurity @ 0x14065A180 (CmpQueryKeySecurity.c)
 *     CmpCheckNotifyAccess @ 0x1406DBEBC (CmpCheckNotifyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140729C10 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckKcbStackAccess @ 0x140871844 (CmpCheckKcbStackAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140871EDC (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1408721D4 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x1406DECD0 (CmGetKCBCacheSecurity.c)
 *     CmRmIsKCBVisible @ 0x1407139B0 (CmRmIsKCBVisible.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rsi
  __int16 i; // di
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // rbx

  v3 = 0LL;
  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    v9 = KcbAtLayerHeight;
    if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
      break;
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
    {
      if ( (unsigned __int8)CmRmIsKCBVisible(KcbAtLayerHeight, a2) )
      {
        v3 = v9;
        if ( *(_WORD *)(v9 + 66) )
        {
          if ( *(_BYTE *)(v9 + 65) )
            break;
        }
      }
    }
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 66);
  return CmGetKCBCacheSecurity(v3, a2);
}

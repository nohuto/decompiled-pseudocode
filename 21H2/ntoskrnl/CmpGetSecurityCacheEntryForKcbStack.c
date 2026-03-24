/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1405EF460
 * Callers:
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     CmpCheckNotifyAccess @ 0x1405EC75C (CmpCheckNotifyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpQueryKeySecurity @ 0x140665360 (CmpQueryKeySecurity.c)
 *     CmpCheckKeyOwnerForPca @ 0x14067FCD8 (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14069D680 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140729760 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckKcbStackAccess @ 0x1408716E4 (CmpCheckKcbStackAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140871D7C (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140872074 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x1405EF570 (CmGetKCBCacheSecurity.c)
 *     CmRmIsKCBVisible @ 0x1406FC5D0 (CmRmIsKCBVisible.c)
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

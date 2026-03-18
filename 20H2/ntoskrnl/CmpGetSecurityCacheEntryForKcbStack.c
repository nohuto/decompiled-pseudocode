/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1405F3B08
 * Callers:
 *     CmpCheckNotifyAccess @ 0x1405F3EC4 (CmpCheckNotifyAccess.c)
 *     CmpQueryKeySecurity @ 0x14066F1E0 (CmpQueryKeySecurity.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406C2490 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyBodyAccess @ 0x1406C3268 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckKeyOwnerForPca @ 0x140711958 (CmpCheckKeyOwnerForPca.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140725CA0 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckKcbStackAccess @ 0x140873E9C (CmpCheckKcbStackAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140874530 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140874828 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x1405F3B88 (CmGetKCBCacheSecurity.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 KcbAtLayerHeight; // rax
  __int16 v5; // dx
  char v6; // r11
  __int16 v7; // r8

  v2 = a2;
  v3 = 0LL;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
      v7 = *(_WORD *)(KcbAtLayerHeight + 66);
      if ( v7 && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
        break;
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      {
        v3 = KcbAtLayerHeight;
        if ( v7 )
        {
          if ( *(_BYTE *)(KcbAtLayerHeight + 65) != v6 )
            break;
        }
      }
    }
    while ( (__int16)(v5 - 1) >= 0 );
  }
  return CmGetKCBCacheSecurity(v3, v2);
}

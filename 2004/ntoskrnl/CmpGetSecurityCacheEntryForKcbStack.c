/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1405E76D4
 * Callers:
 *     CmpQueryKeySecurity @ 0x1405E4A10 (CmpQueryKeySecurity.c)
 *     CmpCheckNotifyAccess @ 0x1405E5294 (CmpCheckNotifyAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406DCBB4 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406ED54C (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406EE570 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140717CE0 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckKcbStackAccess @ 0x14086E3B0 (CmpCheckKcbStackAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x14086E9D8 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14086ECD0 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x1405E7754 (CmGetKCBCacheSecurity.c)
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

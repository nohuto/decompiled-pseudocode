/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x14061CCF4
 * Callers:
 *     CmpQueryKeySecurity @ 0x14061A030 (CmpQueryKeySecurity.c)
 *     CmpCheckNotifyAccess @ 0x14061A8B4 (CmpCheckNotifyAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406CC24C (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406CD270 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140715950 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckKcbStackAccess @ 0x14086C8F0 (CmpCheckKcbStackAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x14086CF18 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14086D210 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x14061CD74 (CmGetKCBCacheSecurity.c)
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

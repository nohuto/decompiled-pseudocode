/*
 * XREFs of ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x18008B3D4
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180071680 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800875E0 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x18009A21C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009CC28 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x18009D050 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800A7FF0 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800AB2FC (-RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800AB61C (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, unsigned __int16 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char *v6; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  _QWORD *v11; // rax
  char *v12; // rbp
  unsigned __int64 v13; // rax
  char *v14; // rdx
  unsigned __int64 v15; // r11
  unsigned __int16 *v16; // rax
  unsigned __int16 v17; // bx
  int v18; // eax
  __int64 v19; // rcx

  v6 = a1;
  if ( !a4 && a3 <= *((_QWORD *)a1 + 2) )
    return a3;
  v8 = *((_QWORD *)a1 + 2);
  if ( a3 < v8 )
  {
    v9 = v8 - a3;
    if ( a4 <= v9 )
    {
      v10 = 1 - a4 + v9;
      if ( *((_QWORD *)a1 + 3) < 8uLL )
        v11 = a1;
      else
        v11 = *(_QWORD **)a1;
      v12 = (char *)v11 + 2 * a3;
      while ( 1 )
      {
        if ( v10 )
        {
          v13 = v10;
          v14 = v12;
          while ( *(_WORD *)v14 != *a2 )
          {
            v14 += 2;
            if ( !--v13 )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          v14 = 0LL;
        }
        if ( !v14 )
          break;
        if ( !a4 )
          goto LABEL_24;
        v15 = a4;
        v16 = a2;
        while ( 1 )
        {
          v17 = *(unsigned __int16 *)((char *)v16 + v14 - (char *)a2);
          if ( v17 != *v16 )
            break;
          ++v16;
          if ( !--v15 )
          {
            v18 = 0;
            goto LABEL_21;
          }
        }
        v18 = v17 < *v16 ? -1 : 1;
LABEL_21:
        if ( !v18 )
        {
LABEL_24:
          if ( *((_QWORD *)v6 + 3) >= 8uLL )
            v6 = *(char **)v6;
          return (v14 - v6) >> 1;
        }
        v19 = v14 - v12;
        v12 = v14 + 2;
        v10 += -1 - (v19 >> 1);
      }
    }
  }
  return -1LL;
}

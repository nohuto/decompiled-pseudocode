/*
 * XREFs of MonitorRebuildMonitorModeListCache @ 0x1C02F41CC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020690 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C01357AC (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F19B4 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 i; // rdx
  int NextVideoPresentTarget; // eax
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8 = 0;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = 4294967293LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 337) )
    {
      v13 = 0;
      for ( i = 0xFFFFFFFFLL; ; i = v13 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget(a1, i, &v13);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper(a1, v13, a3);
      }
      if ( NextVideoPresentTarget != -1073741275 )
        return (unsigned int)NextVideoPresentTarget;
    }
    return v8;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(4294967293LL, v7);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}

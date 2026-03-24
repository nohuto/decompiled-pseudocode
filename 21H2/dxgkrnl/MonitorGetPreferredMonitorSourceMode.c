/*
 * XREFs of MonitorGetPreferredMonitorSourceMode @ 0x1C01489D4
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C011B670 (DxgkGetMonitorInternalInfo.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0147E0C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009A04 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredMonitorSourceMode(struct HDXGMONITOR__ *a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGMONITOR *v7; // rdi
  struct _ERESOURCE *v8; // r15
  char *v9; // r14
  _OWORD *v10; // rcx
  struct DXGMONITOR *v11; // rax
  _OWORD *v12; // rbp
  __int64 v13; // rdi
  char *v14; // rax
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v20 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v20);
  if ( (int)result >= 0 )
  {
    v7 = v20;
    if ( !v20 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v18);
    }
    v8 = (struct _ERESOURCE *)((char *)v7 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    v9 = (char *)v7 + 216;
    v10 = 0LL;
    v11 = (struct DXGMONITOR *)*((_QWORD *)v7 + 27);
    v12 = 0LL;
    if ( v11 != (struct DXGMONITOR *)((char *)v7 + 216) )
    {
      v13 = (__int64)v11 - 96;
      if ( !v11 )
        v13 = 0LL;
      if ( v13 )
      {
        do
        {
          if ( *(_DWORD *)(v13 + 88) == 1 )
          {
            v16 = *(unsigned int *)(v13 + 84);
            if ( (unsigned int)(v16 - 2) <= 1 )
            {
              if ( v10 )
              {
                v19 = WdLogNewEntry5_WdAssertion(v10, v16);
                WdLogEvent5_WdAssertion(v19);
              }
              v10 = (_OWORD *)v13;
            }
            else if ( (_DWORD)v16 == 5 )
            {
              v17 = v13;
              if ( v12 )
                v17 = 1LL;
              v12 = (_OWORD *)v17;
            }
          }
          v14 = *(char **)(v13 + 96);
          if ( v14 == v9 )
            break;
          v13 = (__int64)(v14 - 96);
          if ( !v14 )
            v13 = 0LL;
        }
        while ( v13 );
        if ( (unsigned __int64)v12 > 1 )
        {
          *a2 = *v12;
          a2[1] = v12[1];
          a2[2] = v12[2];
          a2[3] = v12[3];
          a2[4] = v12[4];
          v15 = v12[5];
LABEL_17:
          a2[5] = v15;
LABEL_18:
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegion();
          return v2;
        }
        if ( v10 )
        {
          *a2 = *v10;
          a2[1] = v10[1];
          a2[2] = v10[2];
          a2[3] = v10[3];
          a2[4] = v10[4];
          v15 = v10[5];
          goto LABEL_17;
        }
      }
    }
    v2 = -1073741275;
    goto LABEL_18;
  }
  return result;
}

/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C0138DBC
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C0138818 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  bool v12; // zf
  int v13; // eax
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v19 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v19);
  if ( (int)result >= 0 )
  {
    v9 = v19;
    if ( !v19 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 296), 1u);
    if ( a2 )
    {
      v14 = (_QWORD *)((char *)v9 + 264);
      v15 = (_QWORD *)*((_QWORD *)v9 + 33);
      if ( v15 == (_QWORD *)((char *)v9 + 264) )
      {
LABEL_23:
        v18 = WdLogNewEntry5_WdError(v10, v14);
        *(_QWORD *)(v18 + 24) = a2;
        *(_QWORD *)(v18 + 32) = v9;
        WdLogEvent5_WdError(v18);
        v13 = -1071774928;
        goto LABEL_10;
      }
      v10 = (_QWORD *)(a2 + 48);
      while ( v15 != v10 )
      {
        if ( v14 == v15 )
          goto LABEL_23;
        v15 = (_QWORD *)*v15;
      }
      v11 = (_QWORD *)*v10;
      v12 = v11 == v14;
    }
    else
    {
      v11 = (_QWORD *)*((_QWORD *)v9 + 33);
      v12 = v11 == (_QWORD *)((char *)v9 + 264);
    }
    if ( !v12 )
    {
      v16 = v11 - 6;
      if ( !v11 )
        v16 = 0LL;
      if ( v16 )
      {
        *a3 = v16;
        goto LABEL_11;
      }
    }
    v13 = 1075708748;
LABEL_10:
    v3 = v13;
LABEL_11:
    ExReleaseResourceLite((PERESOURCE)((char *)v9 + 296));
    KeLeaveCriticalRegion();
    return v3;
  }
  return result;
}

/*
 * XREFs of ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01917D8
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01916A0 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01918D4 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorModeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v5; // rdi
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v7; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v8; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v9; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v10; // r8
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v16; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v7 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)((char *)this + 240);
  if ( !v5 )
    goto LABEL_25;
  v8 = *v7;
  if ( *v7 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v7 )
    goto LABEL_25;
  a2 = v5 + 1;
  while ( v8 != a2 )
  {
    if ( v7 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v8 )
      goto LABEL_25;
    v8 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v8->Id;
  }
  a2 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE *const *)&v5[1].VideoSignalInfo.TotalSize.cy;
  v7 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)((char *)this + 216);
  if ( !a2
    || (v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v7, *v7 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v7) )
  {
LABEL_25:
    v15 = WdLogNewEntry5_WdError(v7, a2);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
    return 3223192368LL;
  }
  else
  {
    v10 = a2 + 1;
    while ( v9 != (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v10 )
    {
      if ( v7 == v9 )
        goto LABEL_25;
      v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v9;
    }
    v11 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE ***)&a2[1].Id;
    if ( v11 == v7 )
      goto LABEL_22;
    a2 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE *const)(v11 - 12);
    if ( !v11 )
      a2 = 0LL;
    if ( !a2 )
    {
LABEL_22:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, a2, v10, a4) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      v16 = 0LL;
      result = DXGMONITOR::_CreateMonitorModeEnumerator(
                 this,
                 (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)a2,
                 &v16);
      if ( (int)result >= 0 )
        *a3 = v16;
    }
  }
  return result;
}

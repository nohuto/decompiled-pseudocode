/*
 * XREFs of ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02F9E20
 * Callers:
 *     ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02F6F60 (-ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2)
{
  DXGMONITOR *v3; // rdi
  __int64 v4; // rax
  DXGMONITOR **v5; // rdx
  DXGMONITOR *v6; // rax
  __int64 v7; // r8
  DXGMONITOR **v8; // rax
  DXGMONITOR **v9; // r8
  DXGMONITOR *v10; // rdx
  DXGMONITOR **v11; // rax
  __int64 v13; // rax

  v3 = this;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (DXGMONITOR **)((char *)v3 + 280);
  if ( !a2 )
    goto LABEL_19;
  v6 = *v5;
  if ( *v5 == (DXGMONITOR *)v5 )
    goto LABEL_19;
  this = (DXGMONITOR *)&a2[1];
  while ( v6 != this )
  {
    if ( v5 == (DXGMONITOR **)v6 )
      goto LABEL_19;
    v6 = *(DXGMONITOR **)v6;
  }
  v7 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v5 = (DXGMONITOR **)((char *)v3 + 264);
  if ( !v7 || (v8 = (DXGMONITOR **)*v5, *v5 == (DXGMONITOR *)v5) )
  {
LABEL_19:
    v13 = WdLogNewEntry5_WdError(this, v5);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = v3;
    WdLogEvent5_WdError(v13);
    return 3223192368LL;
  }
  else
  {
    v9 = (DXGMONITOR **)(v7 + 48);
    while ( v8 != v9 )
    {
      if ( v5 == v8 )
        goto LABEL_19;
      v8 = (DXGMONITOR **)*v8;
    }
    v10 = *(DXGMONITOR **)this;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this
      || (v11 = *(DXGMONITOR ***)&a2[1].RangeLimits.MinVSyncFreq.Denominator, *v11 != this) )
    {
      __fastfail(3u);
    }
    *v11 = v10;
    *((_QWORD *)v10 + 1) = v11;
    operator delete(a2);
    return 0LL;
  }
}

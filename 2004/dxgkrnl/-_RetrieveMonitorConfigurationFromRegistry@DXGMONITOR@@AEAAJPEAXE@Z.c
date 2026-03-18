/*
 * XREFs of ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0187DDC
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0186DF0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0187C9C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02F654C (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(DXGMONITOR *this, void *a2, char a3)
{
  unsigned int v3; // r14d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near **v4; // rdi
  __int64 v5; // rsi
  unsigned int v9; // r9d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+38h] [rbp-39h] BYREF
  int v22; // [rsp+40h] [rbp-31h]
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v23; // [rsp+48h] [rbp-29h]
  unsigned int *v24; // [rsp+50h] [rbp-21h]
  int v25; // [rsp+58h] [rbp-19h]
  unsigned int *v26; // [rsp+60h] [rbp-11h]
  int v27; // [rsp+68h] [rbp-9h]
  __int64 v28; // [rsp+70h] [rbp-1h]
  int v29; // [rsp+78h] [rbp+7h]
  __int128 v30; // [rsp+80h] [rbp+Fh]
  __int128 v31; // [rsp+90h] [rbp+1Fh]
  __int64 v32; // [rsp+A0h] [rbp+2Fh]
  unsigned int v33; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = &DXGMONITOR::_MonitorConfigInfoTable;
  v5 = 0LL;
  do
  {
    v9 = *(_DWORD *)((char *)this + *((int *)v4 + 2));
    v10 = *v4;
    v21 = 0LL;
    v28 = 0LL;
    v29 = 0;
    v23 = v10;
    v24 = &v33;
    v26 = &v33;
    v33 = v9;
    v32 = 0LL;
    v22 = 288;
    v25 = 67108868;
    v27 = 4;
    v30 = 0LL;
    v31 = 0LL;
    v11 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v21, 0LL, 0LL);
    v14 = v11;
    if ( v11 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v20[3] = v5;
      v20[4] = *((unsigned int *)this + 11);
      v20[5] = v14;
      goto LABEL_11;
    }
    if ( !((unsigned __int8 (__fastcall *)(DXGMONITOR *, _QWORD))v4[2])(this, v33) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v20[3] = v33;
      v20[4] = v5;
      v20[5] = *((unsigned int *)this + 11);
LABEL_11:
      WdLogEvent5_WdError(v20);
      goto LABEL_5;
    }
    v17 = *((int *)v4 + 3);
    if ( *(_DWORD *)((char *)this + v17) != v33 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17, v15);
      v19[3] = v33;
      v19[4] = v5;
      v19[5] = *((unsigned int *)this + 11);
      WdLogEvent5_WdDmmEvent(v19);
      *(_DWORD *)((char *)this + *((int *)v4 + 3)) = v33;
      if ( a3 )
        DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, v3);
    }
LABEL_5:
    ++v3;
    ++v5;
    v4 += 3;
  }
  while ( v3 < 2 );
  return 0LL;
}

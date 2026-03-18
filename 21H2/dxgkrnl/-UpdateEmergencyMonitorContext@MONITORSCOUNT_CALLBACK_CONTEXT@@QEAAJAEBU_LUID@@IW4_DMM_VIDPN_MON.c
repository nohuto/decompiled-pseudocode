/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02F2C54
 * Callers:
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F20A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01E0260 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(
        __int64 a1,
        struct _LUID *a2,
        unsigned int a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  _QWORD *v17; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[144]; // [rsp+30h] [rbp-B8h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v18);
  v10 = (__int64)v7;
  if ( !v7 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v11[3] = 0LL;
    v11[4] = a2->HighPart;
    v11[5] = a2->LowPart;
    return 3223191554LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v7, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
  if ( v13 >= 0 )
  {
    MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, v10, a3, v16);
    goto LABEL_7;
  }
  if ( v13 == -1073741130 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
    v17[3] = v10;
    v17[4] = *(int *)(v10 + 408);
    v17[5] = *(unsigned int *)(v10 + 404);
LABEL_7:
    v13 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  return (unsigned int)v13;
}

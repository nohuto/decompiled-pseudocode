/*
 * XREFs of ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C013A5C0
 * Callers:
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C013A53C (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     MonitorGetCCDMonitorID @ 0x1C00F039C (MonitorGetCCDMonitorID.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C013B088 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C013B1A0 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DpiPersistence::GetMonitorIdFromTargetId(
        DpiPersistence *this,
        unsigned int *a2,
        struct _LUID *a3,
        struct VIDPN_MGR *a4,
        unsigned __int16 *a5)
{
  __int64 v7; // rsi
  unsigned int v8; // ebp
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // edx
  struct HDXGMONITOR__ *v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  struct HDXGMONITOR__ *v22; // [rsp+20h] [rbp-18h] BYREF

  v22 = 0LL;
  v7 = (unsigned int)this;
  v8 = (unsigned __int16)a4;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle((VIDPN_MGR *)a3, (unsigned int)this, &v22);
  v12 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v20[5] = (int)a2[1];
    v20[6] = *a2;
    v20[3] = v12;
    goto LABEL_10;
  }
  v13 = v8;
  v14 = v22;
  LODWORD(v12) = MonitorGetCCDMonitorID(v22, v13, a5);
  if ( (_DWORD)v12 == -2147483643 )
    LODWORD(v12) = -1073741789;
  v15 = VIDPN_MGR::ReleaseMonitorHandle((VIDPN_MGR *)a3, v14);
  v18 = v15;
  if ( v15 >= 0 )
  {
    if ( (int)v12 >= 0 )
      return (unsigned int)v12;
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v20[3] = (int)v12;
    v20[6] = (int)a2[1];
    v20[7] = *a2;
    v20[5] = v14;
LABEL_10:
    v20[4] = v7;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v12;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
  v21[6] = (int)a2[1];
  v21[7] = *a2;
  v21[3] = v18;
  v21[4] = v7;
  v21[5] = v14;
  WdLogEvent5_WdAssertion(v21);
  return (unsigned int)v18;
}

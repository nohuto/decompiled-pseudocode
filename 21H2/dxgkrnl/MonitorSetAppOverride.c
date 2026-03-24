/*
 * XREFs of MonitorSetAppOverride @ 0x1C02F4808
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C012C020 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009A04 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AEFC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C018942C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C018B43C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C018FDE8 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02F66F0 (-_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F8D7C (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetAppOverride(
        DXGADAPTER **this,
        struct HDXGMONITOR__ *a2,
        GUID *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rbx
  __int64 v12; // rax
  char v13; // r13
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r15d
  int v24; // ecx
  int TtmDevice; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int updated; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _FAST_MUTEX *v36; // rbx
  __int64 v37; // rax
  char v39; // [rsp+30h] [rbp-61h]
  struct DXGMONITOR *v40; // [rsp+38h] [rbp-59h] BYREF
  GUID Guid; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v42[10]; // [rsp+50h] [rbp-41h] BYREF

  if ( !a2 )
  {
    LODWORD(v8) = -1073741811;
    goto LABEL_25;
  }
  v40 = 0LL;
  LODWORD(v8) = MONITOR_MGR::_GetMonitorFromHandle(a2, &v40);
  if ( (int)v8 < 0 )
    goto LABEL_25;
  v11 = v40;
  if ( !v40 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = 0;
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (struct _ERESOURCE *)((char *)v11 + 296);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v11 + 296), 1u);
  Guid = *a3;
  LODWORD(v8) = DXGMONITOR::_SetAppOverride(v11, &Guid, a4, a5);
  if ( (int)v8 < 0 )
  {
LABEL_9:
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 296));
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  v18 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
    v18 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
  if ( !v18 )
  {
    Global = DXGGLOBAL::GetGlobal(v17, v16);
    DXGGLOBAL::RecordFeatureUsage((__int64)Global, 12, 1);
    v23 = *((_DWORD *)v11 + 148);
    v39 = *((_BYTE *)v11 + 596);
    v24 = a4 != 0 ? 2 : 0;
    if ( v23 != v24 )
    {
      *((_DWORD *)v11 + 148) = v24;
      *((_BYTE *)v11 + 596) = 0;
      v13 = 1;
      if ( a4 )
      {
        DXGMONITOR::_DestroyTtmDevice(v11);
      }
      else
      {
        TtmDevice = DXGMONITOR::_CreateTtmDevice(v11, v20, v21, v22);
        v8 = TtmDevice;
        if ( TtmDevice < 0 )
        {
          *((_BYTE *)v11 + 596) = v39;
          *((_DWORD *)v11 + 148) = v23;
          v28 = WdLogNewEntry5_WdError(v27, v26);
          *(_QWORD *)(v28 + 24) = v8;
          WdLogEvent5_WdError(v28);
          goto LABEL_9;
        }
      }
      LOBYTE(v26) = a4 != 0;
      updated = DXGMONITOR::_UpdateLinkInfo(v11, v26);
      v32 = updated;
      if ( updated < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v31, v30);
        *(_QWORD *)(v33 + 24) = v32;
        WdLogEvent5_WdError(v33);
      }
    }
  }
  ExReleaseResourceLite(v15);
  KeLeaveCriticalRegion();
  if ( v13 )
  {
    v35 = *((_QWORD *)*this + 337);
    v36 = *(struct _FAST_MUTEX **)(v35 + 96);
    if ( v36 )
    {
      memset(v42, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v42[1]);
      v42[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v42[3]) = 67;
      LOBYTE(v42[6]) = -1;
      LODWORD(v42[4]) = *((_DWORD *)v40 + 148);
      MONITOR_MGR::_IssueMonitorEvent(
        v36,
        *((unsigned int *)v40 + 11),
        10,
        (*((_DWORD *)v40 + 148) != 0) + 1LL,
        *((_DWORD *)v40 + 108),
        (__int64)v42);
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v37 + 24) = *this;
      WdLogEvent5_WdError(v37);
    }
  }
  LODWORD(v8) = 0;
LABEL_25:
  DXGADAPTER_REFERENCE::Assign(this, 0LL);
  return (unsigned int)v8;
}

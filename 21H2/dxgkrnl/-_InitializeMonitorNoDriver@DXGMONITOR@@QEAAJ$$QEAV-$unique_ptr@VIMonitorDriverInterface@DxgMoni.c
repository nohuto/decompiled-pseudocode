/*
 * XREFs of ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0207F60
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z @ 0x1C001FAA8 (--0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006B580 (--_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C020845C (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 *     ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1C0208520 (--0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C020864C (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 *     ?GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z @ 0x1C02086CC (-GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03B5C9C (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1C03B6BD4 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1C03B6D8C (--1MonitorDescriptorState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorGammaState@DxgMonitor@@QEAA@XZ @ 0x1C03B74DC (--1MonitorGammaState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03B780C (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitorNoDriver(
        struct DxgMonitor::IMonitorComponentParent *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        char a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  __int64 v16; // rax
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  VIDPN_MGR *v22; // rsi
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r9
  DxgMonitor::MonitorPnpState *v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // r9
  DxgMonitor::MonitorDataStore *v30; // rcx
  DxgMonitor::MonitorDescriptorState *v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  struct _ERESOURCE *v34; // rdi
  DxgMonitor::MonitorColorState *v35; // rax
  __int64 v36; // r9
  __int64 v37; // rax
  void *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rcx
  void *v42; // rcx
  DxgMonitor::MonitorModes *v43; // rax
  __int64 v44; // r9
  __int64 v45; // rax
  DxgMonitor::MonitorModes *v46; // rdi
  _QWORD *v47; // rax
  __int64 v48; // r9
  _QWORD *v49; // rdi
  DxgMonitor::MonitorGammaState *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  DxgMonitor::MonitorUsb4State *v55; // rdi
  DxgMonitor::MonitorDisplayPortState *v56; // rax
  __int64 v57; // r9
  DxgMonitor::MonitorDisplayPortState *v58; // rax
  void *v59; // rcx
  __int64 v60; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v61; // edi
  bool v63; // cf
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v67; // [rsp+90h] [rbp+18h]

  v67 = a3;
  v12 = WdLogNewEntry5_WdTrace(a1, a2);
  v13 = a7;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
LABEL_65:
    if ( !a4 )
      goto LABEL_4;
    goto LABEL_66;
  }
  if ( v13 != 1 )
    goto LABEL_65;
  if ( a4 )
    goto LABEL_4;
LABEL_66:
  WdLogSingleEntry0(1LL);
LABEL_4:
  *((_DWORD *)a1 + 45) = a3;
  *((_DWORD *)a1 + 78) = v13;
  *((_DWORD *)a1 + 79) = v13;
  v14 = *a2;
  *a2 = 0LL;
  v15 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a1 + 24);
  *((_QWORD *)a1 + 24) = v14;
  if ( v15 )
    (**v15)(v15, 1LL);
  if ( (_BYTE)a5 )
  {
    v63 = a6 != 0;
    a6 = -a6;
    *((_BYTE *)a1 + 176) = *((_BYTE *)a1 + 176) & 0xFB | (v63 ? 0 : 4) | 2;
  }
  v16 = *((_QWORD *)a1 + 21);
  v17 = -1;
  v18 = *((_DWORD *)a1 + 45);
  a7 = -1;
  v19 = *(_QWORD *)(v16 + 24);
  v20 = *(_QWORD *)(v19 + 16);
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 2792);
    if ( v21 )
    {
      v22 = *(VIDPN_MGR **)(v21 + 104);
      if ( v22 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v66, (__int64)v22);
        VIDPN_MGR::GetTargetPowerComponentIndex(v22, v18, &a7);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v66 + 40));
        v17 = a7;
      }
      else
      {
        WdLogSingleEntry1(2LL, *(_QWORD *)(v19 + 16));
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, *(_QWORD *)(v19 + 16));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v20,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
  }
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 21) + 24LL) + 16LL) + 2904LL);
  v25 = operator new[](0x50uLL, 0x4D677844u, 64LL, v23);
  if ( v25 )
  {
    *(_QWORD *)v25 = a1;
    *(_BYTE *)(v25 + 16) = 0;
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = 0LL;
    *(_QWORD *)(v25 + 40) = 0LL;
    *(_OWORD *)(v25 + 48) = 0LL;
    *(_OWORD *)(v25 + 64) = 0LL;
    *(_QWORD *)(v25 + 8) = a4;
  }
  else
  {
    v25 = 0LL;
  }
  v27 = (DxgMonitor::MonitorPnpState *)*((_QWORD *)a1 + 25);
  *((_QWORD *)a1 + 25) = v25;
  if ( v27 )
  {
    DxgMonitor::MonitorPnpState::~MonitorPnpState(v27);
    operator delete(v27);
    v25 = *((_QWORD *)a1 + 25);
  }
  if ( !v25 )
    goto LABEL_71;
  v28 = (_QWORD *)operator new[](0x18uLL, 0x4D677844u, 256LL, v26);
  if ( v28 )
  {
    v28[1] = a1;
    *v28 = &DxgMonitor::MonitorDataStore::`vftable';
    v28[2] = (char *)a1 + 8;
  }
  else
  {
    v28 = 0LL;
  }
  v30 = (DxgMonitor::MonitorDataStore *)*((_QWORD *)a1 + 26);
  *((_QWORD *)a1 + 26) = v28;
  if ( v30 )
  {
    DxgMonitor::MonitorDataStore::`scalar deleting destructor'(v30, 1);
    v28 = (_QWORD *)*((_QWORD *)a1 + 26);
  }
  if ( !v28 )
    goto LABEL_71;
  v31 = (DxgMonitor::MonitorDescriptorState *)operator new[](0xB8uLL, 0x4D677844u, 64LL, v29);
  if ( v31 )
    v33 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(
            v31,
            a1,
            *((const struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v33 = 0LL;
  v34 = (struct _ERESOURCE *)*((_QWORD *)a1 + 27);
  *((_QWORD *)a1 + 27) = v33;
  if ( v34 )
  {
    DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(v34);
    operator delete(v34);
    v33 = *((_QWORD *)a1 + 27);
  }
  if ( !v33 )
    goto LABEL_71;
  v35 = (DxgMonitor::MonitorColorState *)operator new[](0x1B0uLL, 0x4D677844u, 256LL, v32);
  if ( v35 )
    v37 = DxgMonitor::MonitorColorState::MonitorColorState(v35, a1, *((struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v37 = 0LL;
  v38 = (void *)*((_QWORD *)a1 + 28);
  *((_QWORD *)a1 + 28) = v37;
  if ( v38 )
  {
    operator delete(v38);
    v37 = *((_QWORD *)a1 + 28);
  }
  if ( !v37 )
    goto LABEL_71;
  v39 = operator new[](0x18uLL, 0x4D677844u, 256LL, v36);
  if ( v39 )
  {
    v41 = *((_QWORD *)a1 + 26);
    *(_WORD *)(v39 + 20) = 0;
    *(_QWORD *)(v39 + 8) = v41;
    *(_QWORD *)v39 = a1;
    *(_DWORD *)(v39 + 16) = 0;
  }
  else
  {
    v39 = 0LL;
  }
  v42 = (void *)*((_QWORD *)a1 + 30);
  *((_QWORD *)a1 + 30) = v39;
  if ( v42 )
  {
    operator delete(v42);
    v39 = *((_QWORD *)a1 + 30);
  }
  if ( !v39 )
    goto LABEL_71;
  v43 = (DxgMonitor::MonitorModes *)operator new[](0xF8uLL, 0x4D677844u, 64LL, v40);
  if ( v43 )
    v45 = DxgMonitor::MonitorModes::MonitorModes(v43, a1, *((const struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v45 = 0LL;
  v46 = (DxgMonitor::MonitorModes *)*((_QWORD *)a1 + 29);
  *((_QWORD *)a1 + 29) = v45;
  if ( v46 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v46);
    operator delete(v46);
    v45 = *((_QWORD *)a1 + 29);
  }
  if ( !v45 )
    goto LABEL_71;
  v47 = (_QWORD *)operator new[](0x90uLL, 0x4D677844u, 64LL, v44);
  v49 = v47;
  if ( v47 )
  {
    *v47 = a1;
    v47[1] = (char *)a1 + 16;
    memset(v47 + 2, 0, 0x40uLL);
    v49[11] = 0LL;
    *((_DWORD *)v49 + 29) = -1;
    v49[12] = 0LL;
    v49[13] = 0LL;
    *((_DWORD *)v49 + 28) = 0;
    *((_DWORD *)v49 + 30) = 1;
    v49[16] = 0LL;
    *((_BYTE *)v49 + 136) = 0;
  }
  else
  {
    v49 = 0LL;
  }
  v50 = (DxgMonitor::MonitorGammaState *)*((_QWORD *)a1 + 31);
  *((_QWORD *)a1 + 31) = v49;
  if ( v50 )
  {
    DxgMonitor::MonitorGammaState::~MonitorGammaState(v50);
    operator delete(v50);
    v49 = (_QWORD *)*((_QWORD *)a1 + 31);
  }
  if ( !v49 )
    goto LABEL_71;
  v51 = operator new[](0x68uLL, 0x4D677844u, 64LL, v48);
  v53 = v51;
  if ( v51 )
  {
    v54 = a8;
    *(_QWORD *)v51 = a1;
    *(_BYTE *)(v51 + 8) = 0;
    *(_OWORD *)(v51 + 12) = 0LL;
    *(_QWORD *)(v51 + 32) = 0LL;
    *(_OWORD *)(v51 + 40) = 0LL;
    *(_WORD *)(v51 + 56) = 0;
    *(_QWORD *)(v51 + 64) = 0LL;
    *(_DWORD *)(v51 + 72) = v17;
    *(_QWORD *)(v51 + 80) = v24;
    *(_BYTE *)(v51 + 88) = 0;
    *(_QWORD *)(v51 + 96) = 0LL;
    if ( v54 )
    {
      *(_BYTE *)(v51 + 8) = 1;
      *(_OWORD *)(v51 + 12) = *(_OWORD *)v54;
      *(_QWORD *)(v51 + 48) = *(_QWORD *)(v54 + 24);
      *(_WORD *)(v51 + 40) = *(_WORD *)(v54 + 16);
      *(_WORD *)(v51 + 42) = *(_WORD *)(v54 + 18);
    }
  }
  else
  {
    v53 = 0LL;
  }
  v55 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)a1 + 33);
  *((_QWORD *)a1 + 33) = v53;
  if ( v55 )
  {
    DxgMonitor::MonitorUsb4State::~MonitorUsb4State(v55);
    operator delete(v55);
    v53 = *((_QWORD *)a1 + 33);
  }
  if ( !v53 )
    goto LABEL_71;
  v56 = (DxgMonitor::MonitorDisplayPortState *)operator new[](0x28uLL, 0x4D677844u, 256LL, v52);
  if ( v56 )
    v58 = DxgMonitor::MonitorDisplayPortState::MonitorDisplayPortState(v56, a1);
  else
    v58 = 0LL;
  v59 = (void *)*((_QWORD *)a1 + 34);
  *((_QWORD *)a1 + 34) = v58;
  if ( v59 )
  {
    operator delete(v59);
    v58 = (DxgMonitor::MonitorDisplayPortState *)*((_QWORD *)a1 + 34);
  }
  if ( !v58 )
    goto LABEL_71;
  if ( !(_BYTE)a5 )
    goto LABEL_59;
  v64 = operator new[](0x50uLL, 0x4D677844u, 64LL, v57);
  if ( v64 )
  {
    *(_QWORD *)v64 = a1;
    *(_OWORD *)(v64 + 8) = 0LL;
    *(_DWORD *)(v64 + 24) = 0;
    *(_QWORD *)(v64 + 40) = 0LL;
    *(_DWORD *)(v64 + 68) = -1;
    *(_QWORD *)(v64 + 48) = 0LL;
    *(_QWORD *)(v64 + 56) = 0LL;
    *(_DWORD *)(v64 + 64) = 0;
    *(_DWORD *)(v64 + 72) = 8;
  }
  else
  {
    v64 = 0LL;
  }
  v65 = *((_QWORD *)a1 + 32);
  *((_QWORD *)a1 + 32) = v64;
  if ( v65 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(v65 + 32));
    operator delete((void *)v65);
    v64 = *((_QWORD *)a1 + 32);
  }
  if ( v64 )
  {
LABEL_59:
    v60 = *((_QWORD *)a1 + 21);
    a5 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(*(_QWORD *)(v60 + 24) + 16LL), v67, &a5, 0LL) < 0 )
      WdLogSingleEntry0(1LL);
    v61 = a5;
    if ( a5 == D3DKMDT_VOT_UNINITIALIZED )
      WdLogSingleEntry0(1LL);
    *((_DWORD *)a1 + 46) = v61;
    return 0LL;
  }
  else
  {
LABEL_71:
    WdLogSingleEntry1(2LL, -1073741801LL);
    return 3221225495LL;
  }
}

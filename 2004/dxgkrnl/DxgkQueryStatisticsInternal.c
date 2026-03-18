/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1C02258E8
 * Callers:
 *     DxgkQueryStatistics @ 0x1C02258D0 (DxgkQueryStatistics.c)
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245720 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00E2860 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E2920 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011D0FC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C020D240 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C020D3E8 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C020D478 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C020D504 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C0222320 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C024AED8 (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0283B9C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(__int64 a1, char a2, __int64 a3)
{
  char v3; // r14
  ULONG64 v4; // rsi
  _OWORD *v5; // rax
  int *v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rdx
  _OWORD *v9; // rax
  int *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGADAPTER *v18; // r12
  struct DXGPROCESS *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  DXGADAPTER *v34; // rsi
  __int64 v35; // rax
  int Statistics; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int ProcessStatistics; // eax
  int AdapterPerfData; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int AdapterPerfDataCaps; // eax
  int NodePerfData; // eax
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // edx
  ULONG64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  _OWORD *v58; // rcx
  _OWORD *v59; // rax
  _OWORD *v60; // rcx
  _OWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  DXGADAPTER *v66; // [rsp+48h] [rbp-400h] BYREF
  int v67; // [rsp+50h] [rbp-3F8h] BYREF
  __int64 v68; // [rsp+58h] [rbp-3F0h]
  char v69; // [rsp+60h] [rbp-3E8h]
  ULONG64 v70; // [rsp+68h] [rbp-3E0h]
  unsigned __int64 v71; // [rsp+70h] [rbp-3D8h] BYREF
  unsigned __int64 v72; // [rsp+78h] [rbp-3D0h] BYREF
  _BYTE v73[8]; // [rsp+80h] [rbp-3C8h] BYREF
  DXGADAPTER *v74; // [rsp+88h] [rbp-3C0h]
  char v75; // [rsp+90h] [rbp-3B8h]
  int v76; // [rsp+A0h] [rbp-3A8h] BYREF
  struct _LUID v77; // [rsp+A4h] [rbp-3A4h]
  void *v78; // [rsp+B0h] [rbp-398h]
  _BYTE v79[776]; // [rsp+B8h] [rbp-390h] BYREF
  unsigned int v80; // [rsp+3C0h] [rbp-88h]
  _BYTE v81[80]; // [rsp+3D0h] [rbp-78h] BYREF

  v3 = a2;
  v4 = a1;
  v70 = a1;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2049);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2049LL);
  v71 = 0LL;
  if ( v3 )
  {
    v5 = (_OWORD *)v4;
    if ( v4 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    v6 = &v76;
    v7 = 6LL;
    v8 = 6LL;
    do
    {
      *(_OWORD *)v6 = *v5;
      *((_OWORD *)v6 + 1) = v5[1];
      *((_OWORD *)v6 + 2) = v5[2];
      *((_OWORD *)v6 + 3) = v5[3];
      *((_OWORD *)v6 + 4) = v5[4];
      *((_OWORD *)v6 + 5) = v5[5];
      *((_OWORD *)v6 + 6) = v5[6];
      v6 += 32;
      *((_OWORD *)v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v6 = *v5;
    *((_OWORD *)v6 + 1) = v5[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  }
  else
  {
    v9 = (_OWORD *)v4;
    v10 = &v76;
    v7 = 6LL;
    v11 = 6LL;
    do
    {
      *(_OWORD *)v10 = *v9;
      *((_OWORD *)v10 + 1) = v9[1];
      *((_OWORD *)v10 + 2) = v9[2];
      *((_OWORD *)v10 + 3) = v9[3];
      *((_OWORD *)v10 + 4) = v9[4];
      *((_OWORD *)v10 + 5) = v9[5];
      *((_OWORD *)v10 + 6) = v9[6];
      v10 += 32;
      *((_OWORD *)v10 - 1) = v9[7];
      v9 += 8;
      --v11;
    }
    while ( v11 );
    *(_OWORD *)v10 = *v9;
    *((_OWORD *)v10 + 1) = v9[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v9 + 4);
  }
  memset(v79, 0, sizeof(v79));
  Global = DXGGLOBAL::GetGlobal(v13, v12);
  v18 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v77, &v71);
  if ( v18 )
  {
    v19 = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v81, v78, 1024);
    if ( v78 )
    {
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v81, 1) < 0 )
      {
        v29 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v29 + 24) = v78;
        WdLogEvent5_WdWarning(v29);
        goto LABEL_21;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v81);
    }
    else
    {
      Process = DXGPROCESS::GetCurrent(v21, v20);
    }
    v19 = Process;
LABEL_21:
    if ( !v19 )
    {
      v56 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v56 + 24) = 5697LL;
      WdLogEvent5_WdWarning(v56);
      LODWORD(v32) = -1073741811;
LABEL_63:
      DXGADAPTER::ReleaseReference(v18);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v81);
      v3 = a2;
      goto LABEL_66;
    }
    v66 = 0LL;
    v72 = 0LL;
    LODWORD(v32) = DxgkpGetPairingAdapters(v18, 0LL, &v66, &v72, 0LL, 0LL, 0);
    if ( (int)v32 < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v33 + 24) = v18;
      WdLogEvent5_WdError(v33);
      v34 = v66;
LABEL_60:
      if ( v34 )
        DXGADAPTER::ReleaseReference(v34);
      v4 = v70;
      goto LABEL_63;
    }
    v34 = v66;
    if ( !v66 )
    {
      v35 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v35 + 24) = v18;
      v32 = -1073741637LL;
      goto LABEL_29;
    }
    if ( *((_BYTE *)v66 + 209) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v66 + 4240),
                     (struct _D3DKMT_QUERYSTATISTICS *)&v76,
                     v19);
      v32 = Statistics;
      if ( Statistics >= 0 )
        goto LABEL_60;
      v35 = WdLogNewEntry5_WdError(v38, v37);
      *(_QWORD *)(v35 + 24) = v34;
LABEL_29:
      *(_QWORD *)(v35 + 32) = v32;
      WdLogEvent5_WdError(v35);
      goto LABEL_60;
    }
    v74 = v66;
    v75 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    v41 = *((_DWORD *)v34 + 50);
    v34 = v66;
    if ( v41 != 1 )
    {
LABEL_58:
      if ( v75 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
      goto LABEL_60;
    }
    v42 = *((_QWORD *)v66 + 338);
    if ( !*(_QWORD *)(v42 + 640) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v42, v39);
      *(_QWORD *)(v43 + 24) = 5579LL;
      WdLogEvent5_WdAssertion(v43);
      v42 = *((_QWORD *)v34 + 338);
    }
    if ( !*(_QWORD *)(v42 + 616) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v42, v39);
      *(_QWORD *)(v44 + 24) = 5580LL;
      WdLogEvent5_WdAssertion(v44);
    }
    switch ( v76 )
    {
      case 0:
        LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 338)
                                                                                          + 640LL)
                                                                              + 8LL)
                                                                  + 296LL))(
                         *(_QWORD *)(*((_QWORD *)v34 + 338) + 648LL),
                         v79);
        if ( (int)v32 < 0 )
          goto LABEL_58;
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 338)
                                                                                               + 616LL)
                                                                                   + 8LL)
                                                                       + 688LL))(
                              *(_QWORD *)(*((_QWORD *)v34 + 338) + 624LL),
                              v79);
        goto LABEL_57;
      case 3:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 338) + 640LL)
                                                                                           + 8LL)
                                                                               + 320LL))(
                              *(_QWORD *)(*((_QWORD *)v34 + 338) + 648LL),
                              v80,
                              v79);
        goto LABEL_57;
      case 5:
        v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 338) + 616LL)
                                                                             + 8LL)
                                                                 + 696LL))(
                *(_QWORD *)(*((_QWORD *)v34 + 338) + 624LL),
                v80,
                v79);
        v32 = v52;
        if ( v52 < 0 )
          goto LABEL_48;
        if ( *((int *)v34 + 649) < 2400 )
          goto LABEL_58;
        v54 = v80 % **((unsigned __int16 **)v34 + 323);
        *(_DWORD *)&v79[548] = v80 / **((unsigned __int16 **)v34 + 323);
        *(_DWORD *)&v79[544] = v54;
        NodePerfData = DXGADAPTER::GetNodePerfData(v34, (struct _D3DKMT_NODE_PERFDATA *)&v79[544], v49);
        break;
      case 7:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 338) + 616LL)
                                                                                           + 8LL)
                                                                               + 704LL))(
                              *(_QWORD *)(*((_QWORD *)v34 + 338) + 624LL),
                              v80,
                              v79);
        goto LABEL_57;
      case 10:
        if ( *((int *)v34 + 649) < 2400 )
        {
          LODWORD(v32) = -1073741822;
          goto LABEL_58;
        }
        *(_DWORD *)v79 = v80;
        AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v34, (struct _D3DKMT_ADAPTER_PERFDATA *)v79, v40);
        v32 = AdapterPerfData;
        if ( AdapterPerfData < 0
          || (*(_DWORD *)&v79[64] = v80,
              AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(
                                      v34,
                                      (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v79[64],
                                      v49),
              v32 = AdapterPerfDataCaps,
              AdapterPerfDataCaps < 0) )
        {
LABEL_48:
          v53 = WdLogNewEntry5_WdWarning(v48, v47, v49);
          *(_QWORD *)(v53 + 24) = v32;
          WdLogEvent5_WdWarning(v53);
          goto LABEL_58;
        }
        *(_DWORD *)&v79[104] = v80;
        NodePerfData = DXGADAPTER::GetGpuVersion(v34, (struct _D3DKMT_GPUVERSION *)&v79[104], v49);
        break;
      default:
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v76, v34, v19);
LABEL_57:
        LODWORD(v32) = ProcessStatistics;
        goto LABEL_58;
    }
    v32 = NodePerfData;
    if ( NodePerfData >= 0 )
      goto LABEL_58;
    goto LABEL_48;
  }
  v57 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v57 + 24) = v77.LowPart;
  *(_QWORD *)(v57 + 32) = v77.HighPart;
  WdLogEvent5_WdWarning(v57);
  LODWORD(v32) = -1073741811;
LABEL_66:
  if ( (int)v32 >= 0 )
  {
    if ( v3 )
    {
      v58 = (_OWORD *)(v4 + 24);
      v55 = MmUserProbeAddress;
      if ( v4 + 800 > MmUserProbeAddress || v4 + 800 <= (unsigned __int64)v58 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v59 = v79;
      do
      {
        *v58 = *v59;
        v58[1] = v59[1];
        v58[2] = v59[2];
        v58[3] = v59[3];
        v58[4] = v59[4];
        v58[5] = v59[5];
        v58[6] = v59[6];
        v58 += 8;
        *(v58 - 1) = v59[7];
        v59 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v58 = *(_QWORD *)v59;
    }
    else
    {
      v60 = (_OWORD *)(v4 + 24);
      v61 = v79;
      do
      {
        *v60 = *v61;
        v60[1] = v61[1];
        v60[2] = v61[2];
        v60[3] = v61[3];
        v60[4] = v61[4];
        v60[5] = v61[5];
        v60[6] = v61[6];
        v60 += 8;
        *(v60 - 1) = v61[7];
        v61 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v60 = *(_QWORD *)v61;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v55);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v67);
  return (unsigned int)v32;
}

/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0224BB0
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___ @ 0x1C000F1F0 (DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C03B0488 (MonitorGetAdvancedColorMetadataOverride.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        unsigned int a1,
        struct ADAPTER_DISPLAY *this,
        struct _D3DDDI_HDR_METADATA_HDR10 *a3,
        enum _D3DDDI_HDR_METADATA_TYPE *a4)
{
  __int64 v4; // rbx
  int MonitorHandle; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 CurrentProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGMONITOR *v18; // rdx
  char v19; // bl
  int AdvancedColorMetadataOverride; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  DXGMONITOR *v27[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v28; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-20h] BYREF
  char v30; // [rsp+60h] [rbp-10h]
  struct ADAPTER_DISPLAY *v31; // [rsp+88h] [rbp+18h] BYREF

  v31 = this;
  v4 = a1;
  if ( this && a3 && a4 && *((_DWORD *)this + 24) > a1 && ADAPTER_DISPLAY::IsVidPnSourceActive(this, a1) )
  {
    v27[0] = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(
                      *((_QWORD *)v31 + 2),
                      *(unsigned int *)(4000 * v4 + *((_QWORD *)v31 + 16) + 1088),
                      1u,
                      PopulateHDRMetadataFromDisplay,
                      v27);
    v12 = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
      WdLogSingleEntry2(3LL, v12, CurrentProcess);
      return (unsigned int)v12;
    }
    *(_QWORD *)&v28 = &v31;
    *((_QWORD *)&v28 + 1) = v27;
    DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9_((__int64)v29, &v28);
    v18 = v27[0];
    if ( v27[0] )
    {
      MONITOR_MGR::AcquireMonitorShared(&v28, (__int64)v27[0]);
      if ( (_QWORD)v28 )
      {
        v19 = *(_BYTE *)(*(_QWORD *)(v28 + 224) + 428LL);
        ExReleaseResourceLite((PERESOURCE)(v28 + 24));
        KeLeaveCriticalRegion();
        if ( !v19 )
        {
          LODWORD(v12) = -1073741822;
          goto LABEL_20;
        }
        AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v27[0], a3);
        v12 = AdvancedColorMetadataOverride;
        if ( AdvancedColorMetadataOverride >= 0 )
        {
          *a4 = D3DDDI_HDR_METADATA_TYPE_HDR10;
          LODWORD(v12) = 0;
          goto LABEL_20;
        }
        v25 = PsGetCurrentProcess(v22, v21, v23, v24);
        v26 = v12;
LABEL_19:
        WdLogSingleEntry2(3LL, v26, v25);
LABEL_20:
        if ( v30 )
          MonitorReleaseMonitorHandle(
            *(_QWORD *)(*(_QWORD *)v29[0] + 16LL),
            *(_QWORD *)v29[1],
            PopulateHDRMetadataFromDisplay);
        return (unsigned int)v12;
      }
      LODWORD(v12) = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v28);
    }
    else
    {
      LODWORD(v12) = -1073741811;
    }
    v25 = PsGetCurrentProcess(v15, v18, v16, v17);
    v26 = (int)v12;
    goto LABEL_19;
  }
  return 3221225485LL;
}

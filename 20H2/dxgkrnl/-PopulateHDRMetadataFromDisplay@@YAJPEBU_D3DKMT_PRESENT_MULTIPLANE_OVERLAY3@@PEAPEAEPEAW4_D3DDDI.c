/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C02A2B90
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02A7070 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___ @ 0x1C001D234 (DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorGetMonitorHandle @ 0x1C01251F0 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012B11C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C02F2638 (MonitorGetAdvancedColorMetadataOverride.c)
 *     MonitorGetIsAdvancedColorMetadataOverridden @ 0x1C02F296C (MonitorGetIsAdvancedColorMetadataOverridden.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        unsigned __int8 **a2,
        enum _D3DDDI_HDR_METADATA_TYPE *a3,
        unsigned int *a4)
{
  unsigned __int8 *v8; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  ADAPTER_DISPLAY *v12; // rcx
  __int64 VidPnSourceId; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int MonitorHandle; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int IsAdvancedColorMetadataOverridden; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int AdvancedColorMetadataOverride; // eax
  __int64 v38; // rdi
  __int64 v39; // r9
  unsigned __int8 *v40; // rax
  struct DXGCONTEXT *v42; // [rsp+30h] [rbp-29h] BYREF
  struct HDXGMONITOR__ *v43; // [rsp+38h] [rbp-21h] BYREF
  __int128 v44; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v45[16]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v46; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v47; // [rsp+68h] [rbp+Fh]
  char v48; // [rsp+70h] [rbp+17h]
  char v49[8]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v50; // [rsp+80h] [rbp+27h]
  char v51; // [rsp+88h] [rbp+2Fh]
  char v52; // [rsp+C0h] [rbp+67h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v8 = 0LL;
  v42 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, *a1->pContextList, Current, &v42, 0);
  if ( v42 )
  {
    v10 = *((_QWORD *)v42 + 2);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 1848);
      if ( v11 )
      {
        v12 = *(ADAPTER_DISPLAY **)(v11 + 2696);
        VidPnSourceId = a1->VidPnSourceId;
        if ( *((_DWORD *)v12 + 20) > (unsigned int)VidPnSourceId )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v12, VidPnSourceId) )
          {
            v51 = 0;
            v50 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
            v43 = 0LL;
            v14 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 1848LL);
            v15 = *(_QWORD *)(v14 + 2696);
            v16 = *(_QWORD *)(v15 + 112);
            LOBYTE(v15) = 1;
            MonitorHandle = MonitorGetMonitorHandle(
                              v14,
                              *(unsigned int *)(v16 + 3968LL * a1->VidPnSourceId + 1068),
                              v15,
                              PopulateHDRMetadataFromDisplay,
                              &v43);
            v21 = MonitorHandle;
            if ( MonitorHandle < 0 )
            {
              v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
              *(_QWORD *)(v22 + 24) = v21;
              *(_QWORD *)(v22 + 32) = PsGetCurrentProcess(v24, v23);
              WdLogEvent5_WdWarning(v22);
LABEL_20:
              if ( v51 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
              goto LABEL_28;
            }
            *(_QWORD *)&v44 = &v42;
            *((_QWORD *)&v44 + 1) = &v43;
            DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e_((__int64)&v46, &v44);
            v52 = 0;
            IsAdvancedColorMetadataOverridden = MonitorGetIsAdvancedColorMetadataOverridden(v43, &v52);
            v21 = IsAdvancedColorMetadataOverridden;
            if ( IsAdvancedColorMetadataOverridden < 0 )
              goto LABEL_17;
            if ( v52 )
            {
              v30 = (unsigned __int8 *)operator new[](0x1CuLL, 0x4B677844u, PagedPool);
              v8 = v30;
              if ( !v30 )
              {
                v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
                v21 = -1073741801LL;
                goto LABEL_18;
              }
              AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v43, v30);
              v21 = AdvancedColorMetadataOverride;
              if ( AdvancedColorMetadataOverride < 0 )
              {
LABEL_17:
                v34 = WdLogNewEntry5_WdWarning(v27, v26, v28);
LABEL_18:
                v38 = v34;
                *(_QWORD *)(v34 + 24) = v21;
                *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v36, v35);
                WdLogEvent5_WdWarning(v38);
                if ( v48 )
                  MonitorReleaseMonitorHandle(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 16LL) + 1848LL),
                    *v47,
                    PopulateHDRMetadataFromDisplay,
                    v39);
                goto LABEL_20;
              }
              *a3 = D3DDDI_HDR_METADATA_TYPE_HDR10;
              v40 = v8;
              *a4 = 28;
              v8 = 0LL;
              *a2 = v40;
            }
            if ( v48 )
              MonitorReleaseMonitorHandle(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 16LL) + 1848LL),
                *v47,
                PopulateHDRMetadataFromDisplay,
                v29);
            if ( v51 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
          }
        }
      }
    }
  }
  LODWORD(v21) = 0;
LABEL_28:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
  if ( v8 )
    operator delete[](v8);
  return (unsigned int)v21;
}

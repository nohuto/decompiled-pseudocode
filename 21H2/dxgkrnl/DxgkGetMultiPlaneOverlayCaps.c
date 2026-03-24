/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C015FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C015FE64 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rdx
  _OWORD *v6; // rax
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  int PairingAdapters; // esi
  ADAPTER_DISPLAY **v17; // rbx
  struct DXGADAPTER *v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r15
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347 Value; // r9d
  UINT v25; // r10d
  unsigned int v26; // r11d
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v27; // r8
  _DWORD *v28; // rdx
  _DWORD *p_Value; // rdx
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v32; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // [rsp+40h] [rbp-128h] BYREF
  __int64 v55; // [rsp+48h] [rbp-120h]
  char v56; // [rsp+50h] [rbp-118h]
  struct DXGADAPTER *v57; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v58[4]; // [rsp+60h] [rbp-108h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v59[4]; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v60; // [rsp+80h] [rbp-E8h] BYREF
  DXGADAPTER *v61; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int64 v62; // [rsp+98h] [rbp-D0h] BYREF
  ULONG64 v63; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-C0h] BYREF
  _BYTE v65[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v63 = a1;
  v54 = -1;
  v55 = 0LL;
  v4 = 1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2145);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 2145LL);
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v58 = *v6;
  *(_OWORD *)&v59[0].0 = v6[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v5);
  if ( Current )
  {
    v57 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v61, v58[0], Current, &v57, 1);
    v13 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      v60 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v13, v58[1], &v57, &v62, &v60, &v64, 0);
      if ( PairingAdapters < 0 )
      {
        v17 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v13, v58[1], &v57, &v62, 0LL, 0LL, 0);
      }
      else
      {
        v17 = (ADAPTER_DISPLAY **)v60;
      }
      if ( PairingAdapters < 0 )
      {
        v43 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v43 + 24) = v13;
        *(_QWORD *)(v43 + 32) = v58[1];
        WdLogEvent5_WdError(v43);
        if ( v61 )
          DXGADAPTER::ReleaseReference(v61);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v44);
        if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v54);
        return (unsigned int)PairingAdapters;
      }
      else
      {
        if ( v17 && !v17[337] )
        {
          v47 = WdLogNewEntry5_WdAssertion(v15, v14);
          *(_QWORD *)(v47 + 24) = 11134LL;
          WdLogEvent5_WdAssertion(v47);
        }
        v18 = v57;
        if ( !v57 || !*((_QWORD *)v57 + 338) )
        {
          v48 = WdLogNewEntry5_WdAssertion(v15, v14);
          *(_QWORD *)(v48 + 24) = 11136LL;
          WdLogEvent5_WdAssertion(v48);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v18, (struct DXGADAPTER *const)v17);
        DXGADAPTER::ReleaseReference(v18);
        if ( v17 )
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v17);
        v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
        v23 = v19;
        if ( v19 < 0 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
          v49[3] = v23;
          v49[4] = v13;
          v49[5] = v18;
          v49[6] = v17;
          WdLogEvent5_WdWarning(v49);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65, v50);
          if ( v61 )
            DXGADAPTER::ReleaseReference(v61);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v51);
          if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v54);
          return 0LL;
        }
        else
        {
          if ( v17 )
          {
            LODWORD(v23) = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                             v17[337],
                             v58[1],
                             &v58[2],
                             &v58[3],
                             (unsigned int *)v59,
                             &v59[1],
                             (float *)&v59[2],
                             (float *)&v59[3]);
            Value = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v59[1].Value;
            v25 = v59[0].Value;
            v26 = v58[3];
            v4 = v58[2];
          }
          else
          {
            v26 = 0;
            v25 = 0;
            Value = 0;
            v59[2].Value = 1065353216;
            v59[3].Value = 1065353216;
          }
          v27 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)v63;
          v28 = (_DWORD *)(v63 + 8);
          if ( v63 + 8 >= MmUserProbeAddress )
            v28 = (_DWORD *)MmUserProbeAddress;
          *v28 = v4;
          p_Value = &v27[3].Value;
          if ( (unsigned __int64)&v27[3] >= MmUserProbeAddress )
            p_Value = (_DWORD *)MmUserProbeAddress;
          *p_Value = v26;
          v30 = &v27[4].Value;
          if ( (unsigned __int64)&v27[4] >= MmUserProbeAddress )
            v30 = (_DWORD *)MmUserProbeAddress;
          *v30 = v25;
          v31 = &v27[5].Value;
          if ( (unsigned __int64)&v27[5] >= MmUserProbeAddress )
            v31 = (_DWORD *)MmUserProbeAddress;
          *v31 = Value;
          v32 = v27 + 6;
          if ( (unsigned __int64)&v27[6] >= MmUserProbeAddress )
            v32 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v32->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v59[2];
          v33 = v27 + 7;
          if ( (unsigned __int64)&v27[7] >= MmUserProbeAddress )
            v33 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v33->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v59[3];
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65, (__int64)v33);
          if ( v61 )
            DXGADAPTER::ReleaseReference(v61);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v34);
          if ( v56 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v54);
          }
          return (unsigned int)v23;
        }
      }
    }
    v40 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v40 + 24) = v58[0];
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v40);
    if ( v61 )
      DXGADAPTER::ReleaseReference(v61);
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v39);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v54);
  return 3221225485LL;
}

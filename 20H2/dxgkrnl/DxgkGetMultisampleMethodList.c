/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C025D710
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02DBDB8 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *Current; // rbx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _D3DDDI_MULTISAMPLINGMETHOD *v13; // r15
  ULONG64 v14; // rax
  __int64 v15; // r14
  SIZE_T v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v24; // r14
  int PairingAdapters; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGADAPTER *v29; // r14
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rcx
  unsigned int v54; // r11d
  __int64 v55; // rcx
  __int64 v56; // r8
  int v58; // [rsp+40h] [rbp-148h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v59; // [rsp+48h] [rbp-140h]
  unsigned __int64 v60; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v61[4]; // [rsp+58h] [rbp-130h]
  enum _D3DDDIFORMAT v62[4]; // [rsp+68h] [rbp-120h]
  unsigned __int64 v63; // [rsp+78h] [rbp-110h]
  int v64; // [rsp+80h] [rbp-108h]
  int v65; // [rsp+88h] [rbp-100h] BYREF
  __int64 v66; // [rsp+90h] [rbp-F8h]
  char v67; // [rsp+98h] [rbp-F0h]
  struct DXGADAPTER *v68; // [rsp+A0h] [rbp-E8h] BYREF
  struct DXGADAPTER *v69[2]; // [rsp+A8h] [rbp-E0h] BYREF
  unsigned __int64 v70; // [rsp+B8h] [rbp-D0h] BYREF
  DXGADAPTER *v71; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v72[144]; // [rsp+D0h] [rbp-B8h] BYREF

  v60 = a1;
  v65 = -1;
  v66 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2019);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2019LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v69[1] = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v9);
    goto LABEL_45;
  }
  *(_OWORD *)v61 = 0LL;
  *(_OWORD *)v62 = 0LL;
  v63 = 0LL;
  LODWORD(v10) = 0;
  v13 = 0LL;
  v59 = 0LL;
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)v61 = *(_OWORD *)v14;
  *(_OWORD *)v62 = *(_OWORD *)(v14 + 16);
  v63 = *(_QWORD *)(v14 + 32);
  if ( _mm_srli_si128(*(__m128i *)v62, 8).m128i_u64[0] && (_DWORD)v63 )
  {
    v15 = (unsigned int)v63;
    v16 = 8LL * (unsigned int)v63;
    if ( !is_mul_ok((unsigned int)v63, 8uLL) )
      v16 = -1LL;
    v13 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v16, 0x4B677844u, PagedPool);
    v59 = v13;
    if ( !v13 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17, v6, v18, v19);
      LODWORD(v10) = -1073741801;
      v20[3] = -1073741801LL;
      v20[4] = v61[0];
      v20[5] = v61[1];
      v20[6] = v15;
      WdLogEvent5_WdLowResource(v20);
    }
  }
  if ( (int)v10 >= 0 )
  {
    v68 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v71, v61[0], (struct _KTHREAD **)Current, &v68, 1);
    v60 = 0LL;
    v24 = v68;
    if ( v68 )
    {
      v69[0] = 0LL;
      v70 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v68, v61[1], 0LL, 0LL, v69, &v70, 0);
      v10 = PairingAdapters;
      v58 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v29 = v69[0];
        if ( !v69[0] )
        {
          v30 = WdLogNewEntry5_WdAssertion(v27, v26);
          *(_QWORD *)(v30 + 24) = 5910LL;
          WdLogEvent5_WdAssertion(v30);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, v29, 0LL);
        DXGADAPTER::ReleaseReference(v29);
        v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v72, 0LL);
        v10 = v31;
        v58 = v31;
        if ( v31 < 0 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33, v32);
          v49[3] = v10;
          v49[4] = Current;
          v49[5] = v61[0];
          v49[6] = v29;
          WdLogEvent5_WdDmmEvent(v49);
        }
        else
        {
          v35 = v61[1];
          if ( *(_DWORD *)(*((_QWORD *)v29 + 337) + 80LL) > v61[1] )
          {
            if ( *((_QWORD *)v29 + 338) )
            {
              v39 = (unsigned int)v63;
              v40 = v61[1];
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v29,
                                                              v61[1],
                                                              v61[2],
                                                              v61[3],
                                                              v62[0],
                                                              (unsigned int)v63,
                                                              v13,
                                                              &v60);
              v10 = MultisamplingMethodSetFromClientVidPnSource;
              v58 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v37, v43);
                v44[3] = v39;
                v44[4] = v40;
                v44[5] = v29;
                v44[6] = v10;
                WdLogEvent5_WdWarning(v44);
                v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47);
                v48[3] = v40;
                v48[4] = v29;
                v48[5] = v61[2];
                v48[6] = v61[3];
                v48[7] = v62[0];
                WdLogEvent5_WdWarning(v48);
              }
              goto LABEL_29;
            }
            v38 = WdLogNewEntry5_WdDmmEvent(v33, v32);
            *(_QWORD *)(v38 + 24) = v29;
            LODWORD(v10) = -1073741637;
            *(_QWORD *)(v38 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v38);
          }
          else
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
            LODWORD(v10) = -1073741811;
            v36[3] = -1073741811LL;
            v36[4] = v29;
            v36[5] = v35;
            WdLogEvent5_WdWarning(v36);
          }
          v58 = v10;
        }
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72, v37);
        goto LABEL_32;
      }
      v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v50[3] = v24;
      v50[4] = v61[1];
      v50[5] = v10;
      WdLogEvent5_WdWarning(v50);
    }
    else
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
      LODWORD(v10) = -1073741811;
      v51[3] = -1073741811LL;
      v51[4] = Current;
      v51[5] = v61[0];
      WdLogEvent5_WdWarning(v51);
      v58 = -1073741811;
    }
LABEL_32:
    if ( (int)v10 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v60 >> 3;
      if ( v13 )
      {
        v52 = *(_QWORD *)(a1 + 24);
        v53 = 0LL;
        v54 = v63;
        v13 = v59;
        while ( 1 )
        {
          v64 = v53;
          if ( (unsigned int)v53 >= v54 )
            break;
          v6 = (_QWORD *)(v52 + 12 * v53);
          if ( (unsigned __int64)(v6 + 1) > MmUserProbeAddress || v6 + 1 <= v6 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v6 = v59[v53];
          v53 = (unsigned int)(v53 + 1);
        }
        LODWORD(v10) = v58;
      }
    }
    if ( v71 )
      DXGADAPTER::ReleaseReference(v71);
  }
  if ( v13 )
    operator delete[](v13);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, (__int64)v6);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v65);
  return (unsigned int)v10;
}

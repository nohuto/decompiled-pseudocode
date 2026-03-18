/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0126C7C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01266E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C00098A8 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000CFBC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0127C08 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0129954 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C01564C4 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0265404 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        __int64 a2,
        bool *a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 v6; // rdi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 LowPart; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v24; // rbx
  bool v25; // al
  __int64 v26; // rcx
  bool v27; // cf
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  int IsMonitorConnected; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  bool v53; // al
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v58; // r8d
  DXGADAPTERSOURCEHASH *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  DXGADAPTERSOURCEHASH *v64; // rcx
  char HashBitShift; // al
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v66; // edi
  __int64 v67; // rdx
  int HashBitMask; // eax
  _BYTE v69[4]; // [rsp+20h] [rbp-C1h] BYREF
  unsigned int v70; // [rsp+24h] [rbp-BDh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v71; // [rsp+28h] [rbp-B9h] BYREF
  int HashForAdapterAndSource; // [rsp+2Ch] [rbp-B5h]
  int v73; // [rsp+30h] [rbp-B1h]
  __int64 v74; // [rsp+38h] [rbp-A9h]
  DXGADAPTERSOURCEHASH *v75; // [rsp+40h] [rbp-A1h]
  SESSION_VIEW *v76; // [rsp+48h] [rbp-99h]
  _BYTE v77[144]; // [rsp+50h] [rbp-91h] BYREF

  v6 = (unsigned int)a2;
  v73 = a2;
  v74 = a5;
  v9 = 0LL;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 88);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v28 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v30) = -1073741811;
    *(_QWORD *)(v28 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v29);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v30;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v6);
  v76 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v18[3] = v6;
    v18[4] = a1->HighPart;
    LowPart = a1->LowPart;
    v18[5] = LowPart;
    v18[6] = (unsigned int)PsGetCurrentProcessSessionId(LowPart);
    WdLogEvent5_WdEvent(v18);
    *a3 = 1;
    *a4 = 0;
    return 0LL;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    v34 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v34 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
  v25 = *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 && *a1 == v24;
  *a3 = v25;
  while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
  {
    v26 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v26 + 316) || a1->HighPart != *(_DWORD *)(v26 + 320) )
      break;
LABEL_15:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v76, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
    {
      v27 = *a4 < (unsigned int)v9;
      *a4 = v9;
      return v27 ? 0x80000005 : 0;
    }
    LODWORD(v6) = v73;
  }
  v35 = *((_QWORD *)PrimaryDisplaySource + 1);
  v70 = 0;
  v71 = D3DKMDT_VOT_HD15;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, *(struct DXGADAPTER *const *)(v35 + 16), 0LL);
  v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77, 0LL);
  v39 = v36;
  if ( v36 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v38, v37);
    v40[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
    v40[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
    v40[5] = v39;
LABEL_28:
    WdLogEvent5_WdEvent(v40);
LABEL_44:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77, v37);
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 250LL) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v41 + 24) = 1201LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !v74 || (unsigned int)v9 >= *a4 )
  {
LABEL_43:
    v9 = (unsigned int)(v9 + 1);
    goto LABEL_44;
  }
  if ( DmmEnumClientVidPnPathTargetsFromSource(
         *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
         *((_DWORD *)PrimaryDisplaySource + 4),
         1uLL,
         &v70) < 0
    || v70 != -1 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v43, v42);
    *(_QWORD *)(v44 + 24) = 1219LL;
    WdLogEvent5_WdAssertion(v44);
  }
  v45 = DmmEnumClientVidPnPathTargetsFromSource(
          *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
          *((_DWORD *)PrimaryDisplaySource + 4),
          0LL,
          &v70);
  v30 = v45;
  if ( v45 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
LABEL_22:
    v32 = *((unsigned int *)PrimaryDisplaySource + 4);
    goto LABEL_23;
  }
  if ( v70 == -1 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v47, 0xFFFFFFFFLL);
    v30 = -1073741811LL;
    goto LABEL_22;
  }
  v49 = *((_QWORD *)PrimaryDisplaySource + 1);
  LOBYTE(v48) = 1;
  v69[0] = 0;
  IsMonitorConnected = MonitorIsMonitorConnected(*(_QWORD *)(v49 + 16), v70, v48, v69);
  v30 = IsMonitorConnected;
  if ( IsMonitorConnected >= 0 )
  {
    if ( !v69[0] )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51);
      v40[3] = v70;
      v40[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
      v40[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      v40[6] = v30;
      goto LABEL_28;
    }
    DmmGetVideoOutputTechnology(*(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL), v70, &v71, 0LL);
    v53 = IsInternalVideoOutput(v71);
    v54 = v74;
    v71 = D3DKMDT_VOT_HD15;
    *(_BYTE *)(v74 + 20 * v9 + 16) = v53;
    *(_DWORD *)(v54 + 20 * v9) = 536870913;
    Global = DXGGLOBAL::GetGlobal(v56, v55);
    v58 = *((_DWORD *)PrimaryDisplaySource + 4);
    v59 = (struct DXGGLOBAL *)((char *)Global + 1160);
    v60 = *((_QWORD *)PrimaryDisplaySource + 1);
    v75 = v59;
    HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                v59,
                                (const struct _LUID *)(*(_QWORD *)(v60 + 16) + 316LL),
                                v58,
                                (unsigned int *)&v71);
    if ( HashForAdapterAndSource >= 0 )
    {
      v64 = v75;
      *(_QWORD *)(v54 + 20 * v9 + 8) = v24;
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v64);
      v66 = v71 << HashBitShift;
      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v75, v67);
      *(_DWORD *)(v74 + 20 * v9 + 4) = v66 + (v70 & ~HashBitMask);
    }
    else
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
      v63[3] = *((unsigned int *)PrimaryDisplaySource + 4);
      v63[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
      v63[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      v63[6] = HashForAdapterAndSource;
      WdLogEvent5_WdError(v63);
      *(_QWORD *)(v54 + 20 * v9 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      *(_DWORD *)(v54 + 20 * v9 + 4) = v70;
    }
    goto LABEL_43;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
  v32 = v70;
LABEL_23:
  v31[3] = v32;
  v31[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
  v31[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
  v31[6] = v30;
  WdLogEvent5_WdError(v31);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77, v33);
  return (unsigned int)v30;
}

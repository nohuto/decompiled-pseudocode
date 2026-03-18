/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C011EE7C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C011E8E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009AEC (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009B40 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C011F028 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0121F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012254C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C012D71C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C014BAEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C015CE34 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0269734 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
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
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v25; // rbx
  bool v26; // al
  __int64 v27; // rcx
  bool v28; // cf
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  int IsMonitorConnected; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  bool v55; // al
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v60; // r8d
  DXGADAPTERSOURCEHASH *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  DXGADAPTERSOURCEHASH *v66; // rcx
  char HashBitShift; // al
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v68; // edi
  __int64 v69; // rdx
  int HashBitMask; // eax
  _BYTE v71[4]; // [rsp+20h] [rbp-C1h] BYREF
  unsigned int v72; // [rsp+24h] [rbp-BDh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v73; // [rsp+28h] [rbp-B9h] BYREF
  int HashForAdapterAndSource; // [rsp+2Ch] [rbp-B5h]
  int v75; // [rsp+30h] [rbp-B1h]
  __int64 v76; // [rsp+38h] [rbp-A9h]
  DXGADAPTERSOURCEHASH *v77; // [rsp+40h] [rbp-A1h]
  SESSION_VIEW *v78; // [rsp+48h] [rbp-99h]
  _BYTE v79[144]; // [rsp+50h] [rbp-91h] BYREF

  v6 = (unsigned int)a2;
  v75 = a2;
  v76 = a5;
  v9 = 0LL;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 102);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v29 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v32) = -1073741811;
    *(_QWORD *)(v29 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v31, v30);
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v32;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v6);
  v78 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v18[3] = v6;
    v18[4] = a1->HighPart;
    LowPart = a1->LowPart;
    v18[5] = LowPart;
    v18[6] = (unsigned int)PsGetCurrentProcessSessionId(LowPart, v20);
    WdLogEvent5_WdEvent(v18);
    *a3 = 1;
    *a4 = 0;
    return 0LL;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    v36 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v36 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
  v26 = *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 && *a1 == v25;
  *a3 = v26;
  while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v27 + 316) || a1->HighPart != *(_DWORD *)(v27 + 320) )
      break;
LABEL_15:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v78, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
    {
      v28 = *a4 < (unsigned int)v9;
      *a4 = v9;
      return v28 ? 0x80000005 : 0;
    }
    LODWORD(v6) = v75;
  }
  v37 = *((_QWORD *)PrimaryDisplaySource + 1);
  v72 = 0;
  v73 = D3DKMDT_VOT_HD15;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, *(struct DXGADAPTER *const *)(v37 + 16), 0LL);
  v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v79, 0LL);
  v41 = v38;
  if ( v38 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, v39);
    v42[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
    v42[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
    v42[5] = v41;
LABEL_28:
    WdLogEvent5_WdEvent(v42);
LABEL_44:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79, v39);
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 250LL) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v43 + 24) = 1201LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !v76 || (unsigned int)v9 >= *a4 )
  {
LABEL_43:
    v9 = (unsigned int)(v9 + 1);
    goto LABEL_44;
  }
  if ( DmmEnumClientVidPnPathTargetsFromSource(
         *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
         *((_DWORD *)PrimaryDisplaySource + 4),
         1uLL,
         &v72) < 0
    || v72 != -1 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v45, v44);
    *(_QWORD *)(v46 + 24) = 1219LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v47 = DmmEnumClientVidPnPathTargetsFromSource(
          *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
          *((_DWORD *)PrimaryDisplaySource + 4),
          0LL,
          &v72);
  v32 = v47;
  if ( v47 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
LABEL_22:
    v34 = *((unsigned int *)PrimaryDisplaySource + 4);
    goto LABEL_23;
  }
  if ( v72 == -1 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v49, 0xFFFFFFFFLL);
    v32 = -1073741811LL;
    goto LABEL_22;
  }
  v51 = *((_QWORD *)PrimaryDisplaySource + 1);
  LOBYTE(v50) = 1;
  v71[0] = 0;
  IsMonitorConnected = MonitorIsMonitorConnected(*(_QWORD *)(v51 + 16), v72, v50, v71);
  v32 = IsMonitorConnected;
  if ( IsMonitorConnected >= 0 )
  {
    if ( !v71[0] )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v54, v53);
      v42[3] = v72;
      v42[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
      v42[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      v42[6] = v32;
      goto LABEL_28;
    }
    DmmGetVideoOutputTechnology(*(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL), v72, &v73, 0LL);
    v55 = IsInternalVideoOutput(v73);
    v56 = v76;
    v73 = D3DKMDT_VOT_HD15;
    *(_BYTE *)(v76 + 20 * v9 + 16) = v55;
    *(_DWORD *)(v56 + 20 * v9) = 536870913;
    Global = DXGGLOBAL::GetGlobal(v58, v57);
    v60 = *((_DWORD *)PrimaryDisplaySource + 4);
    v61 = (struct DXGGLOBAL *)((char *)Global + 1272);
    v62 = *((_QWORD *)PrimaryDisplaySource + 1);
    v77 = v61;
    HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                v61,
                                (const struct _LUID *)(*(_QWORD *)(v62 + 16) + 316LL),
                                v60,
                                (unsigned int *)&v73);
    if ( HashForAdapterAndSource >= 0 )
    {
      v66 = v77;
      *(_QWORD *)(v56 + 20 * v9 + 8) = v25;
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v66);
      v68 = v73 << HashBitShift;
      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v77, v69);
      *(_DWORD *)(v76 + 20 * v9 + 4) = v68 + (v72 & ~HashBitMask);
    }
    else
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
      v65[3] = *((unsigned int *)PrimaryDisplaySource + 4);
      v65[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
      v65[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      v65[6] = HashForAdapterAndSource;
      WdLogEvent5_WdError(v65);
      *(_QWORD *)(v56 + 20 * v9 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      *(_DWORD *)(v56 + 20 * v9 + 4) = v72;
    }
    goto LABEL_43;
  }
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53);
  v34 = v72;
LABEL_23:
  v33[3] = v34;
  v33[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
  v33[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
  v33[6] = v32;
  WdLogEvent5_WdError(v33);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79, v35);
  return (unsigned int)v32;
}

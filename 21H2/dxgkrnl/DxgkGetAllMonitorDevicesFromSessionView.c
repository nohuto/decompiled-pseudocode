/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01B3CC0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F208 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F2B0 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01A52B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01B631C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C01E1978 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C030A574 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        bool *a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v6; // r12d
  unsigned int *v7; // rdi
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  unsigned int v12; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 result; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  unsigned int v19; // ecx
  __int64 v20; // rbx
  bool v21; // al
  __int64 v22; // rcx
  bool v23; // cf
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  __int64 IsMonitorConnected; // rdi
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // al
  __int64 v33; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v35; // r8d
  DXGADAPTERSOURCEHASH *v36; // rcx
  __int64 v37; // rax
  int HashForAdapterAndSource; // eax
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // eax
  DXGADAPTERSOURCEHASH *v43; // rcx
  char HashBitShift; // di
  int HashBitMask; // eax
  __int64 v46; // rbx
  __int64 v47; // r10
  const wchar_t *v48; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v50; // rcx
  unsigned int v51; // eax
  char v52[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v54; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v55; // [rsp+5Ch] [rbp-A4h]
  __int64 v56; // [rsp+60h] [rbp-A0h]
  DXGADAPTERSOURCEHASH *v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  unsigned int *v59; // [rsp+78h] [rbp-88h]
  SESSION_VIEW *v60; // [rsp+80h] [rbp-80h]
  _BYTE v61[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = 0;
  v55 = a2;
  v7 = a4;
  v56 = a5;
  v59 = a4;
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v11
    || (v12 = PsGetCurrentProcessSessionId(v10),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, v12)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    LODWORD(IsMonitorConnected) = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v51 = PsGetCurrentProcessSessionId(v50);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v51,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)IsMonitorConnected;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, a2);
  v60 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v16 = PsGetCurrentProcessSessionId(v15);
    WdLogSingleEntry4(4LL, a2, a1->HighPart, a1->LowPart, v16);
    *a3 = 1;
    result = 0LL;
    *v7 = 0;
    return result;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    WdLogSingleEntry1(1LL, 1192LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplaySource != NULL", 1192LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = v55;
  v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 404LL);
  v21 = *((_DWORD *)PrimaryDisplaySource + 4) == v55 && *a1 == v20;
  *a3 = v21;
  while ( *((_DWORD *)PrimaryDisplaySource + 4) == v19 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v22 + 404) || a1->HighPart != *(_DWORD *)(v22 + 408) )
      break;
LABEL_14:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v60, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
    {
      v23 = *v59 < v6;
      *v59 = v6;
      return v23 ? 0x80000005 : 0;
    }
    v7 = v59;
    v19 = v55;
  }
  v24 = *((_QWORD *)PrimaryDisplaySource + 1);
  v53 = 0;
  v54 = D3DKMDT_VOT_HD15;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, *(struct DXGADAPTER *const *)(v24 + 16), 0LL);
  v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61, 0LL);
  v26 = *((_QWORD *)PrimaryDisplaySource + 1);
  if ( v25 < 0 )
  {
    WdLogSingleEntry3(
      4LL,
      *(int *)(*(_QWORD *)(v26 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v26 + 16) + 404LL),
      v25);
LABEL_37:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
    goto LABEL_14;
  }
  if ( !*(_BYTE *)(v26 + 290) )
  {
    WdLogSingleEntry1(1LL, 1238LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplaySource->GetDisplayCore()->IsVirtualTopologyEnabled()",
      1238LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !v56 || v6 >= *v7 )
  {
LABEL_36:
    ++v6;
    goto LABEL_37;
  }
  if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
              *(_QWORD **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
              *((_DWORD *)PrimaryDisplaySource + 4),
              1LL,
              &v53) < 0
    || v53 != -1 )
  {
    WdLogSingleEntry1(1LL, 1256LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NT_SUCCESS(DmmEnumClientVidPnPathTargetsFromSource( pDisplaySource->GetAdapter(), pDisplaySource->GetVidP"
                "nSourceId(), 1, &VidPnTargetId)) && (VidPnTargetId == D3DDDI_ID_UNINITIALIZED)",
      1256LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  IsMonitorConnected = (int)DmmEnumClientVidPnPathTargetsFromSource(
                              *(_QWORD **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                              *((_DWORD *)PrimaryDisplaySource + 4),
                              0LL,
                              &v53);
  v29 = *((_QWORD *)PrimaryDisplaySource + 1);
  if ( (int)IsMonitorConnected >= 0 )
  {
    v30 = *(_QWORD *)(v29 + 16);
    if ( v53 == -1 )
    {
      LODWORD(IsMonitorConnected) = -1073741811;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)PrimaryDisplaySource + 4),
        *(int *)(v30 + 408),
        *(unsigned int *)(v30 + 404),
        -1073741811LL);
      v48 = L"Cannot find the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      v46 = -1073741811LL;
      goto LABEL_41;
    }
    v52[0] = 0;
    LOBYTE(v28) = 1;
    IsMonitorConnected = (int)MonitorIsMonitorConnected(v30, v53, v28, v52);
    v31 = *((_QWORD *)PrimaryDisplaySource + 1);
    if ( (int)IsMonitorConnected < 0 )
    {
      v46 = IsMonitorConnected;
      WdLogSingleEntry4(
        2LL,
        v53,
        *(int *)(*(_QWORD *)(v31 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v31 + 16) + 404LL),
        IsMonitorConnected);
      v47 = v53;
      v48 = L"Failed to check monitor connection to target 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      goto LABEL_42;
    }
    if ( !v52[0] )
    {
      WdLogSingleEntry4(
        4LL,
        v53,
        *(int *)(*(_QWORD *)(v31 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v31 + 16) + 404LL),
        IsMonitorConnected);
      goto LABEL_37;
    }
    DmmGetVideoOutputTechnology(*(void *const *)(v31 + 16), v53, &v54, 0LL);
    v58 = 5LL * v6;
    v32 = IsInternalVideoOutput(v54);
    v33 = v56;
    v54 = D3DKMDT_VOT_HD15;
    *(_BYTE *)(v56 + 20LL * v6 + 16) = v32;
    *(_DWORD *)(v33 + 20LL * v6) = 536870913;
    Global = DXGGLOBAL_GetGlobal();
    v35 = *((_DWORD *)PrimaryDisplaySource + 4);
    v36 = (struct DXGGLOBAL *)((char *)Global + 1416);
    v37 = *((_QWORD *)PrimaryDisplaySource + 1);
    v57 = v36;
    HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                v36,
                                (const struct _LUID *)(*(_QWORD *)(v37 + 16) + 404LL),
                                v35,
                                (unsigned int *)&v54);
    if ( HashForAdapterAndSource >= 0 )
    {
      v43 = v57;
      *(_QWORD *)(v56 + 20LL * v6 + 8) = v20;
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v43);
      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v57);
      v41 = v58;
      v42 = (v54 << HashBitShift) + (v53 & ~HashBitMask);
      v40 = v56;
    }
    else
    {
      v39 = HashForAdapterAndSource;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)PrimaryDisplaySource + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 408LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 404LL),
        HashForAdapterAndSource);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find hash for VidPn source (0x%I64x) on adapter (0x%I64x%08I64x), status 0x%lx",
        *((unsigned int *)PrimaryDisplaySource + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 408LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 404LL),
        v39,
        0LL);
      v40 = v56;
      v41 = v58;
      *(_QWORD *)(v56 + 4 * v58 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 404LL);
      v42 = v53;
    }
    *(_DWORD *)(v40 + 4 * v41 + 4) = v42;
    goto LABEL_36;
  }
  v46 = IsMonitorConnected;
  WdLogSingleEntry4(
    2LL,
    *((unsigned int *)PrimaryDisplaySource + 4),
    *(int *)(*(_QWORD *)(v29 + 16) + 408LL),
    *(unsigned int *)(*(_QWORD *)(v29 + 16) + 404LL),
    IsMonitorConnected);
  v48 = L"Failed to get the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
LABEL_41:
  v47 = *((unsigned int *)PrimaryDisplaySource + 4);
LABEL_42:
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)v48,
    v47,
    *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 408LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 404LL),
    v46,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
  return (unsigned int)IsMonitorConnected;
}

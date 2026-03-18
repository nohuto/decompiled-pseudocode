/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C020FEC0
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0201B24 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0028170 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C020F170 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C020FDD0 (MonitorCreateMonitorManager.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C0210634 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C021071C (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02108A8 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0211B10 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0309748 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C030A6AC (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  bool v17; // cf
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 result; // rax
  unsigned int *v24; // r13
  unsigned int *v25; // r12
  int RegistryValues; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r15d
  int v30; // eax
  unsigned int v31; // eax
  _DWORD *v32; // rbx
  int v33; // ecx
  __int64 v34; // rcx
  int v35; // edx
  bool v36; // zf
  bool v37; // al
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v42; // rcx
  int (__fastcall *v43)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *); // rax
  __int64 v44; // rcx
  unsigned int i; // r10d
  __int64 v46; // rax
  __int64 v47; // rcx
  bool v48; // sf
  bool v49; // of
  __int64 v50; // rcx
  int v51; // r12d
  int v52; // ebx
  struct DXGGLOBAL *v53; // rax
  struct _KEVENT *v54; // rax
  struct _LUID v55; // rcx
  __int64 v56; // rax
  DXGGLOBAL *Global; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  _DWORD *v61; // rcx
  struct DXGGLOBAL *v62; // rax
  __int64 v63; // rcx
  _DWORD *v64; // rdx
  int v65; // eax
  void *EventHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A8h] BYREF
  struct _LUID v68; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v69; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v70[50]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = (int *)((char *)this + 24);
  *((_DWORD *)this + 6) = 0;
  v6 = *((_QWORD *)this + 2);
  v7 = v6;
  if ( *(_DWORD *)(v6 + 1968) >= 0x5010u && !*(_BYTE *)(v6 + 209) && (*(_DWORD *)(v6 + 2664) & 8) == 0 )
  {
    *(_QWORD *)&v69.Type = 16LL;
    *(_QWORD *)&v69.InputDataSize = 0LL;
    *(_QWORD *)&v69.Flags.0 = 0LL;
    HIDWORD(v69.hKmdProcessHandle) = 0;
    v69.pInputData = 0LL;
    v69.pOutputData = v4;
    v69.OutputDataSize = 4;
    v8 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v6, &v69, a3);
    if ( v8 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = v8;
      *v4 = 0;
      if ( *(int *)(*((_QWORD *)this + 2) + 2424LL) >= 8704 )
        *v4 |= 2u;
    }
    v7 = *((_QWORD *)this + 2);
    v11 = *((_DWORD *)this + 6);
    v12 = *(_DWORD *)(v7 + 2424);
    if ( v12 < 9472 )
    {
      v11 &= 0xFFFFFFF3;
      *v4 = v11;
      v12 = *(_DWORD *)(v7 + 2424);
    }
    else if ( (v11 & 0xC) == 0xC )
    {
      WdLogSingleEntry2(2LL, this, 4575LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter 0x%I64x: Both HdrFP16ScanoutSupport and HdrARGB10ScanoutSupport can't be set to 1 at the same time",
        (__int64)this,
        4575LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( v12 < 9984 )
    {
      v11 &= ~0x10u;
      *v4 = v11;
      v12 = *(_DWORD *)(v7 + 2424);
    }
    if ( v12 < 10496 || *(_QWORD *)(v7 + 824) || !*(_DWORD *)(v7 + 1544) || (v11 & 2) == 0 )
    {
      v11 &= ~0x20u;
      *v4 = v11;
      v12 = *(_DWORD *)(v7 + 2424);
    }
    if ( v12 < 12288 )
    {
      v11 &= ~0x40u;
      *v4 = v11;
    }
    if ( g_bDbgForceUsb4MonitorSupport )
      *v4 = v11 | 0x40;
  }
  v13 = *(_DWORD *)(v7 + 1544);
  *((_DWORD *)this + 24) = v13;
  v14 = v13;
  v16 = v13;
  v15 = 4000LL * v13;
  if ( !is_mul_ok(v16, 0xFA0uLL) )
    v15 = -1LL;
  v17 = __CFADD__(v15, 8LL);
  v18 = v15 + 8;
  if ( v17 )
    v18 = -1LL;
  v19 = operator new[](v18, 0x4B677844u, 64LL, a4);
  if ( v19 )
  {
    v20 = v19 + 8;
    *(_QWORD *)v19 = v14;
    `vector constructor iterator'(
      (char *)(v19 + 8),
      4000LL,
      (unsigned int)v14,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v20 = 0LL;
  }
  v21 = *((unsigned int *)this + 24);
  *((_QWORD *)this + 16) = v20;
  if ( !v20 )
  {
    WdLogSingleEntry3(6LL, v21, *((_QWORD *)this + 2), -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate 0x%I64x of display sources for adapter 0x%I64x, returning 0x%I64x",
      *((unsigned int *)this + 24),
      *((_QWORD *)this + 2),
      -1073741801LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v22 = 0;
  if ( !(_DWORD)v21 )
  {
LABEL_25:
    result = MonitorCreateMonitorManager(this, (MONITOR_MGR **)this + 14);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 13);
    if ( (unsigned int)(result + 1071774934) <= 0x3FE1FCD5 || (int)result <= -1071774937 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 436LL) & 0x100) != 0 )
    {
      v55 = (struct _LUID)*((_QWORD *)DXGGLOBAL_GetGlobal() + 127);
      v56 = *((_QWORD *)this + 2);
      v68 = v55;
      EventHandle = *(void **)(v56 + 404);
      result = CreateOutputDuplManager(
                 *((_DWORD *)this + 24),
                 0LL,
                 &v68,
                 (struct _LUID *)&EventHandle,
                 (struct OUTPUTDUPL_MGR **)this + 15);
      if ( (int)result < 0 )
        return result;
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::AddIndirectOutputDuplMgr(
        Global,
        (struct OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL)));
    }
    else
    {
      result = CreateOutputDuplManager(*((_DWORD *)this + 24), this, 0LL, 0LL, (struct OUTPUTDUPL_MGR **)this + 15);
      if ( (int)result < 0 )
        return result;
    }
    LODWORD(v67) = 1;
    *((_QWORD *)this + 75) = (char *)this + 592;
    *((_QWORD *)this + 74) = (char *)this + 592;
    v24 = (unsigned int *)((char *)this + 516);
    *((_DWORD *)this + 128) = 0;
    v25 = (unsigned int *)((char *)this + 520);
    *((_DWORD *)this + 129) = 200;
    *((_DWORD *)this + 130) = 1000;
    *((_DWORD *)this + 131) = 20000000;
    *((_DWORD *)this + 132) = 0;
    memset(v70, 0, 0x188uLL);
    v70[10] = (char *)this + 512;
    v70[5] = 0LL;
    LODWORD(v70[4]) = 0x4000000;
    LODWORD(v70[1]) = 288;
    v70[2] = L"ModeListCaching";
    LODWORD(v70[6]) = 0;
    v70[3] = &v67;
    v70[9] = L"SetTimingsFlags";
    v70[16] = L"ShortLinkTrainingTimeout";
    v70[23] = L"LongLinkTrainingTimeout";
    v70[30] = L"HPDFilterLimit";
    v70[7] = 0LL;
    LODWORD(v70[8]) = 288;
    LODWORD(v70[11]) = 0x4000000;
    v70[12] = 0LL;
    LODWORD(v70[13]) = 0;
    v70[14] = 0LL;
    LODWORD(v70[15]) = 288;
    LODWORD(v70[18]) = 0x4000000;
    v70[19] = 0LL;
    LODWORD(v70[20]) = 0;
    v70[21] = 0LL;
    LODWORD(v70[22]) = 288;
    LODWORD(v70[25]) = 0x4000000;
    v70[26] = 0LL;
    LODWORD(v70[27]) = 0;
    v70[28] = 0LL;
    LODWORD(v70[29]) = 288;
    LODWORD(v70[32]) = 0x4000000;
    v70[33] = 0LL;
    LODWORD(v70[34]) = 0;
    v70[35] = 0LL;
    LODWORD(v70[36]) = 288;
    LODWORD(v70[39]) = 0x4000000;
    v70[40] = 0LL;
    LODWORD(v70[41]) = 0;
    v70[37] = L"EnableVirtualRefreshRateOnExternalMonitor";
    v70[17] = (char *)this + 516;
    v70[24] = (char *)this + 520;
    v70[31] = (char *)this + 524;
    v70[38] = (char *)this + 528;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v70, 0LL, 0LL);
    v29 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      v30 = v67;
    }
    else
    {
      WdLogSingleEntry1(4LL, RegistryValues);
      if ( v29 != -1073741772 )
      {
        WdLogSingleEntry1(1LL, 4783LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Status == STATUS_OBJECT_NAME_NOT_FOUND",
          4783LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)this + 128) = 0;
      v30 = 1;
      LODWORD(v67) = 1;
      v29 = 0;
      *v24 = 200;
      *v25 = 1000;
    }
    *((_BYTE *)this + 292) = v30 == 1;
    v31 = *v25;
    if ( !*v25 || *v24 >= v31 || v31 >= 0x7530 )
    {
      WdLogSingleEntry3(2LL, *v24, *v24, *((_QWORD *)this + 2));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid link training timeout registry value (0x%I64x, 0x%I64x) on adapter 0x%I64x, fallback to the default value.",
        *v24,
        *v24,
        *((_QWORD *)this + 2),
        0LL,
        0LL);
      *v24 = 200;
      *((_DWORD *)this + 130) = 1000;
    }
    v32 = (_DWORD *)((char *)this + 524);
    v33 = *((_DWORD *)this + 131);
    if ( (unsigned int)(v33 - 1000000) > 0x5E69EC0 )
    {
      if ( v33 )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)this + 131), 20000000LL, *((_QWORD *)this + 2));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hot-plug filter limit of %#x on adapter 0x%I64x.  Using default of %#x.",
          (unsigned int)*v32,
          20000000LL,
          *((_QWORD *)this + 2),
          0LL,
          0LL);
      }
      *v32 = 20000000;
    }
    if ( (*((_DWORD *)this + 128) & 1) != 0 )
    {
      v58 = *((_QWORD *)this + 2);
      if ( !*(_QWORD *)(v58 + 648) )
      {
        WdLogSingleEntry3(2LL, *(int *)(v58 + 408), *(unsigned int *)(v58 + 404), -1073741735LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miniport driver wants t fallback to use DdiCommitVidPn but it does not supply pfnCommitVidPn on adapt"
                    "er (0x%I64x%08I64x), returning 0x%I64x.",
          *(int *)(*((_QWORD *)this + 2) + 408LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 404LL),
          -1073741735LL,
          0LL,
          0LL);
        return 3221225561LL;
      }
    }
    v34 = *((_QWORD *)this + 2);
    v35 = *(_DWORD *)(v34 + 412);
    if ( (*(_DWORD *)(v34 + 436) & 0x400) != 0 )
    {
      if ( v35 == 1297040209
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 216) + 64LL) + 40LL) + 28LL) < 0x700Au )
      {
        *((_BYTE *)this + 289) = 1;
        v37 = 1;
      }
      else
      {
        LODWORD(EventHandle) = ((unsigned int)*v4 >> 1) & 1;
        memset(v70, 0, 0x188uLL);
        LODWORD(v70[1]) = 288;
        v70[2] = L"ForceEnableDWMClone";
        LODWORD(v70[4]) = 67108868;
        LODWORD(v70[6]) = 4;
        v70[3] = &EventHandle;
        v70[5] = &EventHandle;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v70, 0LL, 0LL);
        v36 = (_DWORD)EventHandle == 0;
        *((_BYTE *)this + 289) = (_DWORD)EventHandle != 0;
        v37 = !v36;
      }
    }
    else
    {
      if ( v35 == 1297040209 )
      {
        WdLogSingleEntry1(1LL, 4897LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetAdapter()->GetAdapterVendorId() != VENDOR_ID_QUALCOMM",
          4897LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v34 = *((_QWORD *)this + 2);
      }
      v59 = *(unsigned int *)(v34 + 404);
      v60 = *(int *)(v34 + 408);
      if ( (*v4 & 2) != 0 )
      {
        WdLogSingleEntry3(2LL, v60, v59, -1073741735LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Force to stop DWM clone supported adapter (0x%I64x%08I64x) due to target ID does not support DWM clon"
                    "e, returning 0x%I64x.",
          *(int *)(*((_QWORD *)this + 2) + 408LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 404LL),
          -1073741735LL,
          0LL,
          0LL);
        return 3221225561LL;
      }
      WdLogSingleEntry2(4LL, v60, v59);
      v37 = 0;
      *((_BYTE *)this + 289) = 0;
    }
    *((_BYTE *)this + 290) = v37;
    v38 = *((_QWORD *)this + 2);
    if ( *(int *)(v38 + 2692) < 2000 )
    {
      v39 = *(_QWORD *)(v38 + 216);
      LODWORD(EventHandle) = 0;
      if ( (int)DpiReadPnpRegistryValue(v39, L"EnableVirtualTopologySupport", (char *)&EventHandle, 4u, 2u) >= 0 )
      {
        if ( (_DWORD)EventHandle )
        {
          v61 = (_DWORD *)*((_QWORD *)this + 2);
          if ( (v61[109] & 0x800) == 0 )
          {
            WdLogSingleEntry3(2LL, (int)v61[102], (unsigned int)v61[101], -1073741735LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Force to stop adapter (0x%I64x%08I64x) due to target ID does not support reduced hash size and re"
                        "gistry requested to use virtual topologies, returning 0x%I64x.",
              *(int *)(*((_QWORD *)this + 2) + 408LL),
              *(unsigned int *)(*((_QWORD *)this + 2) + 404LL),
              -1073741735LL,
              0LL,
              0LL);
            return 3221225561LL;
          }
          *((_BYTE *)this + 290) = 1;
          v62 = DXGGLOBAL_GetGlobal();
          DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v62 + 1416));
        }
      }
    }
    v40 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)(v40 + 2800) )
    {
      DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v40 + 688) != 0LL, v27, v28);
      v42 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 56) = DodPresent;
      if ( !DodPresent )
        v29 = -1073741801;
      memset(&v69, 0, 24);
      v43 = *(int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))(v42 + 2056);
      if ( v43 && v43(*(_QWORD *)(v42 + 1984), &v69) >= 0 )
      {
        v63 = 0LL;
        v64 = (_DWORD *)((char *)this + 420);
        do
        {
          v65 = *((unsigned __int8 *)&v69.Type + v63++);
          *v64++ = v65;
        }
        while ( v63 < 4 );
        *((_DWORD *)this + 110) = *((unsigned __int8 *)&v69.InputDataSize + 4);
        *((_DWORD *)this + 109) = *((unsigned __int8 *)&v69.InputDataSize + 5);
      }
      else
      {
        *((_DWORD *)this + 105) = 1;
      }
      v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 64) + 40LL) + 28LL) >= 0x3007u )
        DpiSetSchedulerCallbackState(v44, 3);
    }
    if ( *((_QWORD *)this + 56) )
    {
      for ( i = 0;
            i < *((_DWORD *)this + 24);
            *(_QWORD *)(2920 * v46 + *(_QWORD *)(*((_QWORD *)this + 56) + 8LL) + 384) = *(_QWORD *)(4000 * v46
                                                                                                  + *((_QWORD *)this + 16)
                                                                                                  + 928) )
      {
        v46 = i++;
      }
    }
    v47 = *((_QWORD *)this + 2);
    v49 = __OFSUB__(*(_DWORD *)(v47 + 2424), 8704);
    v48 = *(_DWORD *)(v47 + 2424) - 8704 < 0;
    v50 = *(_QWORD *)(v47 + 216);
    v51 = v48 ^ v49;
    LODWORD(EventHandle) = v51;
    if ( (int)DpiReadPnpRegistryValue(v50, L"NeedToSuspendVidSchBeforeSetGammaRamp", (char *)&EventHandle, 4u, 2u) >= 0 )
    {
      v52 = (int)EventHandle;
      if ( (_DWORD)EventHandle != v51 )
        WdLogSingleEntry2(3LL, (unsigned int)EventHandle, *((_QWORD *)this + 2));
    }
    else
    {
      v52 = v51;
    }
    *((_BYTE *)this + 291) = v52 != 0;
    v53 = DXGGLOBAL_GetGlobal();
    if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                (struct DXGGLOBAL *)((char *)v53 + 1416),
                (const struct _LUID *)(*((_QWORD *)this + 2) + 404LL),
                *((unsigned __int8 *)this + 290)) < 0 )
    {
      WdLogSingleEntry1(1LL, 5055LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(TmpStatus)", 5055LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v29 >= 0 )
    {
      EventHandle = 0LL;
      v54 = IoCreateNotificationEvent(0LL, &EventHandle);
      *((_QWORD *)this + 82) = v54;
      if ( v54 )
      {
        KeClearEvent(v54);
        ObfReferenceObject(*((PVOID *)this + 82));
        ZwClose(EventHandle);
      }
      else
      {
        WdLogSingleEntry1(6LL, 5066LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to create adapter VidPnSourceUsedBySession event object.",
          5066LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)v29;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4000LL * v22), this, v22);
    if ( (int)result < 0 )
      return result;
    if ( ++v22 >= *((_DWORD *)this + 24) )
      goto LABEL_25;
  }
}

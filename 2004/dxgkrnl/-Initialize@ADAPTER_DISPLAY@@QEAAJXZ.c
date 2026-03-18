/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C017A4C0
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C017C40C (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019634 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0024270 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     MonitorCreateMonitorManager @ 0x1C0176AB0 (MonitorCreateMonitorManager.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0176BA0 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C0176F2C (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C017AF44 (DpiReadPnpRegistryValue.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C017B130 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C018E6D4 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C0197508 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C02685B8 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C02698E4 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rax
  bool v5; // cf
  SIZE_T v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rbx
  unsigned int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int OutputDuplManager; // edi
  _DWORD *v18; // r12
  unsigned int *v19; // rbx
  unsigned int *v20; // r14
  _DWORD *v21; // rdi
  int RegistryValues; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rcx
  bool v30; // zf
  bool v31; // al
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v36; // rcx
  char *v37; // rbx
  __int64 v38; // rcx
  unsigned int i; // r10d
  __int64 v40; // rax
  __int64 v41; // rcx
  bool v42; // sf
  bool v43; // of
  __int64 v44; // rcx
  int v45; // edi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rdi
  int v51; // ebx
  struct DXGGLOBAL *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _KEVENT *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  struct _LUID v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int128 v65; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  struct DXGGLOBAL *v74; // rax
  int (__fastcall *v75)(_QWORD, struct _LUID *); // rax
  __int64 v76; // rcx
  _DWORD *v77; // rdx
  int v78; // eax
  struct _LUID *v79; // rdx
  DWORD v80; // ecx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  void *EventHandle; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v86; // [rsp+48h] [rbp-C0h] BYREF
  struct _LUID v87[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+60h] [rbp-A8h]
  _QWORD v89[42]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 1448LL);
  *((_DWORD *)this + 20) = v2;
  v3 = (unsigned int)v2;
  v4 = 3968 * v2;
  if ( !is_mul_ok(v2, 0xF80uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    v12 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      v7 + 8,
      3968LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 14) = v12;
  if ( !v12 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    v61[3] = *((unsigned int *)this + 20);
    v61[4] = *((_QWORD *)this + 2);
    v61[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v61);
    return 3221225495LL;
  }
  v13 = 0;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_11:
    result = MonitorCreateMonitorManager(this, (MONITOR_MGR **)this + 12, v10, v11);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 11);
    v16 = (unsigned int)(result + 1071774934);
    if ( (unsigned int)v16 <= 0x3FE1FCD5 || (int)result <= -1071774937 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 348LL) & 0x100) != 0 )
    {
      v62 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 107);
      v63 = *((_QWORD *)this + 2);
      v86 = v62;
      EventHandle = *(void **)(v63 + 316);
      OutputDuplManager = CreateOutputDuplManager(
                            *((unsigned int *)this + 20),
                            0LL,
                            &v86,
                            (struct _LUID *)&EventHandle,
                            (struct OUTPUTDUPL_MGR **)this + 13);
      if ( OutputDuplManager < 0 )
        return (unsigned int)OutputDuplManager;
      v65 = -(__int128)*((unsigned __int64 *)this + 13);
      *((_QWORD *)&v65 + 1) &= *((_QWORD *)this + 13) - 24LL;
      Global = DXGGLOBAL::GetGlobal(v65, v64);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v65 + 1));
    }
    else
    {
      OutputDuplManager = CreateOutputDuplManager(
                            *((unsigned int *)this + 20),
                            this,
                            0LL,
                            0LL,
                            (struct OUTPUTDUPL_MGR **)this + 13);
    }
    if ( OutputDuplManager >= 0 )
    {
      LODWORD(v85) = 1;
      *((_QWORD *)this + 64) = (char *)this + 504;
      v18 = (_DWORD *)((char *)this + 440);
      *((_QWORD *)this + 63) = (char *)this + 504;
      v19 = (unsigned int *)((char *)this + 444);
      v20 = (unsigned int *)((char *)this + 448);
      *((_DWORD *)this + 110) = 0;
      v21 = (_DWORD *)((char *)this + 452);
      *((_DWORD *)this + 111) = 200;
      *((_DWORD *)this + 112) = 1000;
      *((_DWORD *)this + 113) = 20000000;
      memset(v89, 0, sizeof(v89));
      v89[5] = 0LL;
      LODWORD(v89[4]) = 0x4000000;
      LODWORD(v89[1]) = 288;
      v89[2] = L"ModeListCaching";
      LODWORD(v89[8]) = 288;
      v89[3] = &v85;
      LODWORD(v89[11]) = 0x4000000;
      v89[9] = L"SetTimingsFlags";
      v89[16] = L"ShortLinkTrainingTimeout";
      v89[23] = L"LongLinkTrainingTimeout";
      LODWORD(v89[15]) = 288;
      LODWORD(v89[18]) = 0x4000000;
      LODWORD(v89[22]) = 288;
      LODWORD(v89[25]) = 0x4000000;
      LODWORD(v89[29]) = 288;
      LODWORD(v89[32]) = 0x4000000;
      v89[30] = L"HPDFilterLimit";
      LODWORD(v89[6]) = 0;
      v89[7] = 0LL;
      v89[10] = (char *)this + 440;
      v89[12] = 0LL;
      LODWORD(v89[13]) = 0;
      v89[14] = 0LL;
      v89[17] = (char *)this + 444;
      v89[19] = 0LL;
      LODWORD(v89[20]) = 0;
      v89[21] = 0LL;
      v89[24] = (char *)this + 448;
      v89[26] = 0LL;
      LODWORD(v89[27]) = 0;
      v89[28] = 0LL;
      v89[31] = (char *)this + 452;
      v89[33] = 0LL;
      LODWORD(v89[34]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v89, 0LL, 0LL);
      v25 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v27 = v85;
      }
      else
      {
        v26 = WdLogNewEntry5_WdEvent(v24, v23);
        *(_QWORD *)(v26 + 24) = v25;
        WdLogEvent5_WdEvent(v26);
        if ( (_DWORD)v25 != -1073741772 )
        {
          v67 = WdLogNewEntry5_WdAssertion(v24, v23);
          *(_QWORD *)(v67 + 24) = 4559LL;
          WdLogEvent5_WdAssertion(v67);
        }
        v27 = 1;
        *v18 = 0;
        LODWORD(v85) = 1;
        LODWORD(v25) = 0;
        *v19 = 200;
        *v20 = 1000;
      }
      *((_BYTE *)this + 252) = v27 == 1;
      v28 = *v20;
      if ( !*v20 || *v19 >= v28 || v28 >= 0x7530 )
      {
        v68 = WdLogNewEntry5_WdError(v24, v23);
        v69 = 2LL;
        v70 = (_QWORD *)(v68 + 24);
        do
        {
          *v70++ = *v19;
          --v69;
        }
        while ( v69 );
        *(_QWORD *)(v68 + 40) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v68);
        *v19 = 200;
        *v20 = 1000;
      }
      v29 = (unsigned int)*v21;
      if ( (unsigned int)(v29 - 1000000) > 0x5E69EC0 )
      {
        if ( (_DWORD)v29 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdError(v29, v23);
          v71[3] = (unsigned int)*v21;
          v71[4] = 20000000LL;
          v71[5] = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v71);
        }
        *v21 = 20000000;
      }
      if ( (*v18 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)this + 2) + 560LL) )
        goto LABEL_67;
      v23 = *((_QWORD *)this + 2);
      v29 = *(unsigned int *)(v23 + 324);
      if ( (*(_DWORD *)(v23 + 348) & 0x400) != 0 )
      {
        if ( (_DWORD)v29 == 1297040209
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 216) + 64LL) + 40LL) + 28LL) < 0x700Au )
        {
          *((_BYTE *)this + 249) = 1;
          v31 = 1;
        }
        else
        {
          LODWORD(EventHandle) = (*(_DWORD *)(v23 + 2576) >> 1) & 1;
          memset(v89, 0, sizeof(v89));
          LODWORD(v89[1]) = 288;
          v89[2] = L"ForceEnableDWMClone";
          LODWORD(v89[4]) = 67108868;
          LODWORD(v89[6]) = 4;
          v89[3] = &EventHandle;
          v89[5] = &EventHandle;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v89, 0LL, 0LL);
          v30 = (_DWORD)EventHandle == 0;
          *((_BYTE *)this + 249) = (_DWORD)EventHandle != 0;
          v31 = !v30;
        }
      }
      else
      {
        if ( (_DWORD)v29 == 1297040209 )
        {
          v73 = WdLogNewEntry5_WdAssertion(v29, v23);
          *(_QWORD *)(v73 + 24) = 4673LL;
          WdLogEvent5_WdAssertion(v73);
          v23 = *((_QWORD *)this + 2);
        }
        if ( (*(_DWORD *)(v23 + 2576) & 2) != 0 )
          goto LABEL_67;
        v60 = WdLogNewEntry5_WdEvent(v29, v23);
        *(_QWORD *)(v60 + 24) = *(int *)(*((_QWORD *)this + 2) + 320LL);
        *(_QWORD *)(v60 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 316LL);
        WdLogEvent5_WdEvent(v60);
        v31 = 0;
        *((_BYTE *)this + 249) = 0;
      }
      *((_BYTE *)this + 250) = v31;
      v32 = *((_QWORD *)this + 2);
      if ( *(int *)(v32 + 2596) >= 2000 )
        goto LABEL_31;
      v33 = *(_QWORD *)(v32 + 216);
      LODWORD(EventHandle) = 0;
      if ( (int)DpiReadPnpRegistryValue(v33, L"EnableVirtualTopologySupport", &EventHandle, 4LL) < 0
        || !(_DWORD)EventHandle )
      {
        goto LABEL_31;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 348LL) & 0x800) != 0 )
      {
        *((_BYTE *)this + 250) = 1;
        v74 = DXGGLOBAL::GetGlobal(v29, v23);
        DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v74 + 1272));
LABEL_31:
        v34 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v34 + 2704) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v34 + 600) != 0LL);
          v36 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 48) = DodPresent;
          if ( !DodPresent )
            LODWORD(v25) = -1073741801;
          if ( (*(_DWORD *)(v36 + 348) & 0x20) != 0 || *(_DWORD *)(v36 + 344) == 4 )
          {
            v37 = (char *)this + 364;
            *((_DWORD *)this + 91) = 0;
          }
          else
          {
            *(_OWORD *)&v87[0].LowPart = 0LL;
            v88 = 0LL;
            v75 = *(int (__fastcall **)(_QWORD, struct _LUID *))(v36 + 1960);
            if ( v75 && v75(*(_QWORD *)(v36 + 1888), v87) >= 0 )
            {
              v37 = (char *)this + 364;
              v76 = 0LL;
              v77 = (_DWORD *)((char *)this + 364);
              do
              {
                v78 = *((unsigned __int8 *)&v87[0].LowPart + v76++);
                *v77++ = v78;
              }
              while ( v76 < 4 );
              v79 = (struct _LUID *)*((_QWORD *)this + 2);
              v80 = v88;
              v79[550] = v87[1];
              v79[551].LowPart = v80;
              *((_DWORD *)this + 95) = BYTE4(v88);
            }
            else
            {
              v37 = (char *)this + 364;
              *((_DWORD *)this + 91) = 1;
            }
          }
          memset(v89, 0, sizeof(v89));
          LODWORD(v89[1]) = 288;
          v89[3] = v37;
          v89[2] = L"DODPreferredPresentMoveRegeionsOverride";
          LODWORD(v89[4]) = 67108868;
          v89[5] = v37;
          LODWORD(v89[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v89, 0LL, 0LL);
          v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 64) + 40LL) + 28LL) >= 0x3007u )
            DpiSetSchedulerCallbackState(v38, 3);
        }
        if ( *((_QWORD *)this + 48) )
        {
          for ( i = 0;
                i < *((_DWORD *)this + 20);
                *(_QWORD *)(2904 * v40 + *(_QWORD *)(*((_QWORD *)this + 48) + 8LL) + 376) = *(_QWORD *)(3968 * v40 + *((_QWORD *)this + 14) + 936) )
          {
            v40 = i++;
          }
        }
        v41 = *((_QWORD *)this + 2);
        v43 = __OFSUB__(*(_DWORD *)(v41 + 2328), 8704);
        v42 = *(_DWORD *)(v41 + 2328) - 8704 < 0;
        v44 = *(_QWORD *)(v41 + 216);
        v45 = v42 ^ v43;
        LODWORD(EventHandle) = v45;
        if ( (int)DpiReadPnpRegistryValue(v44, L"NeedToSuspendVidSchBeforeSetGammaRamp", &EventHandle, 4LL) >= 0 )
        {
          v49 = (unsigned int)EventHandle;
          if ( (_DWORD)EventHandle != v45 )
          {
            v81 = WdLogNewEntry5_WdWarning(v47, v46, v48);
            *(_QWORD *)(v81 + 24) = v49;
            *(_QWORD *)(v81 + 32) = *((_QWORD *)this + 2);
            WdLogEvent5_WdWarning(v81);
          }
        }
        else
        {
          LODWORD(v49) = v45;
        }
        v50 = *((_QWORD *)this + 2);
        v30 = (_DWORD)v49 == 0;
        v51 = *((unsigned __int8 *)this + 250);
        *((_BYTE *)this + 251) = !v30;
        v52 = DXGGLOBAL::GetGlobal(v47, v46);
        if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                    (struct DXGGLOBAL *)((char *)v52 + 1272),
                    (const struct _LUID *)(v50 + 316),
                    v51) < 0 )
        {
          v82 = WdLogNewEntry5_WdAssertion(v54, v53);
          *(_QWORD *)(v82 + 24) = 4847LL;
          WdLogEvent5_WdAssertion(v82);
        }
        if ( (int)v25 >= 0 )
        {
          EventHandle = 0LL;
          v55 = IoCreateNotificationEvent(0LL, &EventHandle);
          *((_QWORD *)this + 70) = v55;
          if ( v55 )
          {
            KeClearEvent(v55);
            ObfReferenceObject(*((PVOID *)this + 70));
            ZwClose(EventHandle);
          }
          else
          {
            v83 = WdLogNewEntry5_WdLowResource(v57, v56, v58, v59);
            *(_QWORD *)(v83 + 24) = 4858LL;
            WdLogEvent5_WdLowResource(v83);
            LODWORD(v25) = -1073741801;
          }
        }
        return (unsigned int)v25;
      }
LABEL_67:
      v72 = (_QWORD *)WdLogNewEntry5_WdError(v29, v23);
      v72[3] = *(int *)(*((_QWORD *)this + 2) + 320LL);
      v72[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 316LL);
      v72[5] = -1073741735LL;
      WdLogEvent5_WdError(v72);
      return 3221225561LL;
    }
    return (unsigned int)OutputDuplManager;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3968LL * v13), this, v13);
    if ( (int)result < 0 )
      return result;
    if ( ++v13 >= *((_DWORD *)this + 20) )
      goto LABEL_11;
  }
}

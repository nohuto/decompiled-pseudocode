/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3530
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C001342C (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0013CD4 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01BC39C (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C770C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8324 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C218C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r12
  __int64 v10; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGADAPTER *v17; // rdi
  __int64 v18; // rax
  struct _ERESOURCE *CurrentThread; // r14
  DXGADAPTER *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  int v27; // eax
  struct DXGPROCESS *Current; // rax
  int v29; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // rbx
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // rbx
  _BYTE v36[8]; // [rsp+60h] [rbp-69h] BYREF
  DXGADAPTER *v37; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v38; // [rsp+70h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-51h] BYREF
  char v40; // [rsp+A8h] [rbp-21h]
  __int128 v41; // [rsp+B0h] [rbp-19h] BYREF

  v41 = 0LL;
  v9 = 0;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !SessionDataForSpecifiedSession
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10),
        (SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                          (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                          CurrentProcessSessionId)) == 0LL) )
  {
    WdLogSingleEntry1(1LL, 2614LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 2614LL, 0LL, 0LL, 0LL, 0LL);
  }
  v40 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2331]);
  v13 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, v13) )
      {
        v24 = *((_QWORD *)this + 16);
        v25 = 4000LL * (unsigned int)v13;
        if ( *(_QWORD *)(v25 + v24 + 728) )
        {
          v26 = *(_DWORD *)(v25 + v24 + 736) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent(v24, v14, v15, v16);
          v26 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 304LL))(0LL) == 0;
        }
        *((_BYTE *)&v41 + v13) = v26;
        if ( v26 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v13, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, v13) )
          {
            v9 = 1;
            v29 = DmmEnablePathsFromVidPnSource(a2, v13, 1u, a3, a6);
            if ( v29 < 0 )
            {
              v31 = v29;
              WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v13, v29);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to restore CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
                *((_QWORD *)this + 2),
                v13,
                v31,
                0LL,
                0LL);
LABEL_40:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_25;
            }
            Global = DXGGLOBAL_GetGlobal();
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *((_DWORD *)this + 24) );
    if ( !v9 )
      goto LABEL_24;
    v17 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v18 = *((_QWORD *)a2 + 2);
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v37 = v17;
    v20 = *(DXGADAPTER **)(v18 + 16);
    v38 = v20;
    if ( v17 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v37, CurrentThread);
    if ( v20 && v17 != v20 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v38, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 184LL))(
            *((_QWORD *)this + 2),
            &v41,
            *((unsigned int *)this + 24),
            a5) )
      WdLogSingleEntry4(4LL, a2, (unsigned __int8)v41, BYTE1(v41), *((unsigned int *)this + 24));
    v21 = *((_DWORD *)this + 24);
    v22 = 0LL;
    if ( v21 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)&v41 + v22) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v22, 1u) )
          {
            v27 = DmmDisablePathsFromVidPnSource(a2, v22);
            if ( v27 < 0 )
              break;
          }
        }
        v21 = *((_DWORD *)this + 24);
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= v21 )
          goto LABEL_18;
      }
      v32 = v27;
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v22, v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to disable CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
        *((_QWORD *)this + 2),
        v22,
        v32,
        0LL,
        0LL);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v36);
      goto LABEL_40;
    }
LABEL_18:
    if ( v40 )
    {
      KeUnstackDetachProcess(&ApcState);
      v21 = *((_DWORD *)this + 24);
      v40 = 0;
    }
    v23 = 0LL;
    if ( v21 )
    {
      do
      {
        if ( *((_BYTE *)&v41 + v23) )
        {
          v33 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, v23);
          if ( v33 < 0 )
          {
            v34 = v33;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), (unsigned int)v23, v33);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in restoring copy protection on adapter 0x%I64x VidPnSourceId 0x%I64x %08I64x (Status = 0x%I64x)",
              *((_QWORD *)this + 2),
              (unsigned int)v23,
              v34,
              0LL,
              0LL);
          }
        }
        v23 = (unsigned int)(v23 + 1);
      }
      while ( (unsigned int)v23 < *((_DWORD *)this + 24) );
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v36);
  }
LABEL_24:
  *a4 = v9;
LABEL_25:
  if ( v40 )
    KeUnstackDetachProcess(&ApcState);
}

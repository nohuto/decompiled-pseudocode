/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014820C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01072F0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F778 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0253630 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A37C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000CEDC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C000CF18 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C000CF9C (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CFF0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E0B98 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C013EC78 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C0147464 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0148430 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014AF68 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02134E8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rdi
  __int64 v15; // rdx
  DXGADAPTER *v16; // rsi
  __int64 v17; // rax
  struct _ERESOURCE *CurrentThread; // r14
  DXGADAPTER *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  bool v27; // zf
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  struct DXGPROCESS *Current; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r14
  _QWORD *v52; // rax
  _BYTE v54[8]; // [rsp+40h] [rbp-69h] BYREF
  DXGADAPTER *v55; // [rsp+48h] [rbp-61h]
  DXGADAPTER *v56; // [rsp+50h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-51h] BYREF
  char v58; // [rsp+88h] [rbp-21h]
  __int128 v59; // [rsp+90h] [rbp-19h] BYREF

  v59 = 0LL;
  v9 = 0;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                     CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v32 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v32 + 24) = 2572LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v58 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2329]);
  v14 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, (unsigned int)v14) )
      {
        v25 = *((_QWORD *)this + 14);
        v26 = 3968LL * (unsigned int)v14;
        if ( *(_QWORD *)(v26 + v25 + 688) )
        {
          v27 = *(_DWORD *)(v26 + v25 + 696) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent(v25, v15);
          v27 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 304LL))(0LL) == 0;
        }
        *((_BYTE *)&v59 + v14) = v27;
        if ( v27 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v14, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, (unsigned int)v14) )
          {
            v9 = 1;
            v34 = DmmEnablePathsFromVidPnSource(a2, v14, 1u, a3, a6);
            v37 = v34;
            if ( v34 < 0 )
            {
              v41 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
              v41[3] = *((_QWORD *)this + 2);
              v41[4] = (unsigned int)v14;
              v41[5] = v37;
              WdLogEvent5_WdError(v41);
LABEL_43:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_26;
            }
            Global = DXGGLOBAL::GetGlobal(v36, v35);
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v39, v40);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_25;
    v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v17 = *((_QWORD *)a2 + 2);
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v55 = v16;
    v19 = *(DXGADAPTER **)(v17 + 16);
    v56 = v19;
    if ( v16 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v55, CurrentThread);
    if ( v19 && v16 != v19 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v56, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 184LL))(
            *((_QWORD *)this + 2),
            &v59,
            *((unsigned int *)this + 20),
            a5) )
    {
      v42 = WdLogNewEntry5_WdEvent(v21, v20);
      v43 = 0LL;
      v44 = v42;
      *(_QWORD *)(v42 + 24) = a2;
      v45 = (_QWORD *)(v42 + 32);
      do
      {
        v46 = *((unsigned __int8 *)&v59 + v43++);
        *v45++ = v46;
      }
      while ( v43 < 2 );
      *(_QWORD *)(v44 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v44);
    }
    v22 = *((_DWORD *)this + 20);
    v23 = 0LL;
    if ( v22 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)&v59 + v23) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v23, 1u) )
          {
            v28 = DmmDisablePathsFromVidPnSource(a2, v23);
            v31 = v28;
            if ( v28 < 0 )
              break;
          }
        }
        v22 = *((_DWORD *)this + 20);
        v23 = (unsigned int)(v23 + 1);
        if ( (unsigned int)v23 >= v22 )
          goto LABEL_19;
      }
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v47[3] = *((_QWORD *)this + 2);
      v47[4] = (unsigned int)v23;
      v47[5] = v31;
      WdLogEvent5_WdError(v47);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v54);
      goto LABEL_43;
    }
LABEL_19:
    if ( v58 )
    {
      KeUnstackDetachProcess(&ApcState);
      v22 = *((_DWORD *)this + 20);
      v58 = 0;
    }
    v24 = 0LL;
    if ( v22 )
    {
      do
      {
        if ( *((_BYTE *)&v59 + v24) )
        {
          v48 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, v24);
          v51 = v48;
          if ( v48 < 0 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
            v52[3] = *((_QWORD *)this + 2);
            v52[4] = (unsigned int)v24;
            v52[5] = v51;
            WdLogEvent5_WdError(v52);
          }
        }
        v24 = (unsigned int)(v24 + 1);
      }
      while ( (unsigned int)v24 < *((_DWORD *)this + 20) );
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v54);
  }
LABEL_25:
  *a4 = v9;
LABEL_26:
  if ( v58 )
    KeUnstackDetachProcess(&ApcState);
}

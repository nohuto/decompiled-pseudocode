/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0250310
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00DB418 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0155968 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000843C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00084F4 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0011A10 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0011CC8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0041750 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C012F300 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C012F3AC (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0130398 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0130968 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0130D00 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133440 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0160950 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v7; // r15
  __int64 v8; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  char v29; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // rax
  struct DXGDEVICE *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DXGDEVICE *v41; // rbx
  __int64 v42; // rax
  ADAPTER_DISPLAY *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  char v52; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v53; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v54[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v55; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v56[16]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v57[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v58[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v59[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v60[88]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v61[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v62[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v63[88]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v64[432]; // [rsp+1B0h] [rbp+B0h] BYREF

  v3 = *((_QWORD *)a1 + 231);
  v53 = 0;
  v54[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 2525LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v10) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 2531LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v16 + 24) = 2533LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2672) + 16LL)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v19 + 24) = 2534LL;
    WdLogEvent5_WdAssertion(v19);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v64,
    *(struct ADAPTER_DISPLAY **)(v3 + 2672),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v56, *(struct DXGFASTMUTEX *const *)(*((_QWORD *)a1 + 5) + 336LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v64, v20);
  v52 = 0;
  v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v52, 1);
  v24 = v21;
  if ( v21 >= 0 )
  {
    v55 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 316),
                                             &v55,
                                             0LL,
                                             0LL,
                                             0);
    v34 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v35 = WdLogNewEntry5_WdEvent(v32, v31);
      *(_QWORD *)(v35 + 24) = v34;
      WdLogEvent5_WdEvent(v35);
    }
    v36 = v55;
    if ( v55 )
    {
      v37 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v55 + 2) != v37 )
        v36 = 0LL;
      v55 = v36;
      if ( v36 )
      {
        if ( *((_QWORD *)v36 + 2) != v37 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v32, v31);
          *(_QWORD *)(v38 + 24) = 2602LL;
          WdLogEvent5_WdAssertion(v38);
        }
        *((_BYTE *)v36 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, (__int64)a1, 1, v33, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v58);
    v41 = v55;
    if ( *(_DWORD *)(v3 + 200) != 1 )
      goto LABEL_26;
    v43 = *(ADAPTER_DISPLAY **)(v3 + 2672);
    if ( !v43 )
    {
      v44 = WdLogNewEntry5_WdAssertion(0LL, v39);
      *(_QWORD *)(v44 + 24) = 2638LL;
      WdLogEvent5_WdAssertion(v44);
      v43 = *(ADAPTER_DISPLAY **)(v3 + 2672);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v43, a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2672), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v64, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2672), a1);
      v7 = 1;
      if ( v41 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v3 + 2672),
          v41,
          (struct COREDEVICEACCESS *)v58,
          &v53,
          v54,
          a2);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v64, v53);
    }
    else
    {
LABEL_26:
      v42 = WdLogNewEntry5_WdEvent(v40, v39);
      *(_QWORD *)(v42 + 24) = a1;
      *(_QWORD *)(v42 + 32) = v3;
      WdLogEvent5_WdEvent(v42);
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2672), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2672), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2672), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v58);
    if ( v41 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56, v45);
      *((_BYTE *)v41 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    }
    v29 = v52;
    if ( v52 )
    {
      v29 = 0;
      DxgkReleaseSessionModeChangeLock(v46, v45);
    }
    if ( v53 )
    {
      if ( v54[0] )
      {
        v48 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        if ( v48 )
          (*(void (**)(void))(v48 + 192))();
      }
    }
    if ( v7 )
    {
      v57[0] = 1LL;
      v57[1] = 0LL;
      if ( (int)DxgkStatusChangeNotify((int *)v57, v45, v47) < 0 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v50, v49);
        *(_QWORD *)(v51 + 24) = 2718LL;
        WdLogEvent5_WdAssertion(v51);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v60);
    COREACCESS::~COREACCESS((COREACCESS *)v59);
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdError(v25);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)a1, 1, v28, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v61);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2672), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2672), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2672), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v63);
      COREACCESS::~COREACCESS((COREACCESS *)v62);
    }
    v29 = v52;
  }
  if ( v29 )
    DxgkReleaseSessionModeChangeLock(v27, v26);
  if ( v56[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56, v26);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v64, v26);
}

/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0253630
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DFB30 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00E2C5C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0001DE0 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000200C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00020C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000BA0C (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0042670 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C013F06C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C014004C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01400EC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0140198 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01402F0 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0140680 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014820C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C016F1F0 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  char v30; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  struct DXGDEVICE *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGDEVICE *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  ADAPTER_DISPLAY *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  char v54; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v55; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v56[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v57; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v58[16]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v59[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v60[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v61[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v62[88]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v63[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v64[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v65[88]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v66[432]; // [rsp+1B0h] [rbp+B0h] BYREF

  v3 = *((_QWORD *)a1 + 231);
  v55 = 0;
  v56[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 2525LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v11, v10) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 2531LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 2533LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2696) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 2534LL;
    WdLogEvent5_WdAssertion(v20);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v66,
    *(struct ADAPTER_DISPLAY **)(v3 + 2696),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v58, *(struct DXGFASTMUTEX *const *)(*((_QWORD *)a1 + 5) + 336LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v66, v21);
  v54 = 0;
  v22 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v54, 1);
  v25 = v22;
  if ( v22 >= 0 )
  {
    v57 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 316),
                                             &v57,
                                             0LL,
                                             0LL,
                                             0);
    v35 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v36 = WdLogNewEntry5_WdEvent(v33, v32);
      *(_QWORD *)(v36 + 24) = v35;
      WdLogEvent5_WdEvent(v36);
    }
    v37 = v57;
    if ( v57 )
    {
      v38 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v57 + 2) != v38 )
        v37 = 0LL;
      v57 = v37;
      if ( v37 )
      {
        if ( *((_QWORD *)v37 + 2) != v38 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v33, v32);
          *(_QWORD *)(v39 + 24) = 2602LL;
          WdLogEvent5_WdAssertion(v39);
        }
        *((_BYTE *)v37 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v58);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, (__int64)a1, 1, v34, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v60);
    v42 = v57;
    if ( *(_DWORD *)(v3 + 200) != 1 )
      goto LABEL_26;
    v45 = *(ADAPTER_DISPLAY **)(v3 + 2696);
    if ( !v45 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, v40);
      *(_QWORD *)(v46 + 24) = 2638LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = *(ADAPTER_DISPLAY **)(v3 + 2696);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v45, a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2696), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v66, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2696), a1);
      v7 = 1;
      if ( v42 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v3 + 2696),
          v42,
          (struct COREDEVICEACCESS *)v60,
          &v55,
          v56,
          a2);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v66, v55);
    }
    else
    {
LABEL_26:
      v43 = WdLogNewEntry5_WdEvent(v41, v40);
      *(_QWORD *)(v43 + 24) = a1;
      *(_QWORD *)(v43 + 32) = v3;
      WdLogEvent5_WdEvent(v43);
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2696), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2696), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2696), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v60, v44);
    if ( v42 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v58, v47);
      *((_BYTE *)v42 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
    }
    v30 = v54;
    if ( v54 )
    {
      v30 = 0;
      DxgkReleaseSessionModeChangeLock(v48, v47);
    }
    if ( v55 )
    {
      if ( v56[0] )
      {
        v50 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        if ( v50 )
          (*(void (**)(void))(v50 + 192))();
      }
    }
    if ( v7 )
    {
      v59[0] = 1LL;
      v59[1] = 0LL;
      if ( (int)DxgkStatusChangeNotify((int *)v59, v47, v49) < 0 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v52, v51);
        *(_QWORD *)(v53 + 24) = 2718LL;
        WdLogEvent5_WdAssertion(v53);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v62);
    COREACCESS::~COREACCESS((COREACCESS *)v61);
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v26 + 24) = v25;
    WdLogEvent5_WdError(v26);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)a1, 1, v29, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v63);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2696), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2696), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2696), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v65);
      COREACCESS::~COREACCESS((COREACCESS *)v64);
    }
    v30 = v54;
  }
  if ( v30 )
    DxgkReleaseSessionModeChangeLock(v28, v27);
  if ( v58[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v58, v27);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v66, v27);
}

/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01635A0 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C0166120 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00093C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0009488 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013AD8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0013B0C (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C004C398 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01BB228 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C01BB50C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C01C1F0C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01C21D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3530 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C01EE334 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v7; // r15
  int ProcessSessionId; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r9
  char v13; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v15; // r9
  struct DXGDEVICE *v16; // rbx
  __int64 v17; // rax
  struct DXGDEVICE *v18; // rbx
  ADAPTER_DISPLAY *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  char v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v24; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v25[6]; // [rsp+52h] [rbp-AEh] BYREF
  struct DXGDEVICE *v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v30[88]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v31[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v32[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v33[88]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v34[432]; // [rsp+1C0h] [rbp+C0h] BYREF

  v3 = *((_QWORD *)a1 + 231);
  v24 = 0;
  v25[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    WdLogSingleEntry1(1LL, 2577LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2577LL, 0LL, 0LL, 0LL, 0LL);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v9) )
  {
    WdLogSingleEntry1(1LL, 2583LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetProcessSessionId(pDevice->GetProcess()->GetEProcess()) == PsGetCurrentProcessSessionId()",
      2583LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2585LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2585LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2792) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2586LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
      2586LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v34,
    *(struct ADAPTER_DISPLAY **)(v3 + 2792),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 5) + 376LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v34);
  v23 = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v23, 1);
  if ( v10 >= 0 )
  {
    v26[0] = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 404),
                                             v26,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    v16 = v26[0];
    if ( v26[0] )
    {
      v17 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v26[0] + 2) != v17 )
        v16 = 0LL;
      v26[0] = v16;
      if ( v16 )
      {
        if ( *((_QWORD *)v16 + 2) != v17 )
        {
          WdLogSingleEntry1(1LL, 2654LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || (pCddDevice->GetRenderCore() == pDevice->GetRenderCore())",
            2654LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v16 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)a1, 1, v15, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v28);
    v18 = v26[0];
    if ( *(_DWORD *)(v3 + 200) != 1 )
      goto LABEL_26;
    v19 = *(ADAPTER_DISPLAY **)(v3 + 2792);
    if ( !v19 )
    {
      WdLogSingleEntry1(1LL, 2690LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2690LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v19 = *(ADAPTER_DISPLAY **)(v3 + 2792);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v19, a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2792), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v34, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2792), a1);
      v7 = 1;
      if ( v18 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v3 + 2792),
          v18,
          (struct COREDEVICEACCESS *)v28,
          &v24,
          v25,
          a2);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v34, v24);
    }
    else
    {
LABEL_26:
      WdLogSingleEntry2(4LL, a1, v3);
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2792), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2792), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2792), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v28);
    if ( v18 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
      *((_BYTE *)v18 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26[0] + 2), v26[0]);
    }
    v13 = v23;
    if ( v23 )
    {
      v13 = 0;
      DxgkReleaseSessionModeChangeLock();
    }
    if ( v24 )
    {
      if ( v25[0] )
      {
        v22 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        if ( v22 )
          (*(void (**)(void))(v22 + 192))();
      }
    }
    if ( v7 )
    {
      v26[1] = 0LL;
      v26[0] = (struct DXGDEVICE *)1;
      if ( (int)DxgkStatusChangeNotify((int *)v26, v20, v21) < 0 )
      {
        WdLogSingleEntry1(1LL, 2770LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2770LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
  }
  else
  {
    v11 = v10;
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)a1, 1, v12, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v31);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2792), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2792), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2792), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
    }
    v13 = v23;
  }
  if ( v13 )
    DxgkReleaseSessionModeChangeLock();
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v34);
}

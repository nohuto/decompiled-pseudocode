/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C01C1FB0 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00093C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0009488 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00094DC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0013B0C (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001D198 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B608 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C002B630 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C002B714 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C0162D68 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01BB228 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C01BB50C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C01C1F0C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01C21D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C01C2340 (DxgkShutdownBootGraphics.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3530 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01C3D18 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C01C414C (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01C43A4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C01EE334 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C01EEA54 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C1AEC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        __int64 a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v5; // ebx
  const struct _D3DKMT_SETVIDPNSOURCEOWNER *v6; // rdi
  struct DXGPROCESS *Current; // r14
  unsigned int v8; // r12d
  const void *v9; // r12
  char *v10; // r15
  __int64 v11; // r14
  size_t v12; // rdi
  __int64 v13; // rbx
  void *const *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rdi
  unsigned int i; // r14d
  __int64 v23; // rax
  __int64 v24; // rdx
  DISPLAY_SOURCE *v25; // rcx
  int v26; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v28; // r9
  struct DXGDEVICE *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  ADAPTER_DISPLAY *v32; // r13
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // edx
  int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // esi
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v39; // eax
  char v40; // [rsp+50h] [rbp-438h] BYREF
  unsigned __int8 v41; // [rsp+51h] [rbp-437h] BYREF
  unsigned __int8 v42[6]; // [rsp+52h] [rbp-436h] BYREF
  struct DXGDEVICE *v43; // [rsp+58h] [rbp-430h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v44; // [rsp+60h] [rbp-428h]
  _QWORD v45[2]; // [rsp+68h] [rbp-420h] BYREF
  struct DXGDEVICE *v46; // [rsp+78h] [rbp-410h] BYREF
  _QWORD v47[2]; // [rsp+80h] [rbp-408h] BYREF
  struct DXGDEVICE *v48; // [rsp+90h] [rbp-3F8h] BYREF
  _BYTE v49[16]; // [rsp+98h] [rbp-3F0h] BYREF
  _BYTE v50[24]; // [rsp+A8h] [rbp-3E0h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-3C8h]
  void *Src[2]; // [rsp+C8h] [rbp-3C0h]
  void *v53[2]; // [rsp+D8h] [rbp-3B0h]
  _BYTE v54[160]; // [rsp+F0h] [rbp-398h] BYREF
  _BYTE v55[432]; // [rsp+190h] [rbp-2F8h] BYREF
  unsigned int v56[16]; // [rsp+340h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v57[16]; // [rsp+380h] [rbp-108h] BYREF
  void *v58[16]; // [rsp+3C0h] [rbp-C8h] BYREF

  v44 = a4;
  v5.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, (__int64)a3, (__int64)a4);
  v47[0] = Current;
  if ( !Current )
  {
    v38 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v38;
  }
  memset(v58, 0, sizeof(v58));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49, Current);
  v56[0] = 0;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v6->hDevice;
  *(_OWORD *)v53 = *(_OWORD *)&v6->pVidPnSourceId;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v53, 8));
  LODWORD(v43) = v8;
  if ( v8 )
  {
    if ( v8 > 0x10 )
    {
      v13 = LODWORD(Src[0]);
      WdLogSingleEntry3(2LL, LODWORD(Src[0]), v8, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: VidPnSourceCount (0x%I64x) is too large, returning 0x%I64x",
        v13,
        v8,
        -1073741811LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
      return 3221225485LL;
    }
    v9 = Src[1];
    v10 = (char *)v53[0];
    if ( !Src[1] || !v53[0] )
    {
      v16 = LODWORD(Src[0]);
      WdLogSingleEntry5(2LL, LODWORD(Src[0]), (unsigned int)v43, Src[1], v53[0], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: (0x%I64x) must have both Type (0x%I64x) and VidPnSourceId (0x%I64x) array, returning 0x%I64x",
        v16,
        (unsigned int)v43,
        (__int64)v9,
        (__int64)v10,
        -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
      return 3221225485LL;
    }
    v11 = (unsigned int)v43;
    v12 = 4LL * (unsigned int)v43;
    if ( (char *)Src[1] + v12 < Src[1] || (char *)Src[1] + v12 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v57, v9, v12);
    if ( &v10[v12] < v10 || (unsigned __int64)&v10[v12] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v56, v10, v12);
    if ( (*(_BYTE *)&v5.0 & 4) != 0 )
    {
      v15 = &a3[v11];
      if ( v15 < a3 || (unsigned __int64)v15 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v58, a3, 8 * v11);
    }
    Current = (struct DXGPROCESS *)v47[0];
    v8 = (unsigned int)v43;
  }
  v48 = 0LL;
  v17 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v43,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v48);
  v18 = v48;
  if ( !v48 )
  {
    v38 = -1073741811;
    WdLogSingleEntry2(2LL, v17, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_124:
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
LABEL_104:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
    return v38;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v48);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v50, (struct _KTHREAD **)v18 + 18);
  v19 = *((_QWORD *)v18 + 231);
  v51 = v19;
  if ( !v19 )
  {
    v38 = -1073741637;
    WdLogSingleEntry2(2LL, v17, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkSetVidPnSourceOwner function is called on a render only device (0x%I64x), returning 0x%I64x.",
      v17,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
LABEL_122:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
    if ( v45[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    goto LABEL_124;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v55,
    *(struct ADAPTER_DISPLAY **)(v19 + 2792),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v55);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
  v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40, 1);
  v21 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry1(2LL, v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v21,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v55);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
    if ( v45[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    v38 = v21;
    goto LABEL_104;
  }
  for ( i = 0; i < v8; ++i )
  {
    v23 = *(_QWORD *)(v19 + 2792);
    v24 = v56[i];
    if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 96) )
    {
      v38 = -1073741811;
      WdLogSingleEntry3(2LL, v24, i, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x at index 0x%I64x) is specified, returning 0x%I64x",
        v56[i],
        i,
        -1073741811LL,
        0LL,
        0LL);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v55);
      goto LABEL_122;
    }
    v25 = (DISPLAY_SOURCE *)(*(_QWORD *)(v23 + 128) + 4000 * v24);
    if ( v57[i] )
    {
      if ( !v25 || !DISPLAY_SOURCE::CheckSessionOwnership(v25) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v55);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
        if ( v45[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
        if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
        v38 = -1071774910;
        goto LABEL_104;
      }
      v26 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v19 + 404), v56[i], v58[i]);
      if ( v26 < 0 )
      {
        WdLogSingleEntry1(2LL, v56[i]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DispMgr ownership check on VidPn source 0x%I64x",
          v56[i],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_132;
      }
    }
  }
  v46 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v19 + 404),
                                           &v46,
                                           0LL,
                                           0LL,
                                           0);
  if ( CddDeviceAndContextForCurrentSession < 0 )
    WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
  v29 = v46;
  if ( v46 )
  {
    DxgkShutdownBootGraphics(v46, 0LL);
    if ( *((_BYTE *)v29 + 1904) )
    {
      WdLogSingleEntry1(1LL, 3087LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCddDevice->IsVsyncForced() == FALSE",
        3087LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v29 )
    {
      v30 = *((_QWORD *)v18 + 2);
      if ( *((_QWORD *)v29 + 2) != v30 )
        v29 = 0LL;
      v46 = v29;
      if ( v29 )
      {
        if ( *((_QWORD *)v29 + 2) != v30 || *((_QWORD *)v29 + 231) != *((_QWORD *)v18 + 231) )
        {
          WdLogSingleEntry1(1LL, 3102LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || ((pCddDevice->GetRenderCore() == pDevice->GetRenderCore()) && (pCddDevice->"
                      "GetDisplayAdapter(VidPnSourceId[0]) == pDevice->GetDisplayAdapter(VidPnSourceId[0])))",
            3102LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v29 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v18, 1, v28, 0);
  v26 = COREDEVICEACCESS::AcquireExclusive((__int64)v54, 2u);
  if ( v26 < 0 )
  {
    if ( v29 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v49);
      *((_BYTE *)v29 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
LABEL_132:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v55);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
    if ( v45[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    v38 = v26;
    goto LABEL_104;
  }
  v32 = *(ADAPTER_DISPLAY **)(v19 + 2792);
  if ( !v32 )
  {
    WdLogSingleEntry1(1LL, 3138LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      3138LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v32 = *(ADAPTER_DISPLAY **)(v51 + 2792);
  }
  LOBYTE(v31) = 0;
  if ( !v8 || v57[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v8 == 1 && v56[0] < *((_DWORD *)v32 + 24) )
    LOBYTE(v31) = 1;
  if ( (_BYTE)v31 )
  {
    if ( !v8 && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v32, v18) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v32, v18))
      || v8 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v32, v18, v56[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v32, v18, v56[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v55, v18, 0xFFFFFFFF);
      if ( v8 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v32, v18, v56[0]);
        v37 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v32, v18);
        v37 = *((_DWORD *)v18 + 465);
      }
      DXGDEVICE::RemoveVidPnOwnership(v18, v37);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, 0);
    }
    v34 = v47[0];
    goto LABEL_59;
  }
  if ( g_OSTestSigningEnabled )
  {
    v33 = *((_QWORD *)v18 + 5);
    v31 = *(_DWORD *)(v33 + 424) >> 13;
    if ( (*(_DWORD *)(v33 + 424) & 0x2000) != 0 )
    {
      v39 = v57[0];
      if ( v57[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v39 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
      v57[0] = v39;
    }
  }
  v34 = v47[0];
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v47[0] + 88LL) + 208LL))(v31, 0LL)
    && (v57[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v57[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v34 + 88) + 304LL))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v55, 0LL, 0xFFFFFFFF);
    v26 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v32, v18, v57, v56, v8, v5);
    if ( v26 < 0 )
      goto LABEL_59;
    if ( v57[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      v35 = 3;
    }
    else
    {
      if ( v57[0] <= D3DKMT_VIDPNSOURCEOWNER_SHARED )
        goto LABEL_141;
      v35 = 3;
      if ( v57[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        v35 = 7;
        goto LABEL_58;
      }
      if ( v57[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
LABEL_141:
        WdLogSingleEntry1(1LL, 3222LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid VidPn source ownership!",
          3222LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v35 = 0;
      }
    }
LABEL_58:
    DXGDEVICE::SetSchedulingPriorityAdjustment(v18, v35);
    *((_DWORD *)v18 + 465) += v8;
    goto LABEL_59;
  }
  v26 = -1073741790;
  WdLogSingleEntry1(4LL, -1073741790LL);
LABEL_59:
  v41 = 0;
  v42[0] = 0;
  if ( v26 < 0 )
    goto LABEL_95;
  if ( v29 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v32, v29, (struct COREDEVICEACCESS *)v54, &v41, v42, v44);
  v36 = 1;
  if ( !v41 )
LABEL_95:
    v36 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v55, v36);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v54);
  if ( v29 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v49);
    *((_BYTE *)v29 + 1905) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    v18 = v48;
  }
  if ( v40 )
  {
    v40 = 0;
    DxgkReleaseSessionModeChangeLock();
  }
  if ( v26 >= 0 )
  {
    if ( v42[0] && v41 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v18 + 5) + 88LL) + 192LL))();
    (*(void (**)(void))(*(_QWORD *)(v34 + 88) + 344LL))();
    v47[0] = 1LL;
    v47[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify(v47) < 0 )
    {
      WdLogSingleEntry1(1LL, 3336LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 3336LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v55);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
  if ( v45[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
  return (unsigned int)v26;
}

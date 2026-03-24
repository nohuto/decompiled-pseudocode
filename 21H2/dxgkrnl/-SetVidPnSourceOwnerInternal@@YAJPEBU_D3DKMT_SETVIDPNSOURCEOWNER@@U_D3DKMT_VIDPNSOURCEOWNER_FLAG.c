/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144068
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0143E30 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00020B0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002104 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0002204 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002258 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002AC0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A05C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000BA88 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000BB48 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AC4 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0025AEC (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00E12D0 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0122794 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0143960 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C014493C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01449DC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0144A88 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0144D08 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C0144E70 (DxgkShutdownBootGraphics.c)
 *     DxgkStatusChangeNotify @ 0x1C01450A0 (DxgkStatusChangeNotify.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C014C120 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CC2C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C014D364 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0165ED0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0174C74 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C0175C7C (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0213E14 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        __int64 a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v5; // ebx
  const struct _D3DKMT_SETVIDPNSOURCEOWNER *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v10; // rdx
  unsigned int v11; // r12d
  const void *v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  void *const *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGDEVICE *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rdx
  DISPLAY_SOURCE *v27; // rcx
  __int64 v28; // rdi
  unsigned int i; // r14d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rdi
  struct DXGDEVICE *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r14d
  ADAPTER_DISPLAY *v46; // r15
  __int64 v47; // rdx
  struct DXGPROCESS *v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // edx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // rax
  unsigned int v61; // ebx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  char v75; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int8 v76; // [rsp+31h] [rbp-437h] BYREF
  unsigned __int8 v77[6]; // [rsp+32h] [rbp-436h] BYREF
  struct DXGDEVICE *v78; // [rsp+38h] [rbp-430h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v79; // [rsp+40h] [rbp-428h]
  _QWORD v80[2]; // [rsp+48h] [rbp-420h] BYREF
  struct DXGPROCESS *v81; // [rsp+58h] [rbp-410h]
  struct DXGDEVICE *v82; // [rsp+60h] [rbp-408h] BYREF
  DXGDEVICE *v83; // [rsp+68h] [rbp-400h] BYREF
  _BYTE v84[16]; // [rsp+70h] [rbp-3F8h] BYREF
  _BYTE v85[24]; // [rsp+80h] [rbp-3E8h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-3D0h]
  void *v87[2]; // [rsp+A8h] [rbp-3C0h]
  _QWORD v88[3]; // [rsp+B8h] [rbp-3B0h] BYREF
  _BYTE v89[160]; // [rsp+D0h] [rbp-398h] BYREF
  _BYTE v90[432]; // [rsp+170h] [rbp-2F8h] BYREF
  unsigned int v91[16]; // [rsp+320h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v92[16]; // [rsp+360h] [rbp-108h] BYREF
  void *v93[16]; // [rsp+3A0h] [rbp-C8h] BYREF

  v79 = a4;
  v5.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v81 = Current;
  if ( !Current )
  {
    v62 = WdLogNewEntry5_WdError(v8, v7);
    v61 = -1073741811;
    *(_QWORD *)(v62 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    return v61;
  }
  memset(v93, 0, sizeof(v93));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v84,
    (struct DXGFASTMUTEX *const *)Current);
  v91[0] = 0;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v6->hDevice;
  *(_OWORD *)v87 = *(_OWORD *)&v6->pVidPnSourceId;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v87, 8));
  if ( v11 )
  {
    if ( v11 > 0x10 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v10);
      v14[3] = LODWORD(Src[0]);
      v14[4] = v11;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v84);
      return 3221225485LL;
    }
    v12 = Src[1];
    if ( !Src[1] || !v87[0] )
    {
      v17 = WdLogNewEntry5_WdError(MmUserProbeAddress, v10);
      *(_QWORD *)(v17 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v17 + 32) = v11;
      *(_QWORD *)(v17 + 40) = v12;
      *(void **)(v17 + 48) = v87[0];
      *(_QWORD *)(v17 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v17);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v84);
      return 3221225485LL;
    }
    v13 = 4LL * v11;
    if ( (char *)Src[1] + v13 < Src[1] || (char *)Src[1] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v92, v12, 4LL * v11);
    if ( (char *)v87[0] + v13 < v87[0] || (char *)v87[0] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v91, v87[0], 4LL * v11);
    if ( (*(_BYTE *)&v5.0 & 4) != 0 )
    {
      v16 = &a3[v11];
      if ( v16 < a3 || (unsigned __int64)v16 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v93, a3, 8LL * v11);
    }
    Current = v81;
  }
  v83 = 0LL;
  v18 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v78, LODWORD(Src[0]), (struct _KTHREAD **)Current, &v83);
  v21 = v83;
  if ( !v83 )
  {
    v63 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v63 + 24) = v18;
    v61 = -1073741811;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v63);
LABEL_128:
    if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
LABEL_108:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v84);
    return v61;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80, v83);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v85, (DXGDEVICE *)((char *)v21 + 144));
  v24 = *((_QWORD *)v21 + 231);
  if ( !v24 )
  {
    v64 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v64 + 24) = v18;
    v61 = -1073741637;
    *(_QWORD *)(v64 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v64);
LABEL_126:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
    if ( v80[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
    goto LABEL_128;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v90,
    *(struct ADAPTER_DISPLAY **)(v24 + 2696),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v90);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v75);
  v25 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v75, 1);
  v28 = v25;
  if ( v25 < 0 )
  {
    v65 = WdLogNewEntry5_WdError(v27, v26);
    *(_QWORD *)(v65 + 24) = v28;
    WdLogEvent5_WdError(v65);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v75);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v90);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
    if ( v80[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
    if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
    v61 = v28;
    goto LABEL_108;
  }
  for ( i = 0; i < v11; ++i )
  {
    v30 = *(_QWORD *)(v24 + 2696);
    v31 = v91[i];
    if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 80) )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v27, v30);
      v67[3] = v91[i];
      v67[4] = i;
      v61 = -1073741811;
      v67[5] = -1073741811LL;
      WdLogEvent5_WdError(v67);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v75);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v90);
      goto LABEL_126;
    }
    v27 = (DISPLAY_SOURCE *)(*(_QWORD *)(v30 + 112) + 3968 * v31);
    if ( v92[i] )
    {
      if ( !v27 || !DISPLAY_SOURCE::CheckSessionOwnership(v27) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v75);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v90);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
        if ( v80[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
        if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
        v61 = -1071774910;
        goto LABEL_108;
      }
      v33 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v24 + 316), v91[i], v93[i]);
      if ( v33 < 0 )
      {
        v66 = WdLogNewEntry5_WdError(v27, v32);
        *(_QWORD *)(v66 + 24) = v91[i];
        WdLogEvent5_WdError(v66);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v75);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v90);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
        if ( v80[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
        if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
        v61 = v33;
        goto LABEL_108;
      }
    }
  }
  v82 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v24 + 316),
                                           &v82,
                                           0LL,
                                           0LL,
                                           0);
  v38 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v60 = WdLogNewEntry5_WdEvent(v36, v35);
    *(_QWORD *)(v60 + 24) = v38;
    WdLogEvent5_WdEvent(v60);
  }
  v39 = v82;
  if ( v82 )
  {
    DxgkShutdownBootGraphics(v82, 0LL);
    if ( *((_BYTE *)v39 + 1904) )
    {
      v68 = WdLogNewEntry5_WdAssertion(v41, v40);
      *(_QWORD *)(v68 + 24) = 3088LL;
      WdLogEvent5_WdAssertion(v68);
    }
    if ( v39 )
    {
      v42 = *((_QWORD *)v21 + 2);
      if ( *((_QWORD *)v39 + 2) != v42 )
        v39 = 0LL;
      v82 = v39;
      if ( v39 )
      {
        if ( *((_QWORD *)v39 + 2) != v42 || *((_QWORD *)v39 + 231) != *((_QWORD *)v21 + 231) )
        {
          v69 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v69 + 24) = 3103LL;
          WdLogEvent5_WdAssertion(v69);
        }
        *((_BYTE *)v39 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v84);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v89, (__int64)v21, 1, v37, 0);
  v45 = COREDEVICEACCESS::AcquireExclusive((__int64)v89, 2u);
  if ( v45 < 0 )
  {
    if ( v39 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v84, v43);
      *((_BYTE *)v39 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v75);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v90);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
    if ( v80[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
    if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
    v61 = v45;
    goto LABEL_108;
  }
  v46 = *(ADAPTER_DISPLAY **)(v24 + 2696);
  v47 = 0LL;
  if ( !v46 )
  {
    v70 = WdLogNewEntry5_WdAssertion(v44, 0LL);
    *(_QWORD *)(v70 + 24) = 3139LL;
    WdLogEvent5_WdAssertion(v70);
    v46 = *(ADAPTER_DISPLAY **)(v24 + 2696);
    v47 = 0LL;
  }
  LOBYTE(v44) = 0;
  if ( !v11 || v92[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v11 == 1 && v91[0] < *((_DWORD *)v46 + 20) )
    LOBYTE(v44) = 1;
  if ( (_BYTE)v44 )
  {
    if ( !v11
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v46, v21) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v46, v21))
      || v11 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v46, v21, v91[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v46, v21, v91[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v90, v21, 0xFFFFFFFF);
      if ( v11 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v46, v21, v91[0]);
        v59 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v46, v21);
        v59 = *((_DWORD *)v21 + 465);
      }
      DXGDEVICE::RemoveVidPnOwnership(v21, v59);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v21, 0);
    }
    v48 = v81;
    goto LABEL_59;
  }
  if ( g_OSTestSigningEnabled )
  {
    v47 = 2LL;
    if ( (*(_BYTE *)(*((_QWORD *)v21 + 5) + 348LL) & 2) != 0 )
    {
      v71 = v92[0];
      if ( v92[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v71 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
      v92[0] = v71;
    }
  }
  v48 = v81;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*((_QWORD *)v81 + 11) + 208LL))(v44, v47)
    && (v92[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v92[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v48 + 11) + 304LL))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v90, 0LL, 0xFFFFFFFF);
    v45 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v46, v21, v92, v91, v11, v5);
    if ( v45 < 0 )
      goto LABEL_59;
    if ( v92[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      LODWORD(v51) = 3;
    }
    else
    {
      if ( v92[0] <= D3DKMT_VIDPNSOURCEOWNER_SHARED )
        goto LABEL_145;
      v51 = 3LL;
      if ( v92[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        LODWORD(v51) = 7;
        goto LABEL_58;
      }
      if ( v92[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
LABEL_145:
        v72 = WdLogNewEntry5_WdAssertion(v52, v51);
        *(_QWORD *)(v72 + 24) = 3223LL;
        WdLogEvent5_WdAssertion(v72);
        LODWORD(v51) = 0;
      }
    }
LABEL_58:
    DXGDEVICE::SetSchedulingPriorityAdjustment(v21, v51);
    *((_DWORD *)v21 + 465) += v11;
    goto LABEL_59;
  }
  v73 = WdLogNewEntry5_WdEvent(v50, v49);
  v45 = -1073741790;
  *(_QWORD *)(v73 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v73);
LABEL_59:
  v76 = 0;
  v77[0] = 0;
  if ( v45 < 0 )
    goto LABEL_95;
  if ( v39 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v46, v39, (struct COREDEVICEACCESS *)v89, &v76, v77, v79);
  v53 = 1;
  if ( !v76 )
LABEL_95:
    v53 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v90, v53);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v89, v54);
  if ( v39 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v84, v55);
    *((_BYTE *)v39 + 1905) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    v21 = v83;
  }
  if ( v75 )
  {
    v75 = 0;
    DxgkReleaseSessionModeChangeLock(v56, v55);
  }
  if ( v45 >= 0 )
  {
    if ( v77[0] && v76 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v21 + 5) + 88LL) + 192LL))();
    (*(void (**)(void))(*((_QWORD *)v48 + 11) + 344LL))();
    v88[0] = 1LL;
    v88[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify(v88) < 0 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v74 + 24) = 3337LL;
      WdLogEvent5_WdAssertion(v74);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v75);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v90);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
  if ( v80[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
  if ( v78 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v84);
  return (unsigned int)v45;
}

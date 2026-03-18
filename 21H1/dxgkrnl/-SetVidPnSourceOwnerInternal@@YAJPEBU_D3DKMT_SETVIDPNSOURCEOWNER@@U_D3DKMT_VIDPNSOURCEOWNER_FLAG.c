/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012FAC4
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0130440 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000843C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00084F4 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008548 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0008728 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000A72C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0011A10 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001AB20 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00247AC (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00247D4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00D9670 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C012F300 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C012F3AC (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0130398 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0130968 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C0130AD0 (DxgkShutdownBootGraphics.c)
 *     DxgkStatusChangeNotify @ 0x1C0130D00 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133440 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01345AC (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C0134A14 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C01527B0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0160950 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C016195C (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C020FE94 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
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
  __int64 v15; // rdx
  void *const *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGDEVICE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  DISPLAY_SOURCE *v30; // rcx
  __int64 v31; // rdi
  unsigned int i; // r14d
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rdi
  struct DXGDEVICE *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // r14d
  ADAPTER_DISPLAY *v49; // r15
  __int64 v50; // rdx
  struct DXGPROCESS *v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned int v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  char v79; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int8 v80; // [rsp+31h] [rbp-437h] BYREF
  unsigned __int8 v81[6]; // [rsp+32h] [rbp-436h] BYREF
  struct DXGDEVICE *v82; // [rsp+38h] [rbp-430h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v83; // [rsp+40h] [rbp-428h]
  _QWORD v84[2]; // [rsp+48h] [rbp-420h] BYREF
  struct DXGPROCESS *v85; // [rsp+58h] [rbp-410h]
  struct DXGDEVICE *v86; // [rsp+60h] [rbp-408h]
  DXGDEVICE *v87; // [rsp+68h] [rbp-400h] BYREF
  _BYTE v88[16]; // [rsp+70h] [rbp-3F8h] BYREF
  _BYTE v89[24]; // [rsp+80h] [rbp-3E8h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-3D0h]
  void *v91[2]; // [rsp+A8h] [rbp-3C0h]
  _QWORD v92[3]; // [rsp+B8h] [rbp-3B0h] BYREF
  _BYTE v93[160]; // [rsp+D0h] [rbp-398h] BYREF
  _BYTE v94[432]; // [rsp+170h] [rbp-2F8h] BYREF
  unsigned int v95[16]; // [rsp+320h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v96[16]; // [rsp+360h] [rbp-108h] BYREF
  void *v97[16]; // [rsp+3A0h] [rbp-C8h] BYREF

  v83 = a4;
  v5.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v85 = Current;
  if ( !Current )
  {
    v66 = WdLogNewEntry5_WdError(v8, v7);
    v65 = -1073741811;
    *(_QWORD *)(v66 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v66);
    return v65;
  }
  memset(v97, 0, sizeof(v97));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v88,
    (struct DXGFASTMUTEX *const *)Current);
  v95[0] = 0;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v6->hDevice;
  *(_OWORD *)v91 = *(_OWORD *)&v6->pVidPnSourceId;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v91, 8));
  if ( v11 )
  {
    if ( v11 > 0x10 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v10);
      v14[3] = LODWORD(Src[0]);
      v14[4] = v11;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v88, v15);
      return 3221225485LL;
    }
    v12 = Src[1];
    if ( !Src[1] || !v91[0] )
    {
      v18 = WdLogNewEntry5_WdError(MmUserProbeAddress, v10);
      *(_QWORD *)(v18 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v18 + 32) = v11;
      *(_QWORD *)(v18 + 40) = v12;
      *(void **)(v18 + 48) = v91[0];
      *(_QWORD *)(v18 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v18);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v88, v19);
      return 3221225485LL;
    }
    v13 = 4LL * v11;
    if ( (char *)Src[1] + v13 < Src[1] || (char *)Src[1] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v96, v12, 4LL * v11);
    if ( (char *)v91[0] + v13 < v91[0] || (char *)v91[0] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v95, v91[0], 4LL * v11);
    if ( (*(_BYTE *)&v5.0 & 4) != 0 )
    {
      v17 = &a3[v11];
      if ( v17 < a3 || (unsigned __int64)v17 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v97, a3, 8LL * v11);
    }
    Current = v85;
  }
  v87 = 0LL;
  v20 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v82, LODWORD(Src[0]), (struct _KTHREAD **)Current, &v87);
  v23 = v87;
  if ( !v87 )
  {
    v67 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v67 + 24) = v20;
    v65 = -1073741811;
    *(_QWORD *)(v67 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v67);
LABEL_128:
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
LABEL_108:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v88, v64);
    return v65;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84, v87);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v89, (DXGDEVICE *)((char *)v23 + 144));
  v26 = *((_QWORD *)v23 + 231);
  if ( !v26 )
  {
    v68 = WdLogNewEntry5_WdError(v25, v24);
    *(_QWORD *)(v68 + 24) = v20;
    v65 = -1073741637;
    *(_QWORD *)(v68 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v68);
LABEL_126:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    goto LABEL_128;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v94,
    *(struct ADAPTER_DISPLAY **)(v26 + 2672),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v94, v27);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
  v28 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v79, 1);
  v31 = v28;
  if ( v28 < 0 )
  {
    v69 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v69 + 24) = v31;
    WdLogEvent5_WdError(v69);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v94);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    v65 = v31;
    goto LABEL_108;
  }
  for ( i = 0; i < v11; ++i )
  {
    v33 = *(_QWORD *)(v26 + 2672);
    v34 = v95[i];
    if ( (unsigned int)v34 >= *(_DWORD *)(v33 + 80) )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v30, v33);
      v71[3] = v95[i];
      v71[4] = i;
      v65 = -1073741811;
      v71[5] = -1073741811LL;
      WdLogEvent5_WdError(v71);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v94);
      goto LABEL_126;
    }
    v30 = (DISPLAY_SOURCE *)(*(_QWORD *)(v33 + 112) + 3968 * v34);
    if ( v96[i] )
    {
      if ( !v30 || !DISPLAY_SOURCE::CheckSessionOwnership(v30) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v94);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
        if ( v84[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
        if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
        v65 = -1071774910;
        goto LABEL_108;
      }
      v36 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v26 + 316), v95[i], v97[i]);
      if ( v36 < 0 )
      {
        v70 = WdLogNewEntry5_WdError(v30, v35);
        *(_QWORD *)(v70 + 24) = v95[i];
        WdLogEvent5_WdError(v70);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v94);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
        if ( v84[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
        if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
        v65 = v36;
        goto LABEL_108;
      }
    }
  }
  v86 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v26 + 316), 0);
  v41 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v63 = WdLogNewEntry5_WdEvent(v39, v38);
    *(_QWORD *)(v63 + 24) = v41;
    WdLogEvent5_WdEvent(v63);
  }
  v42 = v86;
  if ( v86 )
  {
    DxgkShutdownBootGraphics(v86, 0LL);
    if ( *((_BYTE *)v42 + 1904) )
    {
      v72 = WdLogNewEntry5_WdAssertion(v44, v43);
      *(_QWORD *)(v72 + 24) = 3035LL;
      WdLogEvent5_WdAssertion(v72);
    }
    if ( v42 )
    {
      v45 = *((_QWORD *)v23 + 2);
      if ( *((_QWORD *)v42 + 2) != v45 )
        v42 = 0LL;
      v86 = v42;
      if ( v42 )
      {
        if ( *((_QWORD *)v42 + 2) != v45 || *((_QWORD *)v42 + 231) != *((_QWORD *)v23 + 231) )
        {
          v73 = WdLogNewEntry5_WdAssertion(v44, v43);
          *(_QWORD *)(v73 + 24) = 3050LL;
          WdLogEvent5_WdAssertion(v73);
        }
        *((_BYTE *)v42 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v93, (__int64)v23, 1, v40, 0);
  v48 = COREDEVICEACCESS::AcquireExclusive((__int64)v93, 2LL);
  if ( v48 < 0 )
  {
    if ( v42 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88, v46);
      *((_BYTE *)v42 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v86 + 2), v86);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v94);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    v65 = v48;
    goto LABEL_108;
  }
  v49 = *(ADAPTER_DISPLAY **)(v26 + 2672);
  v50 = 0LL;
  if ( !v49 )
  {
    v74 = WdLogNewEntry5_WdAssertion(v47, 0LL);
    *(_QWORD *)(v74 + 24) = 3086LL;
    WdLogEvent5_WdAssertion(v74);
    v49 = *(ADAPTER_DISPLAY **)(v26 + 2672);
    v50 = 0LL;
  }
  LOBYTE(v47) = 0;
  if ( !v11 || v96[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v11 == 1 && v95[0] < *((_DWORD *)v49 + 20) )
    LOBYTE(v47) = 1;
  if ( (_BYTE)v47 )
  {
    if ( !v11
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v49, v23) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v49, v23))
      || v11 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v49, v23, v95[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v49, v23, v95[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v94, v23, 0xFFFFFFFF);
      if ( v11 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v49, v23, v95[0]);
        v62 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v49, v23);
        v62 = *((_DWORD *)v23 + 465);
      }
      DXGDEVICE::RemoveVidPnOwnership(v23, v62);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v23, 0);
    }
    v51 = v85;
    goto LABEL_59;
  }
  if ( g_OSTestSigningEnabled )
  {
    v50 = 2LL;
    if ( (*(_BYTE *)(*((_QWORD *)v23 + 5) + 348LL) & 2) != 0 )
    {
      v75 = v96[0];
      if ( v96[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v75 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
      v96[0] = v75;
    }
  }
  v51 = v85;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*((_QWORD *)v85 + 11) + 208LL))(v47, v50)
    && (v96[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v96[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v51 + 11) + 304LL))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v94, 0LL, 0xFFFFFFFF);
    v48 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v49, v23, v96, v95, v11, v5);
    if ( v48 < 0 )
      goto LABEL_59;
    if ( v96[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      LODWORD(v54) = 3;
    }
    else
    {
      if ( v96[0] <= D3DKMT_VIDPNSOURCEOWNER_SHARED )
        goto LABEL_145;
      v54 = 3LL;
      if ( v96[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        LODWORD(v54) = 7;
        goto LABEL_58;
      }
      if ( v96[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
LABEL_145:
        v76 = WdLogNewEntry5_WdAssertion(v55, v54);
        *(_QWORD *)(v76 + 24) = 3170LL;
        WdLogEvent5_WdAssertion(v76);
        LODWORD(v54) = 0;
      }
    }
LABEL_58:
    DXGDEVICE::SetSchedulingPriorityAdjustment(v23, v54);
    *((_DWORD *)v23 + 465) += v11;
    goto LABEL_59;
  }
  v77 = WdLogNewEntry5_WdEvent(v53, v52);
  v48 = -1073741790;
  *(_QWORD *)(v77 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v77);
LABEL_59:
  v80 = 0;
  v81[0] = 0;
  if ( v48 < 0 )
    goto LABEL_95;
  if ( v42 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v49, v42, (struct COREDEVICEACCESS *)v93, &v80, v81, v83);
  v56 = 1LL;
  if ( !v80 )
LABEL_95:
    v56 = 0LL;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v94, v56);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v93);
  if ( v42 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88, v57);
    *((_BYTE *)v42 + 1905) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v86 + 2), v86);
    v23 = v87;
  }
  if ( v79 )
  {
    v79 = 0;
    DxgkReleaseSessionModeChangeLock(v58, v57);
  }
  if ( v48 >= 0 )
  {
    if ( v81[0] && v80 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v23 + 5) + 88LL) + 192LL))();
    (*(void (**)(void))(*((_QWORD *)v51 + 11) + 344LL))();
    v92[0] = 1LL;
    v92[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify(v92) < 0 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v60, v59);
      *(_QWORD *)(v78 + 24) = 3284LL;
      WdLogEvent5_WdAssertion(v78);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v94);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
  if ( v84[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
  if ( v82 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v88, v61);
  return (unsigned int)v48;
}

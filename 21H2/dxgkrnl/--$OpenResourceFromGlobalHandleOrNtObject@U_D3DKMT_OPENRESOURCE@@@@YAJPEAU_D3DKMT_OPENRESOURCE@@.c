/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0184FA4
 * Callers:
 *     DxgkOpenResource @ 0x1C0184E80 (DxgkOpenResource.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B640 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0185854 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z@QEAA@XZ @ 0x1C02D59E0 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$OpenResourceFromGlobalHandleOrNtObject@_ea_1C02D59E0.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  bool v4; // si
  struct DXGPROCESS *Current; // r13
  unsigned int *v6; // r14
  ULONG64 v7; // rax
  struct DXGDEVICE *v8; // rsi
  volatile signed __int64 *v9; // rbx
  struct DXGDEVICE *v10; // r15
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  struct DXGGLOBAL *Global; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // rbx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int64 v21; // r9
  char v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  unsigned int v25; // eax
  unsigned int v26; // eax
  void *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // rbx
  int StandardAllocation; // r15d
  void *v32; // r12
  _QWORD *v33; // r8
  _DWORD *v34; // rdx
  _DWORD *v35; // rdx
  unsigned int i; // r10d
  char *v37; // rcx
  size_t v38; // r8
  char *v39; // rcx
  size_t v40; // r8
  struct DXGADAPTER *v41; // rbx
  __int64 v43; // r11
  ULONG64 v44; // r9
  _DWORD *v45; // rdx
  _DWORD *v46; // rdx
  _QWORD *v47; // rdx
  struct DXGDEVICE *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned int v52; // ecx
  int v53; // eax
  __int64 v54; // r8
  struct DXGPROCESS *v55; // r12
  unsigned int v56; // r10d
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // edx
  struct DXGRESOURCE *v60; // rbx
  __int64 v61; // rcx
  unsigned int v62; // r15d
  unsigned int v63; // eax
  unsigned int v64; // ecx
  __int64 v65; // r9
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rcx
  int v69; // ecx
  unsigned int v70; // r8d
  __int64 v71; // rdx
  int v72; // ecx
  int v73; // eax
  _DWORD *v74; // rcx
  char *v75; // rcx
  size_t v76; // r8
  bool v77; // zf
  char v78; // [rsp+50h] [rbp-3E8h]
  bool v79; // [rsp+51h] [rbp-3E7h]
  struct DXGDEVICE *v80; // [rsp+58h] [rbp-3E0h] BYREF
  struct DXGDEVICE *v81; // [rsp+60h] [rbp-3D8h] BYREF
  unsigned int v82; // [rsp+68h] [rbp-3D0h]
  __int64 v83; // [rsp+70h] [rbp-3C8h]
  void *v84; // [rsp+78h] [rbp-3C0h]
  void *Src; // [rsp+80h] [rbp-3B8h]
  DXGSHAREDRESOURCE *v86; // [rsp+88h] [rbp-3B0h] BYREF
  __int64 v87; // [rsp+90h] [rbp-3A8h] BYREF
  struct DXGADAPTER *v88; // [rsp+98h] [rbp-3A0h]
  char v89; // [rsp+A0h] [rbp-398h]
  unsigned int *v90; // [rsp+A8h] [rbp-390h]
  void *v91; // [rsp+B0h] [rbp-388h]
  void *v92; // [rsp+B8h] [rbp-380h]
  DXGFASTMUTEX *v93; // [rsp+C0h] [rbp-378h] BYREF
  char v94; // [rsp+C8h] [rbp-370h]
  __int64 v95; // [rsp+D0h] [rbp-368h] BYREF
  int v96; // [rsp+D8h] [rbp-360h]
  ULONG64 v97; // [rsp+E0h] [rbp-358h]
  struct DXGPROCESS *v98; // [rsp+E8h] [rbp-350h]
  struct DXGDEVICE *v99; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v100; // [rsp+F8h] [rbp-340h]
  _BYTE v101[32]; // [rsp+100h] [rbp-338h] BYREF
  _OWORD v102[5]; // [rsp+120h] [rbp-318h] BYREF
  _BYTE v103[32]; // [rsp+170h] [rbp-2C8h] BYREF
  _QWORD v104[54]; // [rsp+190h] [rbp-2A8h] BYREF
  _DWORD v105[4]; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v106; // [rsp+350h] [rbp-E8h]
  _BYTE v107[160]; // [rsp+360h] [rbp-D8h] BYREF

  v82 = a2;
  v97 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v79 = v4;
  Current = DXGPROCESS::GetCurrent();
  v98 = Current;
  v84 = 0LL;
  v91 = 0LL;
  Src = 0LL;
  v78 = 0;
  if ( !Current )
  {
    v13 = -1073741811;
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
    return v13;
  }
  memset(v102, 0, 0x48uLL);
  v6 = (unsigned int *)v102;
  if ( v4 )
  {
    v7 = a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v102[0] = *(_OWORD *)v7;
    v102[1] = *(_OWORD *)(v7 + 16);
    v102[2] = *(_OWORD *)(v7 + 32);
    v102[3] = *(_OWORD *)(v7 + 48);
    *(_QWORD *)&v102[4] = *(_QWORD *)(v7 + 64);
  }
  else
  {
    v6 = (unsigned int *)a1;
  }
  v90 = v6;
  v100 = *((_QWORD *)v6 + 7);
  v81 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80, *v6, (struct _KTHREAD **)Current, &v81);
  v8 = v81;
  v99 = v81;
  if ( !v81 )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, *v6, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_90;
  }
  if ( !v6[16] && !v6[12] )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(3LL, v81, -1073741811LL);
LABEL_90:
    v48 = v80;
    if ( v80 )
      goto LABEL_172;
    return v13;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95,
    v81);
  v9 = *(volatile signed __int64 **)(*((_QWORD *)v8 + 2) + 16LL);
  v88 = (struct DXGADAPTER *)v9;
  _InterlockedAdd64(v9 + 3, 1uLL);
  v87 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9 + 17, 0LL);
  v89 = 1;
  v10 = v81;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v81, 2, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107, 0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, v10, v12);
    goto LABEL_171;
  }
  if ( !a2 )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, v10, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_171;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v93);
  if ( v94 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v93, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v93);
  v94 = 1;
  if ( (*((_DWORD *)Current + 106) & 0x100) == 0 )
  {
    Global = DXGGLOBAL_GetGlobal();
    if ( *((struct _KTHREAD **)Global + 39) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1447LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareMutex.IsOwner()", 1447LL, 0LL, 0LL, 0LL, 0LL);
    }
    v15 = (a2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)Global + 88) )
    {
      v16 = *((_QWORD *)Global + 42);
      v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
      if ( a2 >> 30 == ((v17 >> 5) & 3) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      {
        if ( (v17 & 0x1F) == 2 )
        {
          v18 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
LABEL_21:
          v10 = v81;
          goto LABEL_22;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v18 = 0LL;
    goto LABEL_21;
  }
  v49 = *((_QWORD *)Current + 76);
  v92 = (void *)(v49 + 248);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v49 + 248));
  v50 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 296) )
    goto LABEL_103;
  v51 = *(_QWORD *)(v49 + 280);
  v52 = *(_DWORD *)(v51 + 16 * v50 + 8);
  if ( a2 >> 30 != ((v52 >> 5) & 3) || (v52 & 0x2000) != 0 || (v52 & 0x1F) == 0 )
    goto LABEL_103;
  if ( (v52 & 0x1F) != 2 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_103:
    v18 = 0LL;
    goto LABEL_104;
  }
  v18 = *(_QWORD *)(v51 + 16LL * (unsigned int)v50);
LABEL_104:
  ExReleasePushLockSharedEx(v92, 0LL);
  KeLeaveCriticalRegion();
LABEL_22:
  if ( !v18 )
  {
    v13 = -1073741811;
    WdLogSingleEntry3(3LL, v10, v82, -1073741811LL);
LABEL_107:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v93);
LABEL_171:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
    v48 = v80;
    if ( v80 )
    {
LABEL_172:
      v77 = _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_173:
      if ( v77 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v80 + 2), v80);
    }
    return v13;
  }
  _m_prefetchw((const void *)(v18 + 68));
  v19 = *(_DWORD *)(v18 + 68);
  do
  {
    if ( !v19 )
    {
      v13 = -1073741811;
      WdLogSingleEntry4(3LL, v81, v82, -1073741811LL, 11142LL);
      goto LABEL_107;
    }
    v20 = v19;
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 68), v19 + 1, v19);
  }
  while ( v20 != v19 );
  if ( !v94 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v93, 0LL, 0LL);
  v94 = 0;
  DXGFASTMUTEX::Release((struct _KTHREAD **)v93);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v93);
  v86 = (DXGSHAREDRESOURCE *)v18;
  if ( (*(_DWORD *)(v18 + 12) & 0x10) == 0 )
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v101, v98);
    if ( v22 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v107);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v101, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
      v53 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107, 0LL);
      StandardAllocation = v53;
      if ( v53 < 0 )
      {
        WdLogSingleEntry2(3LL, v81, v53);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v101);
        `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v86);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
        if ( v89 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
        goto LABEL_75;
      }
    }
    if ( 80 * (unsigned __int64)v6[2] <= 0xFFFFFFFF )
    {
      v23 = 80LL * v6[2];
      if ( !is_mul_ok(v6[2], 0x50uLL) )
        v23 = -1LL;
      v92 = (void *)operator new[](v23, 0x4B677844u, 256LL, v21);
      if ( !v92 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v81, v6[2], -1073741801LL);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v101);
        `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v86);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
        if ( v89 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
        if ( v80 )
          goto LABEL_76;
        return (unsigned int)StandardAllocation;
      }
      v25 = v6[16];
      if ( v25 )
      {
        v91 = (void *)operator new[](v25, 0x4B677844u, 258LL, v24);
        if ( !v91 )
        {
          v54 = v6[16];
          goto LABEL_122;
        }
      }
      if ( v6[12] )
      {
        v84 = (void *)operator new[](v6[12], 0x4B677844u, 258LL, v24);
        if ( !v84 )
        {
          v54 = v6[12];
LABEL_122:
          StandardAllocation = -1073741801;
          WdLogSingleEntry3(3LL, v81, v54, -1073741801LL);
LABEL_123:
          if ( v78 )
          {
            v55 = v98;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v103, v98);
            v56 = v6[17];
            v57 = (v56 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v57 < *((_DWORD *)v55 + 74)
              && (v58 = *((_QWORD *)v55 + 35),
                  v59 = *(_DWORD *)(v58 + 16 * v57 + 8),
                  ((v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60))
              && (v59 & 0x2000) == 0
              && (v59 & 0x1F) != 0 )
            {
              if ( (v59 & 0x1F) != 4 )
              {
                WdLogSingleEntry1(2LL, 267LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Handle type mismatch",
                  267LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_130;
              }
              v60 = *(struct DXGRESOURCE **)(v58 + 16LL * (unsigned int)v57);
              if ( v60 )
                *(_DWORD *)(v58 + 16LL * ((v56 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            else
            {
LABEL_130:
              v60 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103);
            DXGDEVICE::DestroyAllocationInternal(v81, 0, 0LL, v60, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_66:
          operator delete[](v91);
          operator delete[](v84);
          operator delete[](v92);
          operator delete[](Src);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v101);
          if ( v86 && _InterlockedExchangeAdd((volatile signed __int32 *)v86 + 17, 0xFFFFFFFF) == 1 )
            DXGSHAREDRESOURCE::Destroy(v86, 0LL, 0);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
          if ( v89 )
          {
            v41 = v88;
            ExReleasePushLockSharedEx((char *)v88 + 136, 0LL);
            KeLeaveCriticalRegion();
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v88 + 2), v88);
          }
          if ( v96 )
            ExReleasePushLockSharedEx(v95 + 144, 0LL);
          else
            ExReleaseResourceLite(*(PERESOURCE *)(v95 + 136));
          KeLeaveCriticalRegion();
LABEL_75:
          if ( v80 )
          {
LABEL_76:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v80 + 2), v80);
          }
          return (unsigned int)StandardAllocation;
        }
      }
      v26 = v6[8];
      if ( v26 )
      {
        v27 = (void *)operator new[](v26, 0x4B677844u, 258LL, v24);
        Src = v27;
        if ( !v27 )
        {
          v54 = v6[8];
          goto LABEL_122;
        }
      }
      else
      {
        v27 = Src;
      }
      if ( (*((_BYTE *)v81 + 1869) & 1) == 0 )
      {
        v28 = *((_QWORD *)v99 + 2);
        if ( *(_QWORD *)(v18 + 80) != v28
          || (v29 = *((_QWORD *)v81 + 231)) != 0
          && !*(_QWORD *)(v29 + 2800)
          && (v61 = *(_QWORD *)(v18 + 96)) != 0
          && v61 != v29 )
        {
          v62 = *(_DWORD *)(v18 + 12);
          if ( (v62 & 0x20) == 0 )
          {
            StandardAllocation = -1073741811;
            WdLogSingleEntry3(3LL, v81, 0LL, -1073741811LL);
            goto LABEL_65;
          }
          v63 = *(_DWORD *)(v18 + 132);
          v64 = v6[2];
          if ( v63 != v64 )
          {
            v65 = v63;
            v66 = v64;
            goto LABEL_141;
          }
          v67 = v6[8];
          v68 = *(unsigned int *)(v18 + 112);
          v82 = v68;
          if ( (_DWORD)v67 == (_DWORD)v68 )
          {
            v69 = *(_DWORD *)(v18 + 216);
            if ( v69 || *(_DWORD *)(*(_QWORD *)(v28 + 16) + 1968LL) >= 0x5000u )
            {
              v106 = 0LL;
              v105[2] = v69;
              v105[0] = *(_DWORD *)(v18 + 208);
              v105[1] = *(_DWORD *)(v18 + 212);
              v105[3] = 7;
              memset(v104, 0, 0x1A8uLL);
              v70 = v104[0] & 0xFFFFBEFF | (4 * (v62 & 0x40 | (32 * (v62 & 0x80)))) | 0x41;
              HIDWORD(v104[0]) = *v6;
              LODWORD(v104[2]) = 4;
              v104[3] = v105;
              v104[39] = *(_QWORD *)(v18 + 104);
              LODWORD(v104[40]) = v82;
              v71 = *(_QWORD *)(v18 + 192);
              if ( (v62 & 0x200) != 0 )
                v104[42] = *(_QWORD *)(v18 + 192);
              else
                v104[41] = *(_QWORD *)(v18 + 192);
              v104[43] = *(_QWORD *)(v18 + 224);
              LODWORD(v104[6]) = *(_DWORD *)(v18 + 232);
              v104[44] = v84;
              LODWORD(v104[45]) = v6[12];
              v32 = v91;
              v104[46] = v91;
              LODWORD(v104[47]) = v6[16];
              LODWORD(v104[0]) = v70 ^ (v70 ^ (v62 << 7)) & 0x400 | 0x200;
              v104[52] = *(_QWORD *)(v18 + 184);
              if ( (v62 & 0x200) != 0 )
              {
                v104[42] = v71;
                goto LABEL_154;
              }
              if ( (v62 & 0x400) != 0 )
              {
                v104[41] = v71;
LABEL_154:
                v73 = *(_DWORD *)(v18 + 204);
                v72 = v70 ^ (v70 ^ (v62 << 7)) & 0x400 | 0x200;
                LODWORD(v104[0]) = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(v62 >> 7)) & 0x10;
                LODWORD(v104[49]) = v73;
              }
              StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                     v81,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v104,
                                     (struct COREDEVICEACCESS *)v107);
              if ( StandardAllocation >= 0 )
              {
                *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v98, (DXGRESOURCEREFERENCE *)&v99, v104[1])
                          + 128LL) = v18;
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v99);
                memmove(Src, *(const void **)(v18 + 104), v6[8]);
                v6[17] = v104[1];
                v74 = v92;
                *(_DWORD *)v92 = HIDWORD(v104[6]);
                v74[4] = v6[16];
                *((_QWORD *)v74 + 1) = v32;
                *((_QWORD *)v6 + 2) = v74;
                *((_QWORD *)v6 + 3) = Src;
                v30 = v84;
                *((_QWORD *)v6 + 5) = v84;
                *((_QWORD *)v6 + 7) = v32;
                goto LABEL_47;
              }
              goto LABEL_65;
            }
            WdLogSingleEntry2(3LL, v81, -1073741811LL);
          }
          else
          {
            v65 = v68;
            v66 = v67;
LABEL_141:
            WdLogSingleEntry4(3LL, v81, v66, v65, -1073741811LL);
          }
          StandardAllocation = -1073741811;
          goto LABEL_123;
        }
      }
      v30 = v84;
      if ( v79 )
      {
        *((_QWORD *)v6 + 7) = v91;
        *((_QWORD *)v6 + 5) = v30;
        *((_QWORD *)v6 + 3) = v27;
        *((_QWORD *)v6 + 2) = v92;
      }
      StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                             v81,
                             0,
                             (struct COREDEVICEACCESS *)v107,
                             0,
                             0LL,
                             0LL,
                             0LL);
      if ( StandardAllocation < 0 )
      {
        WdLogSingleEntry1(3LL, 11455LL);
      }
      else
      {
        v32 = v91;
LABEL_47:
        v78 = 1;
        if ( v79 )
        {
          v33 = (_QWORD *)v97;
          v34 = (_DWORD *)(v97 + 68);
          if ( v97 + 68 >= MmUserProbeAddress )
            v34 = (_DWORD *)MmUserProbeAddress;
          *v34 = v6[17];
          v35 = v33 + 8;
          if ( (unsigned __int64)(v33 + 8) >= MmUserProbeAddress )
            v35 = (_DWORD *)MmUserProbeAddress;
          *v35 = v6[16];
          for ( i = 0; i < v6[2]; ++i )
          {
            v43 = 80LL * i;
            v83 = v100 + *(_DWORD *)(v43 + *((_QWORD *)v6 + 2) + 8) - v6[14];
            v44 = v43 + v33[2];
            v45 = (_DWORD *)v44;
            if ( v44 >= MmUserProbeAddress )
              v45 = (_DWORD *)MmUserProbeAddress;
            *v45 = *(_DWORD *)(v43 + *((_QWORD *)v6 + 2));
            v46 = (_DWORD *)(v44 + 16);
            if ( v44 + 16 >= MmUserProbeAddress )
              v46 = (_DWORD *)MmUserProbeAddress;
            *v46 = *(_DWORD *)(v43 + *((_QWORD *)v6 + 2) + 16);
            v47 = (_QWORD *)(v44 + 8);
            if ( v44 + 8 >= MmUserProbeAddress )
              v47 = (_QWORD *)MmUserProbeAddress;
            *v47 = v83;
            v33 = (_QWORD *)v97;
          }
          if ( v6[8] )
          {
            v37 = (char *)v33[3];
            v38 = v6[8];
            if ( (unsigned __int64)&v37[v38] > MmUserProbeAddress || &v37[v38] <= v37 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v37, Src, v38);
            v33 = (_QWORD *)v97;
          }
          if ( v6[12] )
          {
            v75 = (char *)v33[5];
            v76 = v6[12];
            if ( (unsigned __int64)&v75[v76] > MmUserProbeAddress || &v75[v76] <= v75 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v75, v30, v76);
          }
          v78 = 1;
          if ( v6[16] )
          {
            v39 = *(char **)(v97 + 56);
            v40 = v6[16];
            if ( (unsigned __int64)&v39[v40] > MmUserProbeAddress || &v39[v40] <= v39 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v39, v32, v40);
            v78 = 1;
          }
        }
      }
LABEL_65:
      if ( StandardAllocation < 0 )
        goto LABEL_123;
      goto LABEL_66;
    }
    v13 = -1073741675;
    WdLogSingleEntry2(3LL, v81, -1073741675LL);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v101);
    `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
    if ( v89 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
    if ( !v80 )
      return v13;
    v77 = _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_173;
  }
  WdLogSingleEntry2(4LL, v18, -1073741823LL);
  `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v86);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
  if ( v80 && _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v80 + 2), v80);
  return 3221225473LL;
}

/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01183E4
 * Callers:
 *     DxgkOpenResource @ 0x1C0118C40 (DxgkOpenResource.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000568C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005940 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00068E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A4AC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AFC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025B6C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025D70 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0113A10 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0117FD8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0119AC8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C012B2E0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C0227510 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_2_--ENSURE_SHARED_RESOURCE_DERE.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  bool v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  char v9; // r12
  DXGSHAREDRESOURCE *v10; // rsi
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // r14
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  struct DXGGLOBAL *Global; // rdi
  __int64 v26; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // r15
  __int64 v33; // r15
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  SIZE_T v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 v51; // rdx
  PVOID v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // rax
  void *v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int StandardAllocation; // r14d
  _QWORD *v61; // r8
  _DWORD *v62; // rdx
  _DWORD *v63; // rdx
  unsigned int v64; // r10d
  __int64 v65; // r12
  char *v66; // rcx
  size_t v67; // r8
  char *v68; // rcx
  size_t v69; // r8
  __int64 v71; // r11
  ULONG64 v72; // r9
  _DWORD *v73; // rdx
  _DWORD *v74; // rdx
  _QWORD *v75; // rdx
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned int v85; // esi
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rcx
  unsigned int v93; // r9d
  unsigned int v94; // ecx
  __int64 v95; // r8
  int v96; // edx
  __int64 v97; // rdx
  __int64 v98; // rax
  struct DXGRESOURCE *v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  unsigned int v103; // r14d
  _QWORD *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  unsigned int v107; // r8d
  __int64 v108; // rdx
  int v109; // ecx
  int v110; // eax
  __int64 v111; // rdx
  _DWORD *v112; // rcx
  _QWORD *v113; // rax
  char *v114; // rcx
  size_t v115; // r8
  __int64 v116; // rax
  bool v117; // [rsp+50h] [rbp-3E8h]
  struct DXGDEVICE *v118; // [rsp+58h] [rbp-3E0h] BYREF
  struct DXGDEVICE *v119; // [rsp+60h] [rbp-3D8h] BYREF
  struct DXGPROCESS *v120; // [rsp+68h] [rbp-3D0h]
  unsigned int v121; // [rsp+70h] [rbp-3C8h]
  int v122; // [rsp+74h] [rbp-3C4h]
  char v123[8]; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v124; // [rsp+80h] [rbp-3B8h]
  char v125; // [rsp+88h] [rbp-3B0h]
  void *v126; // [rsp+90h] [rbp-3A8h]
  void *v127; // [rsp+98h] [rbp-3A0h]
  void *Src; // [rsp+A0h] [rbp-398h]
  DXGSHAREDRESOURCE *v129[3]; // [rsp+A8h] [rbp-390h] BYREF
  ULONG64 v130; // [rsp+C0h] [rbp-378h]
  _BYTE v131[16]; // [rsp+C8h] [rbp-370h] BYREF
  void *v132; // [rsp+D8h] [rbp-360h]
  _BYTE v133[16]; // [rsp+E0h] [rbp-358h] BYREF
  struct _EX_RUNDOWN_REF *v134; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v135; // [rsp+F8h] [rbp-340h]
  __int64 v136; // [rsp+100h] [rbp-338h]
  _BYTE v137[24]; // [rsp+108h] [rbp-330h] BYREF
  _OWORD v138[5]; // [rsp+120h] [rbp-318h] BYREF
  _BYTE v139[32]; // [rsp+170h] [rbp-2C8h] BYREF
  _QWORD v140[54]; // [rsp+190h] [rbp-2A8h] BYREF
  _DWORD v141[4]; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v142; // [rsp+350h] [rbp-E8h]
  _BYTE v143[160]; // [rsp+360h] [rbp-D8h] BYREF

  v121 = a2;
  v130 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v117 = v4;
  Current = DXGPROCESS::GetCurrent(1LL, v5);
  v129[1] = Current;
  v120 = Current;
  v127 = 0LL;
  v126 = 0LL;
  Src = 0LL;
  v9 = 0;
  if ( !Current )
  {
    v79 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v79 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v79);
    return 3221225485LL;
  }
  memset(v138, 0, 0x48uLL);
  v10 = (DXGSHAREDRESOURCE *)v138;
  if ( v4 )
  {
    v11 = a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v138[0] = *(_OWORD *)v11;
    v138[1] = *(_OWORD *)(v11 + 16);
    v138[2] = *(_OWORD *)(v11 + 32);
    v138[3] = *(_OWORD *)(v11 + 48);
    *(_QWORD *)&v138[4] = *(_QWORD *)(v11 + 64);
  }
  else
  {
    v10 = (DXGSHAREDRESOURCE *)a1;
  }
  v129[2] = v10;
  v135 = *((_QWORD *)v10 + 7);
  v119 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v118,
    *(unsigned int *)v10,
    (struct _KTHREAD **)Current,
    &v119);
  v15 = v119;
  if ( !v119 )
  {
    v80 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v80 + 24) = *(unsigned int *)v10;
    *(_QWORD *)(v80 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v80);
LABEL_155:
    if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v10 + 16) && !*((_DWORD *)v10 + 12) )
  {
    v81 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v81 + 24) = v15;
    *(_QWORD *)(v81 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v81);
    goto LABEL_155;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131,
    v119);
  v124 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
  v125 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v143, (__int64)v15, 2, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v143, 0LL);
  v21 = v17;
  if ( v17 < 0 )
  {
    v82 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v82 + 24) = v15;
    *(_QWORD *)(v82 + 32) = v21;
    WdLogEvent5_WdWarning(v82);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
    if ( v125 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
    if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
    return (unsigned int)v21;
  }
  if ( !a2 )
  {
    v116 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v116 + 24) = v15;
    *(_QWORD *)(v116 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v116);
LABEL_152:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
    if ( v125 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
    goto LABEL_155;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v133, v18);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v133);
  Global = DXGGLOBAL::GetGlobal(v23, v22);
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Global + 33) != CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(CurrentThread, v24);
    *(_QWORD *)(v28 + 24) = 1114LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = (v121 >> 6) & 0xFFFFFF;
  v30 = v121 >> 30;
  if ( (unsigned int)v29 >= *((_DWORD *)Global + 76)
    || (v31 = (unsigned int)v29,
        v26 = *((_QWORD *)Global + 36),
        v29 = *(unsigned int *)(v26 + 16LL * (unsigned int)v29 + 8),
        (_DWORD)v30 != (((unsigned int)v29 >> 5) & 3))
    || (v29 & 0x2000) != 0
    || (v29 & 0x1F) == 0 )
  {
LABEL_74:
    v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v30, v26);
LABEL_75:
    v76[3] = v119;
    v77 = v121;
    v76[5] = -1073741811LL;
    v76[4] = v77;
    WdLogEvent5_WdWarning(v76);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v133, v78);
    goto LABEL_152;
  }
  v32 = 2 * v31;
  v29 &= 0x1Fu;
  if ( (_BYTE)v29 != 2 )
  {
    v83 = WdLogNewEntry5_WdError(v29, v30);
    *(_QWORD *)(v83 + 24) = 316LL;
    WdLogEvent5_WdError(v83);
    goto LABEL_74;
  }
  v33 = *(_QWORD *)(v26 + 8 * v32);
  if ( !v33 )
    goto LABEL_74;
  _m_prefetchw((const void *)(v33 + 68));
  v34 = *(_DWORD *)(v33 + 68);
  do
  {
    if ( !v34 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v30, v26);
      v76[6] = 10940LL;
      goto LABEL_75;
    }
    v29 = (unsigned int)(v34 + 1);
    v35 = v34;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 68), v29, v34);
  }
  while ( v35 != v34 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v133, v30);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v133, v36);
  v129[0] = (DXGSHAREDRESOURCE *)v33;
  if ( (*(_DWORD *)(v33 + 12) & 0x10) != 0 )
  {
    v84 = WdLogNewEntry5_WdEvent(v38, v37);
    *(_QWORD *)(v84 + 24) = v33;
    v85 = -1073741823;
    *(_QWORD *)(v84 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v84);
  }
  else
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v137, Current);
    if ( (_BYTE)v40 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v143, v39);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v137, 1LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
      v122 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v143, 0LL);
      if ( v122 < 0 )
      {
        v89 = WdLogNewEntry5_WdWarning(v88, v87, v40);
        *(_QWORD *)(v89 + 24) = v119;
        v85 = v122;
        *(_QWORD *)(v89 + 32) = v122;
        WdLogEvent5_WdWarning(v89);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v129);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
        if ( v125 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
        if ( v118 )
          goto LABEL_93;
        return v85;
      }
    }
    v41 = *((unsigned int *)v10 + 2);
    if ( 80 * v41 <= 0xFFFFFFFF )
    {
      v42 = 80LL * *((unsigned int *)v10 + 2);
      if ( !is_mul_ok(v41, 0x50uLL) )
        v42 = -1LL;
      v132 = operator new[](v42, 0x4B677844u, PagedPool);
      if ( !v132 )
      {
        v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
        v90[3] = v119;
        v90[4] = *((unsigned int *)v10 + 2);
        StandardAllocation = -1073741801;
        v90[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v90);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v129);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
        if ( v125 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
        if ( v118 )
          goto LABEL_64;
        return (unsigned int)StandardAllocation;
      }
      v46 = *((_DWORD *)v10 + 16);
      if ( v46 )
      {
        v126 = operator new[](v46, 0x4B677844u, PagedPool);
        if ( !v126 )
        {
          v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
          v91[3] = v119;
          v92 = *((unsigned int *)v10 + 16);
          goto LABEL_107;
        }
      }
      if ( *((_DWORD *)v10 + 12) )
      {
        v127 = operator new[](*((unsigned int *)v10 + 12), 0x4B677844u, PagedPool);
        if ( !v127 )
        {
          v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v101, v100, v102);
          v91[3] = v119;
          v92 = *((unsigned int *)v10 + 12);
LABEL_107:
          v91[4] = v92;
          StandardAllocation = -1073741801;
          v91[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v91);
LABEL_108:
          if ( v9 )
          {
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
              (DXGHANDLETABLELOCKEXCLUSIVE *)v139,
              (struct _KTHREAD **)Current);
            v93 = *((_DWORD *)v10 + 17);
            v94 = (v93 >> 6) & 0xFFFFFF;
            if ( v94 < *((_DWORD *)v120 + 64)
              && (v95 = *((_QWORD *)Current + 30),
                  v96 = *(_DWORD *)(v95 + 16LL * v94 + 8),
                  ((v93 >> 25) & 0x60) == (v96 & 0x60))
              && (v96 & 0x2000) == 0
              && (v96 & 0x1F) != 0 )
            {
              v97 = v96 & 0x1F;
              if ( (_BYTE)v97 != 4 )
              {
                v98 = WdLogNewEntry5_WdError((v93 >> 25) & 0x60, v97);
                *(_QWORD *)(v98 + 24) = 316LL;
                WdLogEvent5_WdError(v98);
                goto LABEL_115;
              }
              v99 = *(struct DXGRESOURCE **)(v95 + 16LL * v94);
              if ( v99 )
                *(_DWORD *)(v95 + 16LL * ((v93 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            else
            {
LABEL_115:
              v99 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
            DXGDEVICE::DestroyAllocationInternal(v119, 0, 0LL, v99, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_58:
          operator delete[](v126);
          operator delete[](v127);
          operator delete[](v132);
          operator delete[](Src);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
          if ( v129[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v129[0] + 17, 0xFFFFFFFF) == 1 )
            DXGSHAREDRESOURCE::Destroy(v129[0], 0LL, 0);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
          if ( v125 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
          if ( v118 )
          {
LABEL_64:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
          }
          return (unsigned int)StandardAllocation;
        }
      }
      v50 = *((_DWORD *)v10 + 8);
      if ( v50 )
      {
        v52 = operator new[](v50, 0x4B677844u, PagedPool);
        Src = v52;
        if ( !v52 )
        {
          v91 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v51, v53);
          v91[3] = v119;
          v92 = *((unsigned int *)v10 + 8);
          goto LABEL_107;
        }
      }
      else
      {
        v52 = Src;
      }
      if ( (*((_BYTE *)v119 + 1869) & 1) != 0
        || (v54 = *((_QWORD *)v15 + 2), *(_QWORD *)(v33 + 80) == v54)
        && ((v55 = *((_QWORD *)v119 + 231)) == 0 || *(_QWORD *)(v55 + 2704) || *(_QWORD *)(v33 + 96) == v55) )
      {
        v56 = v126;
        if ( v117 )
        {
          *((_QWORD *)v10 + 7) = v126;
          *((_QWORD *)v10 + 5) = v127;
          *((_QWORD *)v10 + 3) = v52;
          *((_QWORD *)v10 + 2) = v132;
        }
        StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                               v119,
                               (__int64)v10,
                               v121,
                               0LL,
                               0,
                               (struct COREDEVICEACCESS *)v143,
                               0,
                               0LL,
                               0LL,
                               0LL);
        if ( StandardAllocation >= 0 )
        {
LABEL_39:
          v9 = 1;
          if ( v117 )
          {
            v61 = (_QWORD *)v130;
            v62 = (_DWORD *)(v130 + 68);
            if ( v130 + 68 >= MmUserProbeAddress )
              v62 = (_DWORD *)MmUserProbeAddress;
            *v62 = *((_DWORD *)v10 + 17);
            v63 = v61 + 8;
            if ( (unsigned __int64)(v61 + 8) >= MmUserProbeAddress )
              v63 = (_DWORD *)MmUserProbeAddress;
            *v63 = *((_DWORD *)v10 + 16);
            v64 = 0;
            v65 = v135;
            while ( v64 < *((_DWORD *)v10 + 2) )
            {
              v71 = 80LL * v64;
              v136 = v65 + (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 2) + v71 + 8) - *((_DWORD *)v10 + 14));
              v72 = v71 + v61[2];
              v73 = (_DWORD *)v72;
              if ( v72 >= MmUserProbeAddress )
                v73 = (_DWORD *)MmUserProbeAddress;
              *v73 = *(_DWORD *)(v71 + *((_QWORD *)v10 + 2));
              v74 = (_DWORD *)(v72 + 16);
              if ( v72 + 16 >= MmUserProbeAddress )
                v74 = (_DWORD *)MmUserProbeAddress;
              *v74 = *(_DWORD *)(*((_QWORD *)v10 + 2) + v71 + 16);
              v75 = (_QWORD *)(v72 + 8);
              if ( v72 + 8 >= MmUserProbeAddress )
                v75 = (_QWORD *)MmUserProbeAddress;
              *v75 = v136;
              ++v64;
              v61 = (_QWORD *)v130;
            }
            if ( *((_DWORD *)v10 + 8) )
            {
              v66 = (char *)v61[3];
              v67 = *((unsigned int *)v10 + 8);
              if ( (unsigned __int64)&v66[v67] > MmUserProbeAddress || &v66[v67] <= v66 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v66, Src, v67);
              v61 = (_QWORD *)v130;
            }
            if ( *((_DWORD *)v10 + 12) )
            {
              v114 = (char *)v61[5];
              v115 = *((unsigned int *)v10 + 12);
              if ( (unsigned __int64)&v114[v115] > MmUserProbeAddress || &v114[v115] <= v114 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v114, v127, v115);
            }
            v9 = 1;
            if ( *((_DWORD *)v10 + 16) )
            {
              v68 = *(char **)(v130 + 56);
              v69 = *((unsigned int *)v10 + 16);
              if ( (unsigned __int64)&v68[v69] > MmUserProbeAddress || &v68[v69] <= v68 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v68, v56, v69);
              v9 = 1;
            }
          }
          goto LABEL_57;
        }
        v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59);
        v113[3] = 11250LL;
      }
      else
      {
        v103 = *(_DWORD *)(v33 + 12);
        if ( (v103 & 0x20) != 0 )
        {
          if ( *(_DWORD *)(v33 + 132) != *((_DWORD *)v10 + 2) )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v119, v54);
            v104[3] = v119;
            v104[4] = *((unsigned int *)v10 + 2);
            v105 = *(unsigned int *)(v33 + 132);
            goto LABEL_125;
          }
          v122 = *(_DWORD *)(v33 + 112);
          if ( *((_DWORD *)v10 + 8) == v122 )
          {
            v106 = *(unsigned int *)(v33 + 216);
            if ( (_DWORD)v106 || *(_DWORD *)(*(_QWORD *)(v54 + 16) + 1872LL) >= 0x5000u )
            {
              v142 = 0LL;
              v141[2] = v106;
              v141[0] = *(_DWORD *)(v33 + 208);
              v141[1] = *(_DWORD *)(v33 + 212);
              v141[3] = 7;
              memset(v140, 0, 0x1A8uLL);
              v107 = v140[0] & 0xFFFFBEFF | (4 * (v103 & 0x40 | (32 * (v103 & 0x80)))) | 0x41;
              HIDWORD(v140[0]) = *(_DWORD *)v10;
              LODWORD(v140[2]) = 4;
              v140[3] = v141;
              v140[39] = *(_QWORD *)(v33 + 104);
              LODWORD(v140[40]) = v122;
              v108 = *(_QWORD *)(v33 + 192);
              if ( (v103 & 0x200) != 0 )
                v140[42] = *(_QWORD *)(v33 + 192);
              else
                v140[41] = *(_QWORD *)(v33 + 192);
              v140[43] = *(_QWORD *)(v33 + 224);
              LODWORD(v140[6]) = *(_DWORD *)(v33 + 232);
              v140[44] = v127;
              LODWORD(v140[45]) = *((_DWORD *)v10 + 12);
              v140[46] = v126;
              LODWORD(v140[47]) = *((_DWORD *)v10 + 16);
              LODWORD(v140[0]) = v107 ^ (v107 ^ (v103 << 7)) & 0x400 | 0x200;
              v140[52] = *(_QWORD *)(v33 + 184);
              if ( (v103 & 0x200) != 0 )
              {
                v140[42] = v108;
                goto LABEL_138;
              }
              if ( (v103 & 0x400) != 0 )
              {
                v140[41] = v108;
LABEL_138:
                v110 = *(_DWORD *)(v33 + 204);
                v109 = v107 ^ (v107 ^ (v103 << 7)) & 0x400 | 0x200;
                LODWORD(v140[0]) = v109 ^ ((unsigned __int8)v109 ^ (unsigned __int8)(v103 >> 7)) & 0x10;
                LODWORD(v140[49]) = v110;
              }
              StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                     v119,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v140,
                                     (struct COREDEVICEACCESS *)v143);
              if ( StandardAllocation >= 0 )
              {
                *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                         (__int64)Current,
                                         (DXGRESOURCEREFERENCE *)&v134,
                                         v140[1])
                          + 120LL) = v33;
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v134, v111);
                memmove(Src, *(const void **)(v33 + 104), *((unsigned int *)v10 + 8));
                *((_DWORD *)v10 + 17) = v140[1];
                v112 = v132;
                *(_DWORD *)v132 = HIDWORD(v140[6]);
                v112[4] = *((_DWORD *)v10 + 16);
                v56 = v126;
                *((_QWORD *)v112 + 1) = v126;
                *((_QWORD *)v10 + 2) = v112;
                *((_QWORD *)v10 + 3) = Src;
                *((_QWORD *)v10 + 5) = v127;
                *((_QWORD *)v10 + 7) = v56;
                goto LABEL_39;
              }
LABEL_57:
              if ( StandardAllocation < 0 )
                goto LABEL_108;
              goto LABEL_58;
            }
            v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v106, v54);
            v104[3] = v119;
            v104[4] = -1073741811LL;
          }
          else
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v119, v54);
            v104[3] = v119;
            v104[4] = *((unsigned int *)v10 + 8);
            v105 = *(unsigned int *)(v33 + 112);
LABEL_125:
            v104[5] = v105;
            v104[6] = -1073741811LL;
          }
          WdLogEvent5_WdWarning(v104);
          StandardAllocation = -1073741811;
          goto LABEL_108;
        }
        StandardAllocation = -1073741811;
        v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v119, v54);
        v113[3] = v119;
        v113[4] = 0LL;
        v113[5] = -1073741811LL;
      }
      WdLogEvent5_WdWarning(v113);
      goto LABEL_57;
    }
    v86 = WdLogNewEntry5_WdWarning(v41, 0xFFFFFFFFLL, v40);
    *(_QWORD *)(v86 + 24) = v119;
    v85 = -1073741675;
    *(_QWORD *)(v86 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v86);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
  }
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v129);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
  if ( v125 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v123);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
  if ( v118 )
  {
LABEL_93:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
  }
  return v85;
}

/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019FB3C
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B640 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C019F7B4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z@QEAA@XZ @ 0x1C019FB20 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPEN.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        int a4)
{
  bool v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rdi
  void *v10; // r12
  unsigned int *v11; // rsi
  ULONG64 v12; // rax
  struct DXGDEVICE *v13; // r15
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // r14d
  ULONG_PTR Count; // r13
  int v18; // ecx
  __int64 v19; // r9
  char v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  void *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int StandardAllocation; // r12d
  void *v29; // r13
  _QWORD *v30; // r8
  _DWORD *v31; // rdx
  _DWORD *v32; // rdx
  unsigned int i; // r10d
  char *v34; // rcx
  size_t v35; // r8
  char *v36; // rcx
  size_t v37; // r8
  __int64 v39; // r11
  ULONG64 v40; // r9
  _DWORD *v41; // rdx
  _DWORD *v42; // rdx
  _QWORD *v43; // rdx
  unsigned int v44; // esi
  int v45; // eax
  __int64 v46; // r8
  struct DXGPROCESS *v47; // r13
  unsigned int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // r8
  int v51; // edx
  struct DXGRESOURCE *v52; // rsi
  __int64 v53; // rdx
  unsigned int v54; // r14d
  unsigned int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // ecx
  unsigned int v62; // r8d
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // eax
  _DWORD *v66; // rcx
  char *v67; // rcx
  size_t v68; // r8
  char v69; // [rsp+50h] [rbp-3F8h]
  bool v70; // [rsp+51h] [rbp-3F7h]
  struct DXGDEVICE *v71; // [rsp+58h] [rbp-3F0h] BYREF
  __int64 v72; // [rsp+60h] [rbp-3E8h]
  struct DXGDEVICE *v73; // [rsp+68h] [rbp-3E0h] BYREF
  char v74[8]; // [rsp+70h] [rbp-3D8h] BYREF
  __int64 v75; // [rsp+78h] [rbp-3D0h]
  char v76; // [rsp+80h] [rbp-3C8h]
  int v77[2]; // [rsp+88h] [rbp-3C0h]
  void *v78; // [rsp+90h] [rbp-3B8h]
  void *Src; // [rsp+98h] [rbp-3B0h]
  unsigned int *v80; // [rsp+A0h] [rbp-3A8h]
  volatile signed __int32 *v81; // [rsp+A8h] [rbp-3A0h] BYREF
  struct _EX_RUNDOWN_REF *v82; // [rsp+B0h] [rbp-398h] BYREF
  ULONG64 v83; // [rsp+B8h] [rbp-390h]
  void *v84; // [rsp+C0h] [rbp-388h]
  _BYTE v85[16]; // [rsp+C8h] [rbp-380h] BYREF
  void *v86; // [rsp+D8h] [rbp-370h]
  struct DXGPROCESS *v87; // [rsp+E0h] [rbp-368h]
  _BYTE v88[24]; // [rsp+E8h] [rbp-360h] BYREF
  _OWORD v89[7]; // [rsp+100h] [rbp-348h] BYREF
  _BYTE v90[32]; // [rsp+170h] [rbp-2D8h] BYREF
  _QWORD v91[54]; // [rsp+190h] [rbp-2B8h] BYREF
  _DWORD v92[4]; // [rsp+340h] [rbp-108h] BYREF
  __int64 v93; // [rsp+350h] [rbp-F8h]
  _BYTE v94[160]; // [rsp+360h] [rbp-E8h] BYREF

  v77[0] = a4;
  v82 = a3;
  v83 = a1;
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v70 = v5;
  Current = DXGPROCESS::GetCurrent(1LL, v6, v7, v8);
  v87 = Current;
  v78 = 0LL;
  v10 = 0LL;
  v84 = 0LL;
  Src = 0LL;
  v69 = 0;
  if ( !Current )
  {
    v16 = -1073741811;
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
    return v16;
  }
  memset(v89, 0, 0x68uLL);
  v11 = (unsigned int *)v89;
  if ( v5 )
  {
    v12 = a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    v89[0] = *(_OWORD *)v12;
    v89[1] = *(_OWORD *)(v12 + 16);
    v89[2] = *(_OWORD *)(v12 + 32);
    v89[3] = *(_OWORD *)(v12 + 48);
    v89[4] = *(_OWORD *)(v12 + 64);
    v89[5] = *(_OWORD *)(v12 + 80);
    *(_QWORD *)&v89[6] = *(_QWORD *)(v12 + 96);
  }
  else
  {
    v11 = (unsigned int *)a1;
  }
  v80 = v11;
  v72 = *((_QWORD *)v11 + 9);
  v73 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v71, *v11, (struct _KTHREAD **)Current, &v73);
  v13 = v73;
  if ( !v73 )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(2LL, *v11, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_141:
    if ( v71 && _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
    return v16;
  }
  if ( !v11[16] && !v11[12] )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(3LL, v73, -1073741811LL);
    goto LABEL_141;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85,
    v73);
  v75 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
  v76 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, (__int64)v13, 2, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v94, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(3LL, v13, v15);
LABEL_138:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    if ( v76 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
    goto LABEL_141;
  }
  if ( !v82 )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(2LL, v13, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_138;
  }
  Count = v82[2].Count;
  if ( !Count )
  {
    v16 = -1073741811;
    WdLogSingleEntry3(3LL, v13, v82, -1073741811LL);
    goto LABEL_138;
  }
  v18 = *(_DWORD *)(Count + 12);
  if ( (v18 & 0x1000) != 0 && !v77[0] )
  {
    WdLogSingleEntry1(3LL, v82);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    if ( v76 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
    if ( v71 && _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
    return 3221225506LL;
  }
  v81 = 0LL;
  if ( (v18 & 0x10) != 0 )
  {
    v44 = -1073741823;
    WdLogSingleEntry2(4LL, Count, -1073741823LL);
  }
  else
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v88, Current);
    if ( v20 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v94);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v88, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
      v45 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v94, 0LL);
      v16 = v45;
      if ( v45 < 0 )
      {
        WdLogSingleEntry2(3LL, v13, v45);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v88);
        `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v81);
        goto LABEL_138;
      }
    }
    if ( 80 * (unsigned __int64)v11[4] <= 0xFFFFFFFF )
    {
      v21 = 80LL * v11[4];
      if ( !is_mul_ok(v11[4], 0x50uLL) )
        v21 = -1LL;
      v86 = (void *)operator new[](v21, 0x4B677844u, 256LL, v19);
      if ( !v86 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v13, v11[4], -1073741801LL);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v88);
        `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v81);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
        if ( v76 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
        if ( !v71 )
          return (unsigned int)StandardAllocation;
LABEL_53:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
        return (unsigned int)StandardAllocation;
      }
      v23 = v11[16];
      if ( v23 && (v10 = (void *)operator new[](v23, 0x4B677844u, 258LL, v22), (v84 = v10) == 0LL) )
      {
        v46 = v11[16];
      }
      else
      {
        if ( v11[12] )
        {
          v78 = (void *)operator new[](v11[12], 0x4B677844u, 258LL, v22);
          if ( !v78 )
          {
            v46 = v11[12];
            goto LABEL_93;
          }
        }
        v24 = v11[8];
        if ( !v24 )
        {
          v25 = Src;
          goto LABEL_23;
        }
        v25 = (void *)operator new[](v24, 0x4B677844u, 258LL, v22);
        Src = v25;
        if ( v25 )
        {
LABEL_23:
          if ( (*((_BYTE *)v13 + 1869) & 1) != 0
            || (v26 = *((_QWORD *)v13 + 2), *(_QWORD *)(Count + 80) == v26)
            && ((v27 = *((_QWORD *)v13 + 231)) == 0
             || *(_QWORD *)(v27 + 2800)
             || (v53 = *(_QWORD *)(Count + 96)) == 0
             || v53 == v27) )
          {
            if ( v70 )
            {
              *((_QWORD *)v11 + 9) = v10;
              *((_QWORD *)v11 + 7) = v78;
              *((_QWORD *)v11 + 5) = v25;
              *((_QWORD *)v11 + 3) = v86;
            }
            StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                   v13,
                                   (__int64)v11,
                                   0,
                                   (__int64)v82,
                                   0,
                                   (struct COREDEVICEACCESS *)v94,
                                   v77[0],
                                   0LL,
                                   0LL,
                                   0LL);
            if ( StandardAllocation < 0 )
            {
              WdLogSingleEntry1(3LL, 11455LL);
              goto LABEL_49;
            }
            v29 = v84;
LABEL_31:
            v69 = 1;
            if ( v70 )
            {
              v30 = (_QWORD *)v83;
              v31 = (_DWORD *)(v83 + 80);
              if ( v83 + 80 >= MmUserProbeAddress )
                v31 = (_DWORD *)MmUserProbeAddress;
              *v31 = v11[20];
              v32 = v30 + 8;
              if ( (unsigned __int64)(v30 + 8) >= MmUserProbeAddress )
                v32 = (_DWORD *)MmUserProbeAddress;
              *v32 = v11[16];
              for ( i = 0; i < v11[4]; ++i )
              {
                v39 = 80LL * i;
                *(_QWORD *)v77 = v72 + *(_DWORD *)(*((_QWORD *)v11 + 3) + v39 + 8) - v11[18];
                v40 = v39 + v30[3];
                v41 = (_DWORD *)v40;
                if ( v40 >= MmUserProbeAddress )
                  v41 = (_DWORD *)MmUserProbeAddress;
                *v41 = *(_DWORD *)(v39 + *((_QWORD *)v11 + 3));
                v42 = (_DWORD *)(v40 + 16);
                if ( v40 + 16 >= MmUserProbeAddress )
                  v42 = (_DWORD *)MmUserProbeAddress;
                *v42 = *(_DWORD *)(*((_QWORD *)v11 + 3) + v39 + 16);
                v43 = (_QWORD *)(v40 + 8);
                if ( v40 + 8 >= MmUserProbeAddress )
                  v43 = (_QWORD *)MmUserProbeAddress;
                *v43 = *(_QWORD *)v77;
                v13 = v73;
                v30 = (_QWORD *)v83;
              }
              if ( v11[8] )
              {
                v34 = (char *)v30[5];
                v35 = v11[8];
                if ( (unsigned __int64)&v34[v35] > MmUserProbeAddress || &v34[v35] <= v34 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v34, Src, v35);
                v13 = v73;
                v30 = (_QWORD *)v83;
              }
              if ( v11[12] )
              {
                v67 = (char *)v30[7];
                v68 = v11[12];
                if ( (unsigned __int64)&v67[v68] > MmUserProbeAddress || &v67[v68] <= v67 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v67, v78, v68);
                v13 = v73;
              }
              v69 = 1;
              if ( v11[16] )
              {
                v36 = *(char **)(v83 + 72);
                v37 = v11[16];
                if ( (unsigned __int64)&v36[v37] > MmUserProbeAddress || &v36[v37] <= v36 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v36, v29, v37);
                v69 = 1;
                v13 = v73;
              }
            }
LABEL_49:
            if ( StandardAllocation >= 0 )
              goto LABEL_50;
LABEL_94:
            if ( !v69 )
              goto LABEL_50;
            v47 = v87;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v90, v87);
            v48 = v11[20];
            v49 = (v48 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v49 < *((_DWORD *)v47 + 74) )
            {
              v50 = *((_QWORD *)v47 + 35);
              v51 = *(_DWORD *)(v50 + 16 * v49 + 8);
              if ( ((v48 >> 25) & 0x60) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x60)
                && (v51 & 0x2000) == 0
                && (v51 & 0x1F) != 0 )
              {
                if ( (v51 & 0x1F) == 4 )
                {
                  v52 = *(struct DXGRESOURCE **)(v50 + 16LL * (unsigned int)v49);
                  if ( v52 )
                    *(_DWORD *)(v50 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  goto LABEL_102;
                }
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
              }
            }
            v52 = 0LL;
LABEL_102:
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v90);
            DXGDEVICE::DestroyAllocationInternal(v13, 0LL, 0LL, v52, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_50:
            operator delete[](v84);
            operator delete[](v78);
            operator delete[](v86);
            operator delete[](Src);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v88);
            `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v81);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
            if ( v76 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
            if ( !v71 )
              return (unsigned int)StandardAllocation;
            goto LABEL_53;
          }
          v54 = *(_DWORD *)(Count + 12);
          if ( (v54 & 0x20) == 0 )
          {
            StandardAllocation = -1073741811;
            WdLogSingleEntry3(3LL, v13, v82, -1073741811LL);
            goto LABEL_49;
          }
          v55 = *(_DWORD *)(Count + 132);
          v56 = v11[4];
          if ( v55 != v56 )
          {
            v57 = v55;
            v58 = v56;
LABEL_112:
            WdLogSingleEntry4(3LL, v13, v58, v57, -1073741811LL);
LABEL_114:
            StandardAllocation = -1073741811;
            goto LABEL_94;
          }
          v59 = v11[8];
          v60 = *(unsigned int *)(Count + 112);
          v77[0] = v60;
          if ( (_DWORD)v59 != (_DWORD)v60 )
          {
            v57 = v60;
            v58 = v59;
            goto LABEL_112;
          }
          v61 = *(_DWORD *)(Count + 216);
          if ( !v61 && *(_DWORD *)(*(_QWORD *)(v26 + 16) + 1968LL) < 0x5000u )
          {
            WdLogSingleEntry2(3LL, v13, -1073741811LL);
            goto LABEL_114;
          }
          v93 = 0LL;
          v92[2] = v61;
          v92[0] = *(_DWORD *)(Count + 208);
          v92[1] = *(_DWORD *)(Count + 212);
          v92[3] = 7;
          memset(v91, 0, 0x1A8uLL);
          v62 = v91[0] & 0xFFFFBEFF | (4 * (v54 & 0x40 | (32 * (v54 & 0x80)))) | 0x41;
          HIDWORD(v91[0]) = *v11;
          LODWORD(v91[2]) = 4;
          v91[3] = v92;
          v91[39] = *(_QWORD *)(Count + 104);
          LODWORD(v91[40]) = v77[0];
          v63 = *(_QWORD *)(Count + 192);
          if ( (v54 & 0x200) != 0 )
            v91[42] = *(_QWORD *)(Count + 192);
          else
            v91[41] = *(_QWORD *)(Count + 192);
          v91[43] = *(_QWORD *)(Count + 224);
          LODWORD(v91[6]) = *(_DWORD *)(Count + 232);
          v91[44] = v78;
          LODWORD(v91[45]) = v11[12];
          v91[46] = v10;
          LODWORD(v91[47]) = v11[16];
          LODWORD(v91[0]) = v62 ^ (v62 ^ (v54 << 7)) & 0x400 | 0x200;
          v91[52] = *(_QWORD *)(Count + 184);
          if ( (v54 & 0x200) != 0 )
          {
            v91[42] = v63;
          }
          else
          {
            if ( (v54 & 0x400) == 0 )
            {
LABEL_126:
              StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                     v13,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v91,
                                     (struct COREDEVICEACCESS *)v94);
              if ( StandardAllocation < 0 )
                goto LABEL_49;
              *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v87, (DXGRESOURCEREFERENCE *)&v82, v91[1])
                        + 128LL) = Count;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v82);
              memmove(Src, *(const void **)(Count + 104), v11[8]);
              v11[20] = v91[1];
              v66 = v86;
              *(_DWORD *)v86 = HIDWORD(v91[6]);
              v66[4] = v11[16];
              v29 = v84;
              *((_QWORD *)v66 + 1) = v84;
              *((_QWORD *)v11 + 3) = v66;
              *((_QWORD *)v11 + 5) = Src;
              *((_QWORD *)v11 + 7) = v78;
              *((_QWORD *)v11 + 9) = v29;
              goto LABEL_31;
            }
            v91[41] = v63;
          }
          v65 = *(_DWORD *)(Count + 204);
          v64 = v62 ^ (v62 ^ (v54 << 7)) & 0x400 | 0x200;
          LODWORD(v91[0]) = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)(v54 >> 7)) & 0x10;
          LODWORD(v91[49]) = v65;
          goto LABEL_126;
        }
        v46 = v11[8];
      }
LABEL_93:
      StandardAllocation = -1073741801;
      WdLogSingleEntry3(3LL, v13, v46, -1073741801LL);
      goto LABEL_94;
    }
    v44 = -1073741675;
    WdLogSingleEntry2(3LL, v13, -1073741675LL);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v88);
  }
  `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v81);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
  if ( v76 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
  if ( v71 && _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
  return v44;
}

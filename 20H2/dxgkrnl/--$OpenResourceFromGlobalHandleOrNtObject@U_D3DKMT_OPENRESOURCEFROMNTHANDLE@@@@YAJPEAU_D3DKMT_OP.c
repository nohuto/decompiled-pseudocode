/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0119594
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0117DC0 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005770 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A15C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024768 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00247D8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F60C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0111200 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01165A8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C0119CC4 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_2_--ENSURE_SHARED_R.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0119CE0 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        int a4)
{
  bool v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  PVOID v10; // r15
  char v11; // r12
  unsigned int *v12; // rdi
  ULONG64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r14
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r13
  ULONG_PTR Count; // r13
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  SIZE_T v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  void *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int StandardAllocation; // r15d
  void *v44; // r13
  _QWORD *v45; // r8
  _DWORD *v46; // rdx
  _DWORD *v47; // rdx
  unsigned int v48; // r10d
  __int64 v49; // r12
  char *v50; // rcx
  size_t v51; // r8
  char *v52; // rcx
  size_t v53; // r8
  __int64 v55; // r11
  ULONG64 v56; // r9
  _DWORD *v57; // rdx
  _DWORD *v58; // rdx
  _QWORD *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  unsigned int v66; // edi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  struct DXGPROCESS *v74; // r13
  unsigned int v75; // r9d
  unsigned int v76; // ecx
  __int64 v77; // r8
  int v78; // edx
  __int64 v79; // rdx
  __int64 v80; // rax
  struct DXGRESOURCE *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // r8
  unsigned int v84; // r15d
  _QWORD *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  unsigned int v88; // r8d
  __int64 v89; // rdx
  int v90; // ecx
  int v91; // eax
  __int64 v92; // rdx
  _DWORD *v93; // rcx
  _QWORD *v94; // rax
  char *v95; // rcx
  size_t v96; // r8
  __int64 v97; // rax
  bool v98; // [rsp+50h] [rbp-408h]
  struct DXGDEVICE *v99; // [rsp+58h] [rbp-400h] BYREF
  struct DXGDEVICE *v100; // [rsp+60h] [rbp-3F8h] BYREF
  int v101; // [rsp+70h] [rbp-3E8h]
  void *v102; // [rsp+78h] [rbp-3E0h]
  void *Src; // [rsp+80h] [rbp-3D8h]
  struct _EX_RUNDOWN_REF *v104; // [rsp+88h] [rbp-3D0h] BYREF
  char v105[8]; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v106; // [rsp+98h] [rbp-3C0h]
  char v107; // [rsp+A0h] [rbp-3B8h]
  unsigned int *v108; // [rsp+A8h] [rbp-3B0h]
  void *v109; // [rsp+B0h] [rbp-3A8h]
  __int64 v110; // [rsp+B8h] [rbp-3A0h] BYREF
  ULONG64 v111; // [rsp+C0h] [rbp-398h]
  _BYTE v112[16]; // [rsp+C8h] [rbp-390h] BYREF
  int v113; // [rsp+D8h] [rbp-380h]
  void *v114; // [rsp+E0h] [rbp-378h]
  __int64 v115; // [rsp+E8h] [rbp-370h]
  struct DXGPROCESS *v116; // [rsp+F0h] [rbp-368h]
  _BYTE v117[24]; // [rsp+F8h] [rbp-360h] BYREF
  _OWORD v118[7]; // [rsp+110h] [rbp-348h] BYREF
  _BYTE v119[32]; // [rsp+180h] [rbp-2D8h] BYREF
  _QWORD v120[54]; // [rsp+1A0h] [rbp-2B8h] BYREF
  _DWORD v121[4]; // [rsp+350h] [rbp-108h] BYREF
  __int64 v122; // [rsp+360h] [rbp-F8h]
  _BYTE v123[160]; // [rsp+370h] [rbp-E8h] BYREF

  v113 = a4;
  v104 = a3;
  v111 = a1;
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v98 = v5;
  Current = DXGPROCESS::GetCurrent(1LL, v6);
  v116 = Current;
  v102 = 0LL;
  v10 = 0LL;
  v109 = 0LL;
  Src = 0LL;
  v11 = 0;
  if ( !Current )
  {
    v60 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v60 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v60);
    return 3221225485LL;
  }
  memset(v118, 0, 0x68uLL);
  v12 = (unsigned int *)v118;
  if ( v5 )
  {
    v13 = a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v118[0] = *(_OWORD *)v13;
    v118[1] = *(_OWORD *)(v13 + 16);
    v118[2] = *(_OWORD *)(v13 + 32);
    v118[3] = *(_OWORD *)(v13 + 48);
    v118[4] = *(_OWORD *)(v13 + 64);
    v118[5] = *(_OWORD *)(v13 + 80);
    *(_QWORD *)&v118[6] = *(_QWORD *)(v13 + 96);
  }
  else
  {
    v12 = (unsigned int *)a1;
  }
  v108 = v12;
  v115 = *((_QWORD *)v12 + 9);
  v100 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v99, *v12, (struct _KTHREAD **)Current, &v100);
  v17 = v100;
  if ( !v100 )
  {
    v61 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v61 + 24) = *v12;
    *(_QWORD *)(v61 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v61);
LABEL_140:
    if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
    return 3221225485LL;
  }
  if ( !v12[16] && !v12[12] )
  {
    v62 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v62 + 24) = v17;
    *(_QWORD *)(v62 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v62);
    goto LABEL_140;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v112,
    v100);
  v106 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  v107 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v123, (__int64)v17, 2, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v123, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    if ( v104 )
    {
      Count = v104[2].Count;
      if ( Count )
      {
        v110 = 0LL;
        if ( (*(_DWORD *)(Count + 12) & 0x10) != 0 )
        {
          v65 = WdLogNewEntry5_WdEvent(v21, v20);
          *(_QWORD *)(v65 + 24) = Count;
          v66 = -1073741823;
          *(_QWORD *)(v65 + 32) = -1073741823LL;
          WdLogEvent5_WdEvent(v65);
        }
        else
        {
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v117, Current);
          if ( (_BYTE)v26 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v123, v25);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v117, 1LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
            v101 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v123, 0LL);
            if ( v101 < 0 )
            {
              v70 = WdLogNewEntry5_WdWarning(v69, v68, v26);
              *(_QWORD *)(v70 + 24) = v17;
              v66 = v101;
              *(_QWORD *)(v70 + 32) = v101;
              WdLogEvent5_WdWarning(v70);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v117);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v110);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
              if ( v107 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v112);
              if ( !v99 )
                return v66;
              goto LABEL_79;
            }
          }
          v27 = v12[4];
          if ( 80 * v27 <= 0xFFFFFFFF )
          {
            v28 = 80LL * v12[4];
            if ( !is_mul_ok(v27, 0x50uLL) )
              v28 = -1LL;
            v114 = operator new[](v28, 0x4B677844u, PagedPool);
            if ( !v114 )
            {
              v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
              v71[3] = v17;
              v71[4] = v12[4];
              StandardAllocation = -1073741801;
              v71[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v71);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v117);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v110);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
              if ( v107 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v112);
              if ( !v99 )
                return (unsigned int)StandardAllocation;
LABEL_52:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
              return (unsigned int)StandardAllocation;
            }
            v32 = v12[16];
            if ( v32 && (v10 = operator new[](v32, 0x4B677844u, PagedPool), (v109 = v10) == 0LL) )
            {
              v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v29, v34);
              v72[3] = v17;
              v73 = v12[16];
            }
            else
            {
              if ( v12[12] )
              {
                v102 = operator new[](v12[12], 0x4B677844u, PagedPool);
                if ( !v102 )
                {
                  v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v29, v83);
                  v72[3] = v17;
                  v73 = v12[12];
                  goto LABEL_93;
                }
              }
              v35 = v12[8];
              if ( !v35 )
              {
                v36 = Src;
                goto LABEL_22;
              }
              v36 = operator new[](v35, 0x4B677844u, PagedPool);
              Src = v36;
              if ( v36 )
              {
LABEL_22:
                if ( (*((_BYTE *)v17 + 1869) & 1) != 0
                  || (v38 = *((_QWORD *)v17 + 2), *(_QWORD *)(Count + 80) == v38)
                  && ((v39 = *((_QWORD *)v17 + 231)) == 0 || *(_QWORD *)(v39 + 2704) || *(_QWORD *)(Count + 96) == v39) )
                {
                  if ( v98 )
                  {
                    *((_QWORD *)v12 + 9) = v10;
                    *((_QWORD *)v12 + 7) = v102;
                    *((_QWORD *)v12 + 5) = v36;
                    *((_QWORD *)v12 + 3) = v114;
                  }
                  StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                         v17,
                                         0,
                                         (struct COREDEVICEACCESS *)v123,
                                         v113,
                                         0LL,
                                         0LL,
                                         0LL);
                  if ( StandardAllocation >= 0 )
                  {
                    v44 = v109;
LABEL_30:
                    v11 = 1;
                    if ( v98 )
                    {
                      v45 = (_QWORD *)v111;
                      v46 = (_DWORD *)(v111 + 80);
                      if ( v111 + 80 >= MmUserProbeAddress )
                        v46 = (_DWORD *)MmUserProbeAddress;
                      *v46 = v12[20];
                      v47 = v45 + 8;
                      if ( (unsigned __int64)(v45 + 8) >= MmUserProbeAddress )
                        v47 = (_DWORD *)MmUserProbeAddress;
                      *v47 = v12[16];
                      v48 = 0;
                      v49 = v115;
                      while ( v48 < v12[4] )
                      {
                        v55 = 80LL * v48;
                        v115 = v49 + *(_DWORD *)(*((_QWORD *)v12 + 3) + v55 + 8) - v12[18];
                        v56 = v55 + v45[3];
                        v57 = (_DWORD *)v56;
                        if ( v56 >= MmUserProbeAddress )
                          v57 = (_DWORD *)MmUserProbeAddress;
                        *v57 = *(_DWORD *)(v55 + *((_QWORD *)v12 + 3));
                        v58 = (_DWORD *)(v56 + 16);
                        if ( v56 + 16 >= MmUserProbeAddress )
                          v58 = (_DWORD *)MmUserProbeAddress;
                        *v58 = *(_DWORD *)(*((_QWORD *)v12 + 3) + v55 + 16);
                        v59 = (_QWORD *)(v56 + 8);
                        if ( v56 + 8 >= MmUserProbeAddress )
                          v59 = (_QWORD *)MmUserProbeAddress;
                        *v59 = v115;
                        ++v48;
                        v17 = v100;
                        v45 = (_QWORD *)v111;
                      }
                      if ( v12[8] )
                      {
                        v50 = (char *)v45[5];
                        v51 = v12[8];
                        if ( (unsigned __int64)&v50[v51] > MmUserProbeAddress || &v50[v51] <= v50 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v50, Src, v51);
                        v17 = v100;
                        v45 = (_QWORD *)v111;
                      }
                      if ( v12[12] )
                      {
                        v95 = (char *)v45[7];
                        v96 = v12[12];
                        if ( (unsigned __int64)&v95[v96] > MmUserProbeAddress || &v95[v96] <= v95 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v95, v102, v96);
                        v17 = v100;
                      }
                      v11 = 1;
                      if ( v12[16] )
                      {
                        v52 = *(char **)(v111 + 72);
                        v53 = v12[16];
                        if ( (unsigned __int64)&v52[v53] > MmUserProbeAddress || &v52[v53] <= v52 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v52, v44, v53);
                        v11 = 1;
                        v17 = v100;
                      }
                    }
LABEL_48:
                    if ( StandardAllocation >= 0 )
                      goto LABEL_49;
LABEL_94:
                    if ( !v11 )
                      goto LABEL_49;
                    v74 = v116;
                    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                      (DXGHANDLETABLELOCKEXCLUSIVE *)v119,
                      (struct _KTHREAD **)v116);
                    v75 = v12[20];
                    v76 = (v75 >> 6) & 0xFFFFFF;
                    if ( v76 < *((_DWORD *)v74 + 64) )
                    {
                      v77 = *((_QWORD *)v74 + 30);
                      v78 = *(_DWORD *)(v77 + 16LL * v76 + 8);
                      if ( ((v75 >> 25) & 0x60) == (v78 & 0x60) && (v78 & 0x2000) == 0 && (v78 & 0x1F) != 0 )
                      {
                        v79 = v78 & 0x1F;
                        if ( (_BYTE)v79 == 4 )
                        {
                          v81 = *(struct DXGRESOURCE **)(v77 + 16LL * v76);
                          if ( v81 )
                            *(_DWORD *)(v77 + 16 * (((unsigned __int64)v75 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                          goto LABEL_102;
                        }
                        v80 = WdLogNewEntry5_WdError(0x2000LL, v79);
                        *(_QWORD *)(v80 + 24) = 267LL;
                        WdLogEvent5_WdError(v80);
                      }
                    }
                    v81 = 0LL;
LABEL_102:
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v119);
                    DXGDEVICE::DestroyAllocationInternal(v17, 0, 0LL, v81, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_49:
                    operator delete[](v109);
                    operator delete[](v102);
                    operator delete[](v114);
                    operator delete[](Src);
                    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v117);
                    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v110);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
                    if ( v107 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v112);
                    if ( !v99 )
                      return (unsigned int)StandardAllocation;
                    goto LABEL_52;
                  }
                  v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
                  v94[3] = 11148LL;
                }
                else
                {
                  v84 = *(_DWORD *)(Count + 12);
                  if ( (v84 & 0x20) != 0 )
                  {
                    if ( *(_DWORD *)(Count + 132) != v12[4] )
                    {
                      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v29, v38);
                      v85[3] = v17;
                      v85[4] = v12[4];
                      v86 = *(unsigned int *)(Count + 132);
LABEL_111:
                      v85[5] = v86;
                      v85[6] = -1073741811LL;
LABEL_113:
                      WdLogEvent5_WdWarning(v85);
                      StandardAllocation = -1073741811;
                      goto LABEL_94;
                    }
                    v101 = *(_DWORD *)(Count + 112);
                    if ( v12[8] != v101 )
                    {
                      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v29, v38);
                      v85[3] = v17;
                      v85[4] = v12[8];
                      v86 = *(unsigned int *)(Count + 112);
                      goto LABEL_111;
                    }
                    v87 = *(unsigned int *)(Count + 216);
                    if ( !(_DWORD)v87 && *(_DWORD *)(*(_QWORD *)(v38 + 16) + 1872LL) < 0x5000u )
                    {
                      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v87, v38);
                      v85[3] = v17;
                      v85[4] = -1073741811LL;
                      goto LABEL_113;
                    }
                    v122 = 0LL;
                    v121[2] = v87;
                    v121[0] = *(_DWORD *)(Count + 208);
                    v121[1] = *(_DWORD *)(Count + 212);
                    v121[3] = 7;
                    memset(v120, 0, 0x1A8uLL);
                    v88 = v120[0] & 0xFFFFBEFF | (4 * (v84 & 0x40 | (32 * (v84 & 0x80)))) | 0x41;
                    HIDWORD(v120[0]) = *v12;
                    LODWORD(v120[2]) = 4;
                    v120[3] = v121;
                    v120[39] = *(_QWORD *)(Count + 104);
                    LODWORD(v120[40]) = v101;
                    v89 = *(_QWORD *)(Count + 192);
                    if ( (v84 & 0x200) != 0 )
                      v120[42] = *(_QWORD *)(Count + 192);
                    else
                      v120[41] = *(_QWORD *)(Count + 192);
                    v120[43] = *(_QWORD *)(Count + 224);
                    LODWORD(v120[6]) = *(_DWORD *)(Count + 232);
                    v120[44] = v102;
                    LODWORD(v120[45]) = v12[12];
                    v120[46] = v109;
                    LODWORD(v120[47]) = v12[16];
                    LODWORD(v120[0]) = v88 ^ (v88 ^ (v84 << 7)) & 0x400 | 0x200;
                    v120[52] = *(_QWORD *)(Count + 184);
                    if ( (v84 & 0x200) != 0 )
                    {
                      v120[42] = v89;
                    }
                    else
                    {
                      if ( (v84 & 0x400) == 0 )
                      {
LABEL_125:
                        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                               (struct _DXGK_ALLOCATIONINFO *)v17,
                                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v120,
                                               (struct COREDEVICEACCESS *)v123);
                        if ( StandardAllocation < 0 )
                          goto LABEL_48;
                        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                                 (__int64)v116,
                                                 (DXGRESOURCEREFERENCE *)&v104,
                                                 v120[1])
                                  + 120LL) = Count;
                        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v104, v92);
                        memmove(Src, *(const void **)(Count + 104), v12[8]);
                        v12[20] = v120[1];
                        v93 = v114;
                        *(_DWORD *)v114 = HIDWORD(v120[6]);
                        v93[4] = v12[16];
                        v44 = v109;
                        *((_QWORD *)v93 + 1) = v109;
                        *((_QWORD *)v12 + 3) = v93;
                        *((_QWORD *)v12 + 5) = Src;
                        *((_QWORD *)v12 + 7) = v102;
                        *((_QWORD *)v12 + 9) = v44;
                        goto LABEL_30;
                      }
                      v120[41] = v89;
                    }
                    v91 = *(_DWORD *)(Count + 204);
                    v90 = v88 ^ (v88 ^ (v84 << 7)) & 0x400 | 0x200;
                    LODWORD(v120[0]) = v90 ^ ((unsigned __int8)v90 ^ (unsigned __int8)(v84 >> 7)) & 0x10;
                    LODWORD(v120[49]) = v91;
                    goto LABEL_125;
                  }
                  StandardAllocation = -1073741811;
                  v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v29, v38);
                  v94[3] = v17;
                  v94[4] = v104;
                  v94[5] = -1073741811LL;
                }
                WdLogEvent5_WdWarning(v94);
                goto LABEL_48;
              }
              v72 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v29, v37);
              v72[3] = v17;
              v73 = v12[8];
            }
LABEL_93:
            v72[4] = v73;
            StandardAllocation = -1073741801;
            v72[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v72);
            goto LABEL_94;
          }
          v67 = WdLogNewEntry5_WdWarning(v27, 0xFFFFFFFFLL, v26);
          *(_QWORD *)(v67 + 24) = v17;
          v66 = -1073741675;
          *(_QWORD *)(v67 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v67);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v117);
        }
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v110);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
        if ( v107 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v112);
        if ( !v99 )
          return v66;
LABEL_79:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
        return v66;
      }
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v64[3] = v17;
      v64[4] = v104;
      v64[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v64);
    }
    else
    {
      v97 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v97 + 24) = v17;
      *(_QWORD *)(v97 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v97);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
    if ( v107 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v112);
    goto LABEL_140;
  }
  v63 = WdLogNewEntry5_WdWarning(v21, v20, v22);
  *(_QWORD *)(v63 + 24) = v17;
  *(_QWORD *)(v63 + 32) = v23;
  WdLogEvent5_WdWarning(v63);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
  if ( v107 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v112);
  if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
  return (unsigned int)v23;
}

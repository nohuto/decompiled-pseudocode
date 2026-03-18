/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01237E4
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0122010 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AAC0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0011BB8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00247E4 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024854 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01187B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01207F8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C0123F14 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_2_--ENSURE_SHARED_R.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0123F30 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
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
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  SIZE_T v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  void *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int StandardAllocation; // r15d
  void *v43; // r13
  _QWORD *v44; // r8
  _DWORD *v45; // rdx
  _DWORD *v46; // rdx
  unsigned int v47; // r10d
  __int64 v48; // r12
  char *v49; // rcx
  size_t v50; // r8
  char *v51; // rcx
  size_t v52; // r8
  __int64 v54; // r11
  ULONG64 v55; // r9
  _DWORD *v56; // rdx
  _DWORD *v57; // rdx
  _QWORD *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  unsigned int v65; // edi
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rcx
  struct DXGPROCESS *v73; // r13
  unsigned int v74; // r9d
  unsigned int v75; // ecx
  __int64 v76; // r8
  int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rax
  struct DXGRESOURCE *v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned int v83; // r15d
  _QWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  unsigned int v87; // r8d
  __int64 v88; // rdx
  int v89; // ecx
  int v90; // eax
  __int64 v91; // rdx
  _DWORD *v92; // rcx
  _QWORD *v93; // rax
  char *v94; // rcx
  size_t v95; // r8
  __int64 v96; // rax
  bool v97; // [rsp+50h] [rbp-408h]
  struct DXGDEVICE *v98; // [rsp+58h] [rbp-400h] BYREF
  struct DXGDEVICE *v99; // [rsp+60h] [rbp-3F8h] BYREF
  int v100; // [rsp+70h] [rbp-3E8h]
  void *v101; // [rsp+78h] [rbp-3E0h]
  void *Src; // [rsp+80h] [rbp-3D8h]
  struct _EX_RUNDOWN_REF *v103; // [rsp+88h] [rbp-3D0h] BYREF
  char v104[8]; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v105; // [rsp+98h] [rbp-3C0h]
  char v106; // [rsp+A0h] [rbp-3B8h]
  unsigned int *v107; // [rsp+A8h] [rbp-3B0h]
  void *v108; // [rsp+B0h] [rbp-3A8h]
  __int64 v109; // [rsp+B8h] [rbp-3A0h] BYREF
  ULONG64 v110; // [rsp+C0h] [rbp-398h]
  _BYTE v111[16]; // [rsp+C8h] [rbp-390h] BYREF
  int v112; // [rsp+D8h] [rbp-380h]
  void *v113; // [rsp+E0h] [rbp-378h]
  __int64 v114; // [rsp+E8h] [rbp-370h]
  struct DXGPROCESS *v115; // [rsp+F0h] [rbp-368h]
  _BYTE v116[24]; // [rsp+F8h] [rbp-360h] BYREF
  _OWORD v117[7]; // [rsp+110h] [rbp-348h] BYREF
  _BYTE v118[32]; // [rsp+180h] [rbp-2D8h] BYREF
  _QWORD v119[54]; // [rsp+1A0h] [rbp-2B8h] BYREF
  _DWORD v120[4]; // [rsp+350h] [rbp-108h] BYREF
  __int64 v121; // [rsp+360h] [rbp-F8h]
  _BYTE v122[160]; // [rsp+370h] [rbp-E8h] BYREF

  v112 = a4;
  v103 = a3;
  v110 = a1;
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v97 = v5;
  Current = DXGPROCESS::GetCurrent(1LL, v6);
  v115 = Current;
  v101 = 0LL;
  v10 = 0LL;
  v108 = 0LL;
  Src = 0LL;
  v11 = 0;
  if ( !Current )
  {
    v59 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v59 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v59);
    return 3221225485LL;
  }
  memset(v117, 0, 0x68uLL);
  v12 = (unsigned int *)v117;
  if ( v5 )
  {
    v13 = a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v117[0] = *(_OWORD *)v13;
    v117[1] = *(_OWORD *)(v13 + 16);
    v117[2] = *(_OWORD *)(v13 + 32);
    v117[3] = *(_OWORD *)(v13 + 48);
    v117[4] = *(_OWORD *)(v13 + 64);
    v117[5] = *(_OWORD *)(v13 + 80);
    *(_QWORD *)&v117[6] = *(_QWORD *)(v13 + 96);
  }
  else
  {
    v12 = (unsigned int *)a1;
  }
  v107 = v12;
  v114 = *((_QWORD *)v12 + 9);
  v99 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v98, *v12, (struct _KTHREAD **)Current, &v99);
  v17 = v99;
  if ( !v99 )
  {
    v60 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v60 + 24) = *v12;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v60);
LABEL_140:
    if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
    return 3221225485LL;
  }
  if ( !v12[16] && !v12[12] )
  {
    v61 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v61 + 24) = v17;
    *(_QWORD *)(v61 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v61);
    goto LABEL_140;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111,
    v99);
  v105 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  v106 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v122, (__int64)v17, 2, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v122, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    if ( v103 )
    {
      Count = v103[2].Count;
      if ( Count )
      {
        v109 = 0LL;
        if ( (*(_DWORD *)(Count + 12) & 0x10) != 0 )
        {
          v64 = WdLogNewEntry5_WdEvent(v21, v20);
          *(_QWORD *)(v64 + 24) = Count;
          v65 = -1073741823;
          *(_QWORD *)(v64 + 32) = -1073741823LL;
          WdLogEvent5_WdEvent(v64);
        }
        else
        {
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v116, Current);
          if ( (_BYTE)v25 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v122);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v116, 1LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
            v100 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v122, 0LL);
            if ( v100 < 0 )
            {
              v69 = WdLogNewEntry5_WdWarning(v68, v67, v25);
              *(_QWORD *)(v69 + 24) = v17;
              v65 = v100;
              *(_QWORD *)(v69 + 32) = v100;
              WdLogEvent5_WdWarning(v69);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
              if ( v106 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
              if ( !v98 )
                return v65;
              goto LABEL_79;
            }
          }
          v26 = v12[4];
          if ( 80 * v26 <= 0xFFFFFFFF )
          {
            v27 = 80LL * v12[4];
            if ( !is_mul_ok(v26, 0x50uLL) )
              v27 = -1LL;
            v113 = operator new[](v27, 0x4B677844u, PagedPool);
            if ( !v113 )
            {
              v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
              v70[3] = v17;
              v70[4] = v12[4];
              StandardAllocation = -1073741801;
              v70[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v70);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
              if ( v106 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
              if ( !v98 )
                return (unsigned int)StandardAllocation;
LABEL_52:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
              return (unsigned int)StandardAllocation;
            }
            v31 = v12[16];
            if ( v31 && (v10 = operator new[](v31, 0x4B677844u, PagedPool), (v108 = v10) == 0LL) )
            {
              v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v28, v33);
              v71[3] = v17;
              v72 = v12[16];
            }
            else
            {
              if ( v12[12] )
              {
                v101 = operator new[](v12[12], 0x4B677844u, PagedPool);
                if ( !v101 )
                {
                  v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v28, v82);
                  v71[3] = v17;
                  v72 = v12[12];
                  goto LABEL_93;
                }
              }
              v34 = v12[8];
              if ( !v34 )
              {
                v35 = Src;
                goto LABEL_22;
              }
              v35 = operator new[](v34, 0x4B677844u, PagedPool);
              Src = v35;
              if ( v35 )
              {
LABEL_22:
                if ( (*((_BYTE *)v17 + 1869) & 1) != 0
                  || (v37 = *((_QWORD *)v17 + 2), *(_QWORD *)(Count + 80) == v37)
                  && ((v38 = *((_QWORD *)v17 + 231)) == 0 || *(_QWORD *)(v38 + 2680) || *(_QWORD *)(Count + 96) == v38) )
                {
                  if ( v97 )
                  {
                    *((_QWORD *)v12 + 9) = v10;
                    *((_QWORD *)v12 + 7) = v101;
                    *((_QWORD *)v12 + 5) = v35;
                    *((_QWORD *)v12 + 3) = v113;
                  }
                  StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                         v17,
                                         0,
                                         (struct COREDEVICEACCESS *)v122,
                                         v112,
                                         0LL,
                                         0LL,
                                         0LL);
                  if ( StandardAllocation >= 0 )
                  {
                    v43 = v108;
LABEL_30:
                    v11 = 1;
                    if ( v97 )
                    {
                      v44 = (_QWORD *)v110;
                      v45 = (_DWORD *)(v110 + 80);
                      if ( v110 + 80 >= MmUserProbeAddress )
                        v45 = (_DWORD *)MmUserProbeAddress;
                      *v45 = v12[20];
                      v46 = v44 + 8;
                      if ( (unsigned __int64)(v44 + 8) >= MmUserProbeAddress )
                        v46 = (_DWORD *)MmUserProbeAddress;
                      *v46 = v12[16];
                      v47 = 0;
                      v48 = v114;
                      while ( v47 < v12[4] )
                      {
                        v54 = 80LL * v47;
                        v114 = v48 + *(_DWORD *)(*((_QWORD *)v12 + 3) + v54 + 8) - v12[18];
                        v55 = v54 + v44[3];
                        v56 = (_DWORD *)v55;
                        if ( v55 >= MmUserProbeAddress )
                          v56 = (_DWORD *)MmUserProbeAddress;
                        *v56 = *(_DWORD *)(v54 + *((_QWORD *)v12 + 3));
                        v57 = (_DWORD *)(v55 + 16);
                        if ( v55 + 16 >= MmUserProbeAddress )
                          v57 = (_DWORD *)MmUserProbeAddress;
                        *v57 = *(_DWORD *)(*((_QWORD *)v12 + 3) + v54 + 16);
                        v58 = (_QWORD *)(v55 + 8);
                        if ( v55 + 8 >= MmUserProbeAddress )
                          v58 = (_QWORD *)MmUserProbeAddress;
                        *v58 = v114;
                        ++v47;
                        v17 = v99;
                        v44 = (_QWORD *)v110;
                      }
                      if ( v12[8] )
                      {
                        v49 = (char *)v44[5];
                        v50 = v12[8];
                        if ( (unsigned __int64)&v49[v50] > MmUserProbeAddress || &v49[v50] <= v49 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v49, Src, v50);
                        v17 = v99;
                        v44 = (_QWORD *)v110;
                      }
                      if ( v12[12] )
                      {
                        v94 = (char *)v44[7];
                        v95 = v12[12];
                        if ( (unsigned __int64)&v94[v95] > MmUserProbeAddress || &v94[v95] <= v94 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v94, v101, v95);
                        v17 = v99;
                      }
                      v11 = 1;
                      if ( v12[16] )
                      {
                        v51 = *(char **)(v110 + 72);
                        v52 = v12[16];
                        if ( (unsigned __int64)&v51[v52] > MmUserProbeAddress || &v51[v52] <= v51 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v51, v43, v52);
                        v11 = 1;
                        v17 = v99;
                      }
                    }
LABEL_48:
                    if ( StandardAllocation >= 0 )
                      goto LABEL_49;
LABEL_94:
                    if ( !v11 )
                      goto LABEL_49;
                    v73 = v115;
                    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                      (DXGHANDLETABLELOCKEXCLUSIVE *)v118,
                      (struct _KTHREAD **)v115);
                    v74 = v12[20];
                    v75 = (v74 >> 6) & 0xFFFFFF;
                    if ( v75 < *((_DWORD *)v73 + 64) )
                    {
                      v76 = *((_QWORD *)v73 + 30);
                      v77 = *(_DWORD *)(v76 + 16LL * v75 + 8);
                      if ( ((v74 >> 25) & 0x60) == (v77 & 0x60) && (v77 & 0x2000) == 0 && (v77 & 0x1F) != 0 )
                      {
                        v78 = v77 & 0x1F;
                        if ( (_BYTE)v78 == 4 )
                        {
                          v80 = *(struct DXGRESOURCE **)(v76 + 16LL * v75);
                          if ( v80 )
                            *(_DWORD *)(v76 + 16 * (((unsigned __int64)v74 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                          goto LABEL_102;
                        }
                        v79 = WdLogNewEntry5_WdError(0x2000LL, v78);
                        *(_QWORD *)(v79 + 24) = 267LL;
                        WdLogEvent5_WdError(v79);
                      }
                    }
                    v80 = 0LL;
LABEL_102:
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
                    DXGDEVICE::DestroyAllocationInternal(v17, 0, 0LL, v80, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_49:
                    operator delete[](v108);
                    operator delete[](v101);
                    operator delete[](v113);
                    operator delete[](Src);
                    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
                    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
                    if ( v106 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
                    if ( !v98 )
                      return (unsigned int)StandardAllocation;
                    goto LABEL_52;
                  }
                  v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
                  v93[3] = 11001LL;
                }
                else
                {
                  v83 = *(_DWORD *)(Count + 12);
                  if ( (v83 & 0x20) != 0 )
                  {
                    if ( *(_DWORD *)(Count + 132) != v12[4] )
                    {
                      v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v28, v37);
                      v84[3] = v17;
                      v84[4] = v12[4];
                      v85 = *(unsigned int *)(Count + 132);
LABEL_111:
                      v84[5] = v85;
                      v84[6] = -1073741811LL;
LABEL_113:
                      WdLogEvent5_WdWarning(v84);
                      StandardAllocation = -1073741811;
                      goto LABEL_94;
                    }
                    v100 = *(_DWORD *)(Count + 112);
                    if ( v12[8] != v100 )
                    {
                      v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v28, v37);
                      v84[3] = v17;
                      v84[4] = v12[8];
                      v85 = *(unsigned int *)(Count + 112);
                      goto LABEL_111;
                    }
                    v86 = *(unsigned int *)(Count + 216);
                    if ( !(_DWORD)v86 && *(_DWORD *)(*(_QWORD *)(v37 + 16) + 1848LL) < 0x5000u )
                    {
                      v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v86, v37);
                      v84[3] = v17;
                      v84[4] = -1073741811LL;
                      goto LABEL_113;
                    }
                    v121 = 0LL;
                    v120[2] = v86;
                    v120[0] = *(_DWORD *)(Count + 208);
                    v120[1] = *(_DWORD *)(Count + 212);
                    v120[3] = 7;
                    memset(v119, 0, 0x1A8uLL);
                    v87 = v119[0] & 0xFFFFBEFF | (4 * (v83 & 0x40 | (32 * (v83 & 0x80)))) | 0x41;
                    HIDWORD(v119[0]) = *v12;
                    LODWORD(v119[2]) = 4;
                    v119[3] = v120;
                    v119[39] = *(_QWORD *)(Count + 104);
                    LODWORD(v119[40]) = v100;
                    v88 = *(_QWORD *)(Count + 192);
                    if ( (v83 & 0x200) != 0 )
                      v119[42] = *(_QWORD *)(Count + 192);
                    else
                      v119[41] = *(_QWORD *)(Count + 192);
                    v119[43] = *(_QWORD *)(Count + 224);
                    LODWORD(v119[6]) = *(_DWORD *)(Count + 232);
                    v119[44] = v101;
                    LODWORD(v119[45]) = v12[12];
                    v119[46] = v108;
                    LODWORD(v119[47]) = v12[16];
                    LODWORD(v119[0]) = v87 ^ (v87 ^ (v83 << 7)) & 0x400 | 0x200;
                    v119[52] = *(_QWORD *)(Count + 184);
                    if ( (v83 & 0x200) != 0 )
                    {
                      v119[42] = v88;
                    }
                    else
                    {
                      if ( (v83 & 0x400) == 0 )
                      {
LABEL_125:
                        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                               v17,
                                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v119,
                                               (struct COREDEVICEACCESS *)v122);
                        if ( StandardAllocation < 0 )
                          goto LABEL_48;
                        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                                 (__int64)v115,
                                                 (DXGRESOURCEREFERENCE *)&v103,
                                                 v119[1])
                                  + 120LL) = Count;
                        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v103, v91);
                        memmove(Src, *(const void **)(Count + 104), v12[8]);
                        v12[20] = v119[1];
                        v92 = v113;
                        *(_DWORD *)v113 = HIDWORD(v119[6]);
                        v92[4] = v12[16];
                        v43 = v108;
                        *((_QWORD *)v92 + 1) = v108;
                        *((_QWORD *)v12 + 3) = v92;
                        *((_QWORD *)v12 + 5) = Src;
                        *((_QWORD *)v12 + 7) = v101;
                        *((_QWORD *)v12 + 9) = v43;
                        goto LABEL_30;
                      }
                      v119[41] = v88;
                    }
                    v90 = *(_DWORD *)(Count + 204);
                    v89 = v87 ^ (v87 ^ (v83 << 7)) & 0x400 | 0x200;
                    LODWORD(v119[0]) = v89 ^ ((unsigned __int8)v89 ^ (unsigned __int8)(v83 >> 7)) & 0x10;
                    LODWORD(v119[49]) = v90;
                    goto LABEL_125;
                  }
                  StandardAllocation = -1073741811;
                  v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v28, v37);
                  v93[3] = v17;
                  v93[4] = v103;
                  v93[5] = -1073741811LL;
                }
                WdLogEvent5_WdWarning(v93);
                goto LABEL_48;
              }
              v71 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v28, v36);
              v71[3] = v17;
              v72 = v12[8];
            }
LABEL_93:
            v71[4] = v72;
            StandardAllocation = -1073741801;
            v71[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v71);
            goto LABEL_94;
          }
          v66 = WdLogNewEntry5_WdWarning(v26, 0xFFFFFFFFLL, v25);
          *(_QWORD *)(v66 + 24) = v17;
          v65 = -1073741675;
          *(_QWORD *)(v66 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v66);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
        }
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
        if ( v106 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
        if ( !v98 )
          return v65;
LABEL_79:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
        return v65;
      }
      v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v63[3] = v17;
      v63[4] = v103;
      v63[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v63);
    }
    else
    {
      v96 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v96 + 24) = v17;
      *(_QWORD *)(v96 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v96);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
    if ( v106 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
    goto LABEL_140;
  }
  v62 = WdLogNewEntry5_WdWarning(v21, v20, v22);
  *(_QWORD *)(v62 + 24) = v17;
  *(_QWORD *)(v62 + 32) = v23;
  WdLogEvent5_WdWarning(v62);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
  if ( v106 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
  if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
  return (unsigned int)v23;
}

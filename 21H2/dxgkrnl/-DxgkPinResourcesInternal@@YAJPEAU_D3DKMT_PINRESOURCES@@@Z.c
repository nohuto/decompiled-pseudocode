/*
 * XREFs of ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01723F0
 * Callers:
 *     NtDxgkPinResources @ 0x1C01723C0 (NtDxgkPinResources.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019FF4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E140 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025D70 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0025F98 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C01728A4 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01730E4 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0173818 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C0255D08 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkPinResourcesInternal(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rdx
  struct _D3DKMT_PINRESOURCES *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGDEVICE *v14; // r13
  unsigned __int64 v15; // r12
  DXGPAGINGQUEUE *v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGRESOURCEREFERENCE *v20; // rcx
  unsigned int v21; // eax
  unsigned int *v22; // rdx
  struct _EX_RUNDOWN_REF **v23; // rdi
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGRESOURCEREFERENCE *v27; // r8
  struct _EX_RUNDOWN_REF *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  DXGPAGINGQUEUE *v47; // rcx
  __int64 v48; // rax
  bool v49; // cf
  SIZE_T v50; // rax
  char *v51; // rax
  struct DXGRESOURCEREFERENCE *v52; // rdi
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  struct DXGDEVICE *v65; // [rsp+30h] [rbp-1C8h] BYREF
  int v66; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v67; // [rsp+40h] [rbp-1B8h]
  char v68; // [rsp+48h] [rbp-1B0h]
  bool v69; // [rsp+50h] [rbp-1A8h]
  struct _D3DKMT_PINRESOURCES *v70; // [rsp+58h] [rbp-1A0h]
  struct DXGRESOURCEREFERENCE *v71; // [rsp+60h] [rbp-198h]
  DXGPAGINGQUEUE *v72; // [rsp+68h] [rbp-190h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-188h]
  unsigned int v74; // [rsp+74h] [rbp-184h]
  unsigned int v75; // [rsp+78h] [rbp-180h]
  struct DXGDEVICE *v76; // [rsp+80h] [rbp-178h] BYREF
  struct DXGPAGINGQUEUE *v77; // [rsp+88h] [rbp-170h] BYREF
  struct DXGPROCESS *v78; // [rsp+90h] [rbp-168h]
  struct DXGPAGINGQUEUE *v79; // [rsp+98h] [rbp-160h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-158h] BYREF
  unsigned int v81[4]; // [rsp+A8h] [rbp-150h]
  unsigned int v82[4]; // [rsp+B8h] [rbp-140h]
  _QWORD v83[2]; // [rsp+C8h] [rbp-130h] BYREF
  unsigned int v84; // [rsp+D8h] [rbp-120h]
  __int64 v85; // [rsp+E0h] [rbp-118h]
  struct _EX_RUNDOWN_REF *v86; // [rsp+E8h] [rbp-110h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-108h]
  struct DXGRESOURCEREFERENCE *v88; // [rsp+F8h] [rbp-100h] BYREF
  char v89; // [rsp+100h] [rbp-F8h] BYREF
  int v90; // [rsp+120h] [rbp-D8h]
  _BYTE v91[160]; // [rsp+130h] [rbp-C8h] BYREF

  v70 = a1;
  v66 = -1;
  v67 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v68 = 1;
    v66 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2079);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v66, 2079LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v8 = (struct _KTHREAD **)Current;
  v78 = Current;
  if ( !Current )
  {
    v41 = WdLogNewEntry5_WdError(v7, 0LL);
    *(_QWORD *)(v41 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v41);
LABEL_91:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v42);
    if ( v68 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v63, &EventProfilerExit, v64, v66);
    }
    return 3221225485LL;
  }
  v69 = *((_BYTE *)Current + 346) == 0;
  v9 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v9 = (struct _D3DKMT_PINRESOURCES *)MmUserProbeAddress;
  *(_OWORD *)v81 = *(_OWORD *)v9;
  *(_OWORD *)v82 = *((_OWORD *)v9 + 1);
  v76 = 0LL;
  v10 = v81[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v65, v81[0], v8, &v76);
  v14 = v76;
  if ( !v76 )
  {
    v43 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v43 + 24) = v10;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    goto LABEL_47;
  }
  v75 = v82[0];
  if ( (v82[0] & 1) == 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL);
    if ( (*(_DWORD *)(v12 + 348) & 0x200) != 0 )
      goto LABEL_9;
    v43 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v43 + 24) = 6170LL;
LABEL_47:
    WdLogEvent5_WdError(v43);
LABEL_88:
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    goto LABEL_91;
  }
  if ( v82[1] )
  {
    v43 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v43 + 24) = 6159LL;
    goto LABEL_47;
  }
LABEL_9:
  v85 = *(_QWORD *)&v81[2];
  if ( !*(_QWORD *)&v81[2] || (v15 = v81[1]) == 0 )
  {
    v62 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v62 + 24) = v10;
    *(_QWORD *)(v62 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v62);
    goto LABEL_88;
  }
  v79 = 0LL;
  v77 = 0LL;
  v16 = 0LL;
  v72 = 0LL;
  if ( !v82[1] )
    goto LABEL_12;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v72, v82[1], (struct _KTHREAD **)v78, &v77, 1);
  v79 = v77;
  if ( !v77 )
  {
    v46 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v46 + 24) = v82[1];
    goto LABEL_54;
  }
  if ( *((struct DXGDEVICE **)v77 + 2) != v14 )
  {
    v46 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v46 + 24) = v10;
    *(_QWORD *)(v46 + 32) = v82[1];
LABEL_54:
    WdLogEvent5_WdError(v46);
    v47 = v72;
    if ( v72 )
LABEL_55:
      DXGPAGINGQUEUE::ReleaseReference(v47, v42);
    goto LABEL_88;
  }
  v16 = v72;
LABEL_12:
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v88);
  if ( (unsigned int)v15 <= 4 )
  {
    v88 = (struct DXGRESOURCEREFERENCE *)&v89;
LABEL_14:
    v90 = v15;
    goto LABEL_15;
  }
  v17 = 0xFFFFFFFFFFFFFFFFuLL % v15;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v15 >= 8 )
  {
    v48 = 8 * v15;
    if ( !is_mul_ok(v15, 8uLL) )
      v48 = -1LL;
    v49 = __CFADD__(v48, 8LL);
    v50 = v48 + 8;
    if ( v49 )
      v50 = -1LL;
    v51 = (char *)operator new[](v50, 0x4B677844u, PagedPool);
    if ( v51 )
    {
      *(_QWORD *)v51 = v15;
      v52 = (struct DXGRESOURCEREFERENCE *)(v51 + 8);
      `vector constructor iterator'(
        v51 + 8,
        8LL,
        v15,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v88 = v52;
    }
    else
    {
      v88 = 0LL;
    }
    goto LABEL_14;
  }
LABEL_15:
  v20 = v88;
  v71 = v88;
  if ( v88 )
  {
    v21 = 0;
    while ( 1 )
    {
      v73 = v21;
      if ( v21 >= (unsigned int)v15 )
        break;
      v87 = v21;
      v22 = (unsigned int *)(v85 + 4LL * v21);
      if ( v22 + 1 < v22 || (unsigned __int64)(v22 + 1) > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v20 = v71;
      }
      v74 = *v22;
      v84 = v74;
      v23 = (struct _EX_RUNDOWN_REF **)((char *)v20 + 8 * v21);
      ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v78,
                                                  (DXGRESOURCEREFERENCE *)&v86,
                                                  v74);
      DXGRESOURCEREFERENCE::MoveAssign(v23, ResourceSafe);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v86, v25);
      v28 = *v23;
      if ( !*v23 || (HIDWORD(v28->Ptr) & 1) == 0 || !v28[7].Count )
      {
LABEL_70:
        v56 = WdLogNewEntry5_WdWarning(v26, v17, v27);
        *(_QWORD *)(v56 + 24) = v74;
        *(_QWORD *)(v56 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v56);
        goto LABEL_71;
      }
      v17 = *(_QWORD *)(v28[1].Count + 16);
      v29 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( *(_QWORD *)(v17 + 16) != v29 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v29, v17);
        v54[3] = v14;
        v54[4] = *((_QWORD *)v71 + v87);
        v54[5] = -1073741811LL;
        WdLogEvent5_WdError(v54);
LABEL_71:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v88, v55);
        if ( !v16 )
          goto LABEL_88;
        v47 = v16;
        goto LABEL_55;
      }
      v26 = 0LL;
      v27 = v71;
      while ( (unsigned int)v26 < v73 )
      {
        if ( *((struct _EX_RUNDOWN_REF **)v71 + (unsigned int)v26) == v28 )
          goto LABEL_70;
        v26 = (unsigned int)(v26 + 1);
      }
      v21 = v73 + 1;
      v20 = v71;
    }
    if ( (*((_BYTE *)v14 + 1869) & 1) == 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v83, v14);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v91, (__int64)v14, 2, v30, 0);
      v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v91, 0LL);
      v35 = v31;
      if ( v31 < 0 )
      {
        v60 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        *(_QWORD *)(v60 + 24) = v14;
        *(_QWORD *)(v60 + 32) = v35;
        WdLogEvent5_WdWarning(v60);
      }
      else if ( (v75 & 1) != 0 )
      {
        LODWORD(v35) = DXGDEVICE::PinDirectFlipResources(v14, v15, v71, v69);
      }
      else
      {
        v80 = 0LL;
        LODWORD(v35) = DXGDEVICE::PinResources(v14, v15, v71, v79, &v80);
        if ( (_DWORD)v35 == 259 )
        {
          v61 = (_QWORD *)((char *)v70 + 24);
          if ( (unsigned __int64)v70 + 24 >= MmUserProbeAddress )
            v61 = (_QWORD *)MmUserProbeAddress;
          *v61 = v80;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v91);
      if ( v83[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v83);
      goto LABEL_34;
    }
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v88, v17);
    if ( v16 )
      DXGPAGINGQUEUE::ReleaseReference(v16, v57);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v57);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v66);
    return 0LL;
  }
  else
  {
    v53 = WdLogNewEntry5_WdLowResource(0LL, v17, v18, v19);
    *(_QWORD *)(v53 + 24) = v15;
    LODWORD(v35) = -1073741801;
    *(_QWORD *)(v53 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v53);
LABEL_34:
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v88, v36);
    if ( v16 )
      DXGPAGINGQUEUE::ReleaseReference(v16, v37);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v37);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v66);
    return (unsigned int)v35;
  }
}

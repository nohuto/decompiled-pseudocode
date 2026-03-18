/*
 * XREFs of ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0
 * Callers:
 *     NtDxgkPinResources @ 0x1C01D8570 (NtDxgkPinResources.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB14 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C002BAC8 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01D8C44 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C01D9914 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x1C01D9960 (-AllocateElements@-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C02E63E8 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0301864 (DxgkpIsDrtEnabled.c)
 */

__int64 __fastcall DxgkPinResourcesInternal(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v9; // rdx
  char v10; // r12
  struct _D3DKMT_PINRESOURCES *v11; // rax
  __int64 v12; // rdi
  DXGDEVICE *v13; // r13
  unsigned int v14; // eax
  DXGPAGINGQUEUE *v15; // rbx
  struct DXGRESOURCEREFERENCE *v16; // rcx
  unsigned int v17; // eax
  unsigned int *v18; // rdx
  __int64 *v19; // rdi
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  __int64 v21; // r8
  unsigned int i; // ecx
  __int64 v23; // r9
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  bool v31; // sf
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rbx
  DXGPAGINGQUEUE *v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // rdx
  struct DXGDEVICE *v42; // [rsp+50h] [rbp-1B8h] BYREF
  int v43; // [rsp+58h] [rbp-1B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-1A8h]
  char v45; // [rsp+68h] [rbp-1A0h]
  struct _D3DKMT_PINRESOURCES *v46; // [rsp+70h] [rbp-198h]
  unsigned int v47; // [rsp+78h] [rbp-190h]
  struct DXGRESOURCEREFERENCE *v48; // [rsp+80h] [rbp-188h]
  DXGPAGINGQUEUE *v49; // [rsp+88h] [rbp-180h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-178h]
  unsigned int v51; // [rsp+94h] [rbp-174h]
  struct DXGPROCESS *v52; // [rsp+98h] [rbp-170h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp-168h]
  _QWORD v54[2]; // [rsp+A8h] [rbp-160h] BYREF
  DXGDEVICE *v55; // [rsp+B8h] [rbp-150h] BYREF
  struct DXGPAGINGQUEUE *v56; // [rsp+C0h] [rbp-148h] BYREF
  struct DXGPAGINGQUEUE *v57; // [rsp+C8h] [rbp-140h]
  unsigned int v58[4]; // [rsp+D0h] [rbp-138h]
  unsigned int v59[4]; // [rsp+E0h] [rbp-128h]
  unsigned int v60; // [rsp+F0h] [rbp-118h]
  struct _EX_RUNDOWN_REF *v61; // [rsp+F8h] [rbp-110h] BYREF
  __int64 v62; // [rsp+100h] [rbp-108h]
  _QWORD v63[5]; // [rsp+108h] [rbp-100h] BYREF
  int v64; // [rsp+130h] [rbp-D8h]
  _BYTE v65[160]; // [rsp+140h] [rbp-C8h] BYREF

  v46 = a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2079);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2079);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v9 = (struct _KTHREAD **)Current;
  v52 = Current;
  if ( !Current )
  {
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
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 )
      return 3221225485LL;
    v31 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_95:
    if ( v31 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v43);
    return 3221225485LL;
  }
  v10 = (*((_DWORD *)Current + 106) & 4) == 0;
  v11 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_PINRESOURCES *)MmUserProbeAddress;
  *(_OWORD *)v58 = *(_OWORD *)v11;
  *(_OWORD *)v59 = *((_OWORD *)v11 + 1);
  v55 = 0LL;
  v12 = v58[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v58[0], v9, &v55);
  v13 = v55;
  if ( !v55 )
  {
    WdLogSingleEntry2(2LL, v12, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_47:
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    goto LABEL_43;
  }
  v53 = v59[0];
  if ( (v59[0] & 1) != 0 )
  {
    if ( v59[1] )
    {
      WdLogSingleEntry1(2LL, 6183LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Pinning DirectFlip resources may not specify a paging queue",
        6183LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_47;
    }
  }
  else
  {
    v32 = *(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL);
    if ( (*(_DWORD *)(v32 + 436) & 0x200) == 0 && !(unsigned __int8)DxgkpIsDrtEnabled(v32) )
    {
      WdLogSingleEntry1(2LL, 6194LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Pinning non-DirectFlip resources can only be done on xbox",
        6194LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_47;
    }
  }
  v54[0] = *(_QWORD *)&v58[2];
  if ( !*(_QWORD *)&v58[2] || (v14 = v58[1], (v47 = v58[1]) == 0) )
  {
    WdLogSingleEntry2(3LL, v12, -1073741811LL);
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 )
      return 3221225485LL;
    LOBYTE(v29) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v31 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_95;
  }
  v57 = 0LL;
  v56 = 0LL;
  v15 = 0LL;
  v49 = 0LL;
  if ( v59[1] )
  {
    DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v49, v59[1], v52, &v56, 1);
    v57 = v56;
    if ( v56 )
    {
      if ( *((DXGDEVICE **)v56 + 2) == v13 )
      {
        v15 = v49;
        v14 = v47;
        goto LABEL_12;
      }
      v34 = v59[1];
      WdLogSingleEntry2(2LL, v12, v59[1]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Paging queue must belong to the supplied device. hDevice=0x%.8x, hPagingQueue=0x%.8x",
        v12,
        v34,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v33 = v59[1];
      WdLogSingleEntry1(2LL, v59[1]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hPagingQueue (0x%.8x) specified",
        v33,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v35 = v49;
    if ( !v49 )
      goto LABEL_47;
    goto LABEL_46;
  }
LABEL_12:
  v63[0] = 0LL;
  v64 = 0;
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::AllocateElements(v63, v14);
  v16 = (struct DXGRESOURCEREFERENCE *)v63[0];
  v48 = (struct DXGRESOURCEREFERENCE *)v63[0];
  if ( v63[0] )
  {
    v17 = 0;
    while ( 1 )
    {
      v50 = v17;
      if ( v17 >= v47 )
      {
        if ( (*((_BYTE *)v13 + 1869) & 1) != 0 )
        {
          PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v63);
          if ( v15 )
            DXGPAGINGQUEUE::ReleaseReference(v15);
          if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
          if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v43);
          return 0LL;
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v13);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v13, 2, v23, 0);
          v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
          v25 = v24;
          if ( v24 < 0 )
          {
            WdLogSingleEntry2(3LL, v13, v24);
          }
          else if ( (v53 & 1) != 0 )
          {
            v25 = DXGDEVICE::PinDirectFlipResources(v13, v47, v48, v10);
          }
          else
          {
            v52 = 0LL;
            v25 = DXGDEVICE::PinResources(v13, v47, v48, v57, (unsigned __int64 *)&v52);
            if ( v25 == 259 )
            {
              v41 = (_QWORD *)((char *)v46 + 24);
              if ( (unsigned __int64)v46 + 24 >= MmUserProbeAddress )
                v41 = (_QWORD *)MmUserProbeAddress;
              *v41 = v52;
            }
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
          if ( v54[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
          PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v63);
          if ( v15 )
            DXGPAGINGQUEUE::ReleaseReference(v15);
          if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
          if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v43);
          return v25;
        }
      }
      v62 = v17;
      v18 = (unsigned int *)(v54[0] + 4LL * v17);
      if ( v18 + 1 < v18 || (unsigned __int64)(v18 + 1) > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v16 = v48;
      }
      v51 = *v18;
      v60 = v51;
      v19 = (__int64 *)((char *)v16 + 8 * v17);
      ResourceSafe = DXGPROCESS::GetResourceSafe((__int64)v52, (DXGRESOURCEREFERENCE *)&v61, v51);
      DXGRESOURCEREFERENCE::MoveAssign(v19, ResourceSafe);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v61);
      v21 = *v19;
      if ( !*v19 || (*(_DWORD *)(v21 + 4) & 1) == 0 || !*(_QWORD *)(v21 + 56) )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
      {
        WdLogSingleEntry3(2LL, v13, v21, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
          (__int64)v13,
          *((_QWORD *)v48 + v62),
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_72;
      }
      for ( i = 0; i < v50; ++i )
      {
        if ( *((_QWORD *)v48 + i) == v21 )
          goto LABEL_71;
      }
      v17 = v50 + 1;
      v16 = v48;
    }
LABEL_71:
    WdLogSingleEntry2(3LL, v51, -1073741811LL);
LABEL_72:
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v63);
    if ( !v15 )
      goto LABEL_47;
    v35 = v15;
LABEL_46:
    DXGPAGINGQUEUE::ReleaseReference(v35);
    goto LABEL_47;
  }
  v36 = v47;
  WdLogSingleEntry2(6LL, v47, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate temporary buffer for %d handle, returning 0x%I64x",
    v36,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v63);
  if ( v15 )
    DXGPAGINGQUEUE::ReleaseReference(v15);
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 )
  {
    LOBYTE(v37) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v43);
  }
  return 3221225495LL;
}

/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01187B0
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C011F10C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C011FFF0 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01237E4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013EFA0 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0232470 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C024FD04 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02F954C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0118D44 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01207F8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014D7E4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     GetPixelSizeInBytes @ 0x1C0224054 (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 v5; // rcx
  void *v6; // r15
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // rdi
  UINT v9; // r12d
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // r13
  ADAPTER_RENDER *v11; // rcx
  D3DKMDT_STANDARDALLOCATION_TYPE v12; // eax
  int StandardAllocationDriverData; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v19; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  PVOID v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  ADAPTER_RENDER *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct COREDEVICEACCESS *v36; // rdi
  unsigned int v37; // edi
  __int64 v38; // r8
  __int64 v39; // rax
  ULONG_PTR v40; // r8
  int v41; // ecx
  __int64 v42; // rcx
  struct _EX_RUNDOWN_REF *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct COREDEVICEACCESS *v46; // rdi
  _DWORD *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v51; // rbx
  __int64 v52; // rdx
  UINT v54; // ecx
  int v55; // ecx
  _QWORD *v56; // rax
  PVOID v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  unsigned int *v62; // r12
  int PixelSizeInBytes; // eax
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  int Count; // r9d
  __int64 v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // rax
  struct DXGRESOURCE *v84; // rbx
  __int64 v85; // rax
  char v86; // [rsp+80h] [rbp-80h]
  char v87; // [rsp+81h] [rbp-7Fh]
  UINT v88; // [rsp+84h] [rbp-7Ch]
  UINT v89; // [rsp+84h] [rbp-7Ch]
  int v90; // [rsp+88h] [rbp-78h]
  _DWORD *v91; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v92; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v93; // [rsp+98h] [rbp-68h]
  void *v94; // [rsp+A0h] [rbp-60h]
  struct COREDEVICEACCESS *v95; // [rsp+A8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v96; // [rsp+B0h] [rbp-50h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v97; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_CREATEALLOCATION v98; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v99[32]; // [rsp+140h] [rbp+40h] BYREF
  PVOID P; // [rsp+160h] [rbp+60h]
  _BYTE v101[384]; // [rsp+168h] [rbp+68h] BYREF
  UINT v102; // [rsp+2E8h] [rbp+1E8h]

  v95 = a3;
  memset(&v98, 0, sizeof(v98));
  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  v94 = 0LL;
  v86 = 0;
  v92 = 0LL;
  v8 = *(_QWORD *)(v5 + 16);
  v9 = 1;
  v90 = 1;
  v93 = 0;
  if ( *((_DWORD *)a2 + 4) != 1 )
  {
LABEL_2:
    if ( !DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v5 + 16)) )
      goto LABEL_3;
    if ( *((_DWORD *)a2 + 4) != 4 )
      goto LABEL_3;
    v55 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v55 - 1) & 0xFFFFFFFC) != 0 || v55 == 2 )
      goto LABEL_3;
    goto LABEL_66;
  }
  if ( !*(_BYTE *)(v8 + 2591) && !DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v8) )
  {
    v5 = *((_QWORD *)this + 2);
    goto LABEL_2;
  }
LABEL_66:
  if ( *(int *)(v8 + 2304) >= 0x2000 )
    v9 = *(_DWORD *)(v8 + 280);
  v90 = v9;
LABEL_3:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v8 + 2672) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  v102 = 0;
  if ( v9 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x60 )
      goto LABEL_8;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(PagedPool, 96LL * v9, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v101;
    P = v101;
  }
  v102 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * v9);
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)P;
  }
LABEL_8:
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v87 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 209LL);
  v12 = *((_DWORD *)a2 + 4);
  memset(&v97, 0, sizeof(v97));
  v97.StandardAllocationType = v12;
  v97.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v97);
  v16 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
LABEL_79:
    v56[4] = v16;
    v56[3] = this;
    WdLogEvent5_WdError(v56);
    goto LABEL_55;
  }
  AllocationPrivateDriverDataSize = v97.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v97.ResourcePrivateDriverDataSize;
  if ( !v97.AllocationPrivateDriverDataSize && !v97.ResourcePrivateDriverDataSize )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v97.ResourcePrivateDriverDataSize, v97.AllocationPrivateDriverDataSize);
LABEL_78:
    v16 = -1073741811LL;
    goto LABEL_79;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 90) != v97.ResourcePrivateDriverDataSize )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v97.ResourcePrivateDriverDataSize, v97.AllocationPrivateDriverDataSize);
      v56[5] = 1LL;
      goto LABEL_78;
    }
    if ( *((_DWORD *)a2 + 94) != v97.AllocationPrivateDriverDataSize )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v97.ResourcePrivateDriverDataSize, v97.AllocationPrivateDriverDataSize);
      v56[5] = 2LL;
      goto LABEL_78;
    }
  }
  if ( !v97.ResourcePrivateDriverDataSize )
    goto LABEL_12;
  v57 = operator new[](v97.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  v94 = v57;
  if ( v57 )
  {
    memset(v57, 0, v97.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v97.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v97.AllocationPrivateDriverDataSize;
LABEL_12:
    v19 = 0;
    v88 = 0;
    if ( !v9 )
      goto LABEL_27;
    p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
    while ( 1 )
    {
      if ( AllocationPrivateDriverDataSize )
      {
        v21 = operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
        v6 = v21;
        if ( !v21 )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
          LODWORD(v29) = -1073741801;
          v66[3] = this;
          v66[4] = v97.AllocationPrivateDriverDataSize;
          v66[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v66);
          goto LABEL_51;
        }
        memset(v21, 0, v97.AllocationPrivateDriverDataSize);
        ++v93;
        v19 = v88;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v6;
      *p_PrivateDriverDataSize = v97.AllocationPrivateDriverDataSize;
      v97.pResourcePrivateDriverData = v94;
      v97.pAllocationPrivateDriverData = v6;
      if ( v9 <= 1 )
        v19 = *((_DWORD *)a2 + 95);
      v25 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v97.PhysicalAdapterIndex = v19;
      v26 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v25, &v97);
      v29 = v26;
      if ( v26 < 0 )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v27);
        v67[5] = 0LL;
        v67[3] = this;
        v67[4] = v29;
        WdLogEvent5_WdAssertion(v67);
        goto LABEL_50;
      }
      v6 = 0LL;
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v62 = (unsigned int *)*((_QWORD *)a2 + 3);
        v28 = v62[2];
        if ( (_DWORD)v28 )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v28 = *(unsigned int *)(v27 + 348);
          if ( (v28 & 8) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              v27 = v62[5];
              if ( (_DWORD)v27 )
              {
                v28 = (PixelSizeInBytes * *v62 + 127) & 0xFFFFFF80;
                if ( (_DWORD)v27 != (_DWORD)v28 )
                {
                  LODWORD(v29) = -1073741811;
                  v64 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
                  v64[3] = this;
                  v64[4] = v62[5];
                  v64[5] = *v62;
                  v64[6] = -1073741811LL;
                  WdLogEvent5_WdError(v64);
                  goto LABEL_51;
                }
              }
            }
          }
        }
        v9 = v90;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v28, v27);
        *(_QWORD *)(v65 + 24) = 7250LL;
        WdLogEvent5_WdAssertion(v65);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v54 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        p_PrivateDriverDataSize[2] |= 1u;
        p_PrivateDriverDataSize[1] = v54;
      }
      p_PrivateDriverDataSize += 24;
      v19 = v88 + 1;
      v88 = v19;
      if ( v19 >= v9 )
        break;
      AllocationPrivateDriverDataSize = v97.AllocationPrivateDriverDataSize;
    }
    ResourcePrivateDriverDataSize = v97.ResourcePrivateDriverDataSize;
LABEL_27:
    v98.hDevice = *((_DWORD *)a2 + 1);
    v98.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v94;
    v98.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
    v98.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
    v98.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
    v30 = *(_DWORD *)a2;
    v31 = *(_DWORD *)a2 & 0x60;
    *(_QWORD *)&v98.hResource = 0LL;
    v98.NumAllocations = v9;
    v98.pAllocationInfo = PoolWithTag;
    v98.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v98.Flags & 0xFFFFA094 | (v30 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v30 & 1 | (2 * (v30 & 2 | (2 * (v30 & 0x800 | v30 & 4 | (4 * (v30 & 0x18 | (2 * v31))))))))));
    v32 = DXGDEVICE::CreateAllocation(this, &v98, 0LL, 0, 0LL, a2, v95, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    v29 = v32;
    if ( v32 < 0 )
    {
      v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
      v73[3] = this;
      v73[4] = v29;
      v73[5] = 1LL;
      WdLogEvent5_WdWarning(v73);
      goto LABEL_50;
    }
    v86 = 1;
    v89 = 0;
    if ( v9 )
    {
      v95 = (struct COREDEVICEACCESS *)PoolWithTag;
      v91 = (_DWORD *)((char *)a2 + 52);
      v36 = (struct COREDEVICEACCESS *)PoolWithTag;
      do
      {
        v37 = *(_DWORD *)v36;
        v92 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 5);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v92[26], 0LL) )
        {
          if ( bTracingEnabled )
          {
            Count = v92[29].Count;
            if ( Count != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)v92, &EventBlockThread, v38, Count);
          }
          ExAcquirePushLockSharedEx(&v92[26], 0LL);
        }
        v39 = (v37 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v39 < LODWORD(v92[32].Count) )
        {
          v40 = v92[30].Count;
          v41 = *(_DWORD *)(v40 + 16 * v39 + 8);
          if ( ((v37 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60)
            && (v41 & 0x2000) == 0
            && (v41 & 0x1F) != 0 )
          {
            v42 = v41 & 0x1F;
            if ( (_BYTE)v42 == 5 )
            {
              v43 = *(struct _EX_RUNDOWN_REF **)(v40 + 16LL * (unsigned int)v39);
              goto LABEL_37;
            }
            v69 = WdLogNewEntry5_WdError(v42, 2LL * (unsigned int)v39);
            *(_QWORD *)(v69 + 24) = 267LL;
            WdLogEvent5_WdError(v69);
          }
        }
        v43 = 0LL;
LABEL_37:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v96, v43);
        ExReleasePushLockSharedEx(&v92[26], 0LL);
        KeLeaveCriticalRegion();
        if ( v7 )
          ExReleaseRundownProtection(v7 + 11);
        v7 = v96;
        v96 = 0LL;
        v92 = v7;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96, v44);
        if ( !v7 )
        {
          LODWORD(v29) = -1073741811;
          v72 = (_QWORD *)WdLogNewEntry5_WdAssertion(v45, v33);
          v72[3] = this;
          v72[4] = *(&PoolWithTag->hAllocation + 24 * v89);
          v72[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v72);
          goto LABEL_107;
        }
        v46 = v95;
        v47 = v91;
        *v91 = *(_DWORD *)v95;
        if ( !v87 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                              + 8LL)
                                                                  + 192LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                  *(_QWORD *)(v7[6].Count + 8)) )
          {
            v33 = *((unsigned int *)a2 + 4);
            if ( ((_DWORD)v33 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) && (_DWORD)v33 != 5 )
            {
              v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
              if ( (*(_DWORD *)(v70 + 2036) & 0x200) == 0 || (_DWORD)v33 != 1 )
              {
                LODWORD(v29) = -1073741811;
                v71 = (_QWORD *)WdLogNewEntry5_WdError(v70, v33);
                v71[3] = this;
                v71[4] = *((int *)a2 + 4);
                v71[5] = -1073741811LL;
                WdLogEvent5_WdError(v71);
                goto LABEL_107;
              }
            }
          }
          v47 = v91;
        }
        v91 = v47 + 1;
        v36 = (struct COREDEVICEACCESS *)((char *)v46 + 96);
        ++v89;
        v95 = v36;
      }
      while ( v89 < v9 );
    }
    *((_DWORD *)a2 + 2) = v98.hResource;
    *((_DWORD *)a2 + 3) = v98.hGlobalShare;
    v48 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6);
    if ( (v48 & 0xFFFFFFFD) != 0 )
      v49 = 0LL;
    else
      v49 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                         + 688LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              v7[3].Count);
    *((_QWORD *)a2 + 41) = v49;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      memmove(*((void **)a2 + 46), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 94));
      memmove(*((void **)a2 + 44), v97.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
    }
LABEL_50:
    if ( (int)v29 >= 0 || !v86 )
      goto LABEL_51;
LABEL_107:
    if ( !v98.hResource )
    {
      v74 = WdLogNewEntry5_WdAssertion(v48, v33);
      *(_QWORD *)(v74 + 24) = 7376LL;
      WdLogEvent5_WdAssertion(v74);
    }
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v78 = WdLogNewEntry5_WdAssertion(v76, v75);
      *(_QWORD *)(v78 + 24) = 7384LL;
      WdLogEvent5_WdAssertion(v78);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v99,
      (struct _KTHREAD **)Current);
    v81 = (v98.hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v81 < *((_DWORD *)Current + 64) )
    {
      v82 = *((_QWORD *)Current + 30);
      v80 = (v98.hResource >> 25) & 0x60;
      v79 = *(unsigned int *)(v82 + 16 * v81 + 8);
      if ( ((v98.hResource >> 25) & 0x60) == (*(_BYTE *)(v82 + 16 * v81 + 8) & 0x60) )
      {
        v80 = 0x2000LL;
        if ( (v79 & 0x2000) == 0 && (v79 & 0x1F) != 0 )
        {
          v79 &= 0x1Fu;
          if ( (_BYTE)v79 == 4 )
          {
            v84 = *(struct DXGRESOURCE **)(v82 + 16LL * (unsigned int)v81);
            if ( v84 )
            {
              *(_DWORD *)(v82 + 16 * (((unsigned __int64)v98.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_119:
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
              if ( v84 )
                DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v84, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_51:
              if ( v93 )
              {
                p_pPrivateDriverData = &PoolWithTag->pPrivateDriverData;
                v51 = v93;
                do
                {
                  operator delete[](*p_pPrivateDriverData);
                  p_pPrivateDriverData += 12;
                  --v51;
                }
                while ( v51 );
              }
              goto LABEL_54;
            }
LABEL_118:
            v85 = WdLogNewEntry5_WdAssertion(v80, v79);
            *(_QWORD *)(v85 + 24) = 7390LL;
            WdLogEvent5_WdAssertion(v85);
            goto LABEL_119;
          }
          v83 = WdLogNewEntry5_WdError(0x2000LL, v79);
          *(_QWORD *)(v83 + 24) = 267LL;
          WdLogEvent5_WdError(v83);
        }
      }
    }
    v84 = 0LL;
    goto LABEL_118;
  }
  v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60);
  LODWORD(v29) = -1073741801;
  v61[3] = this;
  v61[4] = v97.ResourcePrivateDriverDataSize;
  v61[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v61);
LABEL_54:
  operator delete[](v94);
  LODWORD(v16) = v29;
LABEL_55:
  if ( P != v101 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v102 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92, v52);
  return (unsigned int)v16;
}

/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A9DC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0184AE0 (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0184FA4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019FB3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?CreateStandardAllocCallout@@YAXPEAX@Z @ 0x1C01CF850 (-CreateStandardAllocCallout@@YAXPEAX@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E440C (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C035F620 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03BC8A4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01CFE2C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01D0438 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     GetPixelSizeInBytes @ 0x1C02D6568 (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r15
  UINT v13; // r12d
  D3DDDI_ALLOCATIONINFO *Pool2; // rax
  ADAPTER_RENDER *v15; // rcx
  D3DKMDT_STANDARDALLOCATION_TYPE v16; // eax
  int StandardAllocationDriverData; // eax
  __int64 v18; // r9
  unsigned int v19; // edi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v22; // r8d
  UINT *p_PrivateDriverDataSize; // rdi
  void *v24; // rax
  int v25; // eax
  __int64 v26; // r12
  unsigned int v27; // ecx
  int v28; // edx
  int v29; // eax
  unsigned int v30; // edi
  struct COREDEVICEACCESS *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rax
  ULONG_PTR v35; // r9
  int v36; // ecx
  struct _EX_RUNDOWN_REF *v37; // rdx
  _DWORD *v38; // rcx
  int v39; // edx
  __int64 v40; // rax
  D3DDDI_ALLOCATIONINFO *v41; // rbx
  void **p_pPrivateDriverData; // rbx
  __int64 v43; // rdi
  UINT v45; // ecx
  int v46; // ecx
  __int64 v47; // rbx
  const wchar_t *v48; // r9
  struct _EX_RUNDOWN_REF *v49; // rdi
  int PixelSizeInBytes; // eax
  unsigned int Ptr_high; // ecx
  __int64 v52; // r8
  __int64 v53; // r9
  int Count; // r9d
  __int64 v55; // r10
  const wchar_t *v56; // r9
  int v57; // edx
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 v64; // rax
  __int64 v65; // r8
  int v66; // edx
  struct DXGRESOURCE *v67; // rbx
  char v68; // [rsp+80h] [rbp-80h]
  UINT v69; // [rsp+84h] [rbp-7Ch]
  unsigned int v70; // [rsp+84h] [rbp-7Ch]
  D3DDDI_ALLOCATIONINFO *v71; // [rsp+88h] [rbp-78h]
  unsigned int v72; // [rsp+90h] [rbp-70h]
  unsigned int v73; // [rsp+90h] [rbp-70h]
  UINT *v74; // [rsp+98h] [rbp-68h]
  _DWORD *v75; // [rsp+98h] [rbp-68h]
  struct _EX_RUNDOWN_REF *v76; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v77; // [rsp+A8h] [rbp-58h]
  struct COREDEVICEACCESS *v78; // [rsp+B0h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v79; // [rsp+B8h] [rbp-48h] BYREF
  void *v80; // [rsp+C0h] [rbp-40h]
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v81; // [rsp+C8h] [rbp-38h] BYREF
  struct _D3DKMT_CREATEALLOCATION v82; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v83[32]; // [rsp+150h] [rbp+50h] BYREF
  PVOID P; // [rsp+170h] [rbp+70h]
  _BYTE v85[384]; // [rsp+178h] [rbp+78h] BYREF
  UINT v86; // [rsp+2F8h] [rbp+1F8h]

  v78 = a3;
  memset(&v82, 0, sizeof(v82));
  v9 = *((_QWORD *)this + 2);
  v10 = 0LL;
  v80 = 0LL;
  v76 = 0LL;
  v77 = 0;
  v11 = *(_QWORD *)(v9 + 16);
  v12 = 1LL;
  v13 = 1;
  v72 = 1;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( *(_BYTE *)(v11 + 2711) || DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v11) )
    {
LABEL_67:
      if ( *(int *)(v11 + 2424) < 0x2000 )
      {
        v72 = 1;
      }
      else
      {
        v13 = *(_DWORD *)(v11 + 288);
        v72 = v13;
      }
      goto LABEL_3;
    }
    v9 = *((_QWORD *)this + 2);
  }
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 16) + 2710LL)
    && (*((_DWORD *)DXGPROCESS::GetCurrent(v6, v5, v7, v8) + 106) & 0x180) == 0
    && *((_DWORD *)a2 + 4) == 4 )
  {
    v46 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v46 - 1) & 0xFFFFFFFC) != 0 || v46 == 2 )
      goto LABEL_4;
    goto LABEL_67;
  }
LABEL_3:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v11 + 2792) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
LABEL_4:
  v86 = 0;
  v71 = 0LL;
  P = 0LL;
  if ( v13 <= 4 )
  {
    v71 = (D3DDDI_ALLOCATIONINFO *)v85;
    P = v85;
    if ( !v13 )
    {
LABEL_8:
      v86 = v13;
      goto LABEL_9;
    }
    memset(v85, 0, 96LL * v13);
    Pool2 = (D3DDDI_ALLOCATIONINFO *)P;
LABEL_7:
    v71 = Pool2;
    goto LABEL_8;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v13 >= 0x60 )
  {
    Pool2 = (D3DDDI_ALLOCATIONINFO *)ExAllocatePool2(256LL, 96LL * v13, 1265072196LL, v8);
    P = Pool2;
    goto LABEL_7;
  }
LABEL_9:
  v15 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v68 = *(_BYTE *)(*((_QWORD *)v15 + 2) + 209LL);
  v16 = *((_DWORD *)a2 + 4);
  memset(&v81, 0, sizeof(v81));
  v81.StandardAllocationType = v16;
  v81.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v15, &v81);
  v19 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v47 = StandardAllocationDriverData;
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    v48 = L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x";
LABEL_75:
    v12 = 0LL;
LABEL_81:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v48, (__int64)this, v47, v12, 0LL, 0LL);
    goto LABEL_55;
  }
  AllocationPrivateDriverDataSize = v81.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v81.ResourcePrivateDriverDataSize;
  if ( !v81.AllocationPrivateDriverDataSize && !v81.ResourcePrivateDriverDataSize )
  {
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    v48 = L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buff"
           "er, returning 0x%I64x";
    v47 = -1073741811LL;
    goto LABEL_75;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 )
    goto LABEL_12;
  if ( *((_DWORD *)a2 + 90) != v81.ResourcePrivateDriverDataSize )
  {
    v19 = -1073741811;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 1LL);
    v48 = L"Device 0x%I64x: Input ResourcePrivateDriverDataSize does not match the driver's ResourcePrivateDriverDataSize,"
           " returning 0x%I64x";
LABEL_80:
    v47 = -1073741811LL;
    goto LABEL_81;
  }
  if ( *((_DWORD *)a2 + 94) != v81.AllocationPrivateDriverDataSize )
  {
    v19 = -1073741811;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 2LL);
    v48 = L"Device 0x%I64x: Input TotalPrivateDriverDataBufferSize does not match the driver's AllocationPrivateDriverData"
           "Size, returning 0x%I64x";
    v12 = 2LL;
    goto LABEL_80;
  }
LABEL_12:
  if ( v81.ResourcePrivateDriverDataSize )
  {
    v80 = (void *)operator new[](v81.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL, v18);
    if ( !v80 )
    {
      LODWORD(v26) = -1073741801;
      WdLogSingleEntry3(3LL, this, v81.ResourcePrivateDriverDataSize, -1073741801LL);
      goto LABEL_54;
    }
    ResourcePrivateDriverDataSize = v81.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v81.AllocationPrivateDriverDataSize;
  }
  v69 = 0;
  v22 = 0;
  if ( v13 )
  {
    p_PrivateDriverDataSize = &v71->PrivateDriverDataSize;
    v74 = &v71->PrivateDriverDataSize;
    while ( 1 )
    {
      v24 = 0LL;
      if ( AllocationPrivateDriverDataSize )
      {
        v24 = (void *)operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, 256LL, v18);
        if ( !v24 )
        {
          v52 = v81.AllocationPrivateDriverDataSize;
          LODWORD(v26) = -1073741801;
          v53 = -1073741801LL;
LABEL_126:
          WdLogSingleEntry3(3LL, this, v52, v53);
          goto LABEL_127;
        }
        ++v77;
        v22 = v69;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v24;
      *p_PrivateDriverDataSize = v81.AllocationPrivateDriverDataSize;
      v81.pAllocationPrivateDriverData = v24;
      v81.pResourcePrivateDriverData = v80;
      if ( v13 > 1 )
        v81.PhysicalAdapterIndex = v22;
      else
        v81.PhysicalAdapterIndex = *((_DWORD *)a2 + 95);
      v25 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*((ADAPTER_RENDER **)this + 2), &v81);
      v26 = v25;
      if ( v25 < 0 )
      {
        WdLogSingleEntry3(1LL, this, v25, 0LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Device 0x%I64x: Driver fialed to generate pPrivateDriverData buffer, returning 0x%I64x",
          (__int64)this,
          v26,
          0LL,
          0LL,
          0LL);
        goto LABEL_127;
      }
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v49 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a2 + 3);
        v79 = v49;
        if ( LODWORD(v49[1].Count) )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 436LL) & 8) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              Ptr_high = HIDWORD(v49[2].Ptr);
              if ( Ptr_high )
              {
                if ( Ptr_high != ((PixelSizeInBytes * LODWORD(v49->Count) + 127) & 0xFFFFFF80) )
                {
                  LODWORD(v26) = -1073741811;
                  WdLogSingleEntry4(2LL, this, Ptr_high, LODWORD(v49->Count), -1073741811LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Device 0x%I64x: Driver returned invalid pitch (0x%I64x) for the cross adapter allocation wi"
                              "dth (0x%I64x), returning 0x%I64x",
                    (__int64)this,
                    HIDWORD(v79[2].Ptr),
                    LODWORD(v79->Count),
                    -1073741811LL,
                    0LL);
                  goto LABEL_127;
                }
              }
            }
          }
        }
        p_PrivateDriverDataSize = v74;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        WdLogSingleEntry1(1LL, 7547LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCreateStandardAllocation->Flags.OpenCrossAdapter || !pCreateStandardAllocation->Flags.Primary",
          7547LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v45 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        p_PrivateDriverDataSize[2] |= 1u;
        p_PrivateDriverDataSize[1] = v45;
      }
      p_PrivateDriverDataSize += 24;
      v13 = v72;
      v22 = v69 + 1;
      v69 = v22;
      v74 = p_PrivateDriverDataSize;
      if ( v22 >= v72 )
      {
        ResourcePrivateDriverDataSize = v81.ResourcePrivateDriverDataSize;
        break;
      }
      AllocationPrivateDriverDataSize = v81.AllocationPrivateDriverDataSize;
    }
  }
  v82.hDevice = *((_DWORD *)a2 + 1);
  v82.pAllocationInfo = v71;
  v82.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v80;
  v82.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v82.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  v82.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
  v27 = *(_DWORD *)a2;
  v28 = *(_DWORD *)a2 & 0x60;
  *(_QWORD *)&v82.hResource = 0LL;
  v82.NumAllocations = v13;
  v82.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v82.Flags & 0xFFFFA094 | (v27 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v27 & 1 | (2 * (v27 & 2 | (2 * (v27 & 0x800 | v27 & 4 | (4 * (v27 & 0x18 | (2 * v28))))))))));
  v29 = DXGDEVICE::CreateAllocation(this, &v82, 0LL, 0LL, 0LL, a2, v78, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LODWORD(v26) = v29;
  if ( v29 < 0 )
  {
    v52 = v29;
    v53 = 1LL;
    goto LABEL_126;
  }
  v70 = 0;
  v30 = v72;
  if ( !v72 )
  {
LABEL_47:
    *((_DWORD *)a2 + 2) = v82.hResource;
    *((_DWORD *)a2 + 3) = v82.hGlobalShare;
    if ( ((*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6) & 0xFFFFFFFD) != 0 )
      v40 = 0LL;
    else
      v40 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                         + 696LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
              v10[3].Count);
    v41 = v71;
    *((_QWORD *)a2 + 41) = v40;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      memmove(*((void **)a2 + 46), v71->pPrivateDriverData, *((unsigned int *)a2 + 94));
      memmove(*((void **)a2 + 44), v81.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
    }
    goto LABEL_51;
  }
  v31 = (struct COREDEVICEACCESS *)v71;
  v78 = (struct COREDEVICEACCESS *)v71;
  v75 = (_DWORD *)((char *)a2 + 52);
  while ( 1 )
  {
    v32 = *(_DWORD *)v31;
    v76 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 5);
    v73 = v32;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v76[31], 0LL) )
    {
      if ( bTracingEnabled )
      {
        Count = v76[34].Count;
        if ( Count != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)v76, (const EVENT_DESCRIPTOR *)"g", v33, Count);
      }
      ExAcquirePushLockSharedEx(&v76[31], 0LL);
    }
    v34 = (v73 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < LODWORD(v76[37].Count) )
    {
      v35 = v76[35].Count;
      v36 = *(_DWORD *)(v35 + 16 * v34 + 8);
      if ( ((v73 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60) && (v36 & 0x2000) == 0 && (v36 & 0x1F) != 0 )
      {
        if ( (v36 & 0x1F) == 5 )
        {
          v37 = *(struct _EX_RUNDOWN_REF **)(v35 + 16LL * (unsigned int)v34);
          goto LABEL_38;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v37 = 0LL;
LABEL_38:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v37);
    ExReleasePushLockSharedEx(&v76[31], 0LL);
    KeLeaveCriticalRegion();
    if ( v10 )
      ExReleaseRundownProtection(v10 + 11);
    v10 = v79;
    v79 = 0LL;
    v76 = v10;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
    if ( !v10 )
      break;
    v38 = v75;
    *v75 = *(_DWORD *)v78;
    if ( v68 )
      goto LABEL_46;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                        + 8LL)
                                                            + 192LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
            *(_QWORD *)(v10[6].Count + 8)) )
    {
      v39 = *((_DWORD *)a2 + 4);
      if ( v39 == 4 )
      {
        if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2 )
          goto LABEL_103;
      }
      else if ( v39 != 5 )
      {
LABEL_103:
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2156LL) & 0x200) == 0 || v39 != 1 )
        {
          LODWORD(v26) = -1073741811;
          WdLogSingleEntry3(2LL, this, *((int *)a2 + 4), -1073741811LL);
          v55 = *((int *)a2 + 4);
          v56 = L"Device 0x%I64x: Driver did not create CPUVisible allocation for standard allocation type 0x%I64x, returning 0x%I64x";
          v57 = 0x40000;
          goto LABEL_108;
        }
      }
    }
    v38 = v75;
LABEL_46:
    v78 = (struct COREDEVICEACCESS *)((char *)v78 + 96);
    ++v70;
    v75 = v38 + 1;
    if ( v70 >= v30 )
      goto LABEL_47;
    v31 = v78;
  }
  LODWORD(v26) = -1073741811;
  v58 = 96LL * v70;
  WdLogSingleEntry3(1LL, this, *(unsigned int *)((char *)&v71->hAllocation + v58), -1073741811LL);
  v55 = *(unsigned int *)((char *)&v71->hAllocation + v58);
  v56 = L"Device 0x%I64x: created standard allocation but the allocation handle (0x%I64x) lookup failed!, returning 0x%I64x";
  v57 = 262146;
LABEL_108:
  DxgkLogInternalTriageEvent(0LL, v57, -1, (__int64)v56, (__int64)this, v55, -1073741811LL, 0LL, 0LL);
  if ( !v82.hResource )
  {
    WdLogSingleEntry1(1LL, 7673LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"CreateAlloc.hResource != NULL", 7673LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v60, v59, v61, v62);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 7681LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 7681LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v83, Current);
  v64 = (v82.hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v64 < *((_DWORD *)Current + 74)
    && (v65 = *((_QWORD *)Current + 35),
        v66 = *(_DWORD *)(v65 + 16 * v64 + 8),
        ((v82.hResource >> 25) & 0x60) == (*(_BYTE *)(v65 + 16 * v64 + 8) & 0x60))
    && (v66 & 0x2000) == 0
    && (v66 & 0x1F) != 0 )
  {
    if ( (v66 & 0x1F) != 4 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_118;
    }
    v67 = *(struct DXGRESOURCE **)(v65 + 16LL * (unsigned int)v64);
    if ( v67 )
    {
      *(_DWORD *)(v65 + 16 * (((unsigned __int64)v82.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      goto LABEL_120;
    }
  }
  else
  {
LABEL_118:
    v67 = 0LL;
  }
  WdLogSingleEntry1(1LL, 7687LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 7687LL, 0LL, 0LL, 0LL, 0LL);
LABEL_120:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v83);
  if ( v67 )
    DXGDEVICE::DestroyAllocationInternal(this, 0LL, 0LL, v67, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_127:
  v41 = v71;
LABEL_51:
  if ( v77 )
  {
    p_pPrivateDriverData = &v41->pPrivateDriverData;
    v43 = v77;
    do
    {
      operator delete[](*p_pPrivateDriverData);
      p_pPrivateDriverData += 12;
      --v43;
    }
    while ( v43 );
  }
LABEL_54:
  operator delete[](v80);
  v19 = v26;
LABEL_55:
  if ( P != v85 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v86 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76);
  return v19;
}

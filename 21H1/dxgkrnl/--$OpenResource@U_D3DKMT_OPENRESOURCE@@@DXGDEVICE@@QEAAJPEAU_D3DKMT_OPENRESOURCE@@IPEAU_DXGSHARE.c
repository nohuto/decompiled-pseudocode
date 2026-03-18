/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011ECF4
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C011F10C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02287F0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C027C118 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C027C6DC (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C010C6F8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C024606C (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        UINT a5,
        struct COREDEVICEACCESS *a6,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v11; // r15
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  struct DXGGLOBAL *v22; // rax
  __int64 v23; // r8
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGGLOBAL *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  char v31; // r12
  unsigned int v32; // eax
  SIZE_T v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  D3DDDI_ALLOCATIONINFO *v36; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v37; // r9
  size_t v38; // rcx
  __int64 v39; // rdx
  char *v40; // r15
  __int64 v41; // r12
  _QWORD *v42; // rbx
  __int64 v43; // rcx
  const void *v44; // rdx
  __int64 v45; // rdx
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  D3DKMT_HANDLE hResource; // eax
  unsigned int v55; // r10d
  _DWORD *v56; // r9
  __int64 v57; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  struct DXGPROCESS *Current; // r13
  SIZE_T v76; // rax
  __int64 v77; // rcx
  unsigned int *v78; // r12
  __int64 v79; // rdx
  __int64 v80; // rax
  unsigned int v81; // edx
  unsigned int v82; // r8d
  __int64 v83; // rax
  __int64 v84; // r9
  int v85; // ecx
  __int64 v86; // rcx
  __int64 v87; // rax
  struct _EX_RUNDOWN_REF *v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  unsigned int v93; // r14d
  __int64 v94; // rax
  __int64 v95; // r9
  int v96; // ecx
  __int64 v97; // rcx
  __int64 v98; // rax
  struct _EX_RUNDOWN_REF *v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rdx
  _BYTE v105[8]; // [rsp+80h] [rbp-80h] BYREF
  char v106; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v107[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_CREATEALLOCATION v108; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v109[80]; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_ALLOCATIONINFO *v110; // [rsp+150h] [rbp+50h]
  struct _EX_RUNDOWN_REF *v111; // [rsp+168h] [rbp+68h] BYREF

  v111 = a4;
  v110 = 0LL;
  v11 = a3;
  memset(&v108, 0, sizeof(v108));
  v13 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v63 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v63 + 24) = 7450LL;
    WdLogEvent5_WdAssertion(v63);
  }
  v16 = *((_BYTE *)DXGPROCESS::GetCurrent(v15, v14) + 347);
  Global = DXGGLOBAL::GetGlobal(v18, v17);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v105, (struct DXGGLOBAL *)((char *)Global + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v105);
  if ( !(_DWORD)v11 )
    goto LABEL_95;
  v22 = DXGGLOBAL::GetGlobal(v21, v20);
  CurrentThread = KeGetCurrentThread();
  v25 = v22;
  if ( *((struct _KTHREAD **)v22 + 19) != CurrentThread )
  {
    v59 = WdLogNewEntry5_WdAssertion(CurrentThread, v20);
    *(_QWORD *)(v59 + 24) = 1102LL;
    WdLogEvent5_WdAssertion(v59);
  }
  v26 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v26 >= *((_DWORD *)v25 + 48) )
    goto LABEL_41;
  v23 = *((_QWORD *)v25 + 22);
  v27 = 2LL * (unsigned int)v26;
  v28 = (unsigned int)v26;
  v26 = ((unsigned int)v11 >> 25) & 0x60;
  v20 = *(unsigned int *)(v23 + 8 * v27 + 8);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v23 + 8 * v27 + 8) & 0x60)
    || (v20 & 0x2000) != 0
    || (v20 & 0x1F) == 0 )
  {
    goto LABEL_41;
  }
  v29 = 2 * v28;
  v20 &= 0x1Fu;
  if ( (_BYTE)v20 != 2 )
  {
    v64 = WdLogNewEntry5_WdError(v26, v20);
    *(_QWORD *)(v64 + 24) = 267LL;
    WdLogEvent5_WdError(v64);
    goto LABEL_41;
  }
  v30 = *(_QWORD *)(v23 + 8 * v29);
  if ( !v30 )
  {
LABEL_41:
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v20, v23);
    v60[3] = this;
    v60[4] = v11;
    v60[5] = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdWarning(v60);
LABEL_43:
    LODWORD(v53) = -1073741811;
LABEL_44:
    v62 = v106 == 0;
LABEL_57:
    if ( !v62 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v105, v61);
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 136) - 44LL) & 2) != 0 )
  {
    v65 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
    if ( v65 )
    {
      if ( !(*(unsigned int (**)(void))(v65 + 208))() )
      {
        v67 = WdLogNewEntry5_WdEvent(v66, v20);
        LODWORD(v53) = -1073741790;
        *(_QWORD *)(v67 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v67);
        goto LABEL_44;
      }
    }
  }
  v21 = *(unsigned int *)(a2 + 8);
  if ( *(_DWORD *)(v30 + 132) != (_DWORD)v21 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v68[3] = this;
    v68[4] = *(unsigned int *)(v30 + 132);
    v68[5] = *(unsigned int *)(a2 + 8);
    v68[6] = -1073741811LL;
LABEL_96:
    WdLogEvent5_WdError(v68);
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(v30 + 12) & 4) != 0 )
  {
LABEL_95:
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v68[4] = -1073741811LL;
    v68[3] = this;
    goto LABEL_96;
  }
  v31 = v16 & 0x20;
  if ( !v31 )
  {
    v32 = *(_DWORD *)(v30 + 112);
    if ( *(_DWORD *)(a2 + 32) != v32 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v23);
      v60[3] = this;
      v60[4] = *(unsigned int *)(a2 + 32);
      v69 = *(unsigned int *)(v30 + 112);
LABEL_52:
      v60[5] = v69;
      v60[6] = -1073741811LL;
      goto LABEL_42;
    }
    if ( v32 )
    {
      memmove(*(void **)(a2 + 24), *(const void **)(v30 + 104), v32);
      v21 = *(unsigned int *)(a2 + 8);
    }
  }
  v33 = 96 * v21;
  if ( !is_mul_ok(v21, 0x60uLL) )
    v33 = -1LL;
  v110 = (D3DDDI_ALLOCATIONINFO *)operator new[](v33, 0x4B677844u, PagedPool);
  v36 = v110;
  if ( !v110 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, 0LL);
    v70[3] = this;
    v70[4] = *(unsigned int *)(a2 + 8);
    v70[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v70);
    LODWORD(v53) = -1073741801;
    goto LABEL_44;
  }
  v37 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v38 = *(unsigned int *)(a2 + 48);
  v39 = *(unsigned int *)(a2 + 8);
  v108.hDevice = *(_DWORD *)a2;
  v108.hGlobalShare = v11;
  v108.pStandardAllocation = v37;
  v108.PrivateDriverDataSize = v38;
  v108.NumAllocations = v39;
  v108.pAllocationInfo = v110;
  v108.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v108.Flags & 0xFFFFFF3E | 1);
  if ( !v31 && (_DWORD)v38 != *(_DWORD *)(v30 + 128) )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v39, v110);
    v60[3] = this;
    v60[4] = *(unsigned int *)(a2 + 48);
    v69 = *(unsigned int *)(v30 + 128);
    goto LABEL_52;
  }
  if ( (_DWORD)v38 )
  {
    memmove(v37, *(const void **)(v30 + 120), v38);
    v39 = *(unsigned int *)(a2 + 8);
    v36 = v110;
  }
  v40 = *(char **)(a2 + 56);
  v41 = 0LL;
  v42 = *(_QWORD **)(v30 + 136);
  if ( (_DWORD)v39 )
  {
    while ( 1 )
    {
      v43 = *((unsigned int *)v42 - 2);
      if ( (unsigned int)v43 + v13 < v13 )
        break;
      if ( (unsigned int)v43 + v13 > *(_DWORD *)(a2 + 64) )
      {
        v71 = WdLogNewEntry5_WdWarning(v43, v39, v36);
        *(_QWORD *)(v71 + 24) = this;
        *(_QWORD *)(v71 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v71);
        LODWORD(v53) = -1073741801;
        goto LABEL_56;
      }
      v44 = (const void *)*(v42 - 2);
      if ( v44 )
      {
        memmove(v40, v44, (unsigned int)v43);
        v36 = v110;
      }
      v45 = 3 * v41;
      v41 = (unsigned int)(v41 + 1);
      v39 = 32 * v45;
      *(D3DKMT_HANDLE *)((char *)&v36->hAllocation + v39) = 0;
      *(const void **)((char *)&v36->pSystemMem + v39) = 0LL;
      v46 = *((_DWORD *)v42 - 11);
      *(UINT *)((char *)&v36->Flags.Value + v39) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v36->VidPnSourceId + v39) = (v46 >> 6) & 0xF;
      v47 = *((_DWORD *)v42 - 11);
      *(void **)((char *)&v36->pPrivateDriverData + v39) = v40;
      *(UINT *)((char *)&v36->Flags.Value + v39) = v47 & 1 | (((v47 | (v47 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v36->PrivateDriverDataSize + v39) = *((_DWORD *)v42 - 2);
      v48 = *((unsigned int *)v42 - 2);
      v42 = (_QWORD *)*v42;
      v13 += v48;
      v40 += v48;
      if ( (unsigned int)v41 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_32;
    }
    LODWORD(v53) = -1073741675;
    v72 = WdLogNewEntry5_WdWarning(v43, v39, v36);
    *(_QWORD *)(v72 + 24) = this;
    *(_QWORD *)(v72 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v72);
LABEL_56:
    v62 = v106 == 0;
    goto LABEL_57;
  }
LABEL_32:
  if ( v106 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v105, v39);
  v49 = DXGDEVICE::CreateAllocation(this, &v108, 0LL, 1, 0LL, 0LL, a6, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v53 = v49;
  if ( v49 < 0 )
  {
    v73 = WdLogNewEntry5_WdWarning(v51, v50, v52);
    *(_QWORD *)(v73 + 24) = v53;
    WdLogEvent5_WdWarning(v73);
    goto LABEL_40;
  }
  hResource = v108.hResource;
  if ( !v108.hResource )
  {
    v74 = WdLogNewEntry5_WdAssertion(v51, v50);
    *(_QWORD *)(v74 + 24) = 7657LL;
    WdLogEvent5_WdAssertion(v74);
    hResource = v108.hResource;
  }
  v55 = 0;
  v56 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = v13;
  for ( *(_DWORD *)(a2 + 68) = hResource; v55 < *(_DWORD *)(a2 + 8); *(v56 - 16) = v51 )
  {
    v57 = v55++;
    *v56 = *(&v108.pAllocationInfo->hAllocation + 24 * v57);
    v56 += 20;
    *((_QWORD *)v56 - 9) = *(_QWORD *)(a2 + 56)
                         + (unsigned int)(*((_DWORD *)&v108.pAllocationInfo->pPrivateDriverData + 24 * v57)
                                        - *(_DWORD *)(a2 + 56));
    v51 = *(&v108.pAllocationInfo->PrivateDriverDataSize + 24 * v57);
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    Current = DXGPROCESS::GetCurrent(v51, v50);
    v76 = 4LL * *(unsigned int *)(a2 + 8);
    if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 4uLL) )
      v76 = -1LL;
    v78 = (unsigned int *)operator new[](v76, 0x4B677844u, PagedPool);
    if ( !v78 )
    {
      LODWORD(v53) = -1073741801;
      goto LABEL_40;
    }
    v79 = *(unsigned int *)(v30 + 12);
    if ( (v79 & 8) != 0 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v77, v79);
      *(_QWORD *)(v80 + 24) = 7687LL;
      WdLogEvent5_WdAssertion(v80);
      LODWORD(v79) = *(_DWORD *)(v30 + 12);
    }
    v81 = (unsigned int)v79 >> 3;
    a7 = 0;
    if ( (v81 & 1) != 0 )
      v82 = MEMORY[0x28];
    else
      v82 = *(_DWORD *)(v30 + 28);
    LODWORD(v53) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
                     Current,
                     this,
                     v81 & 1,
                     v82,
                     *(_DWORD *)(a2 + 8),
                     *(_DWORD *)(a2 + 64),
                     &a7,
                     v78);
    if ( (int)v53 < 0 )
      goto LABEL_94;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v109, (struct _KTHREAD **)Current);
    v83 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v83 < *((_DWORD *)Current + 64) )
    {
      v84 = *((_QWORD *)Current + 30);
      v85 = *(_DWORD *)(v84 + 16 * v83 + 8);
      if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v84 + 16 * v83 + 8) & 0x60)
        && (v85 & 0x2000) == 0
        && (v85 & 0x1F) != 0 )
      {
        v86 = v85 & 0x1F;
        if ( (_BYTE)v86 == 4 )
        {
          v88 = *(struct _EX_RUNDOWN_REF **)(v84 + 16LL * (unsigned int)v83);
          goto LABEL_77;
        }
        v87 = WdLogNewEntry5_WdError(v86, (*(_DWORD *)(a2 + 68) >> 25) & 0x60);
        *(_QWORD *)(v87 + 24) = 267LL;
        WdLogEvent5_WdError(v87);
      }
    }
    v88 = 0LL;
LABEL_77:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v107, v88);
    if ( !v107[0] )
    {
      v92 = WdLogNewEntry5_WdWarning(v90, v89, v91);
      *(_QWORD *)(v92 + 24) = 7704LL;
      WdLogEvent5_WdWarning(v92);
      LODWORD(v53) = -1073741811;
      goto LABEL_93;
    }
    v93 = 0;
    HIDWORD(v107[0][2].Ptr) = a7;
    if ( *(_DWORD *)(a2 + 8) )
    {
      while ( 1 )
      {
        v94 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v93) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v94 >= *((_DWORD *)Current + 64) )
          goto LABEL_87;
        v95 = *((_QWORD *)Current + 30);
        v96 = *(_DWORD *)(v95 + 16 * v94 + 8);
        if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v93) >> 25) & 0x60) != (*(_BYTE *)(v95 + 16 * v94 + 8) & 0x60)
          || (v96 & 0x2000) != 0
          || (v96 & 0x1F) == 0 )
        {
          goto LABEL_87;
        }
        v97 = v96 & 0x1F;
        if ( (_BYTE)v97 != 5 )
          break;
        v99 = *(struct _EX_RUNDOWN_REF **)(v95 + 16LL * (unsigned int)v94);
LABEL_88:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v111, v99);
        if ( !v111 )
        {
          v103 = WdLogNewEntry5_WdWarning(v101, v100, v102);
          *(_QWORD *)(v103 + 24) = 7715LL;
          WdLogEvent5_WdWarning(v103);
          LODWORD(v53) = -1073741811;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v104);
          goto LABEL_93;
        }
        LODWORD(v111[12].Count) = v78[v93];
        HIDWORD(v111[12].Ptr) = v78[v93];
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v100);
        if ( ++v93 >= *(_DWORD *)(a2 + 8) )
          goto LABEL_93;
      }
      v98 = WdLogNewEntry5_WdError(v97, (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v93) >> 25) & 0x60);
      *(_QWORD *)(v98 + 24) = 267LL;
      WdLogEvent5_WdError(v98);
LABEL_87:
      v99 = 0LL;
      goto LABEL_88;
    }
LABEL_93:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v107, v89);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v109);
LABEL_94:
    operator delete[](v78);
  }
LABEL_40:
  operator delete[](v110);
  return (unsigned int)v53;
}

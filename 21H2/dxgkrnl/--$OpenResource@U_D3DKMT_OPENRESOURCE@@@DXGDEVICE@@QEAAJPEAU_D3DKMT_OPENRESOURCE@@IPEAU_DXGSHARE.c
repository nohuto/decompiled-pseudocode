/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0117FD8
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01183E4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022C790 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0280854 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0280E70 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F2BE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C024A1AC (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned int a5,
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
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  char v32; // r12
  unsigned int v33; // eax
  SIZE_T v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  D3DDDI_ALLOCATIONINFO *v37; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v38; // r9
  size_t v39; // rcx
  __int64 v40; // rdx
  char *v41; // r15
  __int64 v42; // r12
  _QWORD *v43; // rbx
  __int64 v44; // rcx
  const void *v45; // rdx
  __int64 v46; // rdx
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rbx
  D3DKMT_HANDLE hResource; // eax
  unsigned int v56; // r10d
  _DWORD *v57; // r9
  __int64 v58; // rax
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
    *(_QWORD *)(v63 + 24) = 7624LL;
    WdLogEvent5_WdAssertion(v63);
  }
  v16 = *((_BYTE *)DXGPROCESS::GetCurrent(v15, v14) + 347);
  Global = DXGGLOBAL::GetGlobal(v18, v17);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v105, (struct DXGGLOBAL *)((char *)Global + 248), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v105);
  if ( !(_DWORD)v11 )
    goto LABEL_95;
  v22 = DXGGLOBAL::GetGlobal(v21, v20);
  CurrentThread = KeGetCurrentThread();
  v25 = v22;
  if ( *((struct _KTHREAD **)v22 + 33) != CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(CurrentThread, v20);
    *(_QWORD *)(v26 + 24) = 1114LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 >= *((_DWORD *)v25 + 76) )
    goto LABEL_41;
  v23 = *((_QWORD *)v25 + 36);
  v28 = 2LL * (unsigned int)v27;
  v29 = (unsigned int)v27;
  v27 = ((unsigned int)v11 >> 25) & 0x60;
  v20 = *(unsigned int *)(v23 + 8 * v28 + 8);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v23 + 8 * v28 + 8) & 0x60)
    || (v20 & 0x2000) != 0
    || (v20 & 0x1F) == 0 )
  {
    goto LABEL_41;
  }
  v30 = 2 * v29;
  v20 &= 0x1Fu;
  if ( (_BYTE)v20 != 2 )
  {
    v64 = WdLogNewEntry5_WdError(v27, v20);
    *(_QWORD *)(v64 + 24) = 316LL;
    WdLogEvent5_WdError(v64);
    goto LABEL_41;
  }
  v31 = *(_QWORD *)(v23 + 8 * v30);
  if ( !v31 )
  {
LABEL_41:
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v20, v23);
    v60[3] = this;
    v60[4] = v11;
    v60[5] = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdWarning(v60);
LABEL_43:
    LODWORD(v54) = -1073741811;
LABEL_44:
    v62 = v106 == 0;
LABEL_57:
    if ( !v62 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v105, v61);
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v31 + 136) - 44LL) & 2) != 0 )
  {
    v65 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
    if ( v65 )
    {
      if ( !(*(unsigned int (**)(void))(v65 + 208))() )
      {
        v67 = WdLogNewEntry5_WdEvent(v66, v20);
        LODWORD(v54) = -1073741790;
        *(_QWORD *)(v67 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v67);
        goto LABEL_44;
      }
    }
  }
  v21 = *(unsigned int *)(a2 + 8);
  if ( *(_DWORD *)(v31 + 132) != (_DWORD)v21 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v68[3] = this;
    v68[4] = *(unsigned int *)(v31 + 132);
    v68[5] = *(unsigned int *)(a2 + 8);
    v68[6] = -1073741811LL;
LABEL_96:
    WdLogEvent5_WdError(v68);
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(v31 + 12) & 4) != 0 )
  {
LABEL_95:
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v68[4] = -1073741811LL;
    v68[3] = this;
    goto LABEL_96;
  }
  v32 = v16 & 0x20;
  if ( !v32 )
  {
    v33 = *(_DWORD *)(v31 + 112);
    if ( *(_DWORD *)(a2 + 32) != v33 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v23);
      v60[3] = this;
      v60[4] = *(unsigned int *)(a2 + 32);
      v69 = *(unsigned int *)(v31 + 112);
LABEL_52:
      v60[5] = v69;
      v60[6] = -1073741811LL;
      goto LABEL_42;
    }
    if ( v33 )
    {
      memmove(*(void **)(a2 + 24), *(const void **)(v31 + 104), v33);
      v21 = *(unsigned int *)(a2 + 8);
    }
  }
  v34 = 96 * v21;
  if ( !is_mul_ok(v21, 0x60uLL) )
    v34 = -1LL;
  v110 = (D3DDDI_ALLOCATIONINFO *)operator new[](v34, 0x4B677844u, PagedPool);
  v37 = v110;
  if ( !v110 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, 0LL);
    v70[3] = this;
    v70[4] = *(unsigned int *)(a2 + 8);
    v70[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v70);
    LODWORD(v54) = -1073741801;
    goto LABEL_44;
  }
  v38 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v39 = *(unsigned int *)(a2 + 48);
  v40 = *(unsigned int *)(a2 + 8);
  v108.hDevice = *(_DWORD *)a2;
  v108.hGlobalShare = v11;
  v108.pStandardAllocation = v38;
  v108.PrivateDriverDataSize = v39;
  v108.NumAllocations = v40;
  v108.pAllocationInfo = v110;
  v108.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v108.Flags & 0xFFFFFF3E | 1);
  if ( !v32 && (_DWORD)v39 != *(_DWORD *)(v31 + 128) )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v110);
    v60[3] = this;
    v60[4] = *(unsigned int *)(a2 + 48);
    v69 = *(unsigned int *)(v31 + 128);
    goto LABEL_52;
  }
  if ( (_DWORD)v39 )
  {
    memmove(v38, *(const void **)(v31 + 120), v39);
    v40 = *(unsigned int *)(a2 + 8);
    v37 = v110;
  }
  v41 = *(char **)(a2 + 56);
  v42 = 0LL;
  v43 = *(_QWORD **)(v31 + 136);
  if ( (_DWORD)v40 )
  {
    while ( 1 )
    {
      v44 = *((unsigned int *)v43 - 2);
      if ( (unsigned int)v44 + v13 < v13 )
        break;
      if ( (unsigned int)v44 + v13 > *(_DWORD *)(a2 + 64) )
      {
        v71 = WdLogNewEntry5_WdWarning(v44, v40, v37);
        *(_QWORD *)(v71 + 24) = this;
        *(_QWORD *)(v71 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v71);
        LODWORD(v54) = -1073741801;
        goto LABEL_56;
      }
      v45 = (const void *)*(v43 - 2);
      if ( v45 )
      {
        memmove(v41, v45, (unsigned int)v44);
        v37 = v110;
      }
      v46 = 3 * v42;
      v42 = (unsigned int)(v42 + 1);
      v40 = 32 * v46;
      *(D3DKMT_HANDLE *)((char *)&v37->hAllocation + v40) = 0;
      *(const void **)((char *)&v37->pSystemMem + v40) = 0LL;
      v47 = *((_DWORD *)v43 - 11);
      *(UINT *)((char *)&v37->Flags.Value + v40) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v37->VidPnSourceId + v40) = (v47 >> 6) & 0xF;
      v48 = *((_DWORD *)v43 - 11);
      *(void **)((char *)&v37->pPrivateDriverData + v40) = v41;
      *(UINT *)((char *)&v37->Flags.Value + v40) = v48 & 1 | (((v48 | (v48 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v37->PrivateDriverDataSize + v40) = *((_DWORD *)v43 - 2);
      v49 = *((unsigned int *)v43 - 2);
      v43 = (_QWORD *)*v43;
      v13 += v49;
      v41 += v49;
      if ( (unsigned int)v42 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_32;
    }
    LODWORD(v54) = -1073741675;
    v72 = WdLogNewEntry5_WdWarning(v44, v40, v37);
    *(_QWORD *)(v72 + 24) = this;
    *(_QWORD *)(v72 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v72);
LABEL_56:
    v62 = v106 == 0;
    goto LABEL_57;
  }
LABEL_32:
  if ( v106 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v105, v40);
  v50 = DXGDEVICE::CreateAllocation(this, &v108, 0LL, 1, 0LL, 0LL, a6, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v54 = v50;
  if ( v50 < 0 )
  {
    v73 = WdLogNewEntry5_WdWarning(v52, v51, v53);
    *(_QWORD *)(v73 + 24) = v54;
    WdLogEvent5_WdWarning(v73);
    goto LABEL_40;
  }
  hResource = v108.hResource;
  if ( !v108.hResource )
  {
    v74 = WdLogNewEntry5_WdAssertion(v52, v51);
    *(_QWORD *)(v74 + 24) = 7831LL;
    WdLogEvent5_WdAssertion(v74);
    hResource = v108.hResource;
  }
  v56 = 0;
  v57 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = v13;
  for ( *(_DWORD *)(a2 + 68) = hResource; v56 < *(_DWORD *)(a2 + 8); *(v57 - 16) = v52 )
  {
    v58 = v56++;
    *v57 = *(&v108.pAllocationInfo->hAllocation + 24 * v58);
    v57 += 20;
    *((_QWORD *)v57 - 9) = *(_QWORD *)(a2 + 56)
                         + (unsigned int)(*((_DWORD *)&v108.pAllocationInfo->pPrivateDriverData + 24 * v58)
                                        - *(_DWORD *)(a2 + 56));
    v52 = *(&v108.pAllocationInfo->PrivateDriverDataSize + 24 * v58);
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    Current = DXGPROCESS::GetCurrent(v52, v51);
    v76 = 4LL * *(unsigned int *)(a2 + 8);
    if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 4uLL) )
      v76 = -1LL;
    v78 = (unsigned int *)operator new[](v76, 0x4B677844u, PagedPool);
    if ( !v78 )
    {
      LODWORD(v54) = -1073741801;
      goto LABEL_40;
    }
    v79 = *(unsigned int *)(v31 + 12);
    if ( (v79 & 8) != 0 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v77, v79);
      *(_QWORD *)(v80 + 24) = 7861LL;
      WdLogEvent5_WdAssertion(v80);
      LODWORD(v79) = *(_DWORD *)(v31 + 12);
    }
    v81 = (unsigned int)v79 >> 3;
    a7 = 0;
    if ( (v81 & 1) != 0 )
      v82 = MEMORY[0x28];
    else
      v82 = *(_DWORD *)(v31 + 28);
    LODWORD(v54) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
                     Current,
                     this,
                     v81 & 1,
                     v82,
                     *(_DWORD *)(a2 + 8),
                     *(_DWORD *)(a2 + 64),
                     &a7,
                     v78);
    if ( (int)v54 < 0 )
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
        *(_QWORD *)(v87 + 24) = 316LL;
        WdLogEvent5_WdError(v87);
      }
    }
    v88 = 0LL;
LABEL_77:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v107, v88);
    if ( !v107[0] )
    {
      v92 = WdLogNewEntry5_WdWarning(v90, v89, v91);
      *(_QWORD *)(v92 + 24) = 7878LL;
      WdLogEvent5_WdWarning(v92);
      LODWORD(v54) = -1073741811;
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
          *(_QWORD *)(v103 + 24) = 7889LL;
          WdLogEvent5_WdWarning(v103);
          LODWORD(v54) = -1073741811;
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
      *(_QWORD *)(v98 + 24) = 316LL;
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
  return (unsigned int)v54;
}

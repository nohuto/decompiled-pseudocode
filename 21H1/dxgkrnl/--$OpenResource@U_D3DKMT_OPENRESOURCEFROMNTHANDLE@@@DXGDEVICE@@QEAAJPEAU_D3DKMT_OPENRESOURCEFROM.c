/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0123F30
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01237E4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0228BB0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C02969C0 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DB94 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
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

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        UINT a5,
        struct COREDEVICEACCESS *a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // r13d
  D3DDDI_ALLOCATIONINFO *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r14
  char v24; // bl
  unsigned int v25; // eax
  SIZE_T v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  D3DDDI_ALLOCATIONINFO *v29; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v30; // r9
  size_t v31; // rcx
  __int64 v32; // rdx
  char *v33; // r12
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  const void *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  D3DKMT_HANDLE hResource; // eax
  unsigned int v46; // r10d
  __int64 v47; // rcx
  _DWORD *v48; // r9
  __int64 v49; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rax
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  struct DXGPROCESS *Current; // r13
  SIZE_T v67; // rax
  unsigned int *v68; // r12
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // r9
  int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // rax
  struct _EX_RUNDOWN_REF *v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rsi
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
  __int64 v93; // rdx
  _BYTE v94[8]; // [rsp+80h] [rbp-80h] BYREF
  char v95; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v96[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_CREATEALLOCATION v97; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v98[80]; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_ALLOCATIONINFO *v99; // [rsp+150h] [rbp+50h]
  unsigned int v100; // [rsp+160h] [rbp+60h] BYREF
  struct _EX_RUNDOWN_REF *v101; // [rsp+168h] [rbp+68h] BYREF

  v100 = a3;
  v10 = 0;
  v14 = 0LL;
  memset(&v97, 0, sizeof(v97));
  v15 = *((_QWORD *)this + 2);
  v100 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v15 + 16)) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v51 + 24) = 7450LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v18 = *((_BYTE *)DXGPROCESS::GetCurrent(v17, v16) + 347);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v94, v19);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v94);
  if ( !a4 )
    goto LABEL_46;
  v23 = *(_QWORD *)(a4 + 16);
  if ( !v23 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    LODWORD(v44) = -1073741811;
    v52[3] = this;
    v52[4] = a4;
    v52[5] = -1073741811LL;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v23 + 136) - 44LL) & 2) == 0
    || (v55 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL)) == 0
    || (*(unsigned int (**)(void))(v55 + 208))() )
  {
    v21 = *(unsigned int *)(a2 + 16);
    if ( *(_DWORD *)(v23 + 132) != (_DWORD)v21 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      LODWORD(v44) = -1073741811;
      v54[3] = this;
      v54[4] = *(unsigned int *)(v23 + 132);
      v54[5] = *(unsigned int *)(a2 + 16);
      v54[6] = -1073741811LL;
LABEL_40:
      WdLogEvent5_WdError(v54);
      goto LABEL_41;
    }
    if ( (*(_DWORD *)(v23 + 12) & 4) == 0 )
    {
      v24 = v18 & 0x20;
      if ( v24 )
        goto LABEL_12;
      v25 = *(_DWORD *)(v23 + 112);
      if ( *(_DWORD *)(a2 + 32) == v25 )
      {
        if ( v25 )
        {
          memmove(*(void **)(a2 + 40), *(const void **)(v23 + 104), v25);
          v21 = *(unsigned int *)(a2 + 16);
        }
LABEL_12:
        v26 = 96 * v21;
        if ( !is_mul_ok(v21, 0x60uLL) )
          v26 = -1LL;
        v99 = (D3DDDI_ALLOCATIONINFO *)operator new[](v26, 0x4B677844u, PagedPool);
        v29 = v99;
        if ( v99 )
        {
          v30 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
          v31 = *(unsigned int *)(a2 + 48);
          v32 = *(unsigned int *)(a2 + 16);
          v97.hDevice = *(_DWORD *)a2;
          v97.hGlobalShare = 0;
          v97.pStandardAllocation = v30;
          v97.PrivateDriverDataSize = v31;
          v97.NumAllocations = v32;
          v97.pAllocationInfo = v99;
          v97.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v97.Flags ^ (*(_BYTE *)&v97.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
          if ( v24 || (_DWORD)v31 == *(_DWORD *)(v23 + 128) )
          {
            if ( (_DWORD)v31 )
            {
              memmove(v30, *(const void **)(v23 + 120), v31);
              v32 = *(unsigned int *)(a2 + 16);
              v29 = v99;
            }
            v33 = *(char **)(a2 + 72);
            v34 = *(_QWORD **)(v23 + 136);
            if ( (_DWORD)v32 )
            {
              v32 = 0LL;
              while ( 1 )
              {
                v35 = *((unsigned int *)v34 - 2);
                if ( (int)v35 + (int)v32 < (unsigned int)v32 )
                  break;
                if ( (unsigned int)(v35 + v32) > *(_DWORD *)(a2 + 64) )
                {
                  v62 = WdLogNewEntry5_WdWarning(v35, v32, v29);
                  *(_QWORD *)(v62 + 24) = this;
                  *(_QWORD *)(v62 + 32) = -1073741801LL;
                  WdLogEvent5_WdWarning(v62);
                  LODWORD(v44) = -1073741801;
                  goto LABEL_51;
                }
                v36 = (const void *)*(v34 - 2);
                if ( v36 )
                {
                  memmove(v33, v36, (unsigned int)v35);
                  v29 = v99;
                }
                v37 = v10++;
                v38 = 96 * v37;
                *(D3DKMT_HANDLE *)((char *)&v29->hAllocation + v38) = 0;
                *(const void **)((char *)&v29->pSystemMem + v38) = 0LL;
                LODWORD(v37) = *((_DWORD *)v34 - 11);
                *(UINT *)((char *)&v29->Flags.Value + v38) = 0;
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v29->VidPnSourceId + v38) = ((unsigned int)v37 >> 6) & 0xF;
                LODWORD(v37) = *((_DWORD *)v34 - 11);
                *(void **)((char *)&v29->pPrivateDriverData + v38) = v33;
                *(UINT *)((char *)&v29->Flags.Value + v38) = v37 & 1 | ((((unsigned int)v37 | ((unsigned int)v37 >> 12)) & 2) != 0);
                *(UINT *)((char *)&v29->PrivateDriverDataSize + v38) = *((_DWORD *)v34 - 2);
                v39 = *((unsigned int *)v34 - 2);
                v33 += v39;
                v34 = (_QWORD *)*v34;
                v32 = (unsigned int)v39 + v100;
                v100 += v39;
                if ( v10 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_26;
              }
              LODWORD(v44) = -1073741675;
              v63 = WdLogNewEntry5_WdWarning(v35, v32, v29);
              *(_QWORD *)(v63 + 24) = this;
              *(_QWORD *)(v63 + 32) = -1073741675LL;
              WdLogEvent5_WdWarning(v63);
LABEL_51:
              v61 = v95 == 0;
              goto LABEL_52;
            }
LABEL_26:
            if ( v95 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94, v32);
            v40 = DXGDEVICE::CreateAllocation(
                    this,
                    &v97,
                    0LL,
                    1,
                    (struct _DXGSHAREDALLOCOBJECT *)a4,
                    0LL,
                    a6,
                    a5,
                    a8,
                    a9,
                    a10,
                    0LL,
                    0LL,
                    0LL,
                    0);
            v44 = v40;
            if ( v40 < 0 )
            {
              v64 = WdLogNewEntry5_WdWarning(v42, v41, v43);
              *(_QWORD *)(v64 + 24) = v44;
              WdLogEvent5_WdWarning(v64);
LABEL_34:
              v14 = v99;
              goto LABEL_35;
            }
            hResource = v97.hResource;
            if ( !v97.hResource )
            {
              v65 = WdLogNewEntry5_WdAssertion(v42, v41);
              *(_QWORD *)(v65 + 24) = 7657LL;
              WdLogEvent5_WdAssertion(v65);
              hResource = v97.hResource;
            }
            v46 = 0;
            v47 = v100;
            v48 = *(_DWORD **)(a2 + 24);
            *(_DWORD *)(a2 + 64) = v100;
            for ( *(_DWORD *)(a2 + 80) = hResource; v46 < *(_DWORD *)(a2 + 16); *(v48 - 16) = v47 )
            {
              v49 = v46++;
              *v48 = *(&v97.pAllocationInfo->hAllocation + 24 * v49);
              v48 += 20;
              *((_QWORD *)v48 - 9) = *(_QWORD *)(a2 + 72)
                                   + (unsigned int)(*((_DWORD *)&v97.pAllocationInfo->pPrivateDriverData + 24 * v49)
                                                  - *(_DWORD *)(a2 + 72));
              v47 = *(&v97.pAllocationInfo->PrivateDriverDataSize + 24 * v49);
            }
            if ( (*((_BYTE *)this + 1869) & 1) == 0 )
              goto LABEL_34;
            Current = DXGPROCESS::GetCurrent(v47, v41);
            v67 = 4LL * *(unsigned int *)(a2 + 16);
            if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 4uLL) )
              v67 = -1LL;
            v68 = (unsigned int *)operator new[](v67, 0x4B677844u, PagedPool);
            if ( !v68 )
            {
              LODWORD(v44) = -1073741801;
              goto LABEL_34;
            }
            v69 = *(_DWORD *)(v23 + 12);
            v100 = 0;
            v70 = v69 >> 3;
            if ( (v70 & 1) != 0 )
              v71 = *(_DWORD *)(a4 + 40);
            else
              v71 = *(_DWORD *)(v23 + 28);
            LODWORD(v44) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
                             Current,
                             this,
                             v70 & 1,
                             v71,
                             *(_DWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 64),
                             &v100,
                             v68);
            if ( (int)v44 < 0 )
              goto LABEL_88;
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
              (DXGHANDLETABLELOCKSHARED *)v98,
              (struct _KTHREAD **)Current);
            v72 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v72 < *((_DWORD *)Current + 64) )
            {
              v73 = *((_QWORD *)Current + 30);
              v74 = *(_DWORD *)(v73 + 16 * v72 + 8);
              if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v73 + 16 * v72 + 8) & 0x60)
                && (v74 & 0x2000) == 0
                && (v74 & 0x1F) != 0 )
              {
                v75 = v74 & 0x1F;
                if ( (_BYTE)v75 == 4 )
                {
                  v77 = *(struct _EX_RUNDOWN_REF **)(v73 + 16LL * (unsigned int)v72);
                  goto LABEL_71;
                }
                v76 = WdLogNewEntry5_WdError(v75, (*(_DWORD *)(a2 + 80) >> 25) & 0x60);
                *(_QWORD *)(v76 + 24) = 267LL;
                WdLogEvent5_WdError(v76);
              }
            }
            v77 = 0LL;
LABEL_71:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v96, v77);
            if ( !v96[0] )
            {
              v81 = WdLogNewEntry5_WdWarning(v79, v78, v80);
              *(_QWORD *)(v81 + 24) = 7704LL;
              WdLogEvent5_WdWarning(v81);
              LODWORD(v44) = -1073741811;
              goto LABEL_87;
            }
            v82 = 0LL;
            HIDWORD(v96[0][2].Ptr) = v100;
            if ( *(_DWORD *)(a2 + 16) )
            {
              while ( 1 )
              {
                v83 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v82) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v83 >= *((_DWORD *)Current + 64) )
                  goto LABEL_81;
                v84 = *((_QWORD *)Current + 30);
                v85 = *(_DWORD *)(v84 + 16 * v83 + 8);
                if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v82) >> 25) & 0x60) != (*(_BYTE *)(v84 + 16 * v83 + 8) & 0x60)
                  || (v85 & 0x2000) != 0
                  || (v85 & 0x1F) == 0 )
                {
                  goto LABEL_81;
                }
                v86 = v85 & 0x1F;
                if ( (_BYTE)v86 != 5 )
                  break;
                v88 = *(struct _EX_RUNDOWN_REF **)(v84 + 16LL * (unsigned int)v83);
LABEL_82:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v101, v88);
                if ( !v101 )
                {
                  v92 = WdLogNewEntry5_WdWarning(v90, v89, v91);
                  *(_QWORD *)(v92 + 24) = 7715LL;
                  WdLogEvent5_WdWarning(v92);
                  LODWORD(v44) = -1073741811;
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101, v93);
                  goto LABEL_87;
                }
                LODWORD(v101[12].Count) = v68[v82];
                HIDWORD(v101[12].Ptr) = v68[v82];
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101, v89);
                v82 = (unsigned int)(v82 + 1);
                if ( (unsigned int)v82 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_87;
              }
              v87 = WdLogNewEntry5_WdError(v86, (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v82) >> 25) & 0x60);
              *(_QWORD *)(v87 + 24) = 267LL;
              WdLogEvent5_WdError(v87);
LABEL_81:
              v88 = 0LL;
              goto LABEL_82;
            }
LABEL_87:
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v96, v78);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
LABEL_88:
            operator delete[](v68);
            goto LABEL_34;
          }
          v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v32, v99);
          LODWORD(v44) = -1073741811;
          v60[3] = this;
          v60[4] = *(unsigned int *)(a2 + 48);
          v60[5] = *(unsigned int *)(v23 + 128);
          v60[6] = -1073741811LL;
          WdLogEvent5_WdWarning(v60);
        }
        else
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, 0LL);
          v58[3] = this;
          v58[4] = *(unsigned int *)(a2 + 16);
          v58[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v58);
          LODWORD(v44) = -1073741801;
        }
        v61 = v95 == 0;
LABEL_52:
        if ( !v61 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94, v59);
        goto LABEL_34;
      }
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      LODWORD(v44) = -1073741811;
      v52[3] = this;
      v52[4] = *(unsigned int *)(a2 + 32);
      v52[5] = *(unsigned int *)(v23 + 112);
      v52[6] = -1073741811LL;
LABEL_38:
      WdLogEvent5_WdWarning(v52);
      goto LABEL_41;
    }
LABEL_46:
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    LODWORD(v44) = -1073741811;
    v54[3] = this;
    v54[4] = -1073741811LL;
    goto LABEL_40;
  }
  v57 = WdLogNewEntry5_WdEvent(v56, v20);
  LODWORD(v44) = -1073741790;
  *(_QWORD *)(v57 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v57);
LABEL_41:
  if ( v95 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94, v53);
LABEL_35:
  operator delete[](v14);
  return (unsigned int)v44;
}

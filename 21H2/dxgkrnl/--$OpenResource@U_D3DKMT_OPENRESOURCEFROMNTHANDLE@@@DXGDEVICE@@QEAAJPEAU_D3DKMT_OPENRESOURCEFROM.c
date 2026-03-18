/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C019F7B4
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019FB3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBF00 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C032252C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C004AD54 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C037A88C (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
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
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // bl
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  D3DDDI_ALLOCATIONINFO *v27; // rax
  __int64 v28; // rdx
  D3DDDI_ALLOCATIONINFO *v29; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v30; // r9
  size_t v31; // rcx
  __int64 v32; // rax
  char *v33; // r12
  _QWORD *v34; // rbx
  unsigned int v35; // edx
  unsigned int v36; // ecx
  const void *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // r12d
  int v42; // eax
  int v43; // ebx
  D3DKMT_HANDLE hResource; // eax
  unsigned int v45; // r10d
  _DWORD *v46; // r9
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v50; // rax
  const wchar_t *v51; // r9
  bool v52; // zf
  unsigned __int64 v53; // rax
  unsigned int *v54; // r13
  __int64 v55; // rax
  unsigned int v56; // r8d
  unsigned int v57; // r9d
  DXG_GUEST_VIRTUALGPU_VMBUS *v58; // rcx
  int v59; // eax
  unsigned int v60; // edx
  struct DXGPROCESS *v61; // r14
  __int64 v62; // rax
  __int64 v63; // r9
  int v64; // ecx
  struct _EX_RUNDOWN_REF *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r9
  int v68; // ecx
  struct _EX_RUNDOWN_REF *v69; // rdx
  struct _EX_RUNDOWN_REF *v70; // r14
  unsigned int v71; // eax
  ULONG_PTR Count; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v74; // [rsp+28h] [rbp-D8h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  __int64 v76; // [rsp+38h] [rbp-C8h]
  D3DDDI_ALLOCATIONINFO *v77; // [rsp+80h] [rbp-80h]
  char v78[8]; // [rsp+88h] [rbp-78h] BYREF
  char v79; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v80; // [rsp+98h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h]
  unsigned int *v82; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *Current; // [rsp+B0h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v84; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-40h]
  struct _D3DKMT_CREATEALLOCATION v86; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v87[80]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v88; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v89; // [rsp+198h] [rbp+98h]

  v88 = a3;
  v10 = 0;
  v14 = 0LL;
  memset(&v86, 0, sizeof(v86));
  v15 = *((_QWORD *)this + 2);
  v88 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v15 + 16)) )
  {
    WdLogSingleEntry1(1LL, 7747LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7747LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v17, v16, v18, v19);
  v20 = BYTE1(*((_DWORD *)Current + 106)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v78);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v78);
  if ( a4 )
  {
    v22 = *(_QWORD *)(a4 + 16);
    if ( !v22 )
    {
      v43 = -1073741811;
      WdLogSingleEntry3(3LL, this, a4, -1073741811LL);
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v22 + 136) - 44LL) & 2) != 0 )
    {
      v50 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
      if ( v50 )
      {
        if ( !(*(unsigned int (**)(void))(v50 + 208))() )
        {
          v43 = -1073741790;
          WdLogSingleEntry1(4LL, -1073741790LL);
          goto LABEL_38;
        }
      }
    }
    v23 = *(unsigned int *)(v22 + 132);
    v24 = *(_DWORD *)(a2 + 16);
    if ( (_DWORD)v23 == v24 )
    {
      if ( (*(_DWORD *)(v22 + 12) & 4) == 0 )
      {
        if ( !v20 )
        {
          v25 = *(unsigned int *)(v22 + 112);
          if ( *(_DWORD *)(a2 + 32) != (_DWORD)v25 )
          {
            v43 = -1073741811;
            WdLogSingleEntry4(3LL, this, *(unsigned int *)(a2 + 32), v25, -1073741811LL);
            goto LABEL_38;
          }
          if ( (_DWORD)v25 )
          {
            memmove(*(void **)(a2 + 40), *(const void **)(v22 + 104), (unsigned int)v25);
            v24 = *(_DWORD *)(a2 + 16);
          }
        }
        v26 = 96LL * v24;
        if ( !is_mul_ok(v24, 0x60uLL) )
          v26 = -1LL;
        v27 = (D3DDDI_ALLOCATIONINFO *)operator new[](v26, 0x4B677844u, 256LL, v21);
        v28 = *(unsigned int *)(a2 + 16);
        v29 = v27;
        v77 = v27;
        if ( v27 )
        {
          v30 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
          v31 = *(unsigned int *)(a2 + 48);
          v86.hDevice = *(_DWORD *)a2;
          v86.hGlobalShare = 0;
          v86.pStandardAllocation = v30;
          v86.PrivateDriverDataSize = v31;
          v86.NumAllocations = v28;
          v86.pAllocationInfo = v27;
          v86.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v86.Flags ^ (*(_BYTE *)&v86.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
          if ( v20 || (v32 = *(unsigned int *)(v22 + 128), (_DWORD)v31 == (_DWORD)v32) )
          {
            if ( (_DWORD)v31 )
            {
              memmove(v30, *(const void **)(v22 + 120), v31);
              LODWORD(v28) = *(_DWORD *)(a2 + 16);
              v29 = v77;
            }
            v33 = *(char **)(a2 + 72);
            v34 = *(_QWORD **)(v22 + 136);
            if ( (_DWORD)v28 )
            {
              v35 = 0;
              while ( 1 )
              {
                v36 = *((_DWORD *)v34 - 2);
                if ( v36 + v35 < v35 )
                  break;
                if ( v36 + v35 > *(_DWORD *)(a2 + 64) )
                {
                  WdLogSingleEntry2(3LL, this, -1073741801LL);
                  v43 = -1073741801;
                  goto LABEL_51;
                }
                v37 = (const void *)*(v34 - 2);
                if ( v37 )
                {
                  memmove(v33, v37, v36);
                  v29 = v77;
                }
                v38 = v10++;
                v39 = 96 * v38;
                *(D3DKMT_HANDLE *)((char *)&v29->hAllocation + v39) = 0;
                *(const void **)((char *)&v29->pSystemMem + v39) = 0LL;
                LODWORD(v38) = *((_DWORD *)v34 - 11);
                *(UINT *)((char *)&v29->Flags.Value + v39) = 0;
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v29->VidPnSourceId + v39) = ((unsigned int)v38 >> 6) & 0xF;
                LODWORD(v38) = *((_DWORD *)v34 - 11);
                *(void **)((char *)&v29->pPrivateDriverData + v39) = v33;
                *(UINT *)((char *)&v29->Flags.Value + v39) = v38 & 1 | ((((unsigned int)v38 | ((unsigned int)v38 >> 12)) & 2) != 0);
                *(UINT *)((char *)&v29->PrivateDriverDataSize + v39) = *((_DWORD *)v34 - 2);
                v40 = *((unsigned int *)v34 - 2);
                v33 += v40;
                v34 = (_QWORD *)*v34;
                v35 = v40 + v88;
                v88 += v40;
                if ( v10 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_26;
              }
              v43 = -1073741675;
              WdLogSingleEntry2(3LL, this, -1073741675LL);
LABEL_51:
              v52 = v79 == 0;
              goto LABEL_52;
            }
LABEL_26:
            v41 = 0;
            if ( v79 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v78);
            LOBYTE(v30) = 1;
            v42 = DXGDEVICE::CreateAllocation(
                    this,
                    &v86,
                    0LL,
                    (__int64)v30,
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
            v43 = v42;
            if ( v42 < 0 )
            {
              WdLogSingleEntry1(3LL, v42);
LABEL_34:
              v14 = v77;
              goto LABEL_35;
            }
            hResource = v86.hResource;
            if ( !v86.hResource )
            {
              WdLogSingleEntry1(1LL, 7963LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"KMCreateAlloc.hResource != 0",
                7963LL,
                0LL,
                0LL,
                0LL,
                0LL);
              hResource = v86.hResource;
              v41 = 0;
            }
            v45 = 0;
            v46 = *(_DWORD **)(a2 + 24);
            *(_DWORD *)(a2 + 64) = v88;
            v47 = *(unsigned int *)(a2 + 16);
            *(_DWORD *)(a2 + 80) = hResource;
            if ( (_DWORD)v47 )
            {
              do
              {
                v48 = v45++;
                *v46 = *(&v86.pAllocationInfo->hAllocation + 24 * v48);
                v46 += 20;
                *((_QWORD *)v46 - 9) = *(_QWORD *)(a2 + 72)
                                     + (unsigned int)(*((_DWORD *)&v86.pAllocationInfo->pPrivateDriverData + 24 * v48)
                                                    - *(_DWORD *)(a2 + 72));
                *(v46 - 16) = *(&v86.pAllocationInfo->PrivateDriverDataSize + 24 * v48);
                v47 = *(unsigned int *)(a2 + 16);
              }
              while ( v45 < (unsigned int)v47 );
            }
            if ( (*((_BYTE *)this + 1869) & 1) == 0 )
              goto LABEL_34;
            v53 = 4 * v47;
            if ( !is_mul_ok(v47, 4uLL) )
              v53 = -1LL;
            v82 = (unsigned int *)operator new[](v53, 0x4B677844u, 256LL, (__int64)v46);
            v54 = v82;
            if ( !v82 )
            {
              v43 = -1073741801;
              goto LABEL_34;
            }
            v55 = *((_QWORD *)this + 2);
            v56 = *(_DWORD *)(a2 + 64);
            v57 = *(_DWORD *)(a2 + 16);
            v88 = 0;
            v58 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v55 + 16) + 4344LL);
            v59 = *(_DWORD *)(v22 + 12) >> 3;
            if ( (*(_DWORD *)(v22 + 12) & 8) != 0 )
              v60 = *(_DWORD *)(a4 + 40);
            else
              v60 = *(_DWORD *)(v22 + 28);
            v61 = Current;
            v43 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                    v58,
                    Current,
                    this,
                    v59 & 1,
                    v60,
                    v57,
                    v56,
                    &v88,
                    v82);
            if ( v43 < 0 )
            {
LABEL_95:
              operator delete[](v54);
              goto LABEL_34;
            }
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v87, v61);
            v62 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v62 < *((_DWORD *)v61 + 74) )
            {
              v63 = *((_QWORD *)v61 + 35);
              v64 = *(_DWORD *)(v63 + 16 * v62 + 8);
              if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v63 + 16 * v62 + 8) & 0x60)
                && (v64 & 0x2000) == 0
                && (v64 & 0x1F) != 0 )
              {
                if ( (v64 & 0x1F) == 4 )
                {
                  v65 = *(struct _EX_RUNDOWN_REF **)(v63 + 16LL * (unsigned int)v62);
                  goto LABEL_71;
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
            v65 = 0LL;
LABEL_71:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v84, v65);
            if ( v84 )
            {
              HIDWORD(v84[2].Ptr) = v88;
              if ( *(_DWORD *)(a2 + 16) )
              {
                while ( 1 )
                {
                  v66 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v41) >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v66 < *((_DWORD *)v61 + 74)
                    && (v67 = *((_QWORD *)v61 + 35),
                        v68 = *(_DWORD *)(v67 + 16 * v66 + 8),
                        ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v41) >> 25) & 0x60) == (*(_BYTE *)(v67 + 16 * v66 + 8) & 0x60))
                    && (v68 & 0x2000) == 0
                    && (v68 & 0x1F) != 0 )
                  {
                    if ( (v68 & 0x1F) == 5 )
                    {
                      v69 = *(struct _EX_RUNDOWN_REF **)(v67 + 16LL * (unsigned int)v66);
                    }
                    else
                    {
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
                      v69 = 0LL;
                    }
                  }
                  else
                  {
                    v69 = 0LL;
                  }
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80, v69);
                  v70 = v80;
                  if ( !v80 )
                    break;
                  v71 = v54[v41];
                  LOBYTE(v80[16].Count) |= 4u;
                  v52 = bTracingEnabled == 0;
                  v89 = v71;
                  HIDWORD(v70[2].Ptr) = v71;
                  if ( !v52 )
                  {
                    Count = v70[5].Count;
                    if ( Count )
                    {
                      v81 = *(_QWORD *)(Count + 48);
                      v88 = *(_DWORD *)(Count + 16);
                    }
                    else
                    {
                      v81 = 0LL;
                      v88 = 0;
                    }
                    v85 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                    CurrentProcessId = PsGetCurrentProcessId();
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
                      McTemplateK0ppppppppppppq_EtwWriteTransfer(
                        v85,
                        &EventCreateDeviceAllocation,
                        v81,
                        CurrentProcessId,
                        this,
                        v85,
                        v70);
                    v54 = v82;
                  }
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80);
                  v61 = Current;
                  if ( ++v41 >= *(_DWORD *)(a2 + 16) )
                    goto LABEL_94;
                }
                WdLogSingleEntry1(3LL, 8020LL);
                v43 = -1073741811;
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80);
              }
            }
            else
            {
              WdLogSingleEntry1(3LL, 8009LL);
              v43 = -1073741811;
            }
LABEL_94:
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v84);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v87);
            goto LABEL_95;
          }
          v43 = -1073741811;
          WdLogSingleEntry4(3LL, this, v31, v32, -1073741811LL);
        }
        else
        {
          WdLogSingleEntry3(3LL, this, v28, -1073741801LL);
          v43 = -1073741801;
        }
        v52 = v79 == 0;
LABEL_52:
        if ( !v52 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v78);
        goto LABEL_34;
      }
      v43 = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      v51 = L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x";
      v76 = 0LL;
      v75 = 0LL;
      v74 = -1073741811LL;
    }
    else
    {
      v43 = -1073741811;
      WdLogSingleEntry4(2LL, this, v23, *(unsigned int *)(a2 + 16), -1073741811LL);
      v51 = L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64x, "
             "returning 0x%I64x";
      v76 = -1073741811LL;
      v75 = *(unsigned int *)(a2 + 16);
      v74 = *(unsigned int *)(v22 + 132);
    }
  }
  else
  {
    v43 = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    v51 = L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
    v76 = 0LL;
    v75 = 0LL;
    v74 = -1073741811LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v51, (__int64)this, v74, v75, v76, 0LL);
LABEL_38:
  if ( v79 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v78);
LABEL_35:
  operator delete[](v14);
  return (unsigned int)v43;
}

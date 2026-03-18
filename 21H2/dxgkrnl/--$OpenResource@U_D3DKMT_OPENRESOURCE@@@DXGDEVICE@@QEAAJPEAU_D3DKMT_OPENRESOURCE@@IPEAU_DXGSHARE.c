/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0185854
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0184FA4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBAC0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0330DCC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0331510 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
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

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v11; // r12
  __int64 v13; // rcx
  unsigned int v14; // r13d
  struct DXGPROCESS *Current; // rdi
  char v16; // r15
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // edx
  size_t v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  D3DDDI_ALLOCATIONINFO *v29; // rax
  __int64 v30; // rdx
  char *v31; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v32; // r9
  char *v33; // r15
  __int64 v34; // r12
  _QWORD *v35; // rbx
  unsigned int v36; // ecx
  const void *v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rax
  unsigned int v42; // r12d
  int v43; // eax
  int v44; // ebx
  D3DKMT_HANDLE hResource; // eax
  unsigned __int64 v46; // rcx
  unsigned int v47; // r10d
  _DWORD *v48; // r9
  __int64 v49; // rax
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // edx
  bool v56; // zf
  __int64 v57; // rax
  const wchar_t *v58; // r9
  unsigned __int64 v59; // rax
  unsigned int *v60; // r13
  unsigned int v61; // ecx
  unsigned int v62; // edx
  unsigned int v63; // r8d
  unsigned int v64; // ecx
  __int64 v65; // r10
  unsigned int v66; // eax
  struct DXGPROCESS *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r9
  int v70; // ecx
  struct DXGRESOURCE *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r9
  int v74; // ecx
  struct _EX_RUNDOWN_REF *v75; // rdx
  struct _EX_RUNDOWN_REF *v76; // rdi
  unsigned int v77; // eax
  ULONG_PTR Count; // r15
  HANDLE CurrentProcessId; // rax
  DXGFASTMUTEX *v80; // [rsp+80h] [rbp-80h] BYREF
  char v81; // [rsp+88h] [rbp-78h]
  void *v82; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v83; // [rsp+98h] [rbp-68h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-60h]
  __int64 v85; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *v86; // [rsp+B0h] [rbp-50h]
  __int64 v87; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v88; // [rsp+C0h] [rbp-40h]
  struct _D3DKMT_CREATEALLOCATION v89; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v90[80]; // [rsp+120h] [rbp+20h] BYREF

  v82 = 0LL;
  v11 = a3;
  memset(&v89, 0, sizeof(v89));
  v13 = *((_QWORD *)this + 2);
  v14 = 0;
  a7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v13 + 16)) )
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
  Current = DXGPROCESS::GetCurrent();
  v86 = Current;
  v16 = BYTE1(*((_DWORD *)Current + 106)) & 1;
  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v80, (struct DXGGLOBAL *)((char *)Global + 288), 0);
  if ( v81 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v80, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v80);
  v81 = 1;
  if ( !(_DWORD)v11 )
  {
    v44 = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    v58 = L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
    goto LABEL_115;
  }
  if ( v16 )
  {
    v51 = *((_DWORD *)Current + 106);
    if ( (v51 & 0x100) != 0 )
      v52 = *((_QWORD *)Current + 76);
    else
      v52 = (unsigned __int64)Current & -(__int64)((v51 & 0x80u) != 0);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v52 + 248));
    v53 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v53 < *(_DWORD *)(v52 + 296)
      && (v54 = *(_QWORD *)(v52 + 280),
          v55 = *(_DWORD *)(v54 + 16 * v53 + 8),
          (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v54 + 16 * v53 + 8) & 0x60))
      && (v55 & 0x2000) == 0
      && (v55 & 0x1F) != 0 )
    {
      if ( (v55 & 0x1F) == 2 )
      {
        v23 = *(_QWORD *)(v54 + 16LL * (unsigned int)v53);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v23 = 0LL;
      }
    }
    else
    {
      v23 = 0LL;
    }
    ExReleasePushLockSharedEx(v52 + 248, 0LL);
    KeLeaveCriticalRegion();
    v14 = a7;
  }
  else
  {
    v18 = DXGGLOBAL_GetGlobal();
    if ( *((struct _KTHREAD **)v18 + 39) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1447LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareMutex.IsOwner()", 1447LL, 0LL, 0LL, 0LL, 0LL);
    }
    v20 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *((_DWORD *)v18 + 88)
      && (v21 = *((_QWORD *)v18 + 42),
          v22 = *(_DWORD *)(v21 + 16 * v20 + 8),
          (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60))
      && (v22 & 0x2000) == 0
      && (v22 & 0x1F) != 0 )
    {
      if ( (v22 & 0x1F) == 2 )
      {
        v23 = *(_QWORD *)(v21 + 16LL * (unsigned int)v20);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v23 = 0LL;
      }
    }
    else
    {
      v23 = 0LL;
    }
  }
  if ( !v23 )
  {
    v44 = -1073741811;
    WdLogSingleEntry3(3LL, this, v11, -1073741811LL);
LABEL_61:
    v56 = v81 == 0;
    goto LABEL_116;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v23 + 136) - 44LL) & 2) != 0 )
  {
    v57 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
    if ( v57 )
    {
      if ( !(*(unsigned int (**)(void))(v57 + 208))() )
      {
        v44 = -1073741790;
        WdLogSingleEntry1(4LL, -1073741790LL);
        goto LABEL_61;
      }
    }
  }
  v24 = *(unsigned int *)(v23 + 132);
  v25 = *(_DWORD *)(a2 + 8);
  if ( (_DWORD)v24 != v25 )
  {
    v44 = -1073741811;
    WdLogSingleEntry4(2LL, this, v24, *(unsigned int *)(a2 + 8), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64"
                "x, returning 0x%I64x",
      (__int64)this,
      *(unsigned int *)(v23 + 132),
      *(unsigned int *)(a2 + 8),
      -1073741811LL,
      0LL);
    goto LABEL_61;
  }
  if ( (*(_DWORD *)(v23 + 12) & 4) != 0 )
  {
    v44 = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    v58 = L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x";
LABEL_115:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v58, (__int64)this, -1073741811LL, 0LL, 0LL, 0LL);
    v56 = v81 == 0;
LABEL_116:
    if ( !v56 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v80);
    goto LABEL_44;
  }
  if ( !v16 )
  {
    v26 = *(unsigned int *)(a2 + 32);
    v27 = *(unsigned int *)(v23 + 112);
    if ( (_DWORD)v26 != (_DWORD)v27 )
      goto LABEL_67;
    if ( (_DWORD)v27 )
    {
      memmove(*(void **)(a2 + 24), *(const void **)(v23 + 104), (unsigned int)v27);
      v25 = *(_DWORD *)(a2 + 8);
    }
  }
  v28 = 96LL * v25;
  if ( !is_mul_ok(v25, 0x60uLL) )
    v28 = -1LL;
  v29 = (D3DDDI_ALLOCATIONINFO *)operator new[](v28, 0x4B677844u, 256LL, v19);
  v30 = *(unsigned int *)(a2 + 8);
  v31 = (char *)v29;
  v82 = v29;
  if ( !v29 )
  {
    WdLogSingleEntry3(3LL, this, v30, -1073741801LL);
LABEL_70:
    v44 = -1073741801;
    goto LABEL_61;
  }
  v32 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v26 = *(unsigned int *)(a2 + 48);
  v89.hDevice = *(_DWORD *)a2;
  v89.hGlobalShare = v11;
  v89.pStandardAllocation = v32;
  v89.PrivateDriverDataSize = v26;
  v89.NumAllocations = v30;
  v89.pAllocationInfo = v29;
  v89.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v89.Flags & 0xFFFFFF3E | 1);
  if ( !v16 )
  {
    v27 = *(unsigned int *)(v23 + 128);
    if ( (_DWORD)v26 != (_DWORD)v27 )
    {
LABEL_67:
      v44 = -1073741811;
      WdLogSingleEntry4(3LL, this, v26, v27, -1073741811LL);
      goto LABEL_61;
    }
  }
  if ( (_DWORD)v26 )
  {
    memmove(v32, *(const void **)(v23 + 120), v26);
    LODWORD(v30) = *(_DWORD *)(a2 + 8);
    v31 = (char *)v82;
  }
  v33 = *(char **)(a2 + 56);
  v34 = 0LL;
  v35 = *(_QWORD **)(v23 + 136);
  if ( (_DWORD)v30 )
  {
    while ( 1 )
    {
      v36 = *((_DWORD *)v35 - 2);
      if ( v36 + v14 < v14 )
      {
        v44 = -1073741675;
        WdLogSingleEntry2(3LL, this, -1073741675LL);
        goto LABEL_61;
      }
      if ( v36 + v14 > *(_DWORD *)(a2 + 64) )
        break;
      v37 = (const void *)*(v35 - 2);
      if ( v37 )
      {
        memmove(v33, v37, v36);
        v31 = (char *)v82;
      }
      v38 = 3 * v34;
      v34 = (unsigned int)(v34 + 1);
      v38 *= 32LL;
      *(_DWORD *)&v31[v38] = 0;
      *(_QWORD *)&v31[v38 + 8] = 0LL;
      v39 = *((_DWORD *)v35 - 11);
      *(_DWORD *)&v31[v38 + 32] = 0;
      *(_DWORD *)&v31[v38 + 28] = (v39 >> 6) & 0xF;
      v40 = *((_DWORD *)v35 - 11);
      *(_QWORD *)&v31[v38 + 16] = v33;
      *(_DWORD *)&v31[v38 + 32] = v40 & 1 | (((v40 | (v40 >> 12)) & 2) != 0);
      *(_DWORD *)&v31[v38 + 24] = *((_DWORD *)v35 - 2);
      v41 = *((unsigned int *)v35 - 2);
      v35 = (_QWORD *)*v35;
      v14 += v41;
      v33 += v41;
      if ( (unsigned int)v34 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_36;
    }
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    goto LABEL_70;
  }
LABEL_36:
  v42 = 0;
  if ( v81 )
  {
    v81 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v80);
  }
  v43 = DXGDEVICE::CreateAllocation(this, &v89, 0, 1u, 0LL, 0LL, a6, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v44 = v43;
  if ( v43 < 0 )
  {
    WdLogSingleEntry1(3LL, v43);
    goto LABEL_44;
  }
  hResource = v89.hResource;
  if ( !v89.hResource )
  {
    WdLogSingleEntry1(1LL, 7963LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KMCreateAlloc.hResource != 0", 7963LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v89.hResource;
  }
  v46 = *(unsigned int *)(a2 + 8);
  v47 = 0;
  v48 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = v14;
  for ( *(_DWORD *)(a2 + 68) = hResource; v47 < (unsigned int)v46; v46 = *(unsigned int *)(a2 + 8) )
  {
    v49 = v47++;
    *v48 = *(&v89.pAllocationInfo->hAllocation + 24 * v49);
    v48 += 20;
    *((_QWORD *)v48 - 9) = *(_QWORD *)(a2 + 56)
                         + (unsigned int)(*((_DWORD *)&v89.pAllocationInfo->pPrivateDriverData + 24 * v49)
                                        - *(_DWORD *)(a2 + 56));
    *(v48 - 16) = *(&v89.pAllocationInfo->PrivateDriverDataSize + 24 * v49);
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    v59 = 4 * v46;
    if ( !is_mul_ok(v46, 4uLL) )
      v59 = -1LL;
    v85 = operator new[](v59, 0x4B677844u, 256LL, (__int64)v48);
    v60 = (unsigned int *)v85;
    if ( !v85 )
    {
      v44 = -1073741801;
      goto LABEL_44;
    }
    v61 = *(_DWORD *)(v23 + 12);
    if ( (v61 & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, 7992LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pSharedResource->m_NtSecuritySharing || pSharedAllocObject",
        7992LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v61 = *(_DWORD *)(v23 + 12);
    }
    v62 = *(_DWORD *)(a2 + 64);
    v63 = *(_DWORD *)(a2 + 8);
    v64 = v61 >> 3;
    v65 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    a7 = 0;
    if ( (v64 & 1) != 0 )
      v66 = MEMORY[0x28];
    else
      v66 = *(_DWORD *)(v23 + 28);
    v67 = v86;
    v44 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v65 + 4344),
            v86,
            this,
            v64 & 1,
            v66,
            v63,
            v62,
            &a7,
            v60);
    if ( v44 < 0 )
      goto LABEL_113;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v90, v67);
    v68 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v68 < *((_DWORD *)v67 + 74) )
    {
      v69 = *((_QWORD *)v67 + 35);
      v70 = *(_DWORD *)(v69 + 16 * v68 + 8);
      if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v69 + 16 * v68 + 8) & 0x60)
        && (v70 & 0x2000) == 0
        && (v70 & 0x1F) != 0 )
      {
        if ( (v70 & 0x1F) == 4 )
        {
          v71 = *(struct DXGRESOURCE **)(v69 + 16LL * (unsigned int)v68);
          goto LABEL_89;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v71 = 0LL;
LABEL_89:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v87, v71);
    if ( !v87 )
    {
      WdLogSingleEntry1(3LL, 8009LL);
      v44 = -1073741811;
      goto LABEL_112;
    }
    *(_DWORD *)(v87 + 20) = a7;
    if ( *(_DWORD *)(a2 + 8) )
    {
      while ( 1 )
      {
        v72 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v42) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v72 >= *((_DWORD *)v67 + 74) )
          goto LABEL_99;
        v73 = *((_QWORD *)v67 + 35);
        v74 = *(_DWORD *)(v73 + 16 * v72 + 8);
        if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v42) >> 25) & 0x60) != (*(_BYTE *)(v73 + 16 * v72 + 8) & 0x60)
          || (v74 & 0x2000) != 0
          || (v74 & 0x1F) == 0 )
        {
          goto LABEL_99;
        }
        if ( (v74 & 0x1F) != 5 )
          break;
        v75 = *(struct _EX_RUNDOWN_REF **)(v73 + 16LL * (unsigned int)v72);
LABEL_100:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, v75);
        v76 = v83;
        if ( !v83 )
        {
          WdLogSingleEntry1(3LL, 8020LL);
          v44 = -1073741811;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v83);
          goto LABEL_112;
        }
        v77 = v60[v42];
        LOBYTE(v83[16].Count) |= 4u;
        v56 = bTracingEnabled == 0;
        HIDWORD(v76[2].Ptr) = v77;
        if ( !v56 )
        {
          Count = v76[5].Count;
          if ( Count )
          {
            v84 = *(_QWORD *)(Count + 48);
            a7 = *(_DWORD *)(Count + 16);
          }
          else
          {
            v84 = 0LL;
            a7 = 0;
          }
          v88 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0ppppppppppppq_EtwWriteTransfer(
              v88,
              &EventCreateDeviceAllocation,
              v84,
              CurrentProcessId,
              this,
              v88,
              v76);
          v60 = (unsigned int *)v85;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v83);
        v67 = v86;
        if ( ++v42 >= *(_DWORD *)(a2 + 8) )
          goto LABEL_112;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_99:
      v75 = 0LL;
      goto LABEL_100;
    }
LABEL_112:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v87);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v90);
LABEL_113:
    operator delete[](v60);
  }
LABEL_44:
  operator delete[](v82);
  return (unsigned int)v44;
}

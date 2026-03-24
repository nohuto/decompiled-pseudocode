/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D510
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005940 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9DC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00269C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EF9B0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned int v19; // edi
  unsigned int v20; // r11d
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  SIZE_T v24; // rax
  _DWORD *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *p_hAllocation; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // r10d
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  char Flags; // al
  __int64 v47; // rax
  struct DXGPROCESS *v48; // rdi
  unsigned int v49; // r12d
  DXGPUSHLOCK *v50; // r13
  unsigned int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // r8
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rax
  struct _EX_RUNDOWN_REF *v57; // rdx
  struct _EX_RUNDOWN_REF *v58; // r9
  __int64 v59; // rdi
  int v60; // ecx
  int v61; // edx
  int v62; // ecx
  int v63; // edx
  int v64; // ecx
  int v65; // edx
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  int v70; // r8d
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v72; // rcx
  char *v73; // rbx
  __int64 v74; // r8
  struct DXGDEVICE *Count; // rbx
  __int64 v76; // r9
  __int64 v77; // rdi
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rax
  unsigned int v83; // ebx
  unsigned int v84; // ebx
  __int64 v85; // rdx
  struct _EX_RUNDOWN_REF *v87; // [rsp+48h] [rbp-C0h] BYREF
  void *v88; // [rsp+50h] [rbp-B8h]
  __int64 v89; // [rsp+58h] [rbp-B0h]
  void *v90; // [rsp+60h] [rbp-A8h]
  __int64 v91; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+70h] [rbp-98h] BYREF
  __int64 v93; // [rsp+78h] [rbp-90h] BYREF
  __int64 v94; // [rsp+80h] [rbp-88h]
  struct DXGPROCESS *v95; // [rsp+88h] [rbp-80h]
  void *v96; // [rsp+90h] [rbp-78h]
  struct _D3DKMT_CREATEALLOCATION v97; // [rsp+98h] [rbp-70h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-20h]
  __int64 v99; // [rsp+F0h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v100; // [rsp+F8h] [rbp-10h]
  _BYTE v101[24]; // [rsp+100h] [rbp-8h] BYREF
  char v102[8]; // [rsp+118h] [rbp+10h] BYREF
  char v103[64]; // [rsp+120h] [rbp+18h] BYREF
  char v104[88]; // [rsp+160h] [rbp+58h] BYREF

  v100 = a1;
  v2 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v5 )
    return 0;
  Current = DXGPROCESS::GetCurrent(v4, v3);
  v9 = *(unsigned int *)(v5 + 40);
  v95 = Current;
  v98 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( !(_DWORD)v9 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 983LL;
    goto LABEL_68;
  }
  if ( (*(_DWORD *)(v5 + 44) & 0x1000) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 989LL;
    goto LABEL_68;
  }
  v11 = 12 * v9;
  if ( 12 * v9 > 0xFFFFFFFF )
  {
    v10 = WdLogNewEntry5_WdError(v8, v11);
    *(_QWORD *)(v10 + 24) = 996LL;
LABEL_68:
    WdLogEvent5_WdError(v10);
    return 0;
  }
  v12 = *((unsigned int *)a1 + 22);
  if ( v12 - 64 < (unsigned __int64)(unsigned int)v11 )
  {
    v10 = WdLogNewEntry5_WdError(v12 - 64, v11);
    *(_QWORD *)(v10 + 24) = 1002LL;
    goto LABEL_68;
  }
  v13 = *(unsigned int *)(v5 + 32);
  v14 = v11 + 64;
  LODWORD(v88) = v13;
  if ( (int)v12 - ((int)v11 + 64) < (unsigned int)v13 )
  {
    v10 = WdLogNewEntry5_WdError(v13, v11);
    *(_QWORD *)(v10 + 24) = 1008LL;
    goto LABEL_68;
  }
  v15 = *(unsigned int *)(v5 + 36);
  v16 = v14 + (unsigned int)v13;
  if ( (int)v12 - (int)v16 < (unsigned int)v15 )
  {
    v10 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v10 + 24) = 1014LL;
    goto LABEL_68;
  }
  v17 = v15 + v16;
  v18 = 0LL;
  v19 = v17;
  do
  {
    v20 = *(_DWORD *)(v5 + 12LL * (unsigned int)v18 + 68);
    if ( (unsigned int)v12 - v19 < v20 )
    {
      v10 = WdLogNewEntry5_WdError(3LL * (unsigned int)v18, v18);
      *(_QWORD *)(v10 + 24) = 1025LL;
      goto LABEL_68;
    }
    v19 += v20;
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < (unsigned int)v9 );
  v21 = 96 * v9;
  if ( !is_mul_ok(v9, 0x60uLL) )
    v21 = -1LL;
  v96 = operator new(v21, 0x4B677844u, 1, PagedPool);
  if ( !v96 )
  {
    v10 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v10 + 24) = 1036LL;
    goto LABEL_68;
  }
  v24 = 8LL * *(unsigned int *)(v5 + 40);
  if ( !is_mul_ok(*(unsigned int *)(v5 + 40), 8uLL) )
    v24 = -1LL;
  v25 = 0LL;
  v90 = operator new(v24, 0x4B677844u, 1, PagedPool);
  if ( !v90 )
  {
    v30 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = 1044LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_66;
  }
  LODWORD(v87) = 72 * *(_DWORD *)(v5 + 40) + 16;
  v31 = v19 + (_DWORD)v87 - v17;
  LODWORD(v89) = v31;
  v25 = operator new(v31, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v25 )
  {
    v34 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v34 + 24) = 1054LL;
    goto LABEL_65;
  }
  v35 = *(unsigned int *)(v5 + 44);
  p_hAllocation = v96;
  v37 = *(unsigned int *)(v5 + 36);
  v38 = *(unsigned int *)(v5 + 40);
  v97.hDevice = *(_DWORD *)(v5 + 24);
  v97.hResource = *(_DWORD *)(v5 + 28);
  *(_QWORD *)&v97.hGlobalShare = 0LL;
  v97.pPrivateRuntimeData = (const void *)(v5 + v14);
  v97.PrivateRuntimeDataSize = *(_DWORD *)(v5 + 32);
  *(&v97.PrivateRuntimeDataSize + 1) = 0;
  *((_DWORD *)&v97.Flags + 1) = 0;
  v97.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v5 + v14 + (unsigned int)v88);
  v97.hPrivateRuntimeResourceHandle = *(HANDLE *)(v5 + 48);
  v97.PrivateDriverDataSize = v37;
  v97.NumAllocations = v38;
  v97.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v96;
  v97.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)v35;
  if ( (v35 & 0x10000) != 0 )
  {
    if ( (unsigned int)v37 < 0x18 )
    {
      v34 = WdLogNewEntry5_WdError(v35, v37);
      *(_QWORD *)(v34 + 24) = 1075LL;
      goto LABEL_65;
    }
    v97.PrivateDriverDataSize = 0;
  }
  v39 = 0;
  if ( (_DWORD)v38 )
  {
    while ( 1 )
    {
      v40 = v39;
      if ( (*(_DWORD *)(v5 + 44) & 0x20) != 0 )
      {
        p_hAllocation[12 * v39 + 1] = 4096LL;
        p_hAllocation = &v97.pAllocationInfo->hAllocation;
      }
      v38 = 3LL * v39++;
      v41 = 96 * v40;
      LODWORD(p_hAllocation[(unsigned __int64)v41 / 8 + 4]) = *(_DWORD *)(v5 + 12 * v40 + 64);
      *(UINT *)((char *)&v97.pAllocationInfo->PrivateDriverDataSize + v41) = *(_DWORD *)(v5 + 12 * v40 + 68);
      *(void **)((char *)&v97.pAllocationInfo->pPrivateDriverData + v41) = (void *)(v5 + v17);
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v97.pAllocationInfo->VidPnSourceId + v41) = *(_DWORD *)(v5 + 12 * v40 + 72);
      v17 += *(_DWORD *)(v5 + 4 * v38 + 68);
      if ( v39 >= *(_DWORD *)(v5 + 40) )
        break;
      p_hAllocation = &v97.pAllocationInfo->hAllocation;
    }
  }
  v42 = DxgkCreateAllocationInternal(&v97, (unsigned __int64 *)v90, v38);
  v45 = v42;
  if ( v42 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v34 + 24) = v45;
    *(_QWORD *)(v34 + 32) = 1196LL;
LABEL_65:
    WdLogEvent5_WdError(v34);
  }
  else
  {
    Flags = (char)v97.Flags;
    *v25 = v97.Flags;
    if ( (Flags & 0x40) != 0 )
    {
      if ( v97.hGlobalShare )
      {
        v47 = WdLogNewEntry5_WdAssertion(v44, v43);
        *(_QWORD *)(v47 + 24) = 1101LL;
        WdLogEvent5_WdAssertion(v47);
      }
    }
    else
    {
      v25[2] = v97.hGlobalShare;
    }
    v25[1] = v97.hResource;
    v88 = (char *)v25 + (unsigned int)v87;
    if ( *(_DWORD *)(v5 + 40) )
    {
      v48 = v95;
      v49 = 0;
      v50 = (struct DXGPROCESS *)((char *)v95 + 208);
      while ( 1 )
      {
        v94 = 96LL * v49;
        v51 = *(D3DKMT_HANDLE *)((char *)&v97.pAllocationInfo->hAllocation + v94);
        DXGPUSHLOCK::AcquireShared(v50);
        v52 = (v51 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v52 < *((_DWORD *)v48 + 64) )
        {
          v53 = *((_QWORD *)v48 + 30);
          v54 = *(_DWORD *)(v53 + 16 * v52 + 8);
          if ( ((v51 >> 25) & 0x60) == (*(_BYTE *)(v53 + 16 * v52 + 8) & 0x60)
            && (v54 & 0x2000) == 0
            && (v54 & 0x1F) != 0 )
          {
            v55 = v54 & 0x1F;
            if ( (_BYTE)v55 == 5 )
            {
              v57 = *(struct _EX_RUNDOWN_REF **)(v53 + 16LL * (unsigned int)v52);
              goto LABEL_50;
            }
            v56 = WdLogNewEntry5_WdError(v55, 2LL * (unsigned int)v52);
            *(_QWORD *)(v56 + 24) = 316LL;
            WdLogEvent5_WdError(v56);
          }
        }
        v57 = 0LL;
LABEL_50:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87, v57);
        ExReleasePushLockSharedEx(v50, 0LL);
        KeLeaveCriticalRegion();
        v58 = v87;
        v59 = 9LL * v49;
        v25[2 * v59 + 6] ^= (v25[18 * v49 + 6] ^ *(_DWORD *)(v87[6].Count + 4)) & 1;
        v60 = v25[18 * v49 + 6];
        v61 = v60 ^ ((unsigned __int8)v60 ^ (unsigned __int8)*(_DWORD *)(v58[6].Count + 4)) & 2;
        v25[2 * v59 + 6] = v61;
        v62 = v61 ^ ((unsigned __int8)v61 ^ (unsigned __int8)*(_DWORD *)(v58[6].Count + 4)) & 4;
        v25[2 * v59 + 6] = v62;
        v63 = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)*(_DWORD *)(v58[6].Count + 4)) & 8;
        v25[2 * v59 + 6] = v63;
        v64 = v63 ^ ((unsigned __int8)v63 ^ (unsigned __int8)*(_DWORD *)(v58[6].Count + 4)) & 0x20;
        v25[2 * v59 + 6] = v64;
        v65 = v64 ^ ((unsigned __int16)v64 ^ (unsigned __int16)*(_DWORD *)(v58[6].Count + 4)) & 0x800;
        v25[2 * v59 + 6] = v65;
        v66 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)*(_DWORD *)(v58[6].Count + 4)) & 0x1000;
        v25[2 * v59 + 6] = v66;
        v67 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)*(_DWORD *)(v58[6].Count + 4)) & 0x2000;
        v25[2 * v59 + 6] = v67;
        v68 = v67 ^ ((unsigned __int16)v67 ^ (unsigned __int16)*(_DWORD *)(v58[6].Count + 4)) & 0x4000;
        v25[2 * v59 + 6] = v68;
        v69 = v68 ^ (v68 ^ *(_DWORD *)(v58[6].Count + 4)) & 0x40000;
        v25[2 * v59 + 6] = v69;
        v70 = v69 ^ (v69 ^ *(_DWORD *)(v58[6].Count + 4)) & 0x80000;
        v25[2 * v59 + 6] = v70;
        v25[2 * v59 + 6] = v70 ^ (v70 ^ *(_DWORD *)(v58[6].Count + 4)) & 0x100000;
        pAllocationInfo = v97.pAllocationInfo;
        v72 = v94;
        v25[2 * v59 + 4] = *(D3DKMT_HANDLE *)((char *)&v97.pAllocationInfo->hAllocation + v94);
        v25[2 * v59 + 5] = *(_DWORD *)(v5 + 12LL * v49 + 68);
        *(_QWORD *)&v25[2 * v59 + 8] = *((_QWORD *)v90 + v49);
        memmove(
          v88,
          *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v72),
          *(unsigned int *)(v5 + 12LL * v49 + 68));
        v73 = (char *)&v25[18 * v49];
        v88 = (char *)v88 + *(unsigned int *)(v5 + 12LL * v49 + 68);
        *((_QWORD *)v73 + 5) = *(_QWORD *)(v87[6].Count + 16);
        ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(v98 + 2704),
          (struct _DXGKARG_DESCRIBEALLOCATION *)(v73 + 40),
          v74);
        *((_QWORD *)v73 + 5) = 0LL;
        if ( *(_BYTE *)(v5 + 56) )
        {
          Count = (struct DXGDEVICE *)v87[1].Count;
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
            (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101,
            Count);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, (__int64)Count, 0, v76, 0);
          if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v102, 0LL) >= 0
            && DXGDEVICE::UmdManagesResidency(Count) )
          {
            v77 = *((_QWORD *)Count + 2);
            v91 = 0LL;
            v93 = 0LL;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v77 + 640) + 8LL)
                                                                         + 984LL))(
              *((_QWORD *)Count + 95),
              0LL,
              &v91,
              &v93);
            v92 = 0LL;
            v99 = 0LL;
            v78 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v77 + 640) + 8LL) + 776LL))(
                    *(_QWORD *)(v77 + 648),
                    v91,
                    v87 + 3,
                    1LL,
                    3,
                    &v92,
                    &v99);
            v81 = v78;
            if ( v78 >= 0 )
            {
              if ( v78 == 259 )
                (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v77 + 640) + 8LL)
                                                                              + 992LL))(
                  *(_QWORD *)(v77 + 648),
                  &v93,
                  &v92,
                  1LL);
            }
            else
            {
              v82 = WdLogNewEntry5_WdError(v80, v79);
              *(_QWORD *)(v82 + 24) = v81;
              WdLogEvent5_WdError(v82);
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v104);
          COREACCESS::~COREACCESS((COREACCESS *)v103);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101);
        }
        v83 = *(D3DKMT_HANDLE *)((char *)&v97.pAllocationInfo->hAllocation + v94);
        DXGPUSHLOCK::AcquireExclusive(v50);
        v48 = v95;
        v84 = (v83 >> 6) & 0xFFFFFF;
        if ( v84 < *((_DWORD *)v95 + 64) )
          *(_DWORD *)(*((_QWORD *)v95 + 30) + 16LL * v84 + 8) &= ~0x4000u;
        *((_QWORD *)v50 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v50, 0LL);
        KeLeaveCriticalRegion();
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v87, v85);
        if ( ++v49 >= *(_DWORD *)(v5 + 40) )
        {
          v31 = v89;
          break;
        }
      }
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v100 + 9), v25, v31);
    v2 = 1;
  }
LABEL_66:
  operator delete[](v96);
  operator delete[](v90);
  operator delete[](v25);
  return v2;
}

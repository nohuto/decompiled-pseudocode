/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239410
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000A6F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AAC0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E804 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0103720 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
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
  unsigned int v48; // r13d
  char *v49; // r12
  unsigned int v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // r8
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct _EX_RUNDOWN_REF *v59; // rdx
  struct _EX_RUNDOWN_REF *v60; // r9
  __int64 v61; // rdi
  int v62; // edx
  int v63; // ecx
  int v64; // edx
  int v65; // ecx
  int v66; // edx
  int v67; // ecx
  int v68; // edx
  int v69; // ecx
  int v70; // edx
  int v71; // r8d
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v73; // rcx
  char *v74; // rbx
  __int64 v75; // r8
  __int64 v76; // rdx
  struct DXGDEVICE *Count; // rbx
  __int64 v78; // r9
  __int64 v79; // rdi
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rax
  struct _EX_RUNDOWN_REF *v86; // [rsp+48h] [rbp-C0h] BYREF
  void *v87; // [rsp+50h] [rbp-B8h]
  __int64 v88; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v89; // [rsp+60h] [rbp-A8h]
  void *v90; // [rsp+68h] [rbp-A0h]
  struct DXGPROCESS *v91; // [rsp+70h] [rbp-98h]
  __int64 v92; // [rsp+78h] [rbp-90h] BYREF
  __int64 v93; // [rsp+80h] [rbp-88h] BYREF
  void *v94; // [rsp+88h] [rbp-80h]
  struct _D3DKMT_CREATEALLOCATION v95; // [rsp+98h] [rbp-70h] BYREF
  __int64 v96; // [rsp+E8h] [rbp-20h]
  __int64 v97; // [rsp+F0h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v98; // [rsp+F8h] [rbp-10h]
  _BYTE v99[24]; // [rsp+100h] [rbp-8h] BYREF
  char v100[8]; // [rsp+118h] [rbp+10h] BYREF
  char v101[64]; // [rsp+120h] [rbp+18h] BYREF
  char v102[88]; // [rsp+160h] [rbp+58h] BYREF

  v98 = a1;
  v2 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v5 )
    return 0;
  Current = DXGPROCESS::GetCurrent(v4, v3);
  v9 = *(unsigned int *)(v5 + 40);
  v91 = Current;
  v96 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( !(_DWORD)v9 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 966LL;
    goto LABEL_72;
  }
  if ( (*(_DWORD *)(v5 + 44) & 0x1000) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 972LL;
    goto LABEL_72;
  }
  v11 = 12 * v9;
  if ( 12 * v9 > 0xFFFFFFFF )
  {
    v10 = WdLogNewEntry5_WdError(v8, v11);
    *(_QWORD *)(v10 + 24) = 979LL;
LABEL_72:
    WdLogEvent5_WdError(v10);
    return 0;
  }
  v12 = *((unsigned int *)a1 + 22);
  if ( v12 - 64 < (unsigned __int64)(unsigned int)v11 )
  {
    v10 = WdLogNewEntry5_WdError(v12 - 64, v11);
    *(_QWORD *)(v10 + 24) = 985LL;
    goto LABEL_72;
  }
  v13 = *(unsigned int *)(v5 + 32);
  v14 = v11 + 64;
  LODWORD(v87) = v13;
  if ( (int)v12 - ((int)v11 + 64) < (unsigned int)v13 )
  {
    v10 = WdLogNewEntry5_WdError(v13, v11);
    *(_QWORD *)(v10 + 24) = 991LL;
    goto LABEL_72;
  }
  v15 = *(unsigned int *)(v5 + 36);
  v16 = v14 + (unsigned int)v13;
  if ( (int)v12 - (int)v16 < (unsigned int)v15 )
  {
    v10 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v10 + 24) = 997LL;
    goto LABEL_72;
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
      *(_QWORD *)(v10 + 24) = 1008LL;
      goto LABEL_72;
    }
    v19 += v20;
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < (unsigned int)v9 );
  v21 = 96 * v9;
  if ( !is_mul_ok(v9, 0x60uLL) )
    v21 = -1LL;
  v94 = operator new(v21, 0x4B677844u, 1, PagedPool);
  if ( !v94 )
  {
    v10 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v10 + 24) = 1019LL;
    goto LABEL_72;
  }
  v24 = 8LL * *(unsigned int *)(v5 + 40);
  if ( !is_mul_ok(*(unsigned int *)(v5 + 40), 8uLL) )
    v24 = -1LL;
  v25 = 0LL;
  v90 = operator new(v24, 0x4B677844u, 1, PagedPool);
  if ( !v90 )
  {
    v30 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = 1027LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_70;
  }
  LODWORD(v86) = 72 * *(_DWORD *)(v5 + 40) + 16;
  v31 = v19 + (_DWORD)v86 - v17;
  LODWORD(v89) = v31;
  v25 = operator new(v31, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v25 )
  {
    v34 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v34 + 24) = 1037LL;
    goto LABEL_69;
  }
  v35 = *(unsigned int *)(v5 + 44);
  p_hAllocation = v94;
  v37 = *(unsigned int *)(v5 + 36);
  v38 = *(unsigned int *)(v5 + 40);
  v95.hDevice = *(_DWORD *)(v5 + 24);
  v95.hResource = *(_DWORD *)(v5 + 28);
  *(_QWORD *)&v95.hGlobalShare = 0LL;
  v95.pPrivateRuntimeData = (const void *)(v5 + v14);
  v95.PrivateRuntimeDataSize = *(_DWORD *)(v5 + 32);
  *(&v95.PrivateRuntimeDataSize + 1) = 0;
  *((_DWORD *)&v95.Flags + 1) = 0;
  v95.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v5 + v14 + (unsigned int)v87);
  v95.hPrivateRuntimeResourceHandle = *(HANDLE *)(v5 + 48);
  v95.PrivateDriverDataSize = v37;
  v95.NumAllocations = v38;
  v95.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v94;
  v95.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)v35;
  if ( (v35 & 0x10000) != 0 )
  {
    if ( (unsigned int)v37 < 0x18 )
    {
      v34 = WdLogNewEntry5_WdError(v35, v37);
      *(_QWORD *)(v34 + 24) = 1058LL;
      goto LABEL_69;
    }
    v95.PrivateDriverDataSize = 0;
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
        p_hAllocation = &v95.pAllocationInfo->hAllocation;
      }
      v38 = 3LL * v39++;
      v41 = 96 * v40;
      LODWORD(p_hAllocation[(unsigned __int64)v41 / 8 + 4]) = *(_DWORD *)(v5 + 12 * v40 + 64);
      *(UINT *)((char *)&v95.pAllocationInfo->PrivateDriverDataSize + v41) = *(_DWORD *)(v5 + 12 * v40 + 68);
      *(void **)((char *)&v95.pAllocationInfo->pPrivateDriverData + v41) = (void *)(v5 + v17);
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v95.pAllocationInfo->VidPnSourceId + v41) = *(_DWORD *)(v5 + 12 * v40 + 72);
      v17 += *(_DWORD *)(v5 + 4 * v38 + 68);
      if ( v39 >= *(_DWORD *)(v5 + 40) )
        break;
      p_hAllocation = &v95.pAllocationInfo->hAllocation;
    }
  }
  v42 = DxgkCreateAllocationInternal(&v95, (struct DXGALLOCATION **)v90, v38);
  v45 = v42;
  if ( v42 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v34 + 24) = v45;
    *(_QWORD *)(v34 + 32) = 1175LL;
LABEL_69:
    WdLogEvent5_WdError(v34);
  }
  else
  {
    Flags = (char)v95.Flags;
    *v25 = v95.Flags;
    if ( (Flags & 0x40) != 0 )
    {
      if ( v95.hGlobalShare )
      {
        v47 = WdLogNewEntry5_WdAssertion(v44, v43);
        *(_QWORD *)(v47 + 24) = 1084LL;
        WdLogEvent5_WdAssertion(v47);
      }
    }
    else
    {
      v25[2] = v95.hGlobalShare;
    }
    v48 = 0;
    v25[1] = v95.hResource;
    v87 = (char *)v25 + (unsigned int)v86;
    if ( *(_DWORD *)(v5 + 40) )
    {
      v49 = (char *)v91 + 208;
      while ( 1 )
      {
        v88 = 96LL * v48;
        v50 = *(D3DKMT_HANDLE *)((char *)&v95.pAllocationInfo->hAllocation + v88);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v49, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v53 = *((_DWORD *)v49 + 6);
            if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v51, &EventBlockThread, v52, v53);
          }
          ExAcquirePushLockSharedEx(v49, 0LL);
        }
        v54 = (v50 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v54 < *((_DWORD *)v91 + 64) )
        {
          v55 = *((_QWORD *)v91 + 30);
          v56 = *(_DWORD *)(v55 + 16 * v54 + 8);
          if ( ((v50 >> 25) & 0x60) == (*(_BYTE *)(v55 + 16 * v54 + 8) & 0x60)
            && (v56 & 0x2000) == 0
            && (v56 & 0x1F) != 0 )
          {
            v57 = v56 & 0x1F;
            if ( (_BYTE)v57 == 5 )
            {
              v59 = *(struct _EX_RUNDOWN_REF **)(v55 + 16LL * (unsigned int)v54);
              goto LABEL_56;
            }
            v58 = WdLogNewEntry5_WdError(v57, 2LL * (unsigned int)v54);
            *(_QWORD *)(v58 + 24) = 267LL;
            WdLogEvent5_WdError(v58);
          }
        }
        v59 = 0LL;
LABEL_56:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v59);
        ExReleasePushLockSharedEx(v49, 0LL);
        KeLeaveCriticalRegion();
        v60 = v86;
        v61 = 9LL * v48;
        v25[2 * v61 + 6] ^= (v25[2 * v61 + 6] ^ *(_DWORD *)(v86[6].Count + 4)) & 1;
        v62 = v25[18 * v48 + 6] ^ ((unsigned __int8)v25[18 * v48 + 6] ^ (unsigned __int8)*(_DWORD *)(v60[6].Count + 4)) & 2;
        v25[2 * v61 + 6] = v62;
        v63 = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)*(_DWORD *)(v60[6].Count + 4)) & 4;
        v25[2 * v61 + 6] = v63;
        v64 = v63 ^ ((unsigned __int8)v63 ^ (unsigned __int8)*(_DWORD *)(v60[6].Count + 4)) & 8;
        v25[2 * v61 + 6] = v64;
        v65 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)*(_DWORD *)(v60[6].Count + 4)) & 0x20;
        v25[2 * v61 + 6] = v65;
        v66 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)*(_DWORD *)(v60[6].Count + 4)) & 0x800;
        v25[2 * v61 + 6] = v66;
        v67 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)*(_DWORD *)(v60[6].Count + 4)) & 0x1000;
        v25[2 * v61 + 6] = v67;
        v68 = v67 ^ ((unsigned __int16)v67 ^ (unsigned __int16)*(_DWORD *)(v60[6].Count + 4)) & 0x2000;
        v25[2 * v61 + 6] = v68;
        v69 = v68 ^ ((unsigned __int16)v68 ^ (unsigned __int16)*(_DWORD *)(v60[6].Count + 4)) & 0x4000;
        v25[2 * v61 + 6] = v69;
        v70 = v69 ^ (v69 ^ *(_DWORD *)(v60[6].Count + 4)) & 0x40000;
        v25[2 * v61 + 6] = v70;
        v71 = v70 ^ (v70 ^ *(_DWORD *)(v60[6].Count + 4)) & 0x80000;
        pAllocationInfo = v95.pAllocationInfo;
        v25[2 * v61 + 6] = v71;
        v25[2 * v61 + 6] = v71 ^ (v71 ^ *(_DWORD *)(v60[6].Count + 4)) & 0x100000;
        v73 = v88;
        v25[2 * v61 + 4] = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v88);
        v25[2 * v61 + 5] = *(_DWORD *)(v5 + 12LL * v48 + 68);
        *(_QWORD *)&v25[2 * v61 + 8] = *((_QWORD *)v90 + v48);
        memmove(
          v87,
          *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v73),
          *(unsigned int *)(v5 + 12LL * v48 + 68));
        v74 = (char *)&v25[18 * v48];
        v87 = (char *)v87 + *(unsigned int *)(v5 + 12LL * v48 + 68);
        *((_QWORD *)v74 + 5) = *(_QWORD *)(v86[6].Count + 16);
        ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(v96 + 2680),
          (struct _DXGKARG_DESCRIBEALLOCATION *)(v74 + 40),
          v75);
        *((_QWORD *)v74 + 5) = 0LL;
        if ( *(_BYTE *)(v5 + 56) )
        {
          Count = (struct DXGDEVICE *)v86[1].Count;
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
            (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v99,
            Count);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v100, (__int64)Count, 0, v78, 0);
          if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v100, 0LL) >= 0
            && DXGDEVICE::UmdManagesResidency(Count) )
          {
            v79 = *((_QWORD *)Count + 2);
            v92 = 0LL;
            v88 = 0LL;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v79 + 640) + 8LL)
                                                                         + 984LL))(
              *((_QWORD *)Count + 95),
              0LL,
              &v92,
              &v88);
            v93 = 0LL;
            v97 = 0LL;
            v80 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v79 + 640) + 8LL) + 776LL))(
                    *(_QWORD *)(v79 + 648),
                    v92,
                    v86 + 3,
                    1LL,
                    3,
                    &v93,
                    &v97);
            v83 = v80;
            if ( v80 >= 0 )
            {
              if ( v80 == 259 )
                (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v79 + 640) + 8LL)
                                                                              + 992LL))(
                  *(_QWORD *)(v79 + 648),
                  &v88,
                  &v93,
                  1LL);
            }
            else
            {
              v84 = WdLogNewEntry5_WdError(v82, v81);
              *(_QWORD *)(v84 + 24) = v83;
              WdLogEvent5_WdError(v84);
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v102);
          COREACCESS::~COREACCESS((COREACCESS *)v101);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v99);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86, v76);
        if ( ++v48 >= *(_DWORD *)(v5 + 40) )
        {
          v31 = v89;
          break;
        }
      }
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v98 + 9), v25, v31);
    v2 = 1;
  }
LABEL_70:
  operator delete[](v94);
  operator delete[](v90);
  operator delete[](v25);
  return v2;
}

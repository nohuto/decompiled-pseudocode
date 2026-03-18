/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0368980
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9FC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C5D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C018DB90 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C0361210 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r13
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  const wchar_t *v11; // r9
  unsigned int v12; // edx
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // edx
  unsigned int v20; // edi
  unsigned int v21; // r11d
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  _DWORD *v25; // r12
  __int64 v26; // r9
  UINT v27; // ecx
  unsigned int v28; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v29; // ecx
  _QWORD *p_hAllocation; // r8
  void *v31; // rax
  UINT v32; // r9d
  unsigned int v33; // edi
  int v34; // eax
  UINT v35; // r10d
  __int64 v36; // rdx
  int v37; // eax
  char Flags; // al
  unsigned int v39; // r13d
  char *v40; // rdi
  unsigned int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // ecx
  struct _EX_RUNDOWN_REF *v48; // rdx
  struct _EX_RUNDOWN_REF *v49; // r9
  __int64 v50; // rdi
  int v51; // ecx
  int v52; // edx
  int v53; // ecx
  int v54; // edx
  int v55; // ecx
  int v56; // edx
  int v57; // ecx
  int v58; // edx
  int v59; // ecx
  int v60; // edx
  int v61; // r8d
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v63; // rcx
  char *v64; // rbx
  __int64 v65; // r8
  char v66; // cl
  struct DXGDEVICE *Count; // rbx
  __int64 v68; // r9
  __int64 v69; // rdi
  int v70; // eax
  __int64 v71; // rbx
  __int64 v72; // rbx
  struct _EX_RUNDOWN_REF *v74; // [rsp+58h] [rbp-B0h] BYREF
  void *v75; // [rsp+60h] [rbp-A8h]
  __int64 v76; // [rsp+68h] [rbp-A0h]
  __int64 v77; // [rsp+70h] [rbp-98h] BYREF
  __int64 v78; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v79; // [rsp+80h] [rbp-88h]
  void *v80; // [rsp+88h] [rbp-80h]
  struct DXGPROCESS *v81; // [rsp+90h] [rbp-78h]
  __int64 v82; // [rsp+98h] [rbp-70h] BYREF
  void *v83; // [rsp+A0h] [rbp-68h]
  struct _D3DKMT_CREATEALLOCATION v84; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-10h]
  __int64 v86; // [rsp+100h] [rbp-8h] BYREF
  char *v87; // [rsp+108h] [rbp+0h]
  struct DXGADAPTER_VMBUS_PACKET *v88; // [rsp+110h] [rbp+8h]
  _BYTE v89[16]; // [rsp+118h] [rbp+10h] BYREF
  char v90[8]; // [rsp+128h] [rbp+20h] BYREF
  char v91[64]; // [rsp+130h] [rbp+28h] BYREF
  char v92[88]; // [rsp+170h] [rbp+68h] BYREF

  v1 = a1;
  v88 = a1;
  v2 = 0;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( v7 )
  {
    Current = DXGPROCESS::GetCurrent(v4, v3, v5, v6);
    v9 = *(unsigned int *)(v7 + 40);
    v81 = Current;
    v85 = *(_QWORD *)(*((_QWORD *)v1 + 10) + 16LL);
    LODWORD(v76) = *((_DWORD *)v1 + 38);
    if ( !(_DWORD)v9 )
    {
      v10 = 1283LL;
      WdLogSingleEntry1(2LL, 1283LL);
      goto LABEL_89;
    }
    if ( (*(_DWORD *)(v7 + 44) & 0x1000) != 0 )
    {
      v10 = 1289LL;
      WdLogSingleEntry1(2LL, 1289LL);
      v11 = L"OpenCrossAdapter is not supported";
      goto LABEL_90;
    }
    v12 = 12 * v9;
    if ( 12 * v9 > 0xFFFFFFFF )
    {
      v10 = 1296LL;
      WdLogSingleEntry1(2LL, 1296LL);
    }
    else
    {
      v13 = *((unsigned int *)v1 + 36);
      if ( v13 - 64 < (unsigned __int64)v12 )
      {
        v10 = 1302LL;
        WdLogSingleEntry1(2LL, 1302LL);
        goto LABEL_89;
      }
      v14 = v12 + 64;
      v15 = *(_DWORD *)(v7 + 32);
      LODWORD(v77) = v14;
      if ( (unsigned int)v13 - v14 < v15 )
      {
        v10 = 1308LL;
        WdLogSingleEntry1(2LL, 1308LL);
        goto LABEL_89;
      }
      v16 = v15 + v14;
      v17 = *(_DWORD *)(v7 + 36);
      LODWORD(v75) = v16;
      if ( (unsigned int)v13 - v16 < v17 )
      {
        v10 = 1314LL;
        WdLogSingleEntry1(2LL, 1314LL);
        goto LABEL_89;
      }
      v18 = v17 + v16;
      v19 = 0;
      v20 = v18;
      while ( 1 )
      {
        v21 = *(_DWORD *)(v7 + 12LL * v19 + 68);
        if ( (unsigned int)v13 - v20 < v21 )
          break;
        v20 += v21;
        if ( ++v19 >= (unsigned int)v9 )
        {
          v22 = 96 * v9;
          if ( !is_mul_ok(v9, 0x60uLL) )
            v22 = -1LL;
          v83 = (void *)operator new[](v22, 0x4B677844u, 256LL, v13);
          if ( !v83 )
          {
            v10 = 1336LL;
            WdLogSingleEntry1(2LL, 1336LL);
            v11 = L"Failed to allocate pAllocationInfo";
            goto LABEL_90;
          }
          v24 = 8LL * *(unsigned int *)(v7 + 40);
          v25 = 0LL;
          if ( !is_mul_ok(*(unsigned int *)(v7 + 40), 8uLL) )
            v24 = -1LL;
          v80 = (void *)operator new[](v24, 0x4B677844u, 256LL, v23);
          if ( !v80 )
          {
            WdLogSingleEntry1(6LL, 1344LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate pAllocationSizes",
              1344LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_87;
          }
          LODWORD(v74) = 72 * *(_DWORD *)(v7 + 40) + 16;
          v79 = v20 + (_DWORD)v74 - v18;
          v25 = (_DWORD *)operator new[](v79, 0x4B677844u, 64LL, v26);
          if ( !v25 )
          {
            WdLogSingleEntry1(2LL, 1354LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to allocate pOutput",
              1354LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_87;
          }
          memset(&v84, 0, sizeof(v84));
          v27 = *(_DWORD *)(v7 + 32);
          v84.hDevice = *(_DWORD *)(v7 + 24);
          v84.hResource = *(_DWORD *)(v7 + 28);
          if ( v27 )
          {
            v84.PrivateRuntimeDataSize = v27;
            v84.pPrivateRuntimeData = (const void *)(v7 + (unsigned int)v77);
          }
          v28 = *(_DWORD *)(v7 + 36);
          if ( v28 )
          {
            v84.PrivateDriverDataSize = *(_DWORD *)(v7 + 36);
            v84.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v7 + (unsigned int)v75);
          }
          v29 = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v7 + 44);
          p_hAllocation = v83;
          v31 = *(void **)(v7 + 48);
          v32 = *(_DWORD *)(v7 + 40);
          v84.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v83;
          v84.hPrivateRuntimeResourceHandle = v31;
          v84.NumAllocations = v32;
          v84.Flags = v29;
          if ( (*(_DWORD *)&v29 & 0x10000) != 0 )
          {
            if ( v28 < 0x18 )
            {
              WdLogSingleEntry1(2LL, 1381LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Standard allocation does not have valid data",
                1381LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_87;
            }
            v84.PrivateDriverDataSize = 0;
          }
          v33 = 0;
          if ( v32 )
          {
            while ( 1 )
            {
              v34 = *(_DWORD *)(v7 + 44);
              v35 = *(_DWORD *)(v7 + 12LL * v33 + 68);
              LODWORD(v75) = v35;
              if ( (v34 & 0x20) != 0 )
              {
                p_hAllocation[12 * v33 + 1] = 4096LL;
                p_hAllocation = &v84.pAllocationInfo->hAllocation;
              }
              v36 = 96LL * v33;
              LODWORD(p_hAllocation[(unsigned __int64)v36 / 8 + 4]) = *(_DWORD *)(v7 + 12LL * v33 + 64);
              *(UINT *)((char *)&v84.pAllocationInfo->PrivateDriverDataSize + v36) = v35;
              if ( v35 )
                *(void **)((char *)&v84.pAllocationInfo->pPrivateDriverData + v36) = (void *)(v7 + v18);
              if ( (unsigned int)v76 >= 0x1E && (*(_BYTE *)(v7 + 56) & 2) != 0 )
              {
                if ( (*(UINT *)((_BYTE *)&v84.pAllocationInfo->Flags.Value + v36) & 1) == 0 || *(_DWORD *)(v7 + 40) != 1 )
                {
                  WdLogSingleEntry1(2LL, 1407LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"bVidPnSourceIsActuallyHostVidPnTarget must be used only with swapchain buffer",
                    1407LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_87;
                }
                if ( (int)DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
                            *(unsigned int *)(v7 + 24),
                            *(unsigned int *)(v7 + 12LL * v33 + 72),
                            (unsigned int *)((char *)&v84.pAllocationInfo->VidPnSourceId + v36),
                            3LL * v33) < 0 )
                {
                  WdLogSingleEntry1(2LL, 1416LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Fail to locate VidPnSourceId",
                    1416LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_87;
                }
                v35 = (unsigned int)v75;
              }
              else
              {
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v84.pAllocationInfo->VidPnSourceId + v36) = *(_DWORD *)(v7 + 12LL * v33 + 72);
              }
              v18 += v35;
              if ( ++v33 >= *(_DWORD *)(v7 + 40) )
                break;
              p_hAllocation = &v84.pAllocationInfo->hAllocation;
            }
          }
          v37 = DxgkCreateAllocationInternal(&v84, (unsigned __int64 *)v80, (__int64)p_hAllocation);
          if ( v37 < 0 )
          {
            v72 = v37;
            WdLogSingleEntry2(2LL, v37, 1534LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to create allocation: 0x%I64x",
              v72,
              1534LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            Flags = (char)v84.Flags;
            *v25 = v84.Flags;
            if ( (Flags & 0x40) != 0 )
            {
              if ( v84.hGlobalShare )
              {
                WdLogSingleEntry1(1LL, 1434LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL == Args.hGlobalShare",
                  1434LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              v25[2] = v84.hGlobalShare;
            }
            v25[1] = v84.hResource;
            v75 = (char *)v25 + (unsigned int)v74;
            if ( *(_DWORD *)(v7 + 40) )
            {
              v39 = 0;
              v40 = (char *)v81 + 248;
              v87 = (char *)v81 + 248;
              while ( 1 )
              {
                v78 = 96LL * v39;
                v41 = *(D3DKMT_HANDLE *)((char *)&v84.pAllocationInfo->hAllocation + v78);
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v40, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v44 = *((_DWORD *)v40 + 6);
                    if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v42, (const EVENT_DESCRIPTOR *)"g", v43, v44);
                  }
                  ExAcquirePushLockSharedEx(v40, 0LL);
                }
                v45 = (v41 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v45 < *((_DWORD *)v81 + 74) )
                {
                  v46 = *((_QWORD *)v81 + 35);
                  v47 = *(_DWORD *)(v46 + 16 * v45 + 8);
                  if ( ((v41 >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60)
                    && (v47 & 0x2000) == 0
                    && (v47 & 0x1F) != 0 )
                  {
                    if ( (v47 & 0x1F) == 5 )
                    {
                      v48 = *(struct _EX_RUNDOWN_REF **)(v46 + 16LL * (unsigned int)v45);
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
                v48 = 0LL;
LABEL_71:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v48);
                ExReleasePushLockSharedEx(v40, 0LL);
                KeLeaveCriticalRegion();
                v49 = v74;
                v50 = 9LL * v39;
                v25[2 * v50 + 6] ^= (v25[18 * v39 + 6] ^ *(_DWORD *)(v74[6].Count + 4)) & 1;
                v51 = v25[18 * v39 + 6];
                v52 = v51 ^ ((unsigned __int8)v51 ^ (unsigned __int8)*(_DWORD *)(v49[6].Count + 4)) & 2;
                v25[2 * v50 + 6] = v52;
                v53 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)*(_DWORD *)(v49[6].Count + 4)) & 4;
                v25[2 * v50 + 6] = v53;
                v54 = v53 ^ ((unsigned __int8)v53 ^ (unsigned __int8)*(_DWORD *)(v49[6].Count + 4)) & 8;
                v25[2 * v50 + 6] = v54;
                v55 = v54 ^ ((unsigned __int8)v54 ^ (unsigned __int8)*(_DWORD *)(v49[6].Count + 4)) & 0x20;
                v25[2 * v50 + 6] = v55;
                v56 = v55 ^ ((unsigned __int16)v55 ^ (unsigned __int16)*(_DWORD *)(v49[6].Count + 4)) & 0x800;
                v25[2 * v50 + 6] = v56;
                v57 = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)*(_DWORD *)(v49[6].Count + 4)) & 0x1000;
                v25[2 * v50 + 6] = v57;
                v58 = v57 ^ ((unsigned __int16)v57 ^ (unsigned __int16)*(_DWORD *)(v49[6].Count + 4)) & 0x2000;
                v25[2 * v50 + 6] = v58;
                v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)*(_DWORD *)(v49[6].Count + 4)) & 0x4000;
                v25[2 * v50 + 6] = v59;
                v60 = v59 ^ (v59 ^ *(_DWORD *)(v49[6].Count + 4)) & 0x40000;
                v25[2 * v50 + 6] = v60;
                v61 = v60 ^ (v60 ^ *(_DWORD *)(v49[6].Count + 4)) & 0x80000;
                v25[2 * v50 + 6] = v61;
                v25[2 * v50 + 6] = v61 ^ (v61 ^ *(_DWORD *)(v49[6].Count + 4)) & 0x100000;
                pAllocationInfo = v84.pAllocationInfo;
                v63 = v78;
                v25[2 * v50 + 4] = *(D3DKMT_HANDLE *)((char *)&v84.pAllocationInfo->hAllocation + v78);
                v25[2 * v50 + 5] = *(_DWORD *)(v7 + 12LL * v39 + 68);
                *(_QWORD *)&v25[2 * v50 + 8] = *((_QWORD *)v80 + v39);
                memmove(
                  v75,
                  *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v63),
                  *(unsigned int *)(v7 + 12LL * v39 + 68));
                v64 = (char *)&v25[18 * v39];
                v75 = (char *)v75 + *(unsigned int *)(v7 + 12LL * v39 + 68);
                *((_QWORD *)v64 + 5) = *(_QWORD *)(v74[6].Count + 16);
                ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(v85 + 2800),
                  (struct _DXGKARG_DESCRIBEALLOCATION *)(v64 + 40),
                  v65);
                *((_QWORD *)v64 + 5) = 0LL;
                v66 = *(_BYTE *)(v7 + 56) & 1;
                if ( (unsigned int)v76 < 0x1E )
                  v66 = *(_BYTE *)(v7 + 56);
                if ( v66 )
                {
                  Count = (struct DXGDEVICE *)v74[1].Count;
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
                    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89,
                    Count);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v90, (__int64)Count, 0, v68, 0);
                  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v90, 0LL) >= 0
                    && DXGDEVICE::UmdManagesResidency(Count) )
                  {
                    v69 = *((_QWORD *)Count + 2);
                    v77 = 0LL;
                    v78 = 0LL;
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v69 + 648)
                                                                                             + 8LL)
                                                                                 + 992LL))(
                      *((_QWORD *)Count + 95),
                      0LL,
                      &v77,
                      &v78);
                    v82 = 0LL;
                    v86 = 0LL;
                    v70 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v69 + 648) + 8LL) + 784LL))(
                            *(_QWORD *)(v69 + 656),
                            v77,
                            v74 + 3,
                            1LL,
                            3,
                            &v82,
                            &v86);
                    if ( v70 >= 0 )
                    {
                      if ( v70 == 259 )
                        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v69 + 648)
                                                                                                  + 8LL)
                                                                                      + 1000LL))(
                          *(_QWORD *)(v69 + 656),
                          &v78,
                          &v82,
                          1LL);
                    }
                    else
                    {
                      v71 = v70;
                      WdLogSingleEntry1(2LL, v70);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to make staging allocation resident. Returning 0x%I64x",
                        v71,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                  COREACCESS::~COREACCESS((COREACCESS *)v92);
                  COREACCESS::~COREACCESS((COREACCESS *)v91);
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
                }
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
                v40 = v87;
                if ( ++v39 >= *(_DWORD *)(v7 + 40) )
                {
                  v1 = v88;
                  break;
                }
              }
            }
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), v25, v79);
            v2 = 1;
          }
LABEL_87:
          operator delete[](v83);
          operator delete[](v80);
          operator delete[](v25);
          return v2;
        }
      }
      v10 = 1325LL;
      WdLogSingleEntry1(2LL, 1325LL);
    }
LABEL_89:
    v11 = L"Invalid packet size";
LABEL_90:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}

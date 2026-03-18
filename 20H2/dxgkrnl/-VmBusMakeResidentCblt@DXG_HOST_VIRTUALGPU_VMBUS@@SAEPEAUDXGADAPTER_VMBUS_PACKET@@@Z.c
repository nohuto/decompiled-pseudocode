/*
 * XREFs of ?VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7900
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004198 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00043E4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D94C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039C38 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003E9AC (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAVVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1C003E9E8 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MU.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C003EA48 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FD740 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C014DC50 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResidentCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD **v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGDEVICE *v19; // r14
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned int v26; // r12d
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct DXGALLOCATION *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int Resident; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  DXGDEVICE *v46; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h] BYREF
  struct VIDMM_PAGING_QUEUE *v48; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v50; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v51[16]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-88h] BYREF
  D3DDDI_MAKERESIDENT v53; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v54[24]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v55; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-28h]
  _BYTE v57[160]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v54,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 1541LL;
    WdLogEvent5_WdError(v5);
    goto LABEL_41;
  }
  v6 = v1 + 40;
  if ( !v1 )
    v6 = 0LL;
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>(v6);
  if ( v9 )
  {
    v55 = 0LL;
    v56 = 0LL;
    v10 = *(unsigned int *)(v9 + 36);
    if ( (_DWORD)v10
      && (v7 = ((unsigned __int64)*(unsigned int *)(v1 + 128) - 44) % v10,
          ((unsigned __int64)*(unsigned int *)(v1 + 128) - 44) / v10 >= 4) )
    {
      v11 = *(unsigned int *)(v9 + 24);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v10 != 1 )
        {
          v12 = WdLogNewEntry5_WdError(v8, v11);
          *(_QWORD *)(v12 + 24) = 1567LL;
          WdLogEvent5_WdError(v12);
          LODWORD(v56) = -1073741811;
          goto LABEL_39;
        }
        v16 = *(struct _KTHREAD ***)(v1 + 88);
        v46 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v11, v16, &v46);
        v19 = v46;
        if ( !v46 )
        {
          v20 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v20 + 24) = *(unsigned int *)(v9 + 24);
          WdLogEvent5_WdError(v20);
          LODWORD(v56) = -1073741811;
LABEL_13:
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47);
          goto LABEL_38;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51, v46);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v19, 0, v21, 0);
        LODWORD(v56) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
        if ( (int)v56 < 0 )
        {
          v24 = WdLogNewEntry5_WdError(v23, v22);
          *(_QWORD *)(v24 + 24) = (int)v56;
          WdLogEvent5_WdError(v24);
LABEL_16:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
          goto LABEL_13;
        }
        if ( !DXGDEVICE::UmdManagesResidency(v19) )
          goto LABEL_16;
        v25 = *(_QWORD *)(v1 + 88);
        v26 = *(_DWORD *)(v9 + 40);
        v48 = 0LL;
        v50 = 0LL;
        v27 = *((_QWORD *)v19 + 2);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v25 + 208));
        v28 = (v26 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v28 < *(_DWORD *)(v25 + 256) )
        {
          v29 = *(_QWORD *)(v25 + 240);
          v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
          if ( ((v26 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
            && (v30 & 0x2000) == 0
            && (v30 & 0x1F) != 0 )
          {
            v31 = v30 & 0x1F;
            if ( (_BYTE)v31 == 5 )
            {
              v33 = *(struct DXGALLOCATION **)(v29 + 16LL * (unsigned int)v28);
LABEL_25:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v33);
              ExReleasePushLockSharedEx(v25 + 208, 0LL);
              KeLeaveCriticalRegion();
              if ( v46 )
              {
                v37 = *(_QWORD *)(*((_QWORD *)v46 + 1) + 16LL);
                v38 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
                if ( *(_QWORD *)(v37 + 16) == v38 )
                {
                  VIDMM_EXPORT::VidMmGetDevicePagingQueue(
                    *(VIDMM_EXPORT **)(v27 + 640),
                    *((struct VIDMM_DEVICE **)v19 + 95),
                    0,
                    &v48,
                    &v50);
                  v49 = 0LL;
                  v52 = 0LL;
                  Resident = VIDMM_EXPORT::VidMmMakeResident(
                               *(VIDMM_EXPORT **)(v27 + 640),
                               *(struct VIDMM_GLOBAL **)(v27 + 648),
                               v48,
                               (struct _VIDMM_MULTI_ALLOC **)v46 + 3,
                               1u,
                               3u,
                               &v49,
                               &v52);
                  LODWORD(v56) = Resident;
                  if ( Resident >= 0 )
                  {
                    if ( Resident == 259 )
                    {
                      VIDMM_EXPORT::VidMmWaitForFences(
                        *(VIDMM_EXPORT **)(v27 + 640),
                        *(struct VIDMM_GLOBAL **)(v27 + 648),
                        &v50,
                        &v49);
                      LODWORD(v56) = 0;
                    }
                  }
                  else
                  {
                    v42 = WdLogNewEntry5_WdError(v41, v40);
                    *(_QWORD *)(v42 + 24) = (int)v56;
                    WdLogEvent5_WdError(v42);
                  }
                  goto LABEL_28;
                }
                v36 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
                v36[3] = v19;
                v36[4] = v46;
                v36[5] = -1073741811LL;
              }
              else
              {
                v36 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
                v36[3] = *(unsigned int *)(v9 + 40);
              }
              WdLogEvent5_WdError(v36);
              LODWORD(v56) = -1073741811;
LABEL_28:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46);
              goto LABEL_16;
            }
            v32 = WdLogNewEntry5_WdError(v31, 2LL * (unsigned int)v28);
            *(_QWORD *)(v32 + 24) = 267LL;
            WdLogEvent5_WdError(v32);
          }
        }
        v33 = 0LL;
        goto LABEL_25;
      }
      v53.Flags.Value = *(_DWORD *)(v9 + 32);
      v53.NumAllocations = v10;
      v53.AllocationList = (const D3DKMT_HANDLE *)(v9 + 40);
      v53.hPagingQueue = *(_DWORD *)(v9 + 28);
      v53.PriorityList = 0LL;
      memset(&v53.Flags + 1, 0, 20);
      LODWORD(v56) = DxgkMakeResidentInternal(&v53, 0, 0LL);
      v55 = *(_OWORD *)&v53.PagingFenceValue;
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v43 + 24) = *(unsigned int *)(v1 + 128);
      WdLogEvent5_WdError(v43);
      LODWORD(v56) = -1073741811;
    }
LABEL_38:
    if ( (int)v56 >= 0 )
    {
LABEL_40:
      VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v55, 0x18u);
      v4 = 1;
      goto LABEL_41;
    }
LABEL_39:
    v44 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v44 + 24) = (int)v56;
    WdLogEvent5_WdWarning(v44);
    goto LABEL_40;
  }
LABEL_41:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
  return v4;
}

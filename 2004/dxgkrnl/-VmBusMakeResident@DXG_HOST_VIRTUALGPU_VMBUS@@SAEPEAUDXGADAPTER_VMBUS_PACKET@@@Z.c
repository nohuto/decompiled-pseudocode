/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242D20
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D8EC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F814 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C014EE00 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  struct _KTHREAD **v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGDEVICE *v19; // r14
  __int64 v20; // rax
  struct DXGDEVICE *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  struct DXGDEVICE *v48; // [rsp+48h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v49; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h]
  DXGDEVICE *v53; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-88h] BYREF
  __int64 v55; // [rsp+88h] [rbp-80h] BYREF
  __int64 v56; // [rsp+90h] [rbp-78h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h]
  struct D3DDDI_MAKERESIDENT v58; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v59[8]; // [rsp+D0h] [rbp-38h] BYREF
  DXGPUSHLOCK *v60; // [rsp+D8h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-28h]
  __int128 v62; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-10h]
  _BYTE v64[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v65[64]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v66[88]; // [rsp+150h] [rbp+48h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v60);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v61 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v10 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v10 )
      goto LABEL_4;
    v62 = 0LL;
    v63 = 0LL;
    v11 = *(unsigned int *)(v10 + 36);
    if ( !(_DWORD)v11
      || (v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v11,
          ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v11 < 4) )
    {
      v47 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v47 + 24) = *((unsigned int *)a1 + 22);
      WdLogEvent5_WdError(v47);
      LODWORD(v63) = -1073741811;
      goto LABEL_52;
    }
    v12 = *(unsigned int *)(v10 + 24);
    if ( !(_DWORD)v12 )
    {
      v58.Flags.Value = *(_DWORD *)(v10 + 32);
      v58.NumAllocations = v11;
      v58.AllocationList = (const D3DKMT_HANDLE *)(v10 + 40);
      v58.hPagingQueue = *(_DWORD *)(v10 + 28);
      v58.PriorityList = 0LL;
      memset(&v58.Flags + 1, 0, 20);
      LODWORD(v63) = DxgkMakeResidentInternal(&v58, 0, 0LL);
      v62 = *(_OWORD *)&v58.PagingFenceValue;
      goto LABEL_52;
    }
    if ( (_DWORD)v11 != 1 )
    {
      v13 = WdLogNewEntry5_WdError(v9, v12);
      *(_QWORD *)(v13 + 24) = 4204LL;
      WdLogEvent5_WdError(v13);
      LODWORD(v63) = -1073741811;
LABEL_53:
      v6 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v6 + 24) = (int)v63;
      goto LABEL_3;
    }
    v16 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v53 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, v12, v16, &v53);
    v19 = v53;
    if ( !v53 )
    {
      v20 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v20 + 24) = *(unsigned int *)(v10 + 24);
      WdLogEvent5_WdError(v20);
      v21 = v48;
      LODWORD(v63) = -1073741811;
      if ( !v48 )
        goto LABEL_53;
      goto LABEL_14;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51, v53);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v19, 0, v22, 0);
    LODWORD(v63) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v64, 0LL);
    if ( (int)v63 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v25 + 24) = (int)v63;
      WdLogEvent5_WdError(v25);
      COREACCESS::~COREACCESS((COREACCESS *)v66);
      COREACCESS::~COREACCESS((COREACCESS *)v65);
      if ( v51[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
      v21 = v48;
      if ( v48 )
      {
LABEL_14:
        v15 = _InterlockedDecrement64((volatile signed __int64 *)v21 + 8);
        if ( !v15 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
      }
LABEL_52:
      if ( (int)v63 >= 0 )
      {
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v62, 0x18u);
        goto LABEL_5;
      }
      goto LABEL_53;
    }
    if ( !DXGDEVICE::UmdManagesResidency(v19) )
    {
LABEL_39:
      COREACCESS::~COREACCESS((COREACCESS *)v66);
      COREACCESS::~COREACCESS((COREACCESS *)v65);
      if ( v51[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
      v21 = v48;
      if ( v48 )
        goto LABEL_14;
      goto LABEL_52;
    }
    v26 = *(_DWORD *)(v10 + 40);
    v54 = 0LL;
    v56 = 0LL;
    v52 = *((_QWORD *)v19 + 2);
    v57 = *((_QWORD *)a1 + 6);
    v27 = v57 + 208;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v27, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v30 = *(_DWORD *)(v27 + 24);
        if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, &EventBlockThread, v29, v30);
      }
      ExAcquirePushLockSharedEx(v27, 0LL);
    }
    v31 = (v26 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *(_DWORD *)(v57 + 256) )
    {
      v32 = *(_QWORD *)(v57 + 240);
      v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
      if ( ((v26 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60) && (v33 & 0x2000) == 0 && (v33 & 0x1F) != 0 )
      {
        v34 = v33 & 0x1F;
        if ( (_BYTE)v34 == 5 )
        {
          v36 = *(struct _EX_RUNDOWN_REF **)(v32 + 16LL * (unsigned int)v31);
LABEL_35:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v49, v36);
          ExReleasePushLockSharedEx(v27, 0LL);
          KeLeaveCriticalRegion();
          if ( v49 )
          {
            v41 = *(_QWORD *)(v49[1].Count + 16);
            v42 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
            if ( *(_QWORD *)(v41 + 16) == v42 )
            {
              v43 = v52;
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v52 + 640) + 8LL)
                                                                           + 984LL))(
                *((_QWORD *)v19 + 95),
                0LL,
                &v54,
                &v56);
              v55 = 0LL;
              v50 = 0LL;
              v44 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v43 + 640) + 8LL) + 776LL))(
                      *(_QWORD *)(v43 + 648),
                      v54,
                      v49 + 3,
                      1LL,
                      3,
                      &v55,
                      &v50);
              LODWORD(v63) = v44;
              if ( v44 >= 0 )
              {
                if ( v44 == 259 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v43 + 640)
                                                                                            + 8LL)
                                                                                + 992LL))(
                    *(_QWORD *)(v43 + 648),
                    &v56,
                    &v55,
                    1LL);
                  LODWORD(v63) = 0;
                }
              }
              else
              {
                v46 = WdLogNewEntry5_WdError(v45, v40);
                *(_QWORD *)(v46 + 24) = (int)v63;
                WdLogEvent5_WdError(v46);
              }
              goto LABEL_38;
            }
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
            v39[3] = v19;
            v39[4] = v49;
            v39[5] = -1073741811LL;
          }
          else
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
            v39[3] = *(unsigned int *)(v10 + 40);
          }
          WdLogEvent5_WdError(v39);
          LODWORD(v63) = -1073741811;
LABEL_38:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49, v40);
          goto LABEL_39;
        }
        v35 = WdLogNewEntry5_WdError(v34, 2LL * (unsigned int)v31);
        *(_QWORD *)(v35 + 24) = 267LL;
        WdLogEvent5_WdError(v35);
      }
    }
    v36 = 0LL;
    goto LABEL_35;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4178LL;
LABEL_3:
  WdLogEvent5_WdError(v6);
LABEL_4:
  v5 = 0;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
  return v5;
}

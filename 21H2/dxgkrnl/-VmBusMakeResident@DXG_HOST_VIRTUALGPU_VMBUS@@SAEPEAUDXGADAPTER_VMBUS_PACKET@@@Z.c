/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9DC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040624 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01526A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  struct _KTHREAD **v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGDEVICE *v19; // rdi
  __int64 v20; // rax
  struct DXGDEVICE *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rax
  struct _EX_RUNDOWN_REF *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  struct DXGDEVICE *v43; // [rsp+48h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+50h] [rbp-B8h] BYREF
  DXGDEVICE *v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v47[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  struct D3DDDI_MAKERESIDENT v51; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v52[8]; // [rsp+C0h] [rbp-48h] BYREF
  DXGPUSHLOCK *v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  __int128 v55; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-20h]
  _BYTE v57[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v58[64]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v59[88]; // [rsp+140h] [rbp+38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v53);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v54 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v10 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v10 )
      goto LABEL_4;
    v55 = 0LL;
    v56 = 0LL;
    v11 = *(unsigned int *)(v10 + 36);
    if ( !(_DWORD)v11
      || (v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v11,
          ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v11 < 4) )
    {
      v42 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v42 + 24) = *((unsigned int *)a1 + 22);
      WdLogEvent5_WdError(v42);
      LODWORD(v56) = -1073741811;
      goto LABEL_43;
    }
    v12 = *(unsigned int *)(v10 + 24);
    if ( !(_DWORD)v12 )
    {
      v51.Flags.Value = *(_DWORD *)(v10 + 32);
      v51.NumAllocations = v11;
      v51.AllocationList = (const D3DKMT_HANDLE *)(v10 + 40);
      v51.hPagingQueue = *(_DWORD *)(v10 + 28);
      v51.PriorityList = 0LL;
      memset(&v51.Flags + 1, 0, 20);
      LODWORD(v56) = DxgkMakeResidentInternal(&v51, 0, 0LL);
      v55 = *(_OWORD *)&v51.PagingFenceValue;
      goto LABEL_43;
    }
    if ( (_DWORD)v11 != 1 )
    {
      v13 = WdLogNewEntry5_WdError(v9, v12);
      *(_QWORD *)(v13 + 24) = 4302LL;
      WdLogEvent5_WdError(v13);
      LODWORD(v56) = -1073741811;
LABEL_44:
      v6 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v6 + 24) = (int)v56;
      goto LABEL_3;
    }
    v16 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v45 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v12, v16, &v45);
    v19 = v45;
    if ( !v45 )
    {
      v20 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v20 + 24) = *(unsigned int *)(v10 + 24);
      WdLogEvent5_WdError(v20);
      v21 = v43;
      LODWORD(v56) = -1073741811;
      if ( !v43 )
        goto LABEL_44;
      goto LABEL_14;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v45);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v19, 0, v22, 0);
    LODWORD(v56) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
    if ( (int)v56 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v25 + 24) = (int)v56;
      WdLogEvent5_WdError(v25);
      goto LABEL_18;
    }
    if ( !DXGDEVICE::UmdManagesResidency(v19) )
    {
LABEL_18:
      COREACCESS::~COREACCESS((COREACCESS *)v59);
      COREACCESS::~COREACCESS((COREACCESS *)v58);
      if ( v47[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
      v21 = v43;
      if ( !v43 )
      {
LABEL_43:
        if ( (int)v56 >= 0 )
        {
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v55, 0x18u);
          goto LABEL_5;
        }
        goto LABEL_44;
      }
LABEL_14:
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v15 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
      goto LABEL_43;
    }
    v26 = *(_DWORD *)(v10 + 40);
    v48 = 0LL;
    v50 = 0LL;
    v27 = *((_QWORD *)a1 + 6);
    v28 = *((_QWORD *)v19 + 2);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 208));
    v29 = (v26 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v27 + 256) )
    {
      v30 = *(_QWORD *)(v27 + 240);
      v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
      if ( ((v26 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60) && (v31 & 0x2000) == 0 && (v31 & 0x1F) != 0 )
      {
        v32 = v31 & 0x1F;
        if ( (_BYTE)v32 == 5 )
        {
          v34 = *(struct _EX_RUNDOWN_REF **)(v30 + 16LL * (unsigned int)v29);
LABEL_30:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v34);
          ExReleasePushLockSharedEx(v27 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( v44 )
          {
            if ( (DXGDEVICE *)v44[1].Count == v19 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v28 + 640) + 8LL)
                                                                           + 984LL))(
                *((_QWORD *)v19 + 95),
                0LL,
                &v48,
                &v50);
              v49 = 0LL;
              v46 = 0LL;
              v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v28 + 640) + 8LL) + 776LL))(
                      *(_QWORD *)(v28 + 648),
                      v48,
                      v44 + 3,
                      1LL,
                      3,
                      &v49,
                      &v46);
              LODWORD(v56) = v39;
              if ( v39 >= 0 )
              {
                if ( v39 == 259 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v28 + 640)
                                                                                            + 8LL)
                                                                                + 992LL))(
                    *(_QWORD *)(v28 + 648),
                    &v50,
                    &v49,
                    1LL);
                  LODWORD(v56) = 0;
                }
              }
              else
              {
                v41 = WdLogNewEntry5_WdError(v40, v38);
                *(_QWORD *)(v41 + 24) = (int)v56;
                WdLogEvent5_WdError(v41);
              }
              goto LABEL_33;
            }
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
            v37[3] = v19;
            v37[4] = v44;
            v37[5] = -1073741811LL;
          }
          else
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
            v37[3] = *(unsigned int *)(v10 + 40);
          }
          WdLogEvent5_WdError(v37);
          LODWORD(v56) = -1073741811;
LABEL_33:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44, v38);
          goto LABEL_18;
        }
        v33 = WdLogNewEntry5_WdError(v32, 2LL * (unsigned int)v29);
        *(_QWORD *)(v33 + 24) = 316LL;
        WdLogEvent5_WdError(v33);
      }
    }
    v34 = 0LL;
    goto LABEL_30;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4276LL;
LABEL_3:
  WdLogEvent5_WdError(v6);
LABEL_4:
  v5 = 0;
LABEL_5:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
  return v5;
}

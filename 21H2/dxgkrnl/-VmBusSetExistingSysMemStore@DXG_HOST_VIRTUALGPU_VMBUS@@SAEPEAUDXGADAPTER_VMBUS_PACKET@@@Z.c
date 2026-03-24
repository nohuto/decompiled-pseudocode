/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E590
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005940 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004064C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int *v9; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v11; // rdx
  struct _KTHREAD **v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rax
  struct _KTHREAD *v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  ULONG_PTR v30; // r9
  ULONG_PTR Count; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+40h] [rbp-C8h] BYREF
  struct DXGDEVICE *v39; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v40; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v41[16]; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v42[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v43; // [rsp+78h] [rbp-90h]
  char v44[8]; // [rsp+88h] [rbp-80h] BYREF
  char v45[64]; // [rsp+90h] [rbp-78h] BYREF
  char v46[88]; // [rsp+D0h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v42[1]);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v43 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1580LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_34;
  }
  v9 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v9 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7);
  v11 = v9[6];
  v39 = 0LL;
  v12 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v11, Current, &v39);
  v15 = v39;
  if ( v39 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41,
      v39);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v15, 0, v17, 0);
    LODWORD(v37) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44, 0LL);
    if ( (int)v37 < 0 )
    {
LABEL_30:
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
      goto LABEL_31;
    }
    v18 = v9[7];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v21 = *((_DWORD *)v12 + 58);
        if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, &EventBlockThread, v20, v21);
      }
      ExAcquirePushLockSharedEx(v12 + 26, 0LL);
    }
    v22 = (v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *((_DWORD *)v12 + 64) )
    {
      v23 = v12[30];
      v24 = *((_DWORD *)v23 + 4 * v22 + 2);
      if ( ((v18 >> 25) & 0x60) == (*((_BYTE *)v23 + 16 * v22 + 8) & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
      {
        v25 = v24 & 0x1F;
        if ( (_BYTE)v25 == 5 )
        {
          v27 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v23 + 2 * (unsigned int)v22);
          goto LABEL_21;
        }
        v26 = WdLogNewEntry5_WdError(v25, 2LL * (unsigned int)v22);
        *(_QWORD *)(v26 + 24) = 316LL;
        WdLogEvent5_WdError(v26);
      }
    }
    v27 = 0LL;
LABEL_21:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v27);
    ExReleasePushLockSharedEx(v12 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v38 && (v30 = v38[3].Count) != 0 )
    {
      Count = v38[1].Count;
      v32 = (_QWORD *)*((_QWORD *)v15 + 2);
      v33 = *(_QWORD *)(Count + 16);
      if ( *(_QWORD *)(v33 + 16) == v32[2] )
      {
        LODWORD(v37) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v32[80] + 8LL) + 1200LL))(
                         v32[81],
                         v30,
                         v9[8]);
LABEL_29:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v35);
        goto LABEL_30;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdError(Count, v33);
      v34[3] = v15;
      v34[4] = v38;
      v34[5] = -1073741811LL;
    }
    else
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v34[3] = v9[7];
    }
    WdLogEvent5_WdError(v34);
    LODWORD(v37) = -1073741811;
    goto LABEL_29;
  }
  v16 = WdLogNewEntry5_WdError(v14, v13);
  *(_QWORD *)(v16 + 24) = v9[6];
  WdLogEvent5_WdError(v16);
  LODWORD(v37) = -1073741811;
LABEL_31:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v37, 4u);
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
LABEL_34:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  return v5;
}

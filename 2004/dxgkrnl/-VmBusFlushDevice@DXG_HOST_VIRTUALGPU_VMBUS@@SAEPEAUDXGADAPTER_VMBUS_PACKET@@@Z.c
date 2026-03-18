/*
 * XREFs of ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02411E0
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
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E4748 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _KTHREAD **v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v20; // [rsp+40h] [rbp-C8h] BYREF
  struct DXGDEVICE *v21; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-B8h] BYREF
  DXGPUSHLOCK *v23[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+70h] [rbp-98h]
  _BYTE v25[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[64]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v27[88]; // [rsp+C0h] [rbp-48h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v23[1]);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v24 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 2844LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_18;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v8 = v7;
  if ( !v7 )
    goto LABEL_4;
  v9 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
  v20 = 0LL;
  LODWORD(v19) = -1073741811;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, *(unsigned int *)(v7 + 24), v9, &v20);
  if ( v20 )
  {
    if ( (unsigned int)(*(_DWORD *)(v8 + 28) - 1) <= 5 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22, v20);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v20, 0, v14, 0);
      LODWORD(v19) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
      if ( (int)v19 >= 0 )
      {
        DXGDEVICE::FlushScheduler(v20, *(_DWORD *)(v8 + 28));
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v17 + 24) = (int)v19;
        WdLogEvent5_WdError(v17);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      COREACCESS::~COREACCESS((COREACCESS *)v26);
      if ( v22[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
      goto LABEL_15;
    }
    v12 = WdLogNewEntry5_WdError(v11, v10);
    v13 = *(int *)(v8 + 28);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    v13 = *(unsigned int *)(v8 + 24);
  }
  *(_QWORD *)(v12 + 24) = v13;
  WdLogEvent5_WdError(v12);
LABEL_15:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v19, 4u);
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
LABEL_18:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v5;
}

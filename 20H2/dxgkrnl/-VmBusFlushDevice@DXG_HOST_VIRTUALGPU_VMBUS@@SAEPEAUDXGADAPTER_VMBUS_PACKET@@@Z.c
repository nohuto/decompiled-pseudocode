/*
 * XREFs of ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02400E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F69C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E36B8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _KTHREAD **v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v25; // [rsp+40h] [rbp-C8h] BYREF
  struct DXGDEVICE *v26; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-B8h] BYREF
  DXGPUSHLOCK *v28[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+70h] [rbp-98h]
  _BYTE v30[160]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v31[160]; // [rsp+118h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v28[1]);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v29 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 2837LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_23;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v8 = v7;
  if ( !v7 )
    goto LABEL_4;
  v9 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
  v25 = 0LL;
  LODWORD(v24) = -1073741811;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, *(unsigned int *)(v7 + 24), v9, &v25);
  if ( v25 )
  {
    v15 = *(unsigned int *)(v8 + 28);
    if ( (unsigned int)(v15 - 1) <= 5 )
    {
      if ( (_DWORD)v15 == 4 )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v25, 0, v12, 0);
        LODWORD(v24) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
        if ( (int)v24 >= 0 )
        {
          DXGDEVICE::FlushScheduler(v25, 4u);
        }
        else
        {
          v18 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v18 + 24) = (int)v24;
          WdLogEvent5_WdError(v18);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
      }
      else
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v25);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v25, 0, v19, 0);
        LODWORD(v24) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL);
        if ( (int)v24 >= 0 )
        {
          DXGDEVICE::FlushScheduler(v25, *(_DWORD *)(v8 + 28));
        }
        else
        {
          v22 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v22 + 24) = (int)v24;
          WdLogEvent5_WdError(v22);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
        if ( v27[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
      }
      goto LABEL_20;
    }
    v13 = WdLogNewEntry5_WdError(v15, v10);
    v14 = *(int *)(v8 + 28);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    v14 = *(unsigned int *)(v8 + 24);
  }
  *(_QWORD *)(v13 + 24) = v14;
  WdLogEvent5_WdError(v13);
LABEL_20:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v24, 4u);
  if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
LABEL_23:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  return v5;
}

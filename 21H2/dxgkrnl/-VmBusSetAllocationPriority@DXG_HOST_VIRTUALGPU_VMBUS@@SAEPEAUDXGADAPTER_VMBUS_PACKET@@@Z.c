/*
 * XREFs of ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004064C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C0228954 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  unsigned int v10; // r9d
  D3DKMT_HANDLE v11; // r8d
  UINT v12; // ecx
  __int64 v13; // r14
  UINT v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // rcx
  struct _KTHREAD **v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGDEVICE *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v29; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DKMT_SETALLOCATIONPRIORITY v31; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v32[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v33[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGPUSHLOCK *v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  _BYTE v36[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[88]; // [rsp+D8h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v34);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v35 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1349LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v8 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v9 = v8;
  if ( !v8 || v8[8] > 0x20000 )
    goto LABEL_4;
  *(&v31.AllocationCount + 1) = 0;
  v10 = 0;
  v28 = -1073741811;
  v11 = v8[7];
  v12 = v8[8];
  v13 = v8[6];
  v31.AllocationCount = v12;
  v31.hDevice = v13;
  if ( !v11 )
    v10 = v12;
  v31.hResource = v11;
  v14 = v12;
  v15 = 4;
  v16 = 4 * v14;
  if ( !v11 )
    v15 = v16;
  v17 = v10 * 4 + v15;
  if ( (unsigned __int64)*((unsigned int *)a1 + 22) - 40 < v17 )
  {
    v6 = WdLogNewEntry5_WdError(v17, v9);
    *(_QWORD *)(v6 + 24) = 1366LL;
    goto LABEL_3;
  }
  if ( v11 )
    v31.phAllocationList = 0LL;
  else
    v31.phAllocationList = v9 + 10;
  v18 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
  v29 = 0LL;
  v31.pPriorities = &v9[v10 + 10];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, (unsigned int)v13, v18, &v29);
  v21 = v29;
  if ( v29 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32, v29);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v21, 0, v23, 0);
    v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
    if ( v28 >= 0 )
    {
      v28 = DXGDEVICE::SetAllocationPriority(v21, &v31, 0);
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v27 + 24) = v21;
      *(_QWORD *)(v27 + 32) = v28;
      WdLogEvent5_WdWarning(v27);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v28, 4u);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    if ( v32[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v22 + 24) = v13;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    v5 = 0;
  }
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v5;
}

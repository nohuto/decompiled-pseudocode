/*
 * XREFs of ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036D4D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _KTHREAD **v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v17; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v18; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGPUSHLOCK *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[160]; // [rsp+90h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v22 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 3172LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3172LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_23;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v6 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
  v16 = -1073741811;
  v7 = *(_DWORD *)(v4 + 24);
  v17 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v18, v7, v6, &v17);
  if ( v17 )
  {
    v11 = *(_DWORD *)(v5 + 28);
    if ( (unsigned int)(v11 - 1) <= 6 )
    {
      if ( v11 == 4 )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v17, 0, v8, 0);
        v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
        v16 = v12;
        if ( v12 >= 0 )
        {
          DXGDEVICE::FlushScheduler(v17, 4u, 0xFFFFFFFD, 0);
        }
        else
        {
          WdLogSingleEntry1(2LL, v12);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Device was removed: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
      }
      else
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19, v17);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v17, 0, v13, 0);
        v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
        v16 = v14;
        if ( v14 >= 0 )
        {
          DXGDEVICE::FlushScheduler(v17, *(_DWORD *)(v5 + 28), 0xFFFFFFFD, 0);
        }
        else
        {
          WdLogSingleEntry1(2LL, v14);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Device was removed: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
        if ( v19[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
      }
      goto LABEL_20;
    }
    WdLogSingleEntry1(2LL, *(int *)(v5 + 28));
    v9 = *(int *)(v5 + 28);
    v10 = L"Invalid device flush reason: 0x%I64x";
  }
  else
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
    v9 = *(unsigned int *)(v5 + 24);
    v10 = L"Invalid device handle: 0x%I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_20:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
  if ( v18 && _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
LABEL_23:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  return v3;
}

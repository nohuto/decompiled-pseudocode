/*
 * XREFs of ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C0361210
 * Callers:
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0368980 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036DE50 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v8; // rsi
  __int64 v9; // r9
  int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v11; // rsi
  const wchar_t *v12; // r9
  _QWORD *v13; // rcx
  struct DXGDEVICE *v15; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v16; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v20[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a2;
  v6 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, (__int64)a3, a4);
  v15 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, v6, Current, &v15);
  v8 = v15;
  if ( !v15 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741811;
    WdLogSingleEntry1(2LL, 6199LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid device handle", 6199LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v17,
    v15);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, (__int64)v8, 2, v9, 0);
  SourceConnectedToTargetInClientVidPn = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v18, 0LL);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v13 = (_QWORD *)*((_QWORD *)v8 + 231);
    if ( v13 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v13, v5, a3);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_5;
      v11 = 6192LL;
      WdLogSingleEntry1(2LL, 6192LL);
      v12 = L"Fail to locate VidPnSourceId";
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = -1073741811;
      v11 = 6182LL;
      WdLogSingleEntry1(2LL, 6182LL);
      v12 = L"Fail to locate display adapter";
    }
  }
  else
  {
    v11 = 6174LL;
    WdLogSingleEntry1(2LL, 6174LL);
    v12 = L"Fail to lock device";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v17);
LABEL_11:
  if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v16);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}

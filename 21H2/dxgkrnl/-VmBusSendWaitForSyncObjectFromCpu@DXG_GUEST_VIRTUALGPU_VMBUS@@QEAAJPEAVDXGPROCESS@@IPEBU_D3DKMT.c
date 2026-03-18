/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C037F5E4
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1C01CD280 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C032252C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x1C03BF798 (-WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4,
        unsigned __int8 a5)
{
  __int64 v9; // rax
  struct _KEVENT *hAsyncEvent; // r14
  NTSTATUS v11; // eax
  int v12; // edi
  UINT ObjectCount; // eax
  struct DXGKVMB_COMMAND_BASE *v14; // rdi
  UINT v15; // edx
  struct DXGPROCESS *v16; // r10
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v18; // r13
  D3DKMT_HANDLE v19; // r9d
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rax
  char *v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h]
  char v30; // [rsp+90h] [rbp-70h]
  PVOID v31[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v32[24]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGKVMB_COMMAND_BASE *v33[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp-30h]

  if ( a4->ObjectCount >= 0x2AAA )
  {
    WdLogSingleEntry1(2LL, 8975LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"ObjectCount is too big", 8975LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 9);
  v29 = v9;
  v30 = 0;
  if ( !a5 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
    v9 = *((_QWORD *)this + 9);
  }
  if ( *(_DWORD *)(v9 + 200) != 1 )
  {
    WdLogSingleEntry1(3LL, 8982LL);
    v12 = -1073741130;
    goto LABEL_39;
  }
  hAsyncEvent = (struct _KEVENT *)a4->hAsyncEvent;
  memset(&Event, 0, sizeof(Event));
  if ( !hAsyncEvent )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    hAsyncEvent = &Event;
LABEL_11:
    ObjectCount = a4->ObjectCount;
    *(_OWORD *)v33 = 0LL;
    v34 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v33, this, 12 * ObjectCount + 56, 0LL, 0LL, 0LL);
    v14 = v33[0];
    if ( !v33[0] )
    {
      WdLogSingleEntry1(6LL, 9028LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU",
        9028LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      goto LABEL_13;
    }
    *((_BYTE *)v33[0] + 12) = 0;
    *((_DWORD *)v14 + 3) &= 0x1FFu;
    *(_QWORD *)v14 = 0LL;
    *((_DWORD *)v14 + 2) = 0;
    *((_QWORD *)v14 + 2) = 22LL;
    *((_DWORD *)v14 + 2) = DXGPROCESS::GetHostProcess(a2);
    *((_DWORD *)v14 + 8) = a4->Flags.0;
    *((_DWORD *)v14 + 6) = a3;
    *((_DWORD *)v14 + 7) = a4->ObjectCount;
    *((_QWORD *)v14 + 5) = hAsyncEvent;
    *((_BYTE *)v14 + 48) = hAsyncEvent != &Event;
    v24 = (char *)v14 + 4 * a4->ObjectCount + 56;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, a2);
    v15 = 0;
    if ( a4->ObjectCount )
    {
      v16 = a2;
      do
      {
        ObjectHandleArray = a4->ObjectHandleArray;
        v18 = v15;
        v19 = ObjectHandleArray[v15];
        if ( v19 )
        {
          v20 = (v19 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v20 >= *((_DWORD *)v16 + 74) )
            goto LABEL_34;
          v25 = *((_QWORD *)v16 + 35);
          v21 = *(_DWORD *)(v25 + 16 * v20 + 8);
          if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v25 + 16 * v20 + 8) & 0x60)
            || (v21 & 0x2000) != 0
            || (v21 & 0x1F) == 0 )
          {
            goto LABEL_34;
          }
          if ( (v21 & 0x1F) != 0xB )
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            ObjectHandleArray = a4->ObjectHandleArray;
LABEL_34:
            WdLogSingleEntry1(3LL, ObjectHandleArray[v18]);
            goto LABEL_35;
          }
          v22 = *(_QWORD *)(v25 + 16LL * (unsigned int)v20);
          if ( !v22 )
            goto LABEL_34;
          *((_DWORD *)v14 + v15 + 14) = *(_DWORD *)(v22 + 44);
        }
        else if ( v15 )
        {
          WdLogSingleEntry2(3LL, 0LL, 9065LL);
LABEL_35:
          v12 = -1073741811;
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
LABEL_13:
          if ( hAsyncEvent && hAsyncEvent != &Event )
            ObfDereferenceObject(hAsyncEvent);
          goto LABEL_16;
        }
        ++v15;
        *(_QWORD *)&v24[8 * v18] = a4->FenceValueArray[v18];
      }
      while ( v15 < a4->ObjectCount );
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
    v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            (struct _KTHREAD **)this,
            (unsigned __int8 *)v33[1],
            v33[0],
            v34);
    if ( v12 < 0 )
      goto LABEL_13;
    if ( !a4->hAsyncEvent )
    {
      v31[0] = (PVOID)(*((_QWORD *)this + 9) + 2768LL);
      v31[1] = hAsyncEvent;
      if ( !KeWaitForMultipleObjects(2u, v31, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        WdLogSingleEntry1(4LL, this);
        v12 = -1073741130;
        goto LABEL_13;
      }
      v12 = 0;
    }
LABEL_16:
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v33);
    goto LABEL_39;
  }
  if ( (*((_DWORD *)a2 + 106) & 0x10) != 0 )
    goto LABEL_11;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  hAsyncEvent = (struct _KEVENT *)Object;
  v12 = v11;
  if ( v11 >= 0 )
    goto LABEL_11;
  WdLogSingleEntry2(3LL, a4->hAsyncEvent, v11);
LABEL_39:
  if ( v30 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  return (unsigned int)v12;
}

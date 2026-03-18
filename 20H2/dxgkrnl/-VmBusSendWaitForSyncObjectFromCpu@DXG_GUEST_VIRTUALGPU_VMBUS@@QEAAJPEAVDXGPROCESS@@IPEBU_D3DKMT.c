/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C024CB00
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0117724 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0299ED0 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x1C02FF2C0 (-WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        __int64 a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4,
        unsigned __int8 a5)
{
  int v6; // r12d
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KEVENT *p_Event; // r14
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rsi
  __int64 v27; // rax
  char *v28; // r12
  UINT64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rax
  struct _MDL *v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  PVOID v44[2]; // [rsp+50h] [rbp-29h] BYREF
  char v45[8]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v46; // [rsp+68h] [rbp-11h]
  char v47; // [rsp+70h] [rbp-9h]
  _BYTE v48[24]; // [rsp+78h] [rbp-1h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp+17h] BYREF
  unsigned int v50; // [rsp+F0h] [rbp+77h]

  v6 = a3;
  if ( a4->ObjectCount >= 0x2AAA )
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = 7753LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v11 = *((_QWORD *)this + 8);
  v46 = v11;
  v47 = 0;
  if ( !a5 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
    v11 = *((_QWORD *)this + 8);
  }
  if ( *(_DWORD *)(v11 + 200) == 1 )
  {
    hAsyncEvent = a4->hAsyncEvent;
    if ( hAsyncEvent )
    {
      Object = 0LL;
      v15 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      p_Event = (struct _KEVENT *)Object;
      v13 = v15;
      if ( v15 < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v20 + 24) = a4->hAsyncEvent;
        *(_QWORD *)(v20 + 32) = v13;
        WdLogEvent5_WdWarning(v20);
        goto LABEL_38;
      }
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      p_Event = &Event;
    }
    v50 = 12 * a4->ObjectCount + 56;
    v21 = operator new(v50, 0x4B677844u, 1, (POOL_TYPE)512);
    v26 = v21;
    if ( !v21 )
    {
      v27 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
      *(_QWORD *)(v27 + 24) = 7798LL;
      WdLogEvent5_WdLowResource(v27);
      LODWORD(v13) = -1073741801;
      goto LABEL_34;
    }
    v21[1] = 0LL;
    *v21 = 0LL;
    *((_DWORD *)v21 + 4) = 22;
    *((_DWORD *)v21 + 2) = DXGPROCESS::GetHostProcess(a2);
    *((_DWORD *)v26 + 8) = a4->Flags.0;
    *((_DWORD *)v26 + 6) = v6;
    *((_DWORD *)v26 + 7) = a4->ObjectCount;
    v26[5] = p_Event;
    *((_BYTE *)v26 + 48) = p_Event != &Event;
    v28 = (char *)v26 + 4 * a4->ObjectCount;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48, (struct _KTHREAD **)a2);
    v30 = 0LL;
    while ( (unsigned int)v30 < a4->ObjectCount )
    {
      v31 = (unsigned int)v30;
      v32 = a4->ObjectHandleArray[(unsigned int)v30];
      if ( (_DWORD)v32 )
      {
        v33 = ((unsigned int)v32 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v33 >= *((_DWORD *)a2 + 64) )
          goto LABEL_29;
        v34 = *((_QWORD *)a2 + 30);
        v32 = ((unsigned int)v32 >> 25) & 0x60;
        v29 = *(unsigned int *)(v34 + 16 * v33 + 8);
        if ( (_BYTE)v32 != (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60) || (v29 & 0x2000) != 0 || (v29 & 0x1F) == 0 )
          goto LABEL_29;
        v29 &= 0x1Fu;
        if ( (_BYTE)v29 != 11 )
        {
          v40 = WdLogNewEntry5_WdError(v29, v30);
          *(_QWORD *)(v40 + 24) = 267LL;
          WdLogEvent5_WdError(v40);
LABEL_29:
          v41 = WdLogNewEntry5_WdWarning(v29, v30, v32);
          v42 = a4->ObjectHandleArray[v31];
          goto LABEL_30;
        }
        v35 = *(_QWORD *)(v34 + 16LL * (unsigned int)v33);
        if ( !v35 )
          goto LABEL_29;
        *((_DWORD *)v26 + (unsigned int)v30 + 14) = *(_DWORD *)(v35 + 44);
      }
      else if ( (_DWORD)v30 )
      {
        v41 = WdLogNewEntry5_WdWarning(v29, v30, v32);
        v42 = a4->ObjectHandleArray[v31];
        *(_QWORD *)(v41 + 32) = 7835LL;
LABEL_30:
        *(_QWORD *)(v41 + 24) = v42;
        WdLogEvent5_WdWarning(v41);
        LODWORD(v13) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
LABEL_34:
        if ( p_Event && p_Event != &Event )
          ObfDereferenceObject(p_Event);
        goto LABEL_37;
      }
      v30 = (unsigned int)(v30 + 1);
      v29 = a4->FenceValueArray[v31];
      *(_QWORD *)&v28[8 * v31 + 56] = v29;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
    LODWORD(v13) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                     (struct _KTHREAD **)this,
                     (struct DXGKVMB_COMMAND_BASE *)v26,
                     v50,
                     v36);
    if ( (int)v13 < 0 )
      goto LABEL_34;
    if ( !a4->hAsyncEvent )
    {
      v44[0] = (PVOID)(*((_QWORD *)this + 8) + 2672LL);
      v44[1] = p_Event;
      if ( !KeWaitForMultipleObjects(2u, v44, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        v39 = WdLogNewEntry5_WdEvent(v38, v37);
        *(_QWORD *)(v39 + 24) = this;
        WdLogEvent5_WdEvent(v39);
        LODWORD(v13) = -1073741130;
        goto LABEL_34;
      }
      LODWORD(v13) = 0;
    }
LABEL_37:
    operator delete[](v26);
    goto LABEL_38;
  }
  v12 = WdLogNewEntry5_WdWarning(this, a2, a3);
  *(_QWORD *)(v12 + 24) = 7760LL;
  WdLogEvent5_WdWarning(v12);
  LODWORD(v13) = -1073741130;
LABEL_38:
  if ( v47 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  return (unsigned int)v13;
}

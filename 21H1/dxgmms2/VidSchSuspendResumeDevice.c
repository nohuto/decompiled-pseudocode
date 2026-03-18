/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C0011D00
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00121B8 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0063130 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     VidSchFlushDevice @ 0x1C0080520 (VidSchFlushDevice.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0082F34 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C008328C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AF07C (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00B0508 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00BBCCC (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x1C0010770 (VidSchiUnwaitContext.c)
 *     VidSchWaitForEvents @ 0x1C0011214 (VidSchWaitForEvents.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0012038 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C008ABB4 (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(struct _VIDSCH_DEVICE *a1, bool a2, char a3, int a4)
{
  __int64 v4; // rsi
  struct _VIDSCH_DEVICE *v6; // rbx
  char v8; // di
  char v9; // cl
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // ecx
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // [rsp+38h] [rbp-A9h]
  char v24; // [rsp+39h] [rbp-A8h]
  _KEVENT *p_Event; // [rsp+40h] [rbp-A1h] BYREF
  _KEVENT Event; // [rsp+48h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-81h] BYREF
  _QWORD v28[24]; // [rsp+78h] [rbp-69h] BYREF
  char v30; // [rsp+150h] [rbp+6Fh]

  v4 = *((_QWORD *)a1 + 4);
  v30 = 0;
  v6 = a1;
  v24 = 0;
  v8 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2784), 1u);
  if ( a2 )
  {
    ++*((_DWORD *)v6 + 350);
    if ( a3 )
      *((_BYTE *)v6 + 1404) = 1;
    goto LABEL_5;
  }
  if ( !a3 )
    goto LABEL_33;
  if ( *((_BYTE *)v6 + 1404) )
  {
    *((_BYTE *)v6 + 1404) = 0;
LABEL_33:
    v17 = *((_DWORD *)v6 + 350);
    if ( v17 )
      *((_DWORD *)v6 + 350) = v17 - 1;
    goto LABEL_5;
  }
  v24 = 1;
LABEL_5:
  *((_BYTE *)v6 + 8 * *((unsigned int *)v6 + 360) + 1412) = a2;
  *((_DWORD *)v6 + 2 * *((unsigned int *)v6 + 360) + 352) = *((_DWORD *)v6 + 350);
  *((_DWORD *)v6 + 360) = ((unsigned __int8)*((_DWORD *)v6 + 360) + 1) & 3;
  if ( *((_DWORD *)v6 + 422) )
    goto LABEL_21;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1712), &LockHandle);
  v9 = 0;
  v10 = (_QWORD *)*((_QWORD *)v6 + 9);
  v23 = 0;
  if ( v10 == (_QWORD *)((char *)v6 + 72) )
    goto LABEL_15;
  do
  {
    v11 = v10 - 3;
    v12 = *((_DWORD *)v10 + 40);
    if ( !a2 )
    {
      if ( (v12 & 0x100) != 0 && (!a3 || (v11[23] & 0x800) != 0) )
      {
        *((_DWORD *)v11 + 46) &= ~0x100u;
        *((_DWORD *)v11 + 46) &= ~0x800u;
        v9 = VidSchiUnwaitContext((__int64)(v10 - 3), 0x1002u) | v23;
        v23 = v9;
      }
      goto LABEL_11;
    }
    if ( (v12 & 0x100) != 0 )
      goto LABEL_11;
    v13 = *((_DWORD *)v11 + 28);
    if ( (v13 & 0x10) != 0 )
    {
      if ( a4 == 1 )
      {
        v19 = v13 >> 7;
      }
      else
      {
        if ( a4 != 2 )
          goto LABEL_26;
        v19 = *(_DWORD *)(v11[12] + 12LL) >> 2;
      }
      v20 = v19 & 1;
    }
    else
    {
      v20 = 0;
    }
    if ( !v20 )
      goto LABEL_30;
LABEL_26:
    if ( a3 )
      *((_DWORD *)v11 + 46) |= 0x800u;
    v14 = (__int64)(v10 - 3);
    if ( (((unsigned __int8)(*((_DWORD *)v11 + 46) >> 9) | *((_BYTE *)v11 + 184)) & 2) != 0 )
    {
      VidSchiUpdateContextStatus(v14, 9uLL, 4049LL);
      v18 = WdLogNewEntry5_WdEvent(v22, v21);
      *(_QWORD *)(v18 + 24) = v11;
      *(_QWORD *)(v18 + 32) = *((unsigned int *)v11 + 46);
    }
    else
    {
      VidSchiUpdateContextStatus(v14, 0xAuLL, 4058LL);
      if ( !*(_BYTE *)(v4 + 52) || v11 != *(_QWORD **)(v11[12] + 224LL) )
      {
LABEL_30:
        v9 = v23;
LABEL_11:
        v8 = v30;
        goto LABEL_12;
      }
      v18 = WdLogNewEntry5_WdEvent(v16, v15);
      *(_QWORD *)(v18 + 24) = v11;
    }
    WdLogEvent5_WdEvent(v18);
    v9 = v23;
    v8 = 1;
    v30 = 1;
LABEL_12:
    v10 = (_QWORD *)*v10;
  }
  while ( v10 != (_QWORD *)((char *)v6 + 72) );
  v6 = a1;
  if ( v9 )
  {
    *(_QWORD *)(v4 + 1208) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 1176), 0, 0);
  }
LABEL_15:
  if ( !a2 )
    *((_BYTE *)v6 + 1392) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v28, 0, 0x88uLL);
    LODWORD(v28[5]) = 7;
    v28[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v28[0]) = 0;
    v28[4] = &Event;
    v28[6] = v4;
    VidSchSubmitGlobalCommand(v4, v28);
    p_Event = &Event;
    VidSchWaitForEvents(v4, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  if ( !v24 )
    VidSchiSuspendResumeHwContexts(v6, a2);
LABEL_21:
  ExReleaseResourceLite((PERESOURCE)(v4 + 2784));
}

/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C0013A10
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0013860 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchFlushDevice @ 0x1C009A0D0 (VidSchFlushDevice.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2E24 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2EA0 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C00A50CC (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D5188 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D64B4 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00E02F8 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0002F70 (VidSchWaitForEvents.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x1C000E938 (VidSchiUnwaitContext.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0013D94 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00A6478 (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(_KEVENT *a1, bool a2, char a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rsi
  struct _VIDSCH_DEVICE *v6; // rbx
  char v8; // di
  _QWORD *v9; // r13
  char v10; // cl
  _QWORD *v11; // r14
  int v12; // ebx
  _QWORD *v13; // rdi
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // eax
  char v19; // [rsp+38h] [rbp-69h]
  char v20; // [rsp+39h] [rbp-68h]
  _KEVENT Event; // [rsp+40h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v23[16]; // [rsp+78h] [rbp-29h] BYREF
  _KEVENT *p_Event; // [rsp+108h] [rbp+67h] BYREF
  char v25; // [rsp+110h] [rbp+6Fh]
  int v26; // [rsp+120h] [rbp+7Fh]

  v26 = a4;
  p_Event = a1;
  Flink = a1[1].Header.WaitListHead.Flink;
  v25 = 0;
  v6 = (struct _VIDSCH_DEVICE *)a1;
  v20 = 0;
  v8 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)&Flink[180], 1u);
  if ( a2 )
  {
    ++*((_DWORD *)v6 + 350);
    if ( a3 )
      *((_BYTE *)v6 + 1404) = 1;
    goto LABEL_5;
  }
  if ( !a3 )
    goto LABEL_37;
  if ( *((_BYTE *)v6 + 1404) )
  {
    *((_BYTE *)v6 + 1404) = 0;
LABEL_37:
    v17 = *((_DWORD *)v6 + 350);
    if ( v17 )
      *((_DWORD *)v6 + 350) = v17 - 1;
    goto LABEL_5;
  }
  v20 = 1;
LABEL_5:
  *((_BYTE *)v6 + 8 * *((unsigned int *)v6 + 360) + 1412) = a2;
  *((_DWORD *)v6 + 2 * *((unsigned int *)v6 + 360) + 352) = *((_DWORD *)v6 + 350);
  *((_DWORD *)v6 + 360) = ((unsigned __int8)*((_DWORD *)v6 + 360) + 1) & 3;
  if ( *((_DWORD *)v6 + 424) )
    goto LABEL_23;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&Flink[108], &LockHandle);
  v9 = (_QWORD *)((char *)v6 + 72);
  v10 = 0;
  v11 = (_QWORD *)*((_QWORD *)v6 + 9);
  v19 = 0;
  if ( v11 == (_QWORD *)((char *)v6 + 72) )
    goto LABEL_17;
  v12 = v26;
  do
  {
    v13 = v11 - 3;
    v14 = *((_DWORD *)v11 + 40);
    if ( !a2 )
    {
      if ( (v14 & 0x100) != 0 && (!a3 || (v13[23] & 0x800) != 0) )
      {
        *((_DWORD *)v13 + 46) &= ~0x100u;
        *((_DWORD *)v13 + 46) &= ~0x800u;
        v10 = VidSchiUnwaitContext((__int64)(v11 - 3), 0x101Cu) | v19;
        v19 = v10;
      }
      goto LABEL_13;
    }
    if ( (v14 & 0x100) != 0 )
      goto LABEL_13;
    v15 = *((_DWORD *)v13 + 28);
    if ( (v15 & 0x10) == 0 )
      goto LABEL_13;
    if ( v12 == 1 )
    {
      v18 = v15 >> 7;
    }
    else
    {
      if ( v12 != 2 )
        goto LABEL_28;
      v18 = *(_DWORD *)(v13[12] + 12LL) >> 2;
    }
    if ( (v18 & 1) == 0 )
      goto LABEL_13;
LABEL_28:
    if ( a3 )
      *((_DWORD *)v13 + 46) |= 0x800u;
    v16 = (__int64)(v11 - 3);
    if ( (((unsigned __int8)(*((_DWORD *)v13 + 46) >> 9) | *((_BYTE *)v13 + 184)) & 2) != 0 )
    {
      VidSchiUpdateContextStatus(v16, 9LL, 4075LL);
      WdLogSingleEntry2(4LL, v11 - 3, *((unsigned int *)v13 + 46));
    }
    else
    {
      VidSchiUpdateContextStatus(v16, 10LL, 4084LL);
      if ( !BYTE4(Flink[3].Flink) || v13 != *(_QWORD **)(v13[12] + 224LL) )
      {
        v10 = v19;
LABEL_13:
        v8 = v25;
        goto LABEL_14;
      }
      WdLogSingleEntry1(4LL, v11 - 3);
    }
    v10 = v19;
    v8 = 1;
    v25 = 1;
LABEL_14:
    v11 = (_QWORD *)*v11;
  }
  while ( v11 != v9 );
  v6 = (struct _VIDSCH_DEVICE *)p_Event;
  if ( v10 )
  {
    Flink[76].Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)&Flink[74].Blink, 0, 0);
  }
LABEL_17:
  if ( !a2 )
    *((_BYTE *)v6 + 1392) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v23, 0, 0x50uLL);
    LODWORD(v23[0]) = 0;
    v23[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v23[5]) = 7;
    v23[4] = &Event;
    v23[6] = Flink;
    VidSchSubmitGlobalCommand(Flink, v23);
    p_Event = &Event;
    VidSchWaitForEvents((struct _VIDSCH_GLOBAL *)Flink, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  if ( !v20 )
    VidSchiSuspendResumeHwContexts(v6, a2);
LABEL_23:
  ExReleaseResourceLite((PERESOURCE)&Flink[180]);
}

/*
 * XREFs of TtmpAcquireSessionFromTerminalHandle @ 0x1408FC264
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x1408FC3C4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1408FC46C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1408FC580 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408FC670 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408FC880 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1408FC93C (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408FC9E8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408FCA9C (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1408FCB58 (TtmpDispatchSetInputWakeCapability.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionFromTerminalHandle(void *a1, char a2, char a3, _QWORD *a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  struct _OBJECT_TYPE *v11; // r8
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // edi
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = a5;
  *a4 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v11 = TtmpTerminalObjectType;
  *v7 = 0LL;
  a5 = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 2u, v11, PreviousMode, (PVOID *)&a5, 0LL);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v13 = 0;
    *v7 = (__int64)a5;
  }
  else
  {
    *v7 = 0LL;
    TtmiLogError("TtmiReferenceTerminalByHandle", 838LL, (unsigned int)v12, (unsigned int)v12);
  }
  if ( (v13 & 0x80000000) != 0 )
  {
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", 88LL, v13, v13);
    return v13;
  }
  v15 = *v7;
  if ( *(_DWORD *)(v15 + 28) )
  {
    if ( !a3 )
    {
      v16 = 98LL;
      goto LABEL_9;
    }
  }
  else if ( !a2 )
  {
    v16 = 93LL;
LABEL_9:
    v17 = -1073741788;
LABEL_10:
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", v16, 0xFFFFFFFFLL, v17);
    return v17;
  }
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v19 = *(_QWORD *)(v15 + 16);
  if ( (*(_DWORD *)(v19 + 4) & 4) != 0 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    v16 = 105LL;
    v17 = -1073740715;
    goto LABEL_10;
  }
  *a4 = v19;
  return 0LL;
}

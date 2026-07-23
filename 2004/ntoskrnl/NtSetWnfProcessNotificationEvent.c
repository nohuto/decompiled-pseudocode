/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1406F8320
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ExpWnfCreateProcessContext @ 0x1406F83F4 (ExpWnfCreateProcessContext.c)
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = Process[1].EndPadding[7];
  v4 = v7;
  if ( !v7 )
  {
    v5 = ExpWnfCreateProcessContext(Process, &v7);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = v7;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(NotificationEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 128), (signed __int64)Object, 0LL) )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      v5 = -1073740008;
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_5:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}

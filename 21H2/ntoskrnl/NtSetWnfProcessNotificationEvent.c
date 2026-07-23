/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x140605730
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfCreateProcessContext @ 0x140605804 (ExpWnfCreateProcessContext.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = Process[1].EndPadding[7];
  v4 = v10;
  if ( !v10 )
  {
    v6 = ExpWnfCreateProcessContext(Process, &v10);
    if ( v6 < 0 )
      goto LABEL_5;
    v4 = v10;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(NotificationEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v6 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 128), (signed __int64)Object, 0LL) )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      v6 = -1073740008;
    }
    else
    {
      v6 = 0;
    }
  }
LABEL_5:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v7, v8);
  return v6;
}

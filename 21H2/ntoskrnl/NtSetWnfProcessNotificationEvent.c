/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1406A7CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExpWnfCreateProcessContext @ 0x1406A7D84 (ExpWnfCreateProcessContext.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetWnfProcessNotificationEvent(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v4; // rdi
  NTSTATUS v5; // ebx
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
  v5 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
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
  return (unsigned int)v5;
}

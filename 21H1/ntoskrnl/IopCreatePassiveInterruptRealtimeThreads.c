/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x1407B3A14
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x140A69754 (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x140655580 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1)
{
  int v1; // edi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int128 v6; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+6Ch] [rbp-14h]
  __int128 v10; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  Object = a1;
  v1 = 0;
  v9 = 0;
  Handle = 0LL;
  v7 = 0LL;
  v6 = 0x30uLL;
  v8 = 512;
  v10 = 0LL;
  if ( !PassiveInterruptRealtimeWorkerCount )
    return 0LL;
  while ( 1 )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&Handle,
               0x1FFFFFu,
               &v6,
               0LL,
               0LL,
               (__int64)IopPassiveInterruptRealtimeWorker,
               (__int64)&PassiveInterruptRealtimeWorkQueue,
               0LL,
               0LL);
    if ( (int)result < 0 )
      break;
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority, v4, v5);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    if ( ++v1 >= (unsigned int)(unsigned __int8)PassiveInterruptRealtimeWorkerCount )
      return 0LL;
  }
  return result;
}

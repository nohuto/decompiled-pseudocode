/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x1406BCB64
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402F61F8 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsGetWorkOnBehalfThread @ 0x1402F6220 (PsGetWorkOnBehalfThread.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID WorkOnBehalfThread; // rax
  void *v4; // rbx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0LL;
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v7);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v5 = (__int64)WorkOnBehalfThread;
    goto LABEL_5;
  }
  if ( IoThreadToProcess(CurrentThread)[2].Affinity.StaticBitmap[18] || (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v5 = (__int64)CurrentThread;
LABEL_5:
    PsEncodeThreadWorkOnBehalfTicket(v5, &v8);
  }
  if ( v7 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v8;
  return 0LL;
}

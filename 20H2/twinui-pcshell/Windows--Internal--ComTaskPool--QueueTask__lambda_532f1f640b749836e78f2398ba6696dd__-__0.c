/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&__0 @ 0x1801663FC
 * Callers:
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x18006C154 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x18006C22C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__-_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd_____0()
{
  DWORD CurrentThreadId; // eax
  unsigned int v1; // eax
  volatile int *v2; // rcx
  unsigned int v3; // ebx
  volatile int *v5; // [rsp+50h] [rbp+18h] BYREF

  Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd____(&v5);
  CurrentThreadId = GetCurrentThreadId();
  v1 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  v2 = v5;
  v3 = v1;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v3;
}

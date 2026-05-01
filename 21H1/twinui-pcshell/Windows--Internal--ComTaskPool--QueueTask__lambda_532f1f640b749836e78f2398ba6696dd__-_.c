/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x180070790
 * Callers:
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x180070724 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x1800707FC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__-_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd____(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd____(v9, a4);
  v5 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  v6 = v9[0];
  v7 = v5;
  if ( v9[0] )
  {
    v9[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v7;
}

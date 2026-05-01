/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1040276ea0adcece35dd391fdc6e95da___ @ 0x180187CF0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_a0a37f67d6cb023dd76f3113d66a7144___ @ 0x180188DC0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_a0a37f67d6cb023dd76f3113d66a7144___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1040276ea0adcece35dd391fdc6e95da_____lambda_1040276ea0adcece35dd391fdc6e95da___ @ 0x1801878D8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1040276ea0adc.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1040276ea0adcece35dd391fdc6e95da___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 *v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1040276ea0adcece35dd391fdc6e95da_____lambda_1040276ea0adcece35dd391fdc6e95da___(
         v11,
         a4);
  v7 = *v5;
  *v5 = 0LL;
  v8 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v8,
      v6);
  }
  v9 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}

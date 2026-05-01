/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___ @ 0x180144570
 * Callers:
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x180159054 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z @ 0x180146C04 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  unsigned int v9; // ebx

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(v8 + 2, a4);
    v7 = v8;
    *v8 = off_180489F50;
  }
  v9 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v9;
}

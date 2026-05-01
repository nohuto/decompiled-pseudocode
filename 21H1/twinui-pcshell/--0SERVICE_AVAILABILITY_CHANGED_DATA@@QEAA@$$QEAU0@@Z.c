/*
 * XREFs of ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z @ 0x180122660
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___ @ 0x180120070 (Windows--Internal--ComTaskPool--QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x180134C14 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 * Callees:
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x18011C158 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 */

__int64 __fastcall SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)a1, v4);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)(a1 + 8), v5);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  result = a1;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}

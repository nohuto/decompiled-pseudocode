/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InvokeCallback @ 0x1803B21C0
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::OnAnimationCompleted @ 0x1803B1A00 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::OnEndBatchUpdate @ 0x1803B1A70 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::s_TimerWndProc @ 0x1803B2500 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--s_TimerWndProc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CleanupTimer @ 0x1803B20A0 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_CleanupTimer.c)
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InvokeCallback(__int64 a1)
{
  BOOL result; // eax

  if ( *(_DWORD *)(a1 + 36) != 3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 24) + 64LL));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(*(_QWORD *)(a1 + 24));
    *(_DWORD *)(a1 + 36) = 3;
    return CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CleanupTimer(a1);
  }
  return result;
}

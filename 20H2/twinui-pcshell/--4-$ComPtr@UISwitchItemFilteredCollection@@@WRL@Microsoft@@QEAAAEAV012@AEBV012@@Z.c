/*
 * XREFs of ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AA520
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x180231618 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1802316EC (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 *     ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x18025400C (-_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPE.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1802A46EC (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     _lambda_bb8876069d118ed8c7de1f7a35d44c02_::operator() @ 0x1802CD30C (_lambda_bb8876069d118ed8c7de1f7a35d44c02_--operator().c)
 *     _lambda_5e49cfaad752a3bee6aa14298cd2c931_::operator() @ 0x1802DD114 (_lambda_5e49cfaad752a3bee6aa14298cd2c931_--operator().c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x180348D3C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18034B3F4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180353E50 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180370EC0 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1803711A4 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18038E1BC (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
  return a1;
}

/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802C04A8
 * Callers:
 *     ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1802C1050 (-OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802C0DF8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject();
  return a1;
}

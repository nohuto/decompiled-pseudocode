/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@Z @ 0x180143BD0
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@@Z @ 0x180143D68 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microso.c)
 *     ?InitializePrivilegedOperations@RetailDemoExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801EC200 (-InitializePrivilegedOperations@RetailDemoExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@CortanaStoreAppExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801F35F0 (-InitializePrivilegedOperations@CortanaStoreAppExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@.c)
 *     ?InitializePrivilegedOperations@HolographicForegroundAssistant@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180246F50 (-InitializePrivilegedOperations@HolographicForegroundAssistant@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@AccessibilityExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18036FBC0 (-InitializePrivilegedOperations@AccessibilityExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@VoiceAssistantPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1803E0E80 (-InitializePrivilegedOperations@VoiceAssistantPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v4; // rax
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx

  v4 = *a1 - *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1;
  if ( *a1 == *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4;
  if ( v4 )
    return 2147500033LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  v6(a2, &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2, a3);
  return 0LL;
}

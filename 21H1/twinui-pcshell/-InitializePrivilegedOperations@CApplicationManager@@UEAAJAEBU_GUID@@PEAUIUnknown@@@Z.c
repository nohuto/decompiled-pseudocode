/*
 * XREFs of ?InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180128FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedNotificationOperations@@@23@V?$ComPtr@UIPrivilegedArrangementOperations@@@23@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedNotificationOperations@@@34@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@34@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@@Z @ 0x18011F864 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Micro.c)
 */

__int64 __fastcall CApplicationManager::InitializePrivilegedOperations(
        CApplicationManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  PSRWLOCK v6; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4;
  v5 = 0;
  if ( v4 )
  {
    return (unsigned int)InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedPresentationOperations>,Microsoft::WRL::ComPtr<IPrivilegedNotificationOperations>,Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>>(
                           a2,
                           a3,
                           (__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[17],
                           (__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[18],
                           (__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[19],
                           (__int64)&CApplicationManagerUtility::g_pIAMGlobals[20],
                           (__int64)&CApplicationManagerUtility::g_pIAMGlobals[21]);
  }
  else
  {
    v6 = CApplicationManagerUtility::g_pIAMGlobals + 16;
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[16]);
    ((void (__fastcall *)(struct IUnknown *, GUID *, PSRWLOCK))QueryInterface)(
      a3,
      &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8,
      v6);
  }
  return v5;
}

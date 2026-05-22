/*
 * XREFs of ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800282DC
 * Callers:
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z @ 0x180028184 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z.c)
 *     ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180139D90 (-GetInputSite@DWMFocusedInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180011C88 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B654 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180043FB4 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044230 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x18008321C (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCBFC (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCEBC (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

void __fastcall DWMFocusedInputTarget::PopulateInputSiteFromViewId(DWMFocusedInputTarget *this)
{
  struct InputSiteManager *InputSiteManager; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  unsigned int v5; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int WindowIdFromViewId; // eax
  unsigned int v8; // ebx
  int v9; // edi
  struct ViewHierarchyWithWindowManager *v10; // rax
  unsigned int ProcessIdFromViewId; // ebx
  unsigned int v12; // eax
  char *InputSiteFromId; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 17) )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    v3 = (_QWORD *)*((_QWORD *)InputSiteManager + 7);
    v4 = (_QWORD *)*((_QWORD *)InputSiteManager + 8);
    while ( v3 != v4 )
    {
      if ( *(_BYTE *)(*v3 + 392LL)
        && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v3 + 32LL)) == *((_DWORD *)this + 17) )
      {
        Microsoft::WRL::ComPtr<InputSite>::operator=((char *)this + 96, *v3);
        break;
      }
      ++v3;
    }
    if ( !*((_QWORD *)this + 12) )
    {
      v5 = *((_DWORD *)this + 17);
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v5);
      v8 = *((_DWORD *)this + 17);
      v9 = WindowIdFromViewId;
      v10 = ISMStatics::GetViewHierarchy();
      ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v10, v8);
      v12 = (unsigned int)ISMStatics::GetInputSiteManager();
      InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(
                                  v12,
                                  (unsigned int)&v15,
                                  1,
                                  v9,
                                  ProcessIdFromViewId);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)this + 12, InputSiteFromId);
      v14 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
}

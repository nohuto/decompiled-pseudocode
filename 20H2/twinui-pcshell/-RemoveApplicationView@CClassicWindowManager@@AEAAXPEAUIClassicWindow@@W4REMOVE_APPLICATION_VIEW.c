/*
 * XREFs of ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180163A50
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180053A80 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180054670 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180055054 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___ @ 0x1801624E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___.c)
 */

__int64 __fastcall CClassicWindowManager::RemoveApplicationView(__int64 a1, __int64 a2, int a3)
{
  PSRWLOCK v5; // rsi
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  PVOID Ptr; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF

  v15 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  v11 = a3;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
    v6 = (unsigned int)v5[15].Ptr;
    v10 = 0LL;
    v13 = a2;
    v14 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___(v8, v7, v6, (__int64)&Ptr);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
}

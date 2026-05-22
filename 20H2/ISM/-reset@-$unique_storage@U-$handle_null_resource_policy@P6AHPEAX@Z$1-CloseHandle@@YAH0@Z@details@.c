/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800313C4
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180031014 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x180031358 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800989D4 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x1800B9CFC (-CreateInputSink@MPCFocusTarget@@IEAAXXZ.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF1F0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C14E0 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013E90C (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x18013F1BC (-CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@.c)
 *     ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x18013F550 (-CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z.c)
 *     ?EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18015BBBC (-EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV-$unique_a.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x18019C7C0 (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}

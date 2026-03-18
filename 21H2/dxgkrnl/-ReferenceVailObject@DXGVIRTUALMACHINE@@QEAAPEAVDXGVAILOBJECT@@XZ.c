/*
 * XREFs of ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0336E18
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0050460 (DxgkDeviceIoctl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C033C4C4 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0353BC0 (NtDxgkRegisterVailProcess.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C0365354 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006C430 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGVIRTUALMACHINE::ReferenceVailObject(struct _KTHREAD **this)
{
  __int64 v1; // rbx
  DxgkCompositionObject *v3; // rcx

  v1 = 0LL;
  if ( this[9] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6165LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_VirtualMachineLock.IsExclusiveOwner()",
      6165LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = this[41];
  if ( v3 )
  {
    DxgkCompositionObject::AddRef(v3);
    return this[41];
  }
  return (struct DXGVAILOBJECT *)v1;
}

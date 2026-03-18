/*
 * XREFs of ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C02847F8
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C00434C0 (DxgkDeviceIoctl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C0239A1C (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0289410 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C02B7230 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C005D924 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGVIRTUALMACHINE::ReferenceVailObject(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  DxgkCompositionObject *v4; // rcx
  struct DXGVAILOBJECT *result; // rax

  if ( this[9] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 5932LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[36];
  result = 0LL;
  if ( v4 )
  {
    DxgkCompositionObject::AddRef(v4);
    return this[36];
  }
  return result;
}

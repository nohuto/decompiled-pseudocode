/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0284790
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0289410 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B4930 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C02B74F0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C02B7900 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C005D924 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGPROCESS::ReferenceVailObject(DxgkCompositionObject **this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax
  DxgkCompositionObject *v4; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)this[13] + 2) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 1419LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[60];
  if ( !v4 )
    return 0LL;
  DxgkCompositionObject::AddRef(v4);
  return this[60];
}

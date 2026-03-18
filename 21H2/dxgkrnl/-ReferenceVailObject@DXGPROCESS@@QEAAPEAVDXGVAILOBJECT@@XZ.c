/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0336D84
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C033C4C4 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C0353FA0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0354450 (NtDxgkVailDisconnect.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006C430 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGPROCESS::ReferenceVailObject(struct _KTHREAD **this)
{
  DxgkCompositionObject *v2; // rcx

  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1358LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 1358LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = this[74];
  if ( !v2 )
    return 0LL;
  DxgkCompositionObject::AddRef(v2);
  return this[74];
}

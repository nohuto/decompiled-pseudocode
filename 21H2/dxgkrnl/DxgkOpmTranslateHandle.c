/*
 * XREFs of DxgkOpmTranslateHandle @ 0x1C01EDC40
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01EDD28 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateHandle(struct _KTHREAD ***this, void *a2, void **a3)
{
  struct _KTHREAD **v6; // rcx

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 1043LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 1043LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 1044LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phOpmMiniportHandle != NULL", 1044LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    WdLogSingleEntry1(1LL, 1045LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAdapter->IsCoreResourceSharedOwner()",
      1045LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = this[349];
  if ( v6 )
  {
    if ( v6[49] != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1049LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgAdapter->GetDisplayCore()->IsOpmI2CMutexOwner()",
        1049LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = this[349];
    }
    return ADAPTER_DISPLAY::OpmTranslateHandle((ADAPTER_DISPLAY *)v6, a2, a3);
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to call DxgkOpmTranslateHandle on a render only adapter 0x%I64x (Status = 0x%I64x)!",
      (__int64)this,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}

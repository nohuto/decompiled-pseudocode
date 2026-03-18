/*
 * XREFs of DxgkOpmCreateHandle @ 0x1C01ED5A8
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0064B48 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01ED690 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmCreateHandle(struct _KTHREAD ***this, void *a2, void **a3)
{
  struct _KTHREAD **v6; // rcx

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 1006LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 1006LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 1007LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phOpmAdapterHandle != NULL", 1007LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    WdLogSingleEntry1(1LL, 1008LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAdapter->IsCoreResourceSharedOwner()",
      1008LL,
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
      WdLogSingleEntry1(1LL, 1012LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgAdapter->GetDisplayCore()->IsOpmI2CMutexOwner()",
        1012LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = this[349];
    }
    return ADAPTER_DISPLAY::OpmCreateHandle((ADAPTER_DISPLAY *)v6, a2, a3);
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to call DxgkOpmCreateHandle on a render only adapter 0x%I64x (Status = 0x%I64x)!",
      (__int64)this,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}

/*
 * XREFs of ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0323254
 * Callers:
 *     _lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_ @ 0x1C02BECB0 (_lambda_8c4f9d5363fac7cd16350590c99b22c5_--_lambda_invoker_cdecl_.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C0324490 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C019F49C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessAdapterReset(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rcx
  unsigned int i; // edi

  v2 = *this;
  if ( v2 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v2 + 2)) )
  {
    WdLogSingleEntry1(1LL, 1415LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      1415LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 0, 0, 2);
}

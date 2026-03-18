/*
 * XREFs of ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C003A920
 * Callers:
 *     imp_WdfChildListEndIteration @ 0x1C0037940 (imp_WdfChildListEndIteration.c)
 *     imp_WdfFdoUnlockStaticChildListFromIteration @ 0x1C0038E00 (imp_WdfFdoUnlockStaticChildListFromIteration.c)
 * Callees:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C000E170 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 */

void __fastcall FxChildList::EndIteration(FxChildList *this, _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x12u, WPP_FxChildList_cpp_Traceguids);
  FxChildList::EndScan(this, &Iterator->Size);
  *(_OWORD *)Iterator->Reserved = 0LL;
  *(_OWORD *)&Iterator->Reserved[2] = 0LL;
}

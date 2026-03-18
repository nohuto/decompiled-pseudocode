/*
 * XREFs of ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C00383B4
 * Callers:
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C0038490 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 */

__int64 __fastcall FxRequest::CompleteWithPriority(FxRequest *this, unsigned int Status, char PriorityBoost)
{
  const void *_a1; // rax
  int _a4; // edx
  _FX_DRIVER_GLOBALS *v8; // r11

  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqd(
      v8,
      5u,
      0x10u,
      0xCu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      _a4);
  }
  this->m_PriorityBoost = PriorityBoost;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status);
}

/*
 * XREFs of ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0043840
 * Callers:
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0045650 (imp_WdfPdoInitAddDeviceText.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C004F668 (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxDeviceText *__fastcall FxDeviceText::`scalar deleting destructor'(FxDeviceText *this)
{
  wchar_t *m_Description; // rcx
  wchar_t *m_LocationInformation; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_Description);
    this->m_Description = 0LL;
  }
  m_LocationInformation = this->m_LocationInformation;
  if ( m_LocationInformation )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_LocationInformation);
    this->m_LocationInformation = 0LL;
  }
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}

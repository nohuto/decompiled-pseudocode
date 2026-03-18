/*
 * XREFs of ??1FxDeviceInterface@@QEAA@XZ @ 0x1C0072498
 * Callers:
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C006FDC4 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDeviceInterface::~FxDeviceInterface(FxDeviceInterface *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_ReferenceString.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_ReferenceString = 0LL;
  }
  if ( this->m_SymbolicLinkName.Buffer )
    RtlFreeUnicodeString(&this->m_SymbolicLinkName);
}

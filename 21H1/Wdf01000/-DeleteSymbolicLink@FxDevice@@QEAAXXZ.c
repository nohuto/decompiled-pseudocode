/*
 * XREFs of ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C00505A0
 * Callers:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00505FC (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C00513A0 (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C0078F50 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00795A0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C00841B0 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDevice::DeleteSymbolicLink(FxDevice *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_SymbolicLinkName.Buffer;
  if ( Buffer )
  {
    if ( this->m_SymbolicLinkName.Length )
    {
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
      Buffer = this->m_SymbolicLinkName.Buffer;
    }
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_SymbolicLinkName = 0LL;
  }
}

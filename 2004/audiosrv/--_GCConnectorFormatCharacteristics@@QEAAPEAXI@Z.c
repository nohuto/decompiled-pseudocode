/*
 * XREFs of ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x18011A84C
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18005B020 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x18011A888 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011F284 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

LPVOID *__fastcall CConnectorFormatCharacteristics::`scalar deleting destructor'(LPVOID *this)
{
  CoTaskMemFree(*this);
  *this = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}

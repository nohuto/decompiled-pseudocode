/*
 * XREFs of ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$default_delete@UKSDATAFORMAT_WAVEFORMATEX@@@std@@@std@@QEAA@XZ @ 0x180119800
 * Callers:
 *     _CEndpointCharacteristics::ConfirmDeviceFormat_::_1_::dtor$1 @ 0x18007C904 (_CEndpointCharacteristics--ConfirmDeviceFormat_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<KSDATAFORMAT_WAVEFORMATEX>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x52);
}

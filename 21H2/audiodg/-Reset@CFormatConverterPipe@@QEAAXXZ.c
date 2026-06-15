/*
 * XREFs of ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14004F2E0
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004EE28 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14003E130 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CFormatConverterPipe::Reset(LPVOID **this)
{
  LPVOID *v2; // rcx

  ATL::CAutoPtr<CPipeInstance>::Free(this);
  v2 = this[1];
  this[1] = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  *((_BYTE *)this + 24) = 0;
}

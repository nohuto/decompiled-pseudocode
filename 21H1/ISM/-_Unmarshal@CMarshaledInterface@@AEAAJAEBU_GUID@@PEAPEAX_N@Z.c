/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180119F04
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x180114E78 (-Get@-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Int.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x180114F50 (-Get@-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180111670 (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Unmarshal@CMarshalStream@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119250 (-Unmarshal@CMarshalStream@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMarshaledInterface::_Unmarshal(
        CMarshaledInterface::CMarshalStream **this,
        const struct _GUID *a2,
        void **a3)
{
  CMarshaledInterface::CMarshalStream *v4; // rbx
  unsigned int v6; // edi
  CMarshaledInterface::CMarshalStream *v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *this;
  v6 = -2147467259;
  if ( *this )
  {
    v8 = 0LL;
    if ( *((_DWORD *)v4 + 6) == 2 )
    {
      Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=((__int64 *)&v8, this);
      v4 = v8;
    }
    else
    {
      *this = 0LL;
    }
    v6 = CMarshaledInterface::CMarshalStream::Unmarshal(v4, a2, a3);
    if ( v4 )
      (*(void (__fastcall **)(CMarshaledInterface::CMarshalStream *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v6;
}

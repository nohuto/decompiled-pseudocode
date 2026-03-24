/*
 * XREFs of DpiFreeAdapterInfo @ 0x1C02C64E4
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C0187DA0 (DpiGetAdapterInfo.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020BED8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkFreeUnicodeString @ 0x1C019FE80 (DxgkFreeUnicodeString.c)
 */

void __fastcall DpiFreeAdapterInfo(_BYTE *a1)
{
  if ( *a1 )
  {
    DxgkFreeUnicodeString((__int64)(a1 + 8));
    DxgkFreeUnicodeString((__int64)(a1 + 24));
    DxgkFreeUnicodeString((__int64)(a1 + 40));
    DxgkFreeUnicodeString((__int64)(a1 + 136));
    DxgkFreeUnicodeString((__int64)(a1 + 152));
    DxgkFreeUnicodeString((__int64)(a1 + 72));
    DxgkFreeUnicodeString((__int64)(a1 + 96));
    DxgkFreeUnicodeString((__int64)(a1 + 168));
    DxgkFreeUnicodeString((__int64)(a1 + 184));
    DxgkFreeUnicodeString((__int64)(a1 + 224));
    DxgkFreeUnicodeString((__int64)(a1 + 240));
  }
}

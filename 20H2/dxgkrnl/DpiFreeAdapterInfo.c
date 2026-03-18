/*
 * XREFs of DpiFreeAdapterInfo @ 0x1C02C5174
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C0177B64 (DpiGetAdapterInfo.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020AFF4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkFreeUnicodeString @ 0x1C0197D10 (DxgkFreeUnicodeString.c)
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

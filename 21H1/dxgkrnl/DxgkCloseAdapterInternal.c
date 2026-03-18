/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1C00D88F8
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x1C0007844 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x1C0116740 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1)
{
  return DxgkCloseAdapterImpl(a1, 0LL);
}

/*
 * XREFs of GetOldRedirectionBitmap @ 0x1C0022A4C
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1C00229F0 (DeleteOldRedirectionBitmap.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1)
{
  __int64 v1; // rbx
  __int64 Prop; // rax

  v1 = 0LL;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v1;
}

/*
 * XREFs of wil::details::lambda_call__lambda_c306f654859c1e62202ed28910883a59___::_lambda_call__lambda_c306f654859c1e62202ed28910883a59___ @ 0x1800EBFA0
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800BDAB8 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     _lambda_c306f654859c1e62202ed28910883a59_::operator() @ 0x1800EBFC0 (_lambda_c306f654859c1e62202ed28910883a59_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_c306f654859c1e62202ed28910883a59___::_lambda_call__lambda_c306f654859c1e62202ed28910883a59___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_c306f654859c1e62202ed28910883a59_::operator()();
  }
  return result;
}

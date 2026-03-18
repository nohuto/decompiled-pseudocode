/*
 * XREFs of ?GetPresentFlags@CLegacyRenderTarget@@MEBAIXZ @ 0x1800C7100
 * Callers:
 *     ?GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ @ 0x18016E520 (-GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentFlags(CLegacyRenderTarget *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)this + 18586) && !*((_BYTE *)this + 18588) )
    return 2LL;
  return result;
}

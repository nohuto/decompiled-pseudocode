/*
 * XREFs of ?GetPresentFlags@CLegacyRenderTarget@@MEBAIXZ @ 0x1800C1210
 * Callers:
 *     ?GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ @ 0x180172E90 (-GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ.c)
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

/*
 * XREFs of ?GetPresentFlags@CLegacyRenderTarget@@MEBAIXZ @ 0x1800C7C10
 * Callers:
 *     ?GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ @ 0x180170300 (-GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ.c)
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

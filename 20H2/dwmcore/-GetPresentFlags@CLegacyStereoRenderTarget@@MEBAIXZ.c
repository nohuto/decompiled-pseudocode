/*
 * XREFs of ?GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ @ 0x18016E520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPresentFlags@CLegacyRenderTarget@@MEBAIXZ @ 0x1800C7100 (-GetPresentFlags@CLegacyRenderTarget@@MEBAIXZ.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::GetPresentFlags(CLegacyStereoRenderTarget *this)
{
  __int64 result; // rax

  result = CLegacyRenderTarget::GetPresentFlags(this);
  if ( *((_BYTE *)this + 18624) )
  {
    if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 284LL) )
      return (unsigned int)result | 0x20;
  }
  return result;
}

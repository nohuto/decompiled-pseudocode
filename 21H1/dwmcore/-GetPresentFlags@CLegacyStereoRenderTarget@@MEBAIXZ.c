/*
 * XREFs of ?GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIXZ @ 0x180172E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPresentFlags@CLegacyRenderTarget@@MEBAIXZ @ 0x1800C1210 (-GetPresentFlags@CLegacyRenderTarget@@MEBAIXZ.c)
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

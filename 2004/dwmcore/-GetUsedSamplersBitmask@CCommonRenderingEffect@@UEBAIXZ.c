/*
 * XREFs of ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x1800BE8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetUsedSamplersBitmask(CCommonRenderingEffect *this)
{
  __int64 result; // rax
  _QWORD *v2; // r8
  unsigned int i; // r9d

  result = 0LL;
  v2 = (_QWORD *)((char *)this + 16);
  for ( i = 0; i < 2; ++i )
  {
    if ( *v2 || v2[1] )
      result = (1 << i) | (unsigned int)result;
    v2 += 6;
  }
  return result;
}

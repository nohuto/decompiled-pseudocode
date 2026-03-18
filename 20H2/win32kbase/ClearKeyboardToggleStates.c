/*
 * XREFs of ClearKeyboardToggleStates @ 0x1C00A4B60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall ClearKeyboardToggleStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  _BYTE v10[16]; // [rsp+20h] [rbp-28h]

  GetDomainLockRef(16LL, a2, a3, a4);
  v4 = 0;
  v5 = 0LL;
  do
  {
    ++v4;
    v10[v5] = *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)byte_1C020B2B8[v5] >> 2)) & (1 << (2
                                                                                                 * (byte_1C020B2B8[v5] & 3)
                                                                                                 + 1));
    ++v5;
  }
  while ( v4 < 0xE );
  for ( result = 0LL; result < 64; result += 16LL )
    *(__int128 *)((char *)&gafAsyncKeyState + result) = (__int128)_mm_and_si128(
                                                                    _mm_loadu_si128((const __m128i *)((char *)&gafAsyncKeyState + result)),
                                                                    (__m128i)_xmm);
  v7 = 0;
  v8 = 0LL;
  do
  {
    if ( v10[v8] )
    {
      v9 = byte_1C020B2B8[v8];
      result = 2 * (unsigned int)(v9 & 3) + 1;
      *((_BYTE *)&gafAsyncKeyState + (v9 >> 2)) |= 1 << (2 * (v9 & 3) + 1);
    }
    ++v7;
    ++v8;
  }
  while ( v7 < 0xE );
  return result;
}

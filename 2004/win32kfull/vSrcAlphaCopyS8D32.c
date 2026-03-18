/*
 * XREFs of vSrcAlphaCopyS8D32 @ 0x1C00EC4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall vSrcAlphaCopyS8D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // edi
  unsigned __int8 *result; // rax
  unsigned __int8 *v10; // r11
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // r10
  _DWORD *v13; // r9
  __int64 v14; // rcx

  v8 = a8;
  result = (unsigned __int8 *)a2;
  v10 = (unsigned __int8 *)(a2 + a1);
  for ( i = a4 + 4LL * a5; v8; --v8 )
  {
    v12 = (unsigned int)(a6 - a5);
    result = v10;
    v13 = (_DWORD *)i;
    if ( i > i + 4 * v12 )
      v12 = 0LL;
    if ( v12 )
    {
      do
      {
        v14 = *result;
        if ( (_BYTE)v14 )
        {
          if ( (unsigned __int8)v14 >= 0x72u )
          {
            *v13 = 0xFFFFFF;
          }
          else
          {
            _mm_lfence();
            *v13 = alAlpha_255[*((unsigned __int8 *)off_1C032B0D0 + 4 * v14 + 2)] | ((alAlpha_255[*((unsigned __int8 *)off_1C032B0D0
                                                                                                  + 4 * v14
                                                                                                  + 1)] | (alAlpha_255[*((unsigned __int8 *)off_1C032B0D0 + 4 * v14)] << 8)) << 8);
          }
        }
        ++result;
        ++v13;
      }
      while ( result - v10 < v12 );
    }
    v10 += a3;
    i += a7;
  }
  return result;
}

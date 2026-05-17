/*
 * XREFs of _RtlRunDecodeUnicodeString@8 @ 0x4B3471B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlRunDecodeUnicodeString(char a1, unsigned __int16 *a2)
{
  unsigned int result; // eax
  unsigned int v3; // edx

  result = *a2;
  v3 = result;
  if ( result > 1 )
  {
    do
    {
      *(_BYTE *)(v3 + *((_DWORD *)a2 + 1) - 1) ^= a1 ^ *(_BYTE *)(v3 + *((_DWORD *)a2 + 1) - 2);
      --v3;
    }
    while ( v3 > 1 );
    result = *a2;
  }
  if ( (_WORD)result )
  {
    result = *((_DWORD *)a2 + 1);
    *(_BYTE *)result ^= a1 | 0x43;
  }
  return result;
}

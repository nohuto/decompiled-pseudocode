/*
 * XREFs of _RtlComputeLfnChecksum@4 @ 0x4B3628B7
 * Callers:
 *     _RtlGenerate8dot3Name@16 @ 0x4B362910 (_RtlGenerate8dot3Name@16.c)
 * Callees:
 *     <none>
 */

__int16 __thiscall RtlComputeLfnChecksum(_DWORD *this)
{
  _WORD *v1; // edx
  unsigned __int16 v2; // bx
  unsigned int v3; // esi
  unsigned int v4; // edi

  v1 = (_WORD *)this[1];
  v2 = 0;
  v3 = 0;
  v4 = &v1[*(unsigned __int16 *)this >> 1] >= v1 ? *(unsigned __int16 *)this >> 1 : 0;
  if ( v4 )
  {
    do
    {
      ++v3;
      v2 = *v1++ + 37 * v2;
    }
    while ( v3 < v4 );
  }
  return (int)abs32(314159269 * v2) % 1000000007;
}

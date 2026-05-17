/*
 * XREFs of _RtlInterlockedSetBitRun@12 @ 0x4B34F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlInterlockedSetBitRun(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  volatile signed __int32 *v5; // edi
  unsigned int result; // eax
  unsigned int v7; // ecx

  v3 = a2 & 0x1F;
  v4 = a3;
  v5 = (volatile signed __int32 *)(*(_DWORD *)(a1 + 4) + 4 * (a2 >> 5));
  result = v3 + a3;
  if ( v3 + a3 <= 0x20 )
  {
    if ( a3 == 32 )
    {
      *v5 = -1;
      return result;
    }
    result = ((1 << a3) - 1) << v3;
    goto LABEL_12;
  }
  result = 1;
  if ( (a2 & 0x1F) != 0 )
  {
    _InterlockedOr(v5, ((1 << (32 - v3)) - 1) << v3);
    v4 = a3 - (32 - v3);
    ++v5;
    result = 1;
  }
  if ( v4 >= 0x20 )
  {
    v7 = v4 >> 5;
    do
    {
      *v5 = -1;
      v4 -= 32;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
  if ( v4 )
  {
    result = (1 << v4) - 1;
LABEL_12:
    _InterlockedOr(v5, result);
  }
  return result;
}

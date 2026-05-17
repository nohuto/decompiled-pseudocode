/*
 * XREFs of _RtlInterlockedClearBitRun@12 @ 0x4B34F490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlInterlockedClearBitRun(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  volatile signed __int32 *v5; // edi
  unsigned int result; // eax

  v3 = a2 & 0x1F;
  v4 = a3;
  v5 = (volatile signed __int32 *)(*(_DWORD *)(a1 + 4) + 4 * (a2 >> 5));
  result = v3 + a3;
  if ( v3 + a3 <= 0x20 )
  {
    if ( a3 == 32 )
    {
      *v5 = 0;
      return result;
    }
    result = ~(((1 << a3) - 1) << v3);
    goto LABEL_12;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    result = ~(((1 << (32 - v3)) - 1) << v3);
    _InterlockedAnd(v5, result);
    v4 = a3 - (32 - v3);
    ++v5;
  }
  if ( v4 >= 0x20 )
  {
    result = v4 >> 5;
    do
    {
      *v5 = 0;
      v4 -= 32;
      ++v5;
      --result;
    }
    while ( result );
  }
  if ( v4 )
  {
    result = -1 << v4;
LABEL_12:
    _InterlockedAnd(v5, result);
  }
  return result;
}

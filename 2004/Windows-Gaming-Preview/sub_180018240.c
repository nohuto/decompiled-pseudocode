/*
 * XREFs of sub_180018240 @ 0x180018240
 * Callers:
 *     sub_18001AB60 @ 0x18001AB60 (sub_18001AB60.c)
 *     sub_18001AB70 @ 0x18001AB70 (sub_18001AB70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180018240(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}

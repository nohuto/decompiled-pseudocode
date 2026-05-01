/*
 * XREFs of sub_18000BAA0 @ 0x18000BAA0
 * Callers:
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     sub_180010160 @ 0x180010160 (sub_180010160.c)
 *     sub_180010200 @ 0x180010200 (sub_180010200.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000BAA0(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 64);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}

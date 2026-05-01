/*
 * XREFs of sub_180019630 @ 0x180019630
 * Callers:
 *     sub_18001ABE0 @ 0x18001ABE0 (sub_18001ABE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180019630(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 24);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}

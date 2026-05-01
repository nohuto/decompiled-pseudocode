/*
 * XREFs of sub_18000D720 @ 0x18000D720
 * Callers:
 *     sub_180010180 @ 0x180010180 (sub_180010180.c)
 *     sub_1800102D0 @ 0x1800102D0 (sub_1800102D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D720(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}

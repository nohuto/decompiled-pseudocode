/*
 * XREFs of sub_180021330 @ 0x180021330
 * Callers:
 *     sub_180024BB0 @ 0x180024BB0 (sub_180024BB0.c)
 *     sub_180024C40 @ 0x180024C40 (sub_180024C40.c)
 *     sub_180024D20 @ 0x180024D20 (sub_180024D20.c)
 *     sub_180024D80 @ 0x180024D80 (sub_180024D80.c)
 *     sub_180024E50 @ 0x180024E50 (sub_180024E50.c)
 *     sub_180024ED0 @ 0x180024ED0 (sub_180024ED0.c)
 *     sub_1800250D0 @ 0x1800250D0 (sub_1800250D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180021330(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 216);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 216), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}

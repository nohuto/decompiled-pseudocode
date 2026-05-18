/*
 * XREFs of sub_18008EA28 @ 0x18008EA28
 * Callers:
 *     sub_18008EA28 @ 0x18008EA28 (sub_18008EA28.c)
 *     sub_18008EA94 @ 0x18008EA94 (sub_18008EA94.c)
 * Callees:
 *     sub_180089158 @ 0x180089158 (sub_180089158.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008EA28 @ 0x18008EA28 (sub_18008EA28.c)
 */

void __fastcall sub_18008EA28(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 i; // rbx

  if ( *a3 )
  {
    sub_180089158(*a3, a2);
    v6 = *a3;
    sub_180089274(v6);
    v7 = *(_QWORD *)(v6 + 40);
    for ( i = *(_QWORD *)(v6 + 32); i != v7; i += 16LL )
      sub_18008EA28(a1, a2, i);
  }
}

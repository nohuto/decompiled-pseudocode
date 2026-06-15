/*
 * XREFs of sub_180018754 @ 0x180018754
 * Callers:
 *     sub_18003BF9A @ 0x18003BF9A (sub_18003BF9A.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180018F1C @ 0x180018F1C (sub_180018F1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018754(__int64 *a1, __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rcx
  __int64 v8; // rcx

  if ( !a2 )
    sub_18000A174(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *((_DWORD *)a1 + 4));
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8 * v4);
  if ( a2 == v6 )
  {
    v6 = 0LL;
  }
  else
  {
    for ( i = *(_QWORD *)(v6 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v6 = i;
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( v6 )
    *(_QWORD *)(v6 + 16) = v8;
  else
    *(_QWORD *)(v5 + 8 * v4) = v8;
  return sub_180018F1C(a1, a2);
}

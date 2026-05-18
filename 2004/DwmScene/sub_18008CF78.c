/*
 * XREFs of sub_18008CF78 @ 0x18008CF78
 * Callers:
 *     sub_18008CE5C @ 0x18008CE5C (sub_18008CE5C.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008CF78(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = 1LL << a2;
  v4 = *(_QWORD *)(a1 + 152);
  if ( a3 )
  {
    v5 = result | v4;
  }
  else
  {
    result = ~result;
    v5 = result & v4;
  }
  *(_QWORD *)(a1 + 152) = v5;
  return result;
}

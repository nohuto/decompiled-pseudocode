/*
 * XREFs of sub_1800702E0 @ 0x1800702E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E2A8 @ 0x18006E2A8 (sub_18006E2A8.c)
 */

__int64 __fastcall sub_1800702E0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 272);
  if ( *a2 != v2 )
    return sub_18006E2A8(v2, a2);
  return result;
}

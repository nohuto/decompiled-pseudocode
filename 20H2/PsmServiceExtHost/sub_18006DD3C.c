/*
 * XREFs of sub_18006DD3C @ 0x18006DD3C
 * Callers:
 *     sub_18006E928 @ 0x18006E928 (sub_18006E928.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18006DD3C(__int64 a1)
{
  __int64 v1; // r8
  _QWORD *result; // rax
  _QWORD *v3; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  result = (_QWORD *)(a1 + 56);
  v3 = *(_QWORD **)(v1 + 32);
  if ( *v3 != v1 + 24 )
    __fastfail(3u);
  *result = v1 + 24;
  *(_QWORD *)(a1 + 64) = v3;
  *v3 = result;
  *(_QWORD *)(v1 + 32) = result;
  return result;
}

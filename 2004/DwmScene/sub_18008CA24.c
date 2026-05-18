/*
 * XREFs of sub_18008CA24 @ 0x18008CA24
 * Callers:
 *     sub_18008C954 @ 0x18008C954 (sub_18008C954.c)
 *     sub_18008CA54 @ 0x18008CA54 (sub_18008CA54.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18008CA24(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 128);
  }
  *a2 = *(_QWORD *)(a1 + 120);
  result = a2;
  a2[1] = v2;
  return result;
}

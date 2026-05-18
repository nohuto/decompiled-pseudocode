/*
 * XREFs of sub_1800A4E64 @ 0x1800A4E64
 * Callers:
 *     sub_18008CE5C @ 0x18008CE5C (sub_18008CE5C.c)
 *     sub_18008CFC4 @ 0x18008CFC4 (sub_18008CFC4.c)
 *     sub_1800A441C @ 0x1800A441C (sub_1800A441C.c)
 *     sub_1800A495C @ 0x1800A495C (sub_1800A495C.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 *     sub_1800F26D0 @ 0x1800F26D0 (sub_1800F26D0.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A4E64(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 448);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 448);
  }
  *a2 = *(_QWORD *)(a1 + 440);
  result = a2;
  a2[1] = v2;
  return result;
}

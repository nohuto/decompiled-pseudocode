/*
 * XREFs of sub_18009B484 @ 0x18009B484
 * Callers:
 *     sub_1800EBC80 @ 0x1800EBC80 (sub_1800EBC80.c)
 *     sub_1800EFBC0 @ 0x1800EFBC0 (sub_1800EFBC0.c)
 *     sub_180110790 @ 0x180110790 (sub_180110790.c)
 *     sub_180110800 @ 0x180110800 (sub_180110800.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18009B484(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 96);
  }
  *a2 = *(_QWORD *)(a1 + 88);
  result = a2;
  a2[1] = v2;
  return result;
}

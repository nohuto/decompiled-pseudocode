/*
 * XREFs of sub_18007ABC4 @ 0x18007ABC4
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 *     sub_18007C500 @ 0x18007C500 (sub_18007C500.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007D258 @ 0x18007D258 (sub_18007D258.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007DFAC @ 0x18007DFAC (sub_18007DFAC.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_18007F998 @ 0x18007F998 (sub_18007F998.c)
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 *     sub_1800C3030 @ 0x1800C3030 (sub_1800C3030.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18007ABC4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 976);
  }
  *a2 = *(_QWORD *)(a1 + 968);
  result = a2;
  a2[1] = v2;
  return result;
}
